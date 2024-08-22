typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int viewportArrayIndexOffset;
    unsigned int renderTargetArrayIndexOffset;
} ?;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct optional<unsigned long> {
    unk field0;
    char field1;
    NSUInteger field2;
    BOOL field3;
} optional<unsigned long>;

typedef struct MTLGPUDebugStageBufferHandles {
    NSUInteger handles;
    id resources;
    NSUInteger <MTLGPUDebugResource>;
    unsigned int offsets;
    NSUInteger lengths;
    BOOL gpu_address;
} MTLGPUDebugStageBufferHandles;

typedef struct GPUDebugThreadgroupTableEntry {
    unsigned int offset;
    unsigned int length;
} GPUDebugThreadgroupTableEntry;

typedef struct MTLGPUDebugTileThreadgroup {
    GPUDebugThreadgroupTableEntry entries;
    BOOL needsFlush;
} MTLGPUDebugTileThreadgroup;

typedef struct Options {
    unsigned int version;
    int mode;
    int programTypes;
    int accessTypes;
    int failMode;
    ? ;
} Options;

typedef struct GPUDebugEventUUIDPacket {
    NSUInteger pipelineStateID;
    NSUInteger entryPointImageID;
    unsigned int encoderID;
    unsigned int eventID;
} GPUDebugEventUUIDPacket;

typedef struct MTLGPUDebugBufferSubAlloc {
    id buffer;
    NSUInteger <MTLBuffer>;
} MTLGPUDebugBufferSubAlloc;

typedef struct MTLResourceID {
    NSUInteger field0;
} MTLResourceID;

typedef struct MTLTelemetryStatisticUIRec {
    unsigned int min;
    unsigned int max;
    NSUInteger total;
    unsigned int count;
} MTLTelemetryStatisticUIRec;

typedef struct MTLTelemetryStatisticFRec {
    float field0;
    float field1;
    float field2;
    unsigned int field3;
} MTLTelemetryStatisticFRec;

typedef struct MTLTelemetrySamplerStatRec {
    unsigned int field0;
    MTLTelemetryStatisticUIRec field1;
    MTLTelemetryStatisticUIRec field2;
    MTLTelemetryStatisticUIRec field3;
    MTLTelemetryStatisticUIRec field4;
    MTLTelemetryStatisticFRec field5;
    MTLTelemetryStatisticFRec field6;
    MTLTelemetryStatisticUIRec field7;
} MTLTelemetrySamplerStatRec;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __compressed_pair<void (^*)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>> {
    id __value_;
    unk field1;
} __compressed_pair<void (^*)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>>;

typedef struct vector<void (^)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>> {
    id __begin_;
    unk __end_;
    id __end_cap_;
    unk field3;
    __compressed_pair<void (^*)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>> field4;
} vector<void (^)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>>;

typedef struct __compressed_pair<std::pair<NSData *, unsigned long> *, std::allocator<std::pair<NSData *, unsigned long>>> {
    void __value_;
} __compressed_pair<std::pair<NSData *, unsigned long> *, std::allocator<std::pair<NSData *, unsigned long>>>;

typedef struct vector<std::pair<NSData *, unsigned long>, std::allocator<std::pair<NSData *, unsigned long>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<NSData *, unsigned long> *, std::allocator<std::pair<NSData *, unsigned long>>> __end_cap_;
} vector<std::pair<NSData *, unsigned long>, std::allocator<std::pair<NSData *, unsigned long>>>;

