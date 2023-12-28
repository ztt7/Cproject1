#include<stdio.h>
int main(){
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//    printf("%d%8d%8d",a,b,c);
//    return 0;
//    int ar1[10] = {1,3,4,5};
//    int ar[10];
//    printf("size = %d\n" , sizeof(ar));
//    return 0;
    int ar[] = {1,1,1,1,1,1,2,1,1,};
    int n = sizeof(ar)/ sizeof(ar[0]);
    for(int i = 0 ;i<n ;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}
