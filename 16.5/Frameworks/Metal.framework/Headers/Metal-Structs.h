typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL alphaToCoverageEnabled;
    BOOL alphaToOneEnabled;
    BOOL rasterizationEnabled;
    BOOL depthStencilWriteDisabled;
    BOOL openGLMode;
    BOOL sampleCoverageInvert;
    BOOL conservativeRasterizationEnabled;
    BOOL vertexAmplificationMode;
    BOOL twoSideEnabled;
    BOOL pointSizeOutputVS;
    BOOL pointCoordLowerLeft;
    BOOL pointSmoothEnabled;
    BOOL clipDistanceEnableMask;
    BOOL alphaTestFunc;
    BOOL alphaTestEnabled;
    BOOL logicOp;
    BOOL logicOpEnabled;
    BOOL forceResourceIndex;
    BOOL needsCustomBorderColorSamplers;
    BOOL supportIndirectCommandBuffers;
    BOOL supportAddingObjectBinaryFunctions;
    BOOL supportAddingMeshBinaryFunctions;
    BOOL supportAddingFragmentBinaryFunctions;
    BOOL maxVertexAmplificationCount;
    BOOL objectThreadgroupSizeIsMultipleOfThreadExecutionWidth;
    BOOL meshThreadgroupSizeIsMultipleOfThreadExecutionWidth;
} ?;

typedef struct MTLMeshRenderPipelineDescriptorPrivate {
    id attachments;
    NSUInteger MTLRenderPipelineColorAttachmentDescriptorArrayInternal;
    NSUInteger depthAttachmentPixelFormat;
    NSInteger stencilAttachmentPixelFormat;
    NSUInteger textureWriteRoundingMode;
    NSUInteger rasterSampleCount;
    NSUInteger colorSampleCount;
    unk sampleMask;
    unsigned int ;
    float sampleCoverageHash;
    unk sampleCoverage;
    unsigned int ;
    ? miscHash;
    unsigned int ;
    NSUInteger fragmentDepthCompareClampMask;
    id resourceIndex;
    id label;
    id NSString;
    id objectFunction;
    NSUInteger <MTLFunction>;
    NSUInteger meshFunction;
    NSUInteger <MTLFunction>;
    NSUInteger fragmentFunction;
    id <MTLFunction>;
    id maxTotalThreadsPerObjectThreadgroup;
    id maxTotalThreadsPerMeshThreadgroup;
    id maxTotalThreadgroupsPerMeshGrid;
    id pipelineMemoryLength;
    id objectBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    id meshBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    id fragmentBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    id driverCompilerOptions;
    id NSDictionary;
    id gpuCompilerSPIOptions;
    NSUInteger NSDictionary;
    NSUInteger pluginData;
    NSUInteger NSDictionary;
    id binaryArchives;
    unsigned int NSArray;
} MTLMeshRenderPipelineDescriptorPrivate;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __IOAccelDevice {
} // Error Processing Struct Fields

typedef struct IOAcceldirtyRingRO {
} // Error Processing Struct Fields

typedef struct IOAcceldirtyRingRW {
} // Error Processing Struct Fields

typedef struct IOAccelDirtyResourceCommand {
} // Error Processing Struct Fields

typedef struct _s_shmemlog_ {
} // Error Processing Struct Fields

typedef struct shmemlog_list {
    _s_shmemlog_ field0;
} shmemlog_list;

typedef struct __IOAccelShared {
    __CFRuntimeBase field0;
    __IOAccelDevice field1;
    unsigned int field2;
    id field3;
    unk field4;
    NSUInteger field5;
    os_unfair_lock_s field6;
    IOAcceldirtyRingRO field7;
    IOAcceldirtyRingRW field8;
    IOAccelDirtyResourceCommand field9;
    unsigned int field10;
    os_unfair_lock_s field11;
    shmemlog_list field12;
    NSUInteger field13;
} __IOAccelShared;

typedef struct IOAccelKernelCommandSignalOrWaitEventArgs {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    NSUInteger field3;
} IOAccelKernelCommandSignalOrWaitEventArgs;

typedef struct MTLIOCommand {
} // Error Processing Struct Fields

typedef struct MTLIOCommandList {
    MTLIOCommand field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    os_unfair_lock_s field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    id field9;
    id field10;
    id field11;
    id field12;
} MTLIOCommandList;

typedef struct MTLIODispatch {
    MTLIODispatch field0;
    id field1;
    unk field2;
} MTLIODispatch;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>> {
    id __value_;
} __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>>;

