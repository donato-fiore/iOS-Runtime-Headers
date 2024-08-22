typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct PairingSessionPrivate {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct HTTPMessagePrivate {
} // Error Processing Struct Fields

typedef struct BonjourBrowser {
} // Error Processing Struct Fields

typedef struct HTTPClientPrivate {
} // Error Processing Struct Fields

typedef struct MFiSAP {
} // Error Processing Struct Fields

typedef struct BTStatus {
    NSUInteger leRemote;
    NSUInteger leAcc;
    NSUInteger btKB;
    NSUInteger a2dp;
    NSUInteger btGC;
    NSUInteger eAcc;
    NSUInteger hk;
    NSUInteger lowEnergyConnections;
    NSUInteger nonHIDConnections;
    NSUInteger connectedHIDDevices;
    NSUInteger oneSniffAttemptDevices;
    NSUInteger twoSniffAttemptDevices;
    NSUInteger sco;
    NSUInteger wiap;
    NSUInteger remote;
    NSUInteger connectedDevices;
    BOOL isScanning;
    BOOL isDiscoverable;
    BOOL isConnectable;
} BTStatus;

typedef struct AsyncConnection {
} // Error Processing Struct Fields

typedef struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data;
} sockaddr;

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

typedef struct in6_addr {
    unk __u6_addr;
    unsigned char __u6_addr8;
    unsigned short __u6_addr16;
    unsigned int __u6_addr32;
} in6_addr;

typedef struct sockaddr_in6 {
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short sin6_port;
    unsigned int sin6_flowinfo;
    in6_addr sin6_addr;
    unsigned int sin6_scope_id;
} sockaddr_in6;

typedef struct coap_address_t {
    unsigned int size;
    unk addr;
    sockaddr sa;
    sockaddr_in sin;
    sockaddr_in6 sin6;
} coap_address_t;

typedef struct UT_hash_table {
} // Error Processing Struct Fields

typedef struct UT_hash_handle {
} // Error Processing Struct Fields

typedef struct coap_addr_tuple_t {
    coap_address_t field0;
    coap_address_t field1;
} coap_addr_tuple_t;

typedef struct coap_session_t {
} // Error Processing Struct Fields

typedef struct coap_endpoint_t {
} // Error Processing Struct Fields

typedef struct coap_socket_t {
    int field0;
    unsigned short field1;
    coap_session_t field2;
    coap_endpoint_t field3;
} coap_socket_t;

typedef struct coap_resource_t {
} // Error Processing Struct Fields

typedef struct coap_context_t {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct pthread_override_s {
} // Error Processing Struct Fields

typedef struct BTSessionImpl {
} // Error Processing Struct Fields

typedef struct BTLocalDeviceImpl {
} // Error Processing Struct Fields

typedef struct BTPlatformParams {
    BOOL field0;
    NSUInteger field1;
    float field2;
    float field3;
    float field4;
    float field5;
    int field6;
    float field7;
    float field8;
    float field9;
    float field10;
} BTPlatformParams;

typedef struct BTRemoteContext {
    ? field0;
    unk field1;
    ? field2;
    BTSessionImpl field3;
    BTLocalDeviceImpl field4;
    BTPlatformParams field5;
    BTStatus field6;
    BOOL field7;
} BTRemoteContext;

