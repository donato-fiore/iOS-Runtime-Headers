typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct object {
    id field0;
} object;

typedef struct AddressReserve {
    void field0;
    unsigned int field1;
    void field2;
    unsigned int field3;
    int field4;
} AddressReserve;

typedef struct HapticSharedMemory {
    unk _vptr$SharableMemoryBase;
    BOOL mIsOwner;
    BOOL mWasMapped;
    NSUInteger mSize;
    void mBuffer;
    unsigned int mPort;
    int mFileDesc;
    int mSerial;
    id mXPCObject;
} HapticSharedMemory;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, AVHapticSequenceEntry *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, AVHapticSequenceEntry *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, AVHapticSequenceEntry *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, AVHapticSequenceEntry *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, AVHapticSequenceEntry *>>>;

typedef struct map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>> {
    __tree<std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, AVHapticSequenceEntry *>>> __tree_;
} map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>>;

typedef struct HALListener {
} // Error Processing Struct Fields

typedef struct BorealisServerImpl {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct ? {
} // Error Processing Struct Fields

typedef struct STSPerLabelState {
    ? field0;
    unsigned int field1;
    float field2;
    float field3;
} STSPerLabelState;

typedef struct STSGlobalState {
    NSUInteger hostTime;
    ? listenerTransform;
} STSGlobalState;

typedef struct __hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> {
    void field0;
} __hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>;

typedef struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>> {
    __hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> field0;
} __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>>;

typedef struct OpaqueFigSTS {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, STSPerLabelControllerState>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, STSPerLabelControllerState>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, STSPerLabelControllerState>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, STSPerLabelControllerState>>>;

typedef struct unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>> {
    __hash_table<std::__hash_value_type<std::string, STSPerLabelControllerState>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, STSPerLabelControllerState>>> __table_;
} unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>>;

typedef struct __compressed_pair<unsigned long **, std::allocator<unsigned long *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long **, std::allocator<unsigned long *>>;

typedef struct __split_buffer<unsigned long *, std::allocator<unsigned long *>> {
    NSUInteger __first_;
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long **, std::allocator<unsigned long *>> __end_cap_;
} __split_buffer<unsigned long *, std::allocator<unsigned long *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct deque<unsigned long, std::allocator<unsigned long>> {
    __split_buffer<unsigned long *, std::allocator<unsigned long *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __size_;
} deque<unsigned long, std::allocator<unsigned long>>;

typedef struct stack<unsigned long, std::deque<unsigned long>> {
    deque<unsigned long, std::allocator<unsigned long>> c;
} stack<unsigned long, std::deque<unsigned long>>;

typedef struct STSGlobalStorage {
    BOOL field0;
    STSGlobalState field1;
} STSGlobalStorage;

typedef struct STSPerLabelStorage {
    BOOL field0;
    STSPerLabelState field1;
} STSPerLabelStorage;

typedef struct STSSharedStorage {
    _opaque_pthread_mutex_t field0;
    STSGlobalStorage field1;
    STSPerLabelStorage field2;
} STSSharedStorage;

typedef struct HapticSession {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<HapticSession> {
    HapticSession __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<HapticSession>;

typedef struct opaqueCMSession {
} // Error Processing Struct Fields

typedef struct shared_ptr<opaqueCMSession> {
} // Error Processing Struct Fields

typedef struct ClientEntry {
} // Error Processing Struct Fields

typedef struct shared_ptr<ClientEntry> {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct SSPlayerSynchronizer {
} // Error Processing Struct Fields

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>>>;

typedef struct map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *>>> {
    __tree<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>>> __tree_;
} map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *>>>;

typedef struct recursive_mutex {
    _opaque_pthread_mutex_t __m_;
} recursive_mutex;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::bitset<255>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::bitset<255>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, std::bitset<255>>, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::bitset<255>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::bitset<255>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, std::bitset<255>>, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::bitset<255>>>>;

typedef struct map<int, std::bitset<255>, std::less<int>, std::allocator<std::pair<const int, std::bitset<255>>>> {
    __tree<std::__value_type<int, std::bitset<255>>, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::bitset<255>>>> __tree_;
} map<int, std::bitset<255>, std::less<int>, std::allocator<std::pair<const int, std::bitset<255>>>>;

typedef struct PowerTimer {
    id field0;
    id field1;
    BOOL field2;
} PowerTimer;

typedef struct AudioSessionDuckingInfo {
    BOOL field0;
    float field1;
    float field2;
} AudioSessionDuckingInfo;

typedef struct ServerManager {
} // Error Processing Struct Fields

typedef struct __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> {
    ServerManager __value_;
} __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>>;

typedef struct unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> {
    __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> __ptr_;
} unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>>;

typedef struct Impl {
} // Error Processing Struct Fields

typedef struct shared_ptr<const AT::IOBinding::Impl> {
} // Error Processing Struct Fields

typedef struct AVHapticPlayerFixedParameter {
    NSUInteger type;
    float value;
} AVHapticPlayerFixedParameter;

