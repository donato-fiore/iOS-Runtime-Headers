typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL pluginParticipantId;
} ?;

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr;

typedef struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1;
    NSInteger __ss_align;
    char __ss_pad2;
} sockaddr_storage;

typedef struct tagIDSQRSendInfoList {
} // Error Processing Struct Fields

typedef struct IDSNAT64PrefixCache_ {
} // Error Processing Struct Fields

typedef struct IDSSimpleUInt16List {
    NSUInteger listSize;
    NSUInteger itemCount;
    unsigned short items;
} IDSSimpleUInt16List;

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct __SecKey {
} // Error Processing Struct Fields

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct IDSNetBuffer_ {
} // Error Processing Struct Fields

typedef struct IDSTCPConnection_ {
} // Error Processing Struct Fields

typedef struct in_addr {
    unsigned int field0;
} in_addr;

typedef struct sockaddr_in {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    in_addr field3;
    char field4;
} sockaddr_in;

typedef struct IDSTCPLinkCounter_ {
    NSUInteger _totalBytesSent;
    NSUInteger _totalPacketsSent;
    NSUInteger _totalBytesReceived;
    NSUInteger _totalPacketsReceived;
} IDSTCPLinkCounter_;

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct IDSGLAttrBinaryData_ {
    int len;
    unsigned char data;
} IDSGLAttrBinaryData_;

typedef struct IDSGlobalLinkAttribute {
    unsigned short type;
    unsigned short len;
    unk value;
    sockaddr_storage ss;
    unsigned short u16;
    unsigned int u32;
    NSUInteger u64;
    IDSGLAttrBinaryData_ binaryData;
} IDSGlobalLinkAttribute;

typedef struct StunBinaryData {
    int len;
    unsigned char data;
} StunBinaryData;

typedef struct StunErrorCode {
    int errorClass;
    int errorNumber;
    unsigned char errorReason;
    int len;
} StunErrorCode;

typedef struct StunUnknownAttribute {
    int count;
    unsigned short unknowAttributes;
} StunUnknownAttribute;

typedef struct IDSStunAttribute {
    unsigned short type;
    unsigned short len;
    unsigned short valueType;
    BOOL encrypted;
    unk value;
    sockaddr_storage ss;
    unsigned char u8;
    unsigned short u16;
    unsigned int u32;
    NSUInteger u64;
    StunBinaryData binaryData;
    StunErrorCode errorCode;
    StunUnknownAttribute unknownAttribute;
} IDSStunAttribute;

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct _SecMPFullIdentity {
} // Error Processing Struct Fields

typedef struct _SecMPPublicIdentity {
} // Error Processing Struct Fields

typedef struct in6_addr {
    unk field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
} in6_addr;

typedef struct sockaddr_in6 {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
    in6_addr field4;
    unsigned int field5;
} sockaddr_in6;

typedef struct ifaddrs {
} // Error Processing Struct Fields

