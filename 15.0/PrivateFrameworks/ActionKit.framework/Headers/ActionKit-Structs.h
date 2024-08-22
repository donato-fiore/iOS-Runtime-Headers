typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

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

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlEntity {
} // Error Processing Struct Fields

typedef struct _xmlElement {
} // Error Processing Struct Fields

typedef struct _xmlDtd {
} // Error Processing Struct Fields

typedef struct _MRSystemAppPlaybackQueue {
} // Error Processing Struct Fields

typedef struct _xmlTextWriter {
} // Error Processing Struct Fields

typedef struct _xmlCharEncodingHandler {
} // Error Processing Struct Fields

typedef struct _xmlBuf {
} // Error Processing Struct Fields

typedef struct _xmlOutputBuffer {
} // Error Processing Struct Fields

typedef struct _LIBSSH2_CHANNEL {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct _LIBSSH2_AGENT {
} // Error Processing Struct Fields

typedef struct _LIBSSH2_SESSION {
} // Error Processing Struct Fields

typedef struct __CFSocket {
} // Error Processing Struct Fields

typedef struct _xmlNodeSet {
} // Error Processing Struct Fields

typedef struct _xmlXPathObject {
    int field0;
    _xmlNodeSet field1;
    int field2;
    CGFloat field3;
    char * field4;
    void field5;
    int field6;
    void field7;
    int field8;
} _xmlXPathObject;

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _xmlSAXHandler {
    unk field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    unk field12;
    unk field13;
    unk field14;
    unk field15;
    unk field16;
    unk field17;
    unk field18;
    unk field19;
    unk field20;
    unk field21;
    unk field22;
    unk field23;
    unk field24;
    unk field25;
    unk field26;
    unsigned int field27;
    void field28;
    unk field29;
    unk field30;
    unk field31;
} _xmlSAXHandler;

typedef struct _xmlParserCtxt {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CCRSACryptor {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __CFBoolean {
} // Error Processing Struct Fields

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct _LIBSSH2_SFTP_ATTRIBUTES {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
} _LIBSSH2_SFTP_ATTRIBUTES;

typedef struct __WiFiNetwork {
} // Error Processing Struct Fields

typedef struct _LIBSSH2_SFTP {
} // Error Processing Struct Fields

typedef struct _LIBSSH2_SFTP_HANDLE {
} // Error Processing Struct Fields