typedef struct __wrap_iter<std::pair<NSData *, unsigned long> *> {
    void __i;
} __wrap_iter<std::pair<NSData *, unsigned long> *>;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct MTLPipelineCollection {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct Key {
    ? hash;
    id data;
} Key;

typedef struct KeyBufferPair {
    Key key;
    id buffer;
} KeyBufferPair;

typedef struct MTLTargetDeviceArch {
    NSUInteger field0;
    unsigned int field1;
    char * field2;
} MTLTargetDeviceArch;

typedef struct IndirectArgumentBufferCapabilities {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} IndirectArgumentBufferCapabilities;

typedef struct MPSFunctionTable {
} // Error Processing Struct Fields

typedef struct __compressed_pair<id<MTLBuffer> *, std::allocator<id<MTLBuffer>>> {
    id __value_;
} __compressed_pair<id<MTLBuffer> *, std::allocator<id<MTLBuffer>>>;

typedef struct vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> {
    id __begin_;
    id __end_;
    __compressed_pair<id<MTLBuffer> *, std::allocator<id<MTLBuffer>>> __end_cap_;
} vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>>;

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct MetalBufferHeap {
    mutex _mutex;
    vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> _buffers;
    vector<unsigned int, std::allocator<unsigned int>> _freeList;
    int _currentFreeIndex;
    NSUInteger _totalMemoryAllocated;
    NSUInteger _totalMemoryInUse;
    NSUInteger _bufferLength;
    id _device;
} MetalBufferHeap;

typedef struct GPUDebugDeviceOptions {
    BOOL retainReflection;
    BOOL retainPSOFunctions;
    BOOL abortOnFault;
} GPUDebugDeviceOptions;

typedef struct __compressed_pair<MTLGPUDebugBuffer **, std::allocator<MTLGPUDebugBuffer *>> {
    id __value_;
} __compressed_pair<MTLGPUDebugBuffer **, std::allocator<MTLGPUDebugBuffer *>>;

typedef struct vector<MTLGPUDebugBuffer *, std::allocator<MTLGPUDebugBuffer *>> {
    id __begin_;
    id __end_;
    __compressed_pair<MTLGPUDebugBuffer **, std::allocator<MTLGPUDebugBuffer *>> __end_cap_;
} vector<MTLGPUDebugBuffer *, std::allocator<MTLGPUDebugBuffer *>>;

typedef struct GPUDebugBufferDescriptorHeap {
    mutex s;
    vector<unsigned int, std::allocator<unsigned int>> _freeIndexList;
    vector<MTLGPUDebugBuffer *, std::allocator<MTLGPUDebugBuffer *>> _bufferList;
    NSUInteger _freeIndex;
    id _argumentEncoder;
    id <MTLArgumentEncoder>;
} GPUDebugBufferDescriptorHeap;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash, true>>;

typedef struct __hash_table<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, true>, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash, true>, std::allocator<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash, true>> __p3_;
} __hash_table<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, true>, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash, true>, std::allocator<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>>;

typedef struct unordered_map<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, std::allocator<std::pair<const GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>> {
    __hash_table<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::__unordered_map_hasher<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, true>, std::__unordered_map_equal<GPUDebugConstantBufferCache::Key, std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>, std::equal_to<GPUDebugConstantBufferCache::Key>, GPUDebugConstantBufferCache::Key::Hash, true>, std::allocator<std::__hash_value_type<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>> __table_;
} unordered_map<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, std::allocator<std::pair<const GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>>;

typedef struct GPUDebugConstantBufferCache {
    NSUInteger _totalUsedMemory;
    mutex _accessMutex;
    unordered_map<GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value, GPUDebugConstantBufferCache::Key::Hash, std::equal_to<GPUDebugConstantBufferCache::Key>, std::allocator<std::pair<const GPUDebugConstantBufferCache::Key, GPUDebugConstantBufferCache::Value>>> _cache;
    id _device;
} GPUDebugConstantBufferCache;

typedef struct __list_node_base<id<MTLBuffer>, void *> {
    void __prev_;
    void __next_;
} __list_node_base<id<MTLBuffer>, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<id<MTLBuffer>, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<id<MTLBuffer>, void *>>>;

typedef struct list<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> {
    __list_node_base<id<MTLBuffer>, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<id<MTLBuffer>, void *>>> __size_alloc_;
} list<id<MTLBuffer>, std::allocator<id<MTLBuffer>>>;

typedef struct GlobalResidentBufferList {
    unsigned int _iteration;
    mutex _accessMutex;
    list<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> _bufferList;
} GlobalResidentBufferList;

typedef struct once_flag {
    NSUInteger __state_;
} once_flag;

typedef struct StreamBuffer {
    char * bytes;
    char * pWrite;
    char * pEnd;
} StreamBuffer;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct BinaryBuffer {
    unk _vptr$AppendBuffer;
    StreamBuffer stream;
    mach_timebase_info _timebase;
} BinaryBuffer;

