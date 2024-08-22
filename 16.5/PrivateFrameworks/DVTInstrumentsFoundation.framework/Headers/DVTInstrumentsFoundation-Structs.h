typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TFPPidWatcher {
    unsigned int clientPort;
} TFPPidWatcher;

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __NStatManager {
} // Error Processing Struct Fields

typedef struct DTNStatSourceMap {
} // Error Processing Struct Fields

typedef struct ktrace_session {
} // Error Processing Struct Fields

typedef struct kpep_db {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned char time;
    unsigned char category;
    unsigned char subsystem;
    unsigned char senderImagePath;
    unsigned char format;
    unsigned char message;
    unsigned char backtrace;
    unsigned char process;
    unsigned char thread;
    unsigned char messageType;
    unsigned char senderImageUUID;
    unsigned char senderImageOffset;
    unsigned char senderImageName;
} ?;

typedef struct sampling_context_t {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct __compressed_pair<std::vector<DTGPUCounterSampleBuffer> *, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> {
    void __value_;
} __compressed_pair<std::vector<DTGPUCounterSampleBuffer> *, std::allocator<std::vector<DTGPUCounterSampleBuffer>>>;

typedef struct vector<std::vector<DTGPUCounterSampleBuffer>, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<DTGPUCounterSampleBuffer> *, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> __end_cap_;
} vector<std::vector<DTGPUCounterSampleBuffer>, std::allocator<std::vector<DTGPUCounterSampleBuffer>>>;

typedef struct DTTableRowDecoder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DTTableRowDecoder *, std::default_delete<DTTableRowDecoder>> {
    DTTableRowDecoder __value_;
} __compressed_pair<DTTableRowDecoder *, std::default_delete<DTTableRowDecoder>>;

typedef struct unique_ptr<DTTableRowDecoder, std::default_delete<DTTableRowDecoder>> {
    __compressed_pair<DTTableRowDecoder *, std::default_delete<DTTableRowDecoder>> __ptr_;
} unique_ptr<DTTableRowDecoder, std::default_delete<DTTableRowDecoder>>;

typedef struct DTStateActionDecoder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DTStateActionDecoder *, std::default_delete<DTStateActionDecoder>> {
    DTStateActionDecoder __value_;
} __compressed_pair<DTStateActionDecoder *, std::default_delete<DTStateActionDecoder>>;

typedef struct unique_ptr<DTStateActionDecoder, std::default_delete<DTStateActionDecoder>> {
    __compressed_pair<DTStateActionDecoder *, std::default_delete<DTStateActionDecoder>> __ptr_;
} unique_ptr<DTStateActionDecoder, std::default_delete<DTStateActionDecoder>>;

