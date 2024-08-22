typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ccrng_state {
    unk field0;
} ccrng_state;

typedef struct ccspake_cp {
} // Error Processing Struct Fields

typedef struct ccspake_mac {
} // Error Processing Struct Fields

typedef struct ccspake_ctx {
} // Error Processing Struct Fields

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

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct ccdigest_info {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    char * field4;
    void field5;
    unk field6;
    unk field7;
    int field8;
} ccdigest_info;

typedef struct ? {
    BOOL isOwner;
    BOOL canRead;
    BOOL canWrite;
} ?;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __SecKeyDescriptor {
} // Error Processing Struct Fields

typedef struct __SecKey {
    __CFRuntimeBase field0;
    __SecKeyDescriptor field1;
    void field2;
} __SecKey;

typedef struct __SecCertificate {
} // Error Processing Struct Fields