typedef struct AppendBuffer {
    unk _vptr$AppendBuffer;
    StreamBuffer stream;
} AppendBuffer;

typedef struct pair<id<MTLBuffer>, unsigned long> {
    id field0;
    NSUInteger field1;
} pair<id<MTLBuffer>, unsigned long>;

typedef struct ReportBufferEntry {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
} ReportBufferEntry;

typedef struct MetalBuffer {
} // Error Processing Struct Fields

typedef struct vector<MetalBuffer, std::allocator<MetalBuffer>> {
} // Error Processing Struct Fields

typedef struct vector<ReportBufferEntry, std::allocator<ReportBufferEntry>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<NSString **, std::allocator<NSString *>> {
    id __value_;
} __compressed_pair<NSString **, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSString **, std::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::allocator<NSString *>>;

typedef struct BufferUsageTable {
    id _backingMemory;
} BufferUsageTable;

typedef struct TextureUsageTable {
    id _backingMemory;
} TextureUsageTable;

typedef struct __compressed_pair<std::pair<MTLGPUDebugHeap *, unsigned long> *, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> {
    void __value_;
} __compressed_pair<std::pair<MTLGPUDebugHeap *, unsigned long> *, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>>;

typedef struct vector<std::pair<MTLGPUDebugHeap *, unsigned long>, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<MTLGPUDebugHeap *, unsigned long> *, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> __end_cap_;
} vector<std::pair<MTLGPUDebugHeap *, unsigned long>, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>>;

typedef struct HeapUsageTable {
    vector<std::pair<MTLGPUDebugHeap *, unsigned long>, std::allocator<std::pair<MTLGPUDebugHeap *, unsigned long>>> _heapStages;
} HeapUsageTable;

typedef struct __compressed_pair<id **, std::allocator<id *>> {
    id __value_;
} __compressed_pair<id **, std::allocator<id *>>;

typedef struct __split_buffer<id *, std::allocator<id *>> {
    id __first_;
    id __begin_;
    id __end_;
    __compressed_pair<id **, std::allocator<id *>> __end_cap_;
} __split_buffer<id *, std::allocator<id *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<id>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<id>>;

typedef struct deque<id, std::allocator<id>> {
    __split_buffer<id *, std::allocator<id *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<id>> __size_;
} deque<id, std::allocator<id>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *>, std::allocator<std::__hash_node<AttachmentDescriptorSimple, void *>>> {
    __hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *>, std::allocator<std::__hash_node<AttachmentDescriptorSimple, void *>>>;

typedef struct __compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t>;

typedef struct __compressed_pair<float, AttachmentDescriptorSimple::equal_t> {
    float __value_;
} __compressed_pair<float, AttachmentDescriptorSimple::equal_t>;

typedef struct __hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *>, std::allocator<std::__hash_node<AttachmentDescriptorSimple, void *>>> __p1_;
    __compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t> __p2_;
    __compressed_pair<float, AttachmentDescriptorSimple::equal_t> __p3_;
} __hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>>;

typedef struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> {
    __hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> __table_;
} unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>>;

typedef struct AttachmentDescriptorSimple {
    void texture;
    NSUInteger level;
    _NSRange sliceRange;
    _NSRange depthPlaneRange;
    NSUInteger storeAction;
} AttachmentDescriptorSimple;

typedef struct array<AttachmentDescriptorSimple, 8UL> {
    AttachmentDescriptorSimple __elems_;
} array<AttachmentDescriptorSimple, 8UL>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *>, std::allocator<std::__hash_node<id<MTLDebugResourcePurgeable>, void *>>> {
    __hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *>, std::allocator<std::__hash_node<id<MTLDebugResourcePurgeable>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<id<MTLDebugResourcePurgeable>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<id<MTLDebugResourcePurgeable>>>;

typedef struct __compressed_pair<float, std::equal_to<id<MTLDebugResourcePurgeable>>> {
    float __value_;
} __compressed_pair<float, std::equal_to<id<MTLDebugResourcePurgeable>>>;

typedef struct __hash_table<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<id<MTLDebugResourcePurgeable>, void *> *>, std::allocator<std::__hash_node<id<MTLDebugResourcePurgeable>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<id<MTLDebugResourcePurgeable>>> __p2_;
    __compressed_pair<float, std::equal_to<id<MTLDebugResourcePurgeable>>> __p3_;
} __hash_table<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>>;

