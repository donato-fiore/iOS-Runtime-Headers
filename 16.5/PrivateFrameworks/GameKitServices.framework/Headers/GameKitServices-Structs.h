typedef struct ? {
    unsigned char field0;
    unsigned short field1;
} ?;

typedef struct CDXTicket {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    ? field4;
    unsigned int field5;
    unsigned char field6;
} CDXTicket;

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct in_addr {
    unsigned int s_addr;
} in_addr;

typedef struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    in_addr sin_addr;
    char sin_zero;
} sockaddr_in;

typedef struct addrinfo {
} // Error Processing Struct Fields

typedef struct __SCDynamicStore {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct opaqueRTCReporting {
} // Error Processing Struct Fields

typedef struct OpaqueGCKSession {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct _gktableitem {
    unsigned int field0;
    id field1;
    CGFloat field2;
    CGFloat field3;
} _gktableitem;

typedef struct OpaqueAGPSession {
} // Error Processing Struct Fields

typedef struct _DNSServiceRef_t {
} // Error Processing Struct Fields

typedef struct tagIPPORT {
    int iFlags;
    char szIfName;
    unk IP;
    unsigned int dwIPv4;
    unsigned char abIPv6;
    unsigned short wPort;
} tagIPPORT;

typedef struct tagCONNRESULT {
    unsigned int dwCallID;
    int iResultCount;
    int iRole;
    unsigned int dwRemoteCallID;
    int proto;
    int bIfRelay;
    unsigned short wRelayServType;
    unsigned short wChannelNumber;
    tagIPPORT mbLocal;
    tagIPPORT mbRemote;
    tagIPPORT mbSrc;
    tagIPPORT mbDst;
    tagIPPORT mbRemoteSrc;
    tagIPPORT mbRelayExt;
    unsigned int dwRTT;
    int bIfLocalCellularQoS;
    int bIfRemoteCellularQoS;
    int iLocalCellTech;
    int iRemoteCellTech;
    unsigned short wCellularMTU;
    int bIfUpgrade;
    int bIfPrimary;
    int bIfReplaceOnly;
    tagCONNRESULT next;
    int channelID;
} tagCONNRESULT;

typedef struct tagVoiceChatBeacon {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} tagVoiceChatBeacon;

