typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

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

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

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

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct _expressionFlags {
    BOOL _evaluationBlocked;
    BOOL _usesKVC;
    BOOL _validatedExpression;
    BOOL _validatedKeys;
    BOOL _reservedExpressionFlags;
} _expressionFlags;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _NSRunArrayItem {
    NSUInteger field0;
    id field1;
} _NSRunArrayItem;

typedef struct _NSRefCountedRunArray {
    os_unfair_lock_s field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    _NSRunArrayItem field7;
} _NSRefCountedRunArray;

typedef struct _NSSimpleAttributeDictionaryElement {
    NSUInteger hash;
    id key;
    id value;
} _NSSimpleAttributeDictionaryElement;

typedef struct __CFStorage {
} // Error Processing Struct Fields

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct _predicateFlags {
    BOOL _evaluationBlocked;
    BOOL _reservedPredicateFlags;
} _predicateFlags;

typedef struct _operatorFlags {
    BOOL _usesKVC;
    BOOL _validatedSelector;
    BOOL _validatedKeys;
    BOOL _reservedOperatorFlags;
} _operatorFlags;

typedef struct __CFDateFormatter {
} // Error Processing Struct Fields

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct timespec {
    NSInteger tv_sec;
    NSInteger tv_nsec;
} timespec;

typedef struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    NSUInteger st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    timespec st_atimespec;
    timespec st_mtimespec;
    timespec st_ctimespec;
    timespec st_birthtimespec;
    NSInteger st_size;
    NSInteger st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    NSInteger st_qspare;
} stat;

typedef struct _fields {
    BOOL extensionHidden;
    BOOL creationDate;
    BOOL reserved;
} _fields;

typedef struct __CFURLEnumerator {
} // Error Processing Struct Fields

typedef struct _ftsent {
} // Error Processing Struct Fields

typedef struct NSSliceExternalAcquisitionProperties {
} // Error Processing Struct Fields

typedef struct NSSliceExternalPersonalityProperties {
} // Error Processing Struct Fields

typedef struct NSSliceInternalProperties {
} // Error Processing Struct Fields

typedef struct NSSlice {
    void items;
    NSSliceExternalAcquisitionProperties acquisitionProps;
    NSSliceExternalPersonalityProperties personalityProps;
    NSSliceInternalProperties internalProps;
} NSSlice;

typedef struct __CFBasicHash {
} // Error Processing Struct Fields

typedef struct __CFListFormatter {
} // Error Processing Struct Fields

typedef struct objc_method {
} // Error Processing Struct Fields

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __CFRelativeDateTimeFormatter {
} // Error Processing Struct Fields

typedef struct __CFKeyedArchiverUID {
} // Error Processing Struct Fields

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct __CFNotificationCenter {
} // Error Processing Struct Fields

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct MANAConfigurableAnalyzer {
} // Error Processing Struct Fields

typedef struct MTokenizer {
} // Error Processing Struct Fields

typedef struct MDDictionaryMetaData {
} // Error Processing Struct Fields

typedef struct _NSProgressFraction {
    NSInteger completed;
    NSInteger total;
    BOOL overflowed;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct _NSOrderedChange {
} // Error Processing Struct Fields

typedef struct objc_method_description {
    SEL field0;
    char * field1;
} objc_method_description;

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_attr_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_attr_t;

typedef struct pthread_override_s {
} // Error Processing Struct Fields

typedef struct __CFURLComponents {
} // Error Processing Struct Fields

typedef struct sockaddr {
} // Error Processing Struct Fields

typedef struct addrinfo {
    int field0;
    int field1;
    int field2;
    int field3;
    unsigned int field4;
    char * field5;
    sockaddr field6;
    addrinfo field7;
} addrinfo;

typedef struct edge {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} edge;

typedef struct vertex {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} vertex;

typedef struct _xmlParserInputBuffer {
} // Error Processing Struct Fields

typedef struct _xmlParserInput {
    _xmlParserInputBuffer field0;
    char * field1;
    char * field2;
    char * field3;
    char * field4;
    char * field5;
    int field6;
    int field7;
    int field8;
    NSUInteger field9;
    unk field10;
    char * field11;
    char * field12;
    int field13;
    int field14;
} _xmlParserInput;

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

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _xmlParserCtxt {
} // Error Processing Struct Fields

typedef struct UDateIntervalFormat {
} // Error Processing Struct Fields

typedef struct _NSLTToken {
    unsigned short field0;
    unsigned char field1;
    unsigned char field2;
    unsigned int field3;
    unk field4;
    void field5;
    ? field6;
} _NSLTToken;

typedef struct UAMeasureFormat {
} // Error Processing Struct Fields

typedef struct UPluralRules {
} // Error Processing Struct Fields

typedef struct InodeDevPair {
    int dev;
    NSUInteger inode;
} InodeDevPair;

typedef struct __FSEventStream {
} // Error Processing Struct Fields

typedef struct USet {
} // Error Processing Struct Fields

typedef struct _xpc_type_s {
} // Error Processing Struct Fields