typedef struct vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>> {
    id __begin_;
    id __end_;
    __compressed_pair<id<MTLIOScratchBuffer> *, std::allocator<id<MTLIOScratchBuffer>>> __end_cap_;
} vector<id<MTLIOScratchBuffer>, std::allocator<id<MTLIOScratchBuffer>>>;

typedef struct MTLTileRenderPipelineAttachmentDescriptorPrivate {
    unk ;
    ? ;
    ? ;
} MTLTileRenderPipelineAttachmentDescriptorPrivate;

typedef struct MTLTileRenderPipelineDescriptorPrivate {
    id attachments;
    unk MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal;
    NSUInteger ;
    NSUInteger sampleCount;
    id rasterSampleCount;
    id label;
    BOOL NSString;
    NSUInteger tileFunction;
    NSUInteger <MTLFunction>;
    id threadgroupSizeMatchesTileSize;
    unsigned short paddingToRemove;
    NSInteger colorSampleCount;
    id tileBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    id maxTotalThreadsPerThreadgroup;
    id textureWriteRoundingMode;
    NSUInteger pluginData;
    BOOL NSDictionary;
    id binaryArchives;
    id NSArray;
} MTLTileRenderPipelineDescriptorPrivate;

typedef struct Allocator {
} // Error Processing Struct Fields

typedef struct vector_downward {
    Allocator allocator_;
    BOOL own_allocator_;
    NSUInteger initial_size_;
    NSUInteger buffer_minalign_;
    NSUInteger reserved_;
    char * buf_;
    char * cur_;
    char * scratch_;
} vector_downward;

typedef struct FlatBufferBuilder {
    vector_downward buf_;
    unsigned int num_field_loc;
    unsigned short max_voffset_;
    BOOL nested;
    BOOL finished;
    NSUInteger minalign_;
    BOOL force_defaults_;
    BOOL dedup_vtables_;
    void string_pool;
} FlatBufferBuilder;

typedef struct __IOAccelResource {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct IOAccelNewResourceData {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    NSUInteger field6;
    NSUInteger field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
    unsigned char field11;
    unsigned int field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    unk field16;
    ? field17;
    ? field18;
    ? field19;
    ? field20;
} IOAccelNewResourceData;

typedef struct IOAccelNewResourceArgs {
    IOAccelNewResourceData field0;
} IOAccelNewResourceArgs;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct IOAccelResourceInfo {
    __IOSurface iosurface;
    BOOL resourceSize;
    BOOL iosurfaceField;
    unsigned int resourceID;
} IOAccelResourceInfo;

typedef struct _MTLIOAccelResource {
} // Error Processing Struct Fields

typedef struct MTLResourceID {
    NSUInteger field0;
} MTLResourceID;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct MTLIndirectCommandBufferHeader {
    NSUInteger headerSize;
    unsigned int commandTypes;
    BOOL inheritPipelineState;
    BOOL inheritBuffers;
    unsigned char maxVertexBufferBindCount;
    unsigned char maxFragmentBufferBindCount;
    unsigned char maxKernelBufferBindCount;
    unsigned char maxObjectBufferBindCount;
    unsigned char maxMeshBufferBindCount;
    BOOL supportRayTracing;
    NSUInteger size;
} MTLIndirectCommandBufferHeader;

typedef struct _MTLIOAccelDeviceShmemPrivate {
    id pool;
    ? MTLIOAccelDeviceShmemPool;
    NSUInteger entry;
} _MTLIOAccelDeviceShmemPrivate;

typedef struct PipelineKey {
    ? field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    float field4;
    float field5;
    float field6;
} PipelineKey;

typedef struct CounterValue {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
} CounterValue;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>>;

typedef struct __hash_table<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>, std::allocator<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>> __p3_;
} __hash_table<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>, std::allocator<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>>>;

typedef struct unordered_map<PipelineCache<PipelineKey>::HashKey, PipelineValue, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, std::allocator<std::pair<const PipelineCache<PipelineKey>::HashKey, PipelineValue>>> {
    __hash_table<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>, std::equal_to<PipelineCache<PipelineKey>::HashKey>, PipelineCache<PipelineKey>::Hasher, true>, std::allocator<std::__hash_value_type<PipelineCache<PipelineKey>::HashKey, PipelineValue>>> __table_;
} unordered_map<PipelineCache<PipelineKey>::HashKey, PipelineValue, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, std::allocator<std::pair<const PipelineCache<PipelineKey>::HashKey, PipelineValue>>>;

typedef struct PipelineCache<PipelineKey> {
    unordered_map<PipelineCache<PipelineKey>::HashKey, PipelineValue, PipelineCache<PipelineKey>::Hasher, std::equal_to<PipelineCache<PipelineKey>::HashKey>, std::allocator<std::pair<const PipelineCache<PipelineKey>::HashKey, PipelineValue>>> map;
} PipelineCache<PipelineKey>;