typedef struct EMA<unsigned long long> {
    NSUInteger currentValue;
    CGFloat coefficient;
} EMA<unsigned long long>;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct DTOSLogTableLoader {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DTOSLogTableLoader *, std::default_delete<DTOSLogTableLoader>> {
    DTOSLogTableLoader __value_;
} __compressed_pair<DTOSLogTableLoader *, std::default_delete<DTOSLogTableLoader>>;

typedef struct unique_ptr<DTOSLogTableLoader, std::default_delete<DTOSLogTableLoader>> {
    __compressed_pair<DTOSLogTableLoader *, std::default_delete<DTOSLogTableLoader>> __ptr_;
} unique_ptr<DTOSLogTableLoader, std::default_delete<DTOSLogTableLoader>>;

typedef struct OutputTape {
    unsigned short start;
    unsigned short head;
    unsigned short end;
} OutputTape;

typedef struct StackReference {
    unsigned short _generation;
    unsigned short _reference;
} StackReference;

typedef struct DTStateActionEncoder {
    int _state;
    OutputTape _tape;
    char * _pushBufferStart;
    char * _pushBufferEnd;
    NSUInteger _pushBufferBitOffset;
    NSUInteger _backgroundPatternStart;
    StackReference _topOfStackRef;
    unsigned char _background;
    int _stateWhenTapeRanOut;
    unsigned int _pushBufferSizeToXmit;
} DTStateActionEncoder;

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct SSLContext {
} // Error Processing Struct Fields

typedef struct __CFWriteStream {
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

typedef struct vm_region_submap_info_64 {
    int field0;
    int field1;
    unsigned int field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned short field10;
    unsigned char field11;
    unsigned char field12;
    int field13;
    int field14;
    unsigned int field15;
    unsigned short field16;
    unsigned int field17;
    NSUInteger field18;
} vm_region_submap_info_64;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>, true>>;

typedef struct __tree<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>>>;

typedef struct map<unsigned long long, std::pair<unsigned long long, id>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::pair<unsigned long long, id>>>> {
    __tree<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>>> __tree_;
} map<unsigned long long, std::pair<unsigned long long, id>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::pair<unsigned long long, id>>>>;

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct __CFHTTPMessage {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<DVTQueueBasedTimerState, std::__cxx_atomic_base_impl<DVTQueueBasedTimerState>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<DVTQueueBasedTimerState, std::__cxx_atomic_base_impl<DVTQueueBasedTimerState>>;

typedef struct atomic<DVTQueueBasedTimerState> {
    __cxx_atomic_impl<DVTQueueBasedTimerState, std::__cxx_atomic_base_impl<DVTQueueBasedTimerState>> __a_;
} atomic<DVTQueueBasedTimerState>;

typedef struct __list_node_base<NSData *, void *> {
    void __prev_;
    void __next_;
} __list_node_base<NSData *, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<NSData *, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<NSData *, void *>>>;

typedef struct list<NSData *, std::allocator<NSData *>> {
    __list_node_base<NSData *, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<NSData *, void *>>> __size_alloc_;
} list<NSData *, std::allocator<NSData *>>;

typedef struct _CSTypeRef {
    NSUInteger _opaque_1;
    NSUInteger _opaque_2;
} _CSTypeRef;

typedef struct __SCNetworkInterface {
} // Error Processing Struct Fields

typedef struct kpep_event {
} // Error Processing Struct Fields

typedef struct kpep_config {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<unsigned char> *, std::allocator<std::vector<unsigned char>>> {
    void __value_;
} __compressed_pair<std::vector<unsigned char> *, std::allocator<std::vector<unsigned char>>>;

typedef struct vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<unsigned char> *, std::allocator<std::vector<unsigned char>>> __end_cap_;
} vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>>;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct kperf_kdebug_filter {
} // Error Processing Struct Fields

typedef struct DTXSharedMemory {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    uint8_t field7;
    int field8;
    uint8_t field9;
    int field10;
    uint8_t field11;
    unsigned int field12;
    uint8_t field13;
    int field14;
    uint8_t field15;
    int field16;
    uint8_t field17;
    int field18;
    uint8_t field19;
    int field20;
    unsigned int field21;
    unsigned int field22;
    unsigned int field23;
    char field24;
} DTXSharedMemory;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>>;

typedef struct __tree<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>>>;

typedef struct map<unsigned long long, std::map<unsigned int, OAKeyFrame *>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> {
    __tree<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>, true>, std::allocator<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> __tree_;
} map<unsigned long long, std::map<unsigned int, OAKeyFrame *>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::map<unsigned int, OAKeyFrame *>>>>;

typedef struct kperf_buf {
} // Error Processing Struct Fields

typedef struct duration<long long, std::ratio<1, 1000000000>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1000000000>>;

typedef struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> {
    duration<long long, std::ratio<1, 1000000000>> __d_;
} time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

typedef struct recursive_mutex {
    _opaque_pthread_mutex_t __m_;
} recursive_mutex;

typedef struct _CSRange {
    NSUInteger field0;
    NSUInteger field1;
} _CSRange;

typedef struct processor_cpu_load_info {
    unsigned int field0;
} processor_cpu_load_info;

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

