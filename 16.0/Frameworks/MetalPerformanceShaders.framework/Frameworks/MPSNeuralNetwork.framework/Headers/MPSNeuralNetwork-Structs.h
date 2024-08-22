typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger x;
    NSUInteger y;
    NSUInteger z;
} ?;

typedef struct MPSKernelInfo {
} // Error Processing Struct Fields

typedef struct MPSDeviceSpecificInfo {
    MPSKernelInfo field0;
    unk field1;
    NSUInteger field2;
} MPSDeviceSpecificInfo;

typedef struct MPSLibraryInfo {
    int field0;
    unsigned int field1;
    char * field2;
    unk field3;
    MPSDeviceSpecificInfo field4;
    MPSDeviceSpecificInfo field5;
    MPSDeviceSpecificInfo field6;
    MPSDeviceSpecificInfo field7;
    MPSDeviceSpecificInfo field8;
    MPSDeviceSpecificInfo field9;
    MPSDeviceSpecificInfo field10;
    MPSDeviceSpecificInfo field11;
    MPSDeviceSpecificInfo field12;
    MPSDeviceSpecificInfo field13;
    MPSDeviceSpecificInfo field14;
    MPSDeviceSpecificInfo field15;
    MPSDeviceSpecificInfo field16;
    MPSDeviceSpecificInfo field17;
    MPSDeviceSpecificInfo field18;
    MPSDeviceSpecificInfo field19;
    MPSDeviceSpecificInfo field20;
    MPSDeviceSpecificInfo field21;
    MPSDeviceSpecificInfo field22;
    MPSDeviceSpecificInfo field23;
    MPSDeviceSpecificInfo field24;
    MPSDeviceSpecificInfo field25;
    MPSDeviceSpecificInfo field26;
    MPSDeviceSpecificInfo field27;
    MPSDeviceSpecificInfo field28;
    MPSDeviceSpecificInfo field29;
    MPSDeviceSpecificInfo field30;
    MPSDeviceSpecificInfo field31;
    MPSDeviceSpecificInfo field32;
    MPSDeviceSpecificInfo field33;
    MPSDeviceSpecificInfo field34;
    MPSDeviceSpecificInfo field35;
    MPSDeviceSpecificInfo field36;
    MPSDeviceSpecificInfo field37;
    MPSDeviceSpecificInfo field38;
    MPSDeviceSpecificInfo field39;
    MPSDeviceSpecificInfo field40;
    MPSDeviceSpecificInfo field41;
    MPSDeviceSpecificInfo field42;
    MPSDeviceSpecificInfo field43;
} MPSLibraryInfo;

typedef struct MPSOrigin {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} MPSOrigin;

typedef struct MPSSize {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} MPSSize;

typedef struct MPSRegion {
    MPSOrigin field0;
    MPSSize field1;
} MPSRegion;

typedef struct MPSStateTextureInfo {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
} MPSStateTextureInfo;

typedef struct MPSImageCoordinate {
    NSUInteger x;
    NSUInteger y;
    NSUInteger channel;
} MPSImageCoordinate;

typedef struct NeuronInfo {
    int type;
    float a;
    float b;
    float c;
    id aData;
} NeuronInfo;

typedef struct FilterGraphNode {
} // Error Processing Struct Fields

typedef struct MPSSliceInfo {
    NSUInteger field0;
    NSUInteger field1;
} MPSSliceInfo;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct ResourceGraphNode {
} // Error Processing Struct Fields

typedef struct NodeList<ResourceGraphNode *> {
    ResourceGraphNode _items;
    NSUInteger _count;
    NSUInteger _storageSize;
} NodeList<ResourceGraphNode *>;

typedef struct NodeList<FilterGraphNode *> {
} // Error Processing Struct Fields

typedef struct Graph {
    NodeList<ResourceGraphNode *> _graphSourceImages;
    NodeList<ResourceGraphNode *> _graphSourceStates;
    NodeList<ResourceGraphNode *> _graphResultImages;
    NodeList<ResourceGraphNode *> _graphIntermediateImages;
    NodeList<ResourceGraphNode *> _graphResultStates;
    id _graph;
    NodeList<FilterGraphNode *> MPSNNGraph;
    NodeList<ResourceGraphNode *> _filters;
    NodeList<ResourceGraphNode *> _images;
    id _states;
    id _cpuUpdateSem;
} Graph;

typedef struct MPSNNDimensionOrder {
    NSUInteger dimensions;
} MPSNNDimensionOrder;

typedef struct Region_params {
} // Error Processing Struct Fields

typedef struct MPSCNNGramFilters_s {
    id i2mCopy;
    id MPSImageCopyToMatrix;
    id m2iCopy;
} MPSCNNGramFilters_s;

typedef struct MPSCNNGramGradientFilters_s {
    MPSCNNGramFilters_s fwdFilters;
    id gemm_NN;
} MPSCNNGramGradientFilters_s;

typedef struct NNKernelSourceParams {
    ? field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
} NNKernelSourceParams;

typedef struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> {
    uint8_t __a_value;
    NSInteger field1;
} __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>>;

typedef struct atomic<long> {
    __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> __a_;
} atomic<long>;

typedef struct MPSPixelInfo {
} // Error Processing Struct Fields

typedef struct MPSImageInfo {
    id field0;
    MPSPixelInfo field1;
    unsigned int field2;
    NSUInteger field3;
    NSUInteger field4;
    id field5;
    NSUInteger field6;
} MPSImageInfo;

typedef struct MPSStateInfo {
    id field0;
} MPSStateInfo;