typedef struct MTLGPUBVHBuilderPipelineInfo {
    char * field0;
    BOOL field1;
    BOOL field2;
} MTLGPUBVHBuilderPipelineInfo;

typedef struct MTLDispatch {
    MTLDispatch field0;
    id field1;
    unk field2;
} MTLDispatch;

typedef struct MTLSyncDispatch {
    MTLSyncDispatch field0;
    id field1;
    unk field2;
} MTLSyncDispatch;

typedef struct MTLIOAccelCommandBufferResourceInfo {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    id field4;
    IOAccelResourceInfo field5;
} MTLIOAccelCommandBufferResourceInfo;

typedef struct IOAccelSegmentResourceDescriptorGroup {
    unsigned int field0;
    NSUInteger field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
} IOAccelSegmentResourceDescriptorGroup;

typedef struct IOAccelResourceList {
    unsigned short field0;
    IOAccelSegmentResourceDescriptorGroup field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unk field11;
    void field12;
} IOAccelResourceList;

typedef struct MTLIOAccelCommandBufferStoragePool {
    storageQueue field0;
    os_unfair_lock_s field1;
    int field2;
    uint8_t field3;
    int field4;
    id field5;
} MTLIOAccelCommandBufferStoragePool;

typedef struct MTLIOAccelCommandBufferStorage {
} // Error Processing Struct Fields

typedef struct IOAccelSegmentListHeader {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
    IOAccelSegmentResourceListHeader field3;
} IOAccelSegmentListHeader;

typedef struct IOAccelSegmentResourceListHeader {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    IOAccelSegmentResourceDescriptorGroup field5;
} IOAccelSegmentResourceListHeader;

typedef struct MTLMultiHashKey {
    ? field0;
    ? field1;
    unsigned int field2;
} MTLMultiHashKey;

typedef struct MTLFunctionId {
    ? field0;
    ? field1;
    unsigned int field2;
} MTLFunctionId;

typedef struct MTLAirNTObject {
} // Error Processing Struct Fields

typedef struct MTLLoaderSliceIdentifier {
    int field0;
    int field1;
} MTLLoaderSliceIdentifier;

typedef struct PipelineScript {
    unsigned char field0;
} PipelineScript;

typedef struct MachOToolsVersion {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} MachOToolsVersion;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>>;

typedef struct unordered_map<MTLFunctionId, std::pair<unsigned long long, unsigned long long>, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> {
    __hash_table<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> __table_;
} unordered_map<MTLFunctionId, std::pair<unsigned long long, unsigned long long>, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>>>;

typedef struct unordered_map<unsigned long long, std::vector<MTLFunctionId>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<MTLFunctionId>>>> {
    __hash_table<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<MTLFunctionId>>>> __table_;
} unordered_map<unsigned long long, std::vector<MTLFunctionId>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<MTLFunctionId>>>>;

typedef struct vector<MTLAirNTObject *, std::allocator<MTLAirNTObject *>> {
} // Error Processing Struct Fields

typedef struct MTLPipelineNTObject {
} // Error Processing Struct Fields

typedef struct vector<MTLPipelineNTObject *, std::allocator<MTLPipelineNTObject *>> {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>>;

typedef struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>> __pair3_;
} __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>>;

typedef struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> {
    __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> __tree_;
} map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>>;

typedef struct functionIdExtended {
} // Error Processing Struct Fields

typedef struct vector<functionIdExtended, std::allocator<functionIdExtended>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>>;

typedef struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> {
    __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> __table_;
} unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>>>;

typedef struct unordered_map<unsigned long long, id<MTLLibrarySPI>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id<MTLLibrarySPI>>>> {
    __hash_table<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id<MTLLibrarySPI>>>> __table_;
} unordered_map<unsigned long long, id<MTLLibrarySPI>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id<MTLLibrarySPI>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, id<MTLLibrarySPI>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, id<MTLLibrarySPI>>>>;

typedef struct unordered_map<std::string, id<MTLLibrarySPI>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, id<MTLLibrarySPI>>>> {
    __hash_table<std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, id<MTLLibrarySPI>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, id<MTLLibrarySPI>>>> __table_;
} unordered_map<std::string, id<MTLLibrarySPI>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, id<MTLLibrarySPI>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>>;

typedef struct unordered_map<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>> {
    __hash_table<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>> __table_;
} unordered_map<MTLFunctionId, MTLOpaqueGPUArchiverUnitId *, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, MTLOpaqueGPUArchiverUnitId *>>>;