typedef struct unordered_set<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> {
    __hash_table<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> __table_;
} unordered_set<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<MTLToolsObject *, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *>, std::allocator<std::__hash_node<MTLToolsObject *, void *>>> {
    __hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *>, std::allocator<std::__hash_node<MTLToolsObject *, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<MTLToolsObject *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<MTLToolsObject *>>;

typedef struct __compressed_pair<float, std::equal_to<MTLToolsObject *>> {
    float __value_;
} __compressed_pair<float, std::equal_to<MTLToolsObject *>>;

typedef struct __hash_table<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<MTLToolsObject *, void *> *>, std::allocator<std::__hash_node<MTLToolsObject *, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<MTLToolsObject *>> __p2_;
    __compressed_pair<float, std::equal_to<MTLToolsObject *>> __p3_;
} __hash_table<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>>;

typedef struct unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> {
    __hash_table<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> __table_;
} unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<unsigned int>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<unsigned int>>;

typedef struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<unsigned int>> __pair3_;
} __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>>;

typedef struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> {
    __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> __tree_;
} set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>>;

typedef struct MTLTelemetryCommandBufferCounttRec {
    unsigned int field0;
    unsigned int field1;
} MTLTelemetryCommandBufferCounttRec;

typedef struct MTLTelemetryEncoderDistributionRec {
    MTLTelemetryStatisticUIRec field0;
    MTLTelemetryStatisticUIRec field1;
    MTLTelemetryStatisticUIRec field2;
    MTLTelemetryStatisticUIRec field3;
    MTLTelemetryStatisticUIRec field4;
} MTLTelemetryEncoderDistributionRec;

typedef struct MTLTelemetryViewportDistributionRec {
    MTLTelemetryStatisticUIRec field0;
    MTLTelemetryStatisticFRec field1;
    MTLTelemetryStatisticFRec field2;
    MTLTelemetryStatisticFRec field3;
    MTLTelemetryStatisticFRec field4;
} MTLTelemetryViewportDistributionRec;

