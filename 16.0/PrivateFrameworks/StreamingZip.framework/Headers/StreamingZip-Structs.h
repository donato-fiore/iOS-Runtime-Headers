typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    char * dst_ptr;
    NSUInteger dst_size;
    char * src_ptr;
    NSUInteger src_size;
    void state;
} ?;

typedef struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data;
    int num;
} CC_MD5state_st;

typedef struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data;
    int num;
} CC_SHA1state_st;

typedef struct CC_SHA256state_st {
    unsigned int count;
    unsigned int hash;
    unsigned int wbuf;
} CC_SHA256state_st;

typedef struct CC_SHA512state_st {
    NSUInteger count;
    NSUInteger hash;
    NSUInteger wbuf;
} CC_SHA512state_st;