typedef struct MTLPipelineCollection {
} // Error Processing Struct Fields

typedef struct __compressed_pair<MTLPipelineCollection *, std::default_delete<MTLPipelineCollection>> {
    MTLPipelineCollection __value_;
} __compressed_pair<MTLPipelineCollection *, std::default_delete<MTLPipelineCollection>>;

typedef struct unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> {
    __compressed_pair<MTLPipelineCollection *, std::default_delete<MTLPipelineCollection>> __ptr_;
} unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>>;

typedef struct MTLMetalScriptBuilder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<MTLMetalScriptBuilder *, std::default_delete<MTLMetalScriptBuilder>> {
    MTLMetalScriptBuilder __value_;
} __compressed_pair<MTLMetalScriptBuilder *, std::default_delete<MTLMetalScriptBuilder>>;

typedef struct unique_ptr<MTLMetalScriptBuilder, std::default_delete<MTLMetalScriptBuilder>> {
    __compressed_pair<MTLMetalScriptBuilder *, std::default_delete<MTLMetalScriptBuilder>> __ptr_;
} unique_ptr<MTLMetalScriptBuilder, std::default_delete<MTLMetalScriptBuilder>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>>>;

typedef struct unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data> *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data> *>>> {
    __hash_table<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>>> __table_;
} unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data> *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data> *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>>>;

typedef struct unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>> {
    __hash_table<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>>> __table_;
} unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>>;

typedef struct _MTLIOAccelResourcePrivate {
    id pool;
    ? MTLIOAccelResourcePool;
    NSUInteger entry;
    unsigned int time_added;
} _MTLIOAccelResourcePrivate;

typedef struct __compressed_pair<MTLRasterizationRateLayerDescriptor **, std::allocator<MTLRasterizationRateLayerDescriptor *>> {
    id __value_;
} __compressed_pair<MTLRasterizationRateLayerDescriptor **, std::allocator<MTLRasterizationRateLayerDescriptor *>>;

typedef struct vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> {
    id __begin_;
    id __end_;
    __compressed_pair<MTLRasterizationRateLayerDescriptor **, std::allocator<MTLRasterizationRateLayerDescriptor *>> __end_cap_;
} vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>>;

typedef struct MTLLibraryData {
    unk field0;
    ? field1;
    uint8_t field2;
    int field3;
    id field4;
    id field5;
} MTLLibraryData;

typedef struct _MTLIOAccelResourceQueue {
    id tqh_first;
    id MTLIOAccelPooledResource;
} _MTLIOAccelResourceQueue;

typedef struct _MTLIOAccelResourcePoolPrivate {
    _MTLIOAccelResourceQueue volatileQueue;
    _MTLIOAccelResourceQueue nonvolatileQueue;
    os_unfair_lock_s lock;
    int count;
} _MTLIOAccelResourcePoolPrivate;

typedef struct MTLPipelineBufferDescriptorPrivate {
    unk ;
    ? ;
    ? ;
} MTLPipelineBufferDescriptorPrivate;

typedef struct DebugLocation {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} DebugLocation;

typedef struct DebugSubProgram {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} DebugSubProgram;

typedef struct vector<const __CFString *, std::allocator<const __CFString *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<MTLDebugLocation **, std::allocator<MTLDebugLocation *>> {
    id __value_;
} __compressed_pair<MTLDebugLocation **, std::allocator<MTLDebugLocation *>>;

typedef struct vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>> {
    id __begin_;
    id __end_;
    __compressed_pair<MTLDebugLocation **, std::allocator<MTLDebugLocation *>> __end_cap_;
} vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>>;

typedef struct __compressed_pair<MTLDebugSubProgram **, std::allocator<MTLDebugSubProgram *>> {
    id __value_;
} __compressed_pair<MTLDebugSubProgram **, std::allocator<MTLDebugSubProgram *>>;

typedef struct vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>> {
    id __begin_;
    id __end_;
    __compressed_pair<MTLDebugSubProgram **, std::allocator<MTLDebugSubProgram *>> __end_cap_;
} vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>>;

typedef struct MTLArgumentDescriptorPrivate {
    NSUInteger dataType;
    NSUInteger index;
    NSUInteger arrayLength;
    NSUInteger access;
    NSUInteger textureType;
    NSUInteger constantBlockAlignment;
} MTLArgumentDescriptorPrivate;

typedef struct IndirectArgumentBufferCapabilities {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} IndirectArgumentBufferCapabilities;

typedef struct MTLTargetDeviceArch {
    NSUInteger field0;
    unsigned int field1;
    char * field2;
} MTLTargetDeviceArch;