typedef struct MTLTelemetryScissorRectDistributionRec {
    MTLTelemetryStatisticUIRec field0;
    MTLTelemetryStatisticFRec field1;
    MTLTelemetryStatisticFRec field2;
} MTLTelemetryScissorRectDistributionRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>>;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> {
    __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>>;

typedef struct MTLTelemetryBufferStatRec {
    MTLTelemetryStatisticUIRec field0;
} MTLTelemetryBufferStatRec;

typedef struct MTLTelemetryBufferDistributionRec {
    MTLTelemetryBufferStatRec field0;
} MTLTelemetryBufferDistributionRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>>>;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution>>> {
    __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>>> __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution>>>;

typedef struct MTLTelemetrySamplerDistributionRec {
    unsigned int field0;
    MTLTelemetrySamplerStatRec field1;
} MTLTelemetrySamplerDistributionRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>>>;

typedef struct unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec>>> {
    __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>>> __table_;
} unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>>>;

typedef struct unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec>>> {
    __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>>> __table_;
} unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec>>>;

typedef struct MTLTelemetryRenderPipelineDistributionRec {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    MTLTelemetryStatisticUIRec field4;
    MTLTelemetryStatisticUIRec field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
} MTLTelemetryRenderPipelineDistributionRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>>>;

typedef struct unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>> {
    __hash_table<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, MTLTelemetryStatisticUIRec>>> __table_;
} unordered_map<std::string, MTLTelemetryStatisticUIRec, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, MTLTelemetryStatisticUIRec>>>;

typedef struct MTLTelemetryDepthStateDistributionRec {
    unsigned int field0;
    unsigned int field1;
} MTLTelemetryDepthStateDistributionRec;

typedef struct MTLTelemetryStencilStateDistributionRec {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} MTLTelemetryStencilStateDistributionRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>>>;

typedef struct unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec>>> {
    __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>>> __table_;
} unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>>>;

typedef struct unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryKernelUsageRec>>> {
    __hash_table<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>>> __table_;
} unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLTelemetryKernelUsageRec>>>;

typedef struct MTLTelemetryComputePipelineDistributionRec {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} MTLTelemetryComputePipelineDistributionRec;

typedef struct MTLTelemetryDrawStatRec {
    unsigned int field0;
    MTLTelemetryStatisticUIRec field1;
    MTLTelemetryStatisticUIRec field2;
} MTLTelemetryDrawStatRec;

typedef struct MTLTelemetryDrawDistributionRec {
    MTLTelemetryDrawStatRec field0;
} MTLTelemetryDrawDistributionRec;

typedef struct MTLTelemetryDispatchDistributionRec {
    unsigned int field0;
    MTLTelemetryStatisticUIRec field1;
    MTLTelemetryStatisticUIRec field2;
    MTLTelemetryStatisticUIRec field3;
    MTLTelemetryStatisticUIRec field4;
    MTLTelemetryStatisticUIRec field5;
    MTLTelemetryStatisticUIRec field6;
    MTLTelemetryStatisticUIRec field7;
    MTLTelemetryStatisticUIRec field8;
    MTLTelemetryStatisticUIRec field9;
    MTLTelemetryStatisticUIRec field10;
} MTLTelemetryDispatchDistributionRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>>>;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>> {
    __hash_table<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__unordered_map_hasher<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, true>, std::__unordered_map_equal<MTLPixelFormat, std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::equal_to<MTLPixelFormat>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>>> __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::hash<unsigned long long>, std::equal_to<MTLPixelFormat>, std::allocator<std::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>>;

typedef struct MTLTelemetryStatisticIRec {
    int field0;
    int field1;
    NSInteger field2;
    int field3;
} MTLTelemetryStatisticIRec;

typedef struct MTLTelemetryKernelDistributionRec {
    MTLTelemetryStatisticIRec field0;
    MTLTelemetryStatisticIRec field1;
    MTLTelemetryStatisticIRec field2;
    MTLTelemetryStatisticIRec field3;
} MTLTelemetryKernelDistributionRec;

typedef struct MTLTelemetryAnisoClippedCountsRec {
    unsigned int field0;
} MTLTelemetryAnisoClippedCountsRec;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int>>>;

typedef struct unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>> {
    __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int>>> __table_;
} unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>>;

typedef struct MTLTelemetrySupportQueryStatRec {
    unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>> featureSetCount;
    MTLTelemetryStatisticUIRec texSampleCount;
} MTLTelemetrySupportQueryStatRec;

typedef struct _MTLMessageContext {
    NSInteger field0;
    char * field1;
    unsigned int field2;
    id field3;
    NSInteger field4;
    id field5;
    char * field6;
} _MTLMessageContext;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t, true>>;

typedef struct __hash_table<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, true>, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t, true>, std::allocator<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t, true>> __p3_;
} __hash_table<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, true>, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t, true>, std::allocator<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>>>;

typedef struct unordered_map<std::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::allocator<std::pair<const std::array<unsigned long long, 3>, unsigned int>>> {
    __hash_table<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, true>, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t, true>, std::allocator<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>>> __table_;
} unordered_map<std::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::allocator<std::pair<const std::array<unsigned long long, 3>, unsigned int>>>;

typedef struct MTLSamplerDescriptorHashMap {
    unordered_map<std::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::allocator<std::pair<const std::array<unsigned long long, 3>, unsigned int>>> _map;
    unsigned int _limit;
} MTLSamplerDescriptorHashMap;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *>, std::allocator<std::__hash_node<MTLDebugCommandBuffer *, void *>>> {
    __hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *>, std::allocator<std::__hash_node<MTLDebugCommandBuffer *, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<MTLDebugCommandBuffer *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<MTLDebugCommandBuffer *>>;

typedef struct __compressed_pair<float, std::equal_to<MTLDebugCommandBuffer *>> {
    float __value_;
} __compressed_pair<float, std::equal_to<MTLDebugCommandBuffer *>>;

typedef struct __hash_table<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *>, std::allocator<std::__hash_node<MTLDebugCommandBuffer *, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<MTLDebugCommandBuffer *>> __p2_;
    __compressed_pair<float, std::equal_to<MTLDebugCommandBuffer *>> __p3_;
} __hash_table<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>>;

typedef struct unordered_set<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> {
    __hash_table<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> __table_;
} unordered_set<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, true>, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash, true>, std::allocator<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, true>, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash, true>, std::allocator<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>>;

typedef struct unordered_map<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, std::allocator<std::pair<const MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> {
    __hash_table<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, true>, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash, true>, std::allocator<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> __table_;
} unordered_map<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, std::allocator<std::pair<const MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>>;

typedef struct CheckerboardRenderTargetPipelineCache {
    os_unfair_lock_s _cacheLock;
    id _library;
    id <MTLLibrary>;
    id _vertexFunction;
    id <MTLFunction>;
    unordered_map<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, std::allocator<std::pair<const MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> _depthStencilState;
} CheckerboardRenderTargetPipelineCache;

typedef struct recursive_mutex {
    _opaque_pthread_mutex_t __m_;
} recursive_mutex;

typedef struct __compressed_pair<id *, std::allocator<id>> {
    id __value_;
} __compressed_pair<id *, std::allocator<id>>;

typedef struct vector<id, std::allocator<id>> {
    id __begin_;
    id __end_;
    __compressed_pair<id *, std::allocator<id>> __end_cap_;
} vector<id, std::allocator<id>>;

typedef struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> {
    uint8_t __a_value;
    NSUInteger field1;
} __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>>;

typedef struct atomic<unsigned long long> {
    __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> __a_;
} atomic<unsigned long long>;

typedef struct MTLRenderPassAttachmentDescriptorPrivate {
    id field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    ? field7;
    CGFloat field8;
    unsigned int field9;
    NSUInteger field10;
    id field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    BOOL field18;
} MTLRenderPassAttachmentDescriptorPrivate;

typedef struct vector<MTLViewport, std::allocator<MTLViewport>> {
} // Error Processing Struct Fields

typedef struct vector<MTLScissorRect, std::allocator<MTLScissorRect>> {
} // Error Processing Struct Fields

typedef struct MTLGPUDebugThreadgroupLengths {
    unsigned int threadgroupSizes;
    GPUDebugThreadgroupTableEntry entries;
    BOOL needsFlush;
} MTLGPUDebugThreadgroupLengths;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>>;

typedef struct unordered_map<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> {
    __hash_table<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> __table_;
} unordered_map<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>>;

typedef struct MTLTelemetryEncoderCountRec {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} MTLTelemetryEncoderCountRec;

typedef struct MTLTelemetryKernelStateRec {
    int pbAlloc;
    int spmRenderCount;
    int tiledSceneBytes;
    int renderCount;
} MTLTelemetryKernelStateRec;

typedef struct MTLNormalPixelFormatInfo {
    NSUInteger pixelBytes;
    unsigned char componentCount;
    unsigned char alignment;
    NSUInteger pixelBytesRender;
    NSUInteger pixelBytesRenderMSAA;
} MTLNormalPixelFormatInfo;

typedef struct MTLCompressedPixelFormatInfo {
    NSUInteger blockBytes;
    NSUInteger blockWidth;
    NSUInteger blockHeight;
    NSUInteger blockDepth;
} MTLCompressedPixelFormatInfo;

typedef struct MTLPixelFormatInfo {
    char * name;
    unsigned int flags;
    NSUInteger castClass;
    unk type;
    MTLNormalPixelFormatInfo normal;
    MTLCompressedPixelFormatInfo compressed;
} MTLPixelFormatInfo;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>>;

typedef struct __hash_table<std::__hash_value_type<SubView, unsigned long>, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>, std::allocator<std::__hash_value_type<SubView, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>> __p3_;
} __hash_table<std::__hash_value_type<SubView, unsigned long>, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>, std::allocator<std::__hash_value_type<SubView, unsigned long>>>;

typedef struct unordered_map<SubView, unsigned long, SubView::hash_t, SubView::equal_t, std::allocator<std::pair<const SubView, unsigned long>>> {
    __hash_table<std::__hash_value_type<SubView, unsigned long>, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>, std::allocator<std::__hash_value_type<SubView, unsigned long>>> __table_;
} unordered_map<SubView, unsigned long, SubView::hash_t, SubView::equal_t, std::allocator<std::pair<const SubView, unsigned long>>>;

