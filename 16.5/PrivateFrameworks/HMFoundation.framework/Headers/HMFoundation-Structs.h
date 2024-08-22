typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

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

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _HMFFutureBlockOutcome {
    NSInteger field0;
    id field1;
} _HMFFutureBlockOutcome;

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct __CFHTTPMessage {
} // Error Processing Struct Fields

typedef struct hmf_unfair_data_lock_s {
    os_unfair_lock_s lock;
} hmf_unfair_data_lock_s;

typedef struct _HMFRate {
    NSUInteger value;
    CGFloat period;
} _HMFRate;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CFHTTPServer {
} // Error Processing Struct Fields

typedef struct _CFHTTPServerConnection {
} // Error Processing Struct Fields

typedef struct _CFHTTPServerResponse {
} // Error Processing Struct Fields

typedef struct _CFHTTPServerRequest {
} // Error Processing Struct Fields

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct MGNotificationTokenStruct {
} // Error Processing Struct Fields

typedef struct __SCDynamicStore {
} // Error Processing Struct Fields

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
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

typedef struct __WiFiManagerClient {
} // Error Processing Struct Fields

typedef struct __WiFiDeviceClient {
} // Error Processing Struct Fields

typedef struct __WiFiNetwork {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct __SCNetworkReachability {
} // Error Processing Struct Fields