typedef struct MTLLibraryContainer {
} // Error Processing Struct Fields

typedef struct MTLCompilerConnectionManager {
    unk field0;
    BOOL field1;
    int field2;
} MTLCompilerConnectionManager;

typedef struct MTLPipelineLibraryBuilder {
    id field0;
    id field1;
} MTLPipelineLibraryBuilder;

typedef struct once_flag {
    NSUInteger __state_;
} once_flag;

typedef struct MDB_env {
} // Error Processing Struct Fields

typedef struct MTLArchiveMapDB {
    MDB_env field0;
    unsigned int field1;
    BOOL field2;
    BOOL field3;
} MTLArchiveMapDB;

typedef struct MTLArchiveUsageDB {
    MDB_env field0;
    unsigned int field1;
    BOOL field2;
    BOOL field3;
} MTLArchiveUsageDB;

typedef struct MTLIntersectionFunctionTableDescriptorPrivate {
    NSUInteger functionCount;
    BOOL forceResourceIndex;
    NSUInteger resourceIndex;
} MTLIntersectionFunctionTableDescriptorPrivate;

typedef struct MTLComputePassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    NSUInteger <MTLCounterSampleBuffer>;
    NSUInteger startOfEncoderSampleIndex;
} MTLComputePassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLComputePassDescriptorPrivate {
    NSUInteger dispatchType;
    id sampleBufferAttachments;
    unsigned int MTLComputePassSampleBufferAttachmentDescriptorArrayInternal;
    BOOL substreamCount;
} MTLComputePassDescriptorPrivate;

typedef struct MTLSharedTextureHandlePrivate {
} // Error Processing Struct Fields

typedef struct MTLTextureDescriptorPrivate {
    NSUInteger textureType;
    NSUInteger pixelFormat;
    NSUInteger width;
    NSUInteger height;
    NSUInteger depth;
    NSUInteger mipmapLevelCount;
    NSUInteger sampleCount;
    NSUInteger arrayLength;
    BOOL zeroFill;
    NSUInteger rotation;
    BOOL framebufferOnly;
    BOOL isDrawable;
    unsigned int swizzle;
    BOOL writeSwizzleEnabled;
    NSUInteger compressionMode;
    unk ;
    NSUInteger textureUsage;
    NSUInteger usage;
    NSUInteger resourceOptions;
    NSUInteger sparseSurfaceDefaultValue;
    BOOL allowGPUOptimizedContents;
    BOOL forceResourceIndex;
    NSUInteger resourceIndex;
    NSUInteger protectionOptions;
    NSUInteger compressionFootprint;
    NSInteger compressionType;
    NSUInteger resolvedUsage;
    NSUInteger cpuCacheMode;
    NSUInteger storageMode;
} MTLTextureDescriptorPrivate;

typedef struct MTLIndirectCommandBufferDescriptorState {
    NSUInteger commandTypes;
    BOOL inheritPipelineState;
    BOOL inheritBuffers;
    NSUInteger maxVertexBufferBindCount;
    NSUInteger maxFragmentBufferBindCount;
    NSUInteger maxKernelBufferBindCount;
    NSUInteger maxObjectBufferBindCount;
    NSUInteger maxMeshBufferBindCount;
    BOOL supportRayTracing;
    NSUInteger resourceIndex;
} MTLIndirectCommandBufferDescriptorState;

typedef struct MTLCompilerCache {
    unk field0;
    id field1;
    int field2;
    int field3;
} MTLCompilerCache;

typedef struct storageQueue {
} // Error Processing Struct Fields

typedef struct MTLRangeAllocatorElement {
} // Error Processing Struct Fields

typedef struct MTLRangeAllocator {
    MTLRangeAllocatorElement elements;
    unsigned int numElements;
    NSUInteger capacity;
    NSUInteger capacityIncrement;
    NSUInteger defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct MTLIOAccelBufferHeap {
    id buffers;
    MTLRangeAllocator MTLIOAccelBuffer;
    unsigned int allocators;
    unsigned int allocations;
} MTLIOAccelBufferHeap;

typedef struct resourceListQueue {
    id tqh_first;
    id MTLResourceList;
} resourceListQueue;

typedef struct _MTLResourceListPoolPrivate {
    resourceListQueue queue;
    os_unfair_lock_s lock;
    int count;
} _MTLResourceListPoolPrivate;

typedef struct __IOAccelCommandQueue {
} // Error Processing Struct Fields

typedef struct MTLSamplerDescriptorPrivate {
    unk ;
    ? ;
    unsigned int miscHash;
    unk ;
    unsigned int lodMinClampHash;
    float lodMinClamp;
    unk ;
    unsigned int lodMaxClampHash;
    float lodMaxClamp;
    unk ;
    unsigned int lodBiasHash;
    float lodBias;
    NSUInteger maxAnisotropy;
    id label;
    NSUInteger NSString;
    unsigned int resourceIndex;
    NSUInteger customBorderColorValue;
} MTLSamplerDescriptorPrivate;

typedef struct FileIdentifier {
    int dev;
    NSUInteger ino;
} FileIdentifier;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>>;

typedef struct __hash_table<std::__hash_value_type<MTLLoadedFile *, id>, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>, std::allocator<std::__hash_value_type<MTLLoadedFile *, id>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>> __p3_;
} __hash_table<std::__hash_value_type<MTLLoadedFile *, id>, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>, std::allocator<std::__hash_value_type<MTLLoadedFile *, id>>>;

typedef struct unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> {
    __hash_table<std::__hash_value_type<MTLLoadedFile *, id>, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>, std::allocator<std::__hash_value_type<MTLLoadedFile *, id>>> __table_;
} unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>>;

typedef struct MTLTargetDeviceArchVersion {
    unsigned short major;
    unsigned char minor;
    unsigned char update;
} MTLTargetDeviceArchVersion;

typedef struct MTLHeapDescriptorPrivate {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSInteger field3;
    BOOL field4;
    NSInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
} MTLHeapDescriptorPrivate;

typedef struct MTLIOScratchBufferPrivate {
    ? field0;
    id field1;
    id field2;
    NSUInteger field3;
    NSUInteger field4;
    BOOL field5;
} MTLIOScratchBufferPrivate;

typedef struct MTLIOScratchBufferPrivateQueue {
} // Error Processing Struct Fields

typedef struct MTLIOCommandQueueCommand {
} // Error Processing Struct Fields

typedef struct MTLIOCommandQueueCommandList {
} // Error Processing Struct Fields

typedef struct MTLVisibleFunctionTableDescriptorPrivate {
    NSUInteger functionCount;
    BOOL forceResourceIndex;
    NSUInteger resourceIndex;
} MTLVisibleFunctionTableDescriptorPrivate;

typedef struct MTLAttributeFlags {
    unk field0;
    ? field1;
    unsigned char field2;
} MTLAttributeFlags;

typedef struct MTLFunctionData {
    NSUInteger bitCodeOffset;
    NSUInteger bitCodeFileSize;
    NSUInteger publicArgumentsOffset;
    NSUInteger privateArgumentsOffset;
    NSUInteger sourceArchiveOffset;
    unsigned short airMajorVersion;
    unsigned short airMinorVersion;
    unsigned short languageMajorVersion;
    unsigned short languageMinorVersion;
    ? bitcodeHash;
    unsigned char bitcodeType;
    id pluginData;
    unsigned char NSData;
    BOOL renderTargetArrayIndexType;
    BOOL patchType;
    id controlPointCount;
} MTLFunctionData;

typedef struct MTLCompilerFunctionRequest {
    unk field0;
    int field1;
    id field2;
    id field3;
    id field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    id field8;
    id field9;
    NSUInteger field10;
    id field11;
    id field12;
    id field13;
    id field14;
    int field15;
    BOOL field16;
    unsigned int field17;
    BOOL field18;
    char * field19;
    void field20;
    void field21;
    NSUInteger field22;
    NSUInteger field23;
    id field24;
    id field25;
} MTLCompilerFunctionRequest;

typedef struct MTLCompilerBinaryArchiveCache {
} // Error Processing Struct Fields

typedef struct MultiLevelPipelineCache {
} // Error Processing Struct Fields

typedef struct VariantEntry {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    id field4;
    id field5;
    NSUInteger field6;
    id field7;
    id field8;
} VariantEntry;

typedef struct MTLProgramObject {
} // Error Processing Struct Fields

typedef struct RequiredFunctionKeys {
    id field0;
    id field1;
} RequiredFunctionKeys;

typedef struct VariantKey {
    void field0;
    void field1;
    NSUInteger field2;
    NSUInteger field3;
    id field4;
    void field5;
    NSUInteger field6;
} VariantKey;

typedef struct MTLCompileLibraryRequestData {
    BOOL field0;
    id field1;
    unsigned int field2;
    id field3;
    id field4;
} MTLCompileLibraryRequestData;

typedef struct machOEntry {
} // Error Processing Struct Fields

typedef struct shared_ptr<MTLCompilerCache> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<MTLCompilerBinaryArchiveCache *, std::default_delete<MTLCompilerBinaryArchiveCache>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<MTLCompilerBinaryArchiveCache, std::default_delete<MTLCompilerBinaryArchiveCache>> {
    __compressed_pair<MTLCompilerBinaryArchiveCache *, std::default_delete<MTLCompilerBinaryArchiveCache>> __ptr_;
} unique_ptr<MTLCompilerBinaryArchiveCache, std::default_delete<MTLCompilerBinaryArchiveCache>>;

typedef struct MTLRenderPassAttachmentDescriptorPrivate {
    id texture;
    NSUInteger <MTLTextureImplementation>;
    NSUInteger level;
    NSUInteger slice;
    NSUInteger depthPlane;
    NSUInteger loadAction;
    NSUInteger storeAction;
    ? storeActionOptions;
    CGFloat clearColor;
    unsigned int clearDepth;
    NSUInteger clearStencil;
    id stencilResolveFilter;
    NSUInteger resolveTexture;
    NSUInteger <MTLTextureImplementation>;
    NSUInteger resolveLevel;
    NSUInteger resolveSlice;
    NSUInteger resolveDepthPlane;
    NSUInteger resolveFilter;
    BOOL width;
} MTLRenderPassAttachmentDescriptorPrivate;

typedef struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    NSUInteger <MTLCounterSampleBuffer>;
    NSUInteger startOfVertexSampleIndex;
    NSUInteger endOfVertexSampleIndex;
    NSUInteger startOfFragmentSampleIndex;
} MTLRenderPassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLRenderPassDescriptorPrivate {
    id attachments;
    id MTLRenderPassColorAttachmentDescriptorArrayInternal;
    NSUInteger visibilityResultBuffer;
    NSUInteger <MTLBuffer>;
    NSUInteger renderTargetWidth;
    BOOL renderTargetHeight;
    BOOL defaultColorSampleCount;
    BOOL fineGrainedBackgroundVisibilityEnabled;
    BOOL skipEmptyTilesOnClearEnabled;
    NSUInteger ditherEnabled;
    NSUInteger openGLModeEnabled;
    NSUInteger renderTargetArrayLength;
    unk tileWidth;
    NSUInteger tileHeight;
    NSUInteger ;
    NSUInteger defaultSampleCount;
    NSUInteger defaultRasterSampleCount;
    ? imageBlockSampleLength;
    NSUInteger threadgroupMemoryLength;
    id customSamplePositions;
    id numCustomSamplePositions;
    BOOL rasterizationRateMap;
} MTLRenderPassDescriptorPrivate;

typedef struct MTLComputePipelineDescriptorPrivate {
    id label;
    id NSString;
    BOOL computeFunction;
    unsigned short <MTLFunction>;
    id threadGroupSizeIsMultipleOfThreadExecutionWidth;
    id maxTotalThreadsPerThreadgroup;
    id stageInputDescriptor;
    id MTLStageInputOutputDescriptor;
    id driverCompilerOptions;
    unk NSDictionary;
    id gpuCompilerSPIOptions;
    id NSDictionary;
    id buffers;
    BOOL MTLPipelineBufferDescriptorArrayInternal;
    NSInteger binaryArchives;
    BOOL NSArray;
    NSUInteger ;
    id preloadedLibraries;
    BOOL NSArray;
    BOOL insertLibraries;
    BOOL NSArray;
    BOOL pipelineLibrary;
    id <MTLPipelineLibrary>;
    id supportIndirectCommandBuffers;
    NSUInteger textureWriteRoundingMode;
    BOOL forceResourceIndex;
    id resourceIndex;
} MTLComputePipelineDescriptorPrivate;

typedef struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    NSUInteger <MTLCounterSampleBuffer>;
    NSUInteger startOfEncoderSampleIndex;
} MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLResourceStatePassDescriptorPrivate {
    id sampleBufferAttachments;
} MTLResourceStatePassDescriptorPrivate;

typedef struct MTLRenderPipelineAttachmentDescriptorPrivate {
    unk ;
    ? ;
    ? ;
} MTLRenderPipelineAttachmentDescriptorPrivate;

typedef struct MTLRenderPipelineDescriptorPrivate {
    id attachments;
    NSUInteger MTLRenderPipelineColorAttachmentDescriptorArrayInternal;
    NSUInteger rtBlendDescHash;
    NSUInteger depthAttachmentPixelFormat;
    NSUInteger stencilAttachmentPixelFormat;
    NSUInteger tessellationPartitionMode;
    BOOL maxTessellationFactor;
    NSUInteger tessellationFactorScaleEnabled;
    NSUInteger tessellationFactorFormat;
    NSUInteger tessellationControlPointIndexType;
    NSUInteger tessellationFactorStepFunction;
    NSUInteger tessellationOutputWindingOrder;
    BOOL postVertexDumpBufferIndex;
    NSInteger supportIndirectCommandBuffers;
    unk textureWriteRoundingMode;
    NSUInteger ;
    NSUInteger sampleCount;
    NSUInteger rasterSampleCount;
    unk sampleMask;
    unsigned int ;
    float sampleCoverageHash;
    NSUInteger sampleCoverage;
    NSUInteger paddingToRemove;
    unk colorSampleCount;
    unsigned int ;
    ? miscHash;
    unsigned int ;
    unsigned int vertexDepthCompareClampMask;
    NSUInteger fragmentDepthCompareClampMask;
    id resourceIndex;
    id label;
    id NSString;
    id vertexFunction;
    id <MTLFunction>;
    id fragmentFunction;
    ? <MTLFunction>;
    ? vertexDescriptor;
    ? MTLVertexDescriptorInternal;
    NSUInteger objectFunction;
    id <MTLFunction>;
    id meshFunction;
    NSUInteger <MTLFunction>;
    NSUInteger objectThreadsPerThreadgroup_DO_NOT_USE_WILL_BE_REMOVED;
    id meshThreadsPerThreadgroup_DO_NOT_USE_WILL_BE_REMOVED;
    id maxPipelineChildren;
    id pipelineMemoryLength;
    id objectBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    void meshBuffers;
    void MTLPipelineBufferDescriptorArrayInternal;
    id maxTotalThreadsPerObjectThreadgroup;
    BOOL maxTotalThreadsPerMeshThreadgroup;
    unsigned int vertexBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    id fragmentBuffers;
    id MTLPipelineBufferDescriptorArrayInternal;
    id driverCompilerOptions;
    id NSDictionary;
    id gpuCompilerSPIOptions;
    id NSDictionary;
    id pipelineLibrary;
    id <MTLPipelineLibrary>;
    NSUInteger pad0;
    NSUInteger pad1;
    BOOL pluginData;
    BOOL NSDictionary;
    NSUInteger needsCustomBorderColorSamplers;
    NSUInteger maxVertexAmplificationCount;
    BOOL binaryArchives;
    BOOL NSArray;
    id vertexLinkedFunctions;
    unsigned int MTLLinkedFunctions;
} MTLRenderPipelineDescriptorPrivate;

typedef struct MTLLinkedFunctionsPrivate {
    id functions;
    id NSArray;
    id privateFunctions;
    id NSArray;
} MTLLinkedFunctionsPrivate;

typedef struct shmemPoolQueue {
    id tqh_first;
    id MTLIOAccelDeviceShmem;
} shmemPoolQueue;

typedef struct _MTLIOAccelDeviceShmemPoolPrivate {
    shmemPoolQueue queue;
    os_unfair_lock_s lock;
    int count;
    Class shmemClass;
    id device;
    unsigned int MTLIOAccelDevice;
} _MTLIOAccelDeviceShmemPoolPrivate;

typedef struct MTLResourceListChunk {
    unsigned int currentEntry;
    NSUInteger entries;
    MTLResourceListChunk nextChunk;
} MTLResourceListChunk;

typedef struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    NSUInteger <MTLCounterSampleBuffer>;
    NSUInteger startOfEncoderSampleIndex;
} MTLBlitPassSampleBufferAttachmentDescriptorPrivate;

typedef struct MTLBlitPassDescriptorPrivate {
    id sampleBufferAttachments;
} MTLBlitPassDescriptorPrivate;

typedef struct MTLSharedEventHandlePrivate {
    unsigned int field0;
    id field1;
    NSUInteger field2;
} MTLSharedEventHandlePrivate;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct MTLFunctionDescriptorPrivate {
    id name;
    id NSString;
    NSUInteger specializedName;
    id NSString;
    id options;
    BOOL constantValues;
    id MTLFunctionConstantValues;
} MTLFunctionDescriptorPrivate;

typedef struct MTLStencilDescriptorPrivate {
    NSUInteger stencilCompareFunction;
    NSUInteger stencilFailureOperation;
    NSUInteger depthFailureOperation;
    NSUInteger depthStencilPassOperation;
    unsigned int readMask;
    unsigned int writeMask;
} MTLStencilDescriptorPrivate;

typedef struct MTLDepthStencilDescriptorPrivate {
    id frontFaceStencil;
    id MTLStencilDescriptorInternal;
    NSUInteger backFaceStencil;
    BOOL MTLStencilDescriptorInternal;
    id depthCompareFunction;
} MTLDepthStencilDescriptorPrivate;

