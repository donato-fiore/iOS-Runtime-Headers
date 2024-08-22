typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __C3DAnimationManager {
} // Error Processing Struct Fields

typedef struct SCNVector3 {
    float field0;
    float field1;
    float field2;
} SCNVector3;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __C3DEntity {
} // Error Processing Struct Fields

typedef struct __C3DMesh {
} // Error Processing Struct Fields

typedef struct __C3DMaterial {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __C3DGeometry {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL enableVertexWeldingAtImport;
    unsigned char boundaryInterpolationRule;
    unsigned char faceVaryingInterpolationRule;
    unsigned char normalSmoothingMode;
} ?;

typedef struct __C3DScene {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CATransform3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
} CATransform3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct GTVertexData {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

typedef struct vector<GTVertexData, std::allocator<GTVertexData>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>>;

typedef struct __hash_table<std::__hash_value_type<GTVertexData, unsigned int>, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>, std::allocator<std::__hash_value_type<GTVertexData, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>> __p3_;
} __hash_table<std::__hash_value_type<GTVertexData, unsigned int>, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>, std::allocator<std::__hash_value_type<GTVertexData, unsigned int>>>;

typedef struct unordered_map<GTVertexData, unsigned int, std::hash<GTVertexData>, std::equal_to<GTVertexData>, std::allocator<std::pair<const GTVertexData, unsigned int>>> {
    __hash_table<std::__hash_value_type<GTVertexData, unsigned int>, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>, true>, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>, true>, std::allocator<std::__hash_value_type<GTVertexData, unsigned int>>> __table_;
} unordered_map<GTVertexData, unsigned int, std::hash<GTVertexData>, std::equal_to<GTVertexData>, std::allocator<std::pair<const GTVertexData, unsigned int>>>;

typedef struct jet_framebuffer {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<jet_framebuffer> {
    jet_framebuffer __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<jet_framebuffer>;

typedef struct SKCStats {
    unk _vptr$SKCStats;
    CGFloat frameBeginTime;
    CGFloat frameDuration;
    CGFloat baseTime;
    CGFloat currentTime;
    int frameCount;
    ? clientUpdate;
    ? update;
    ? physics;
    ? constraints;
    ? render;
} SKCStats;

typedef struct jet_texture {
} // Error Processing Struct Fields

typedef struct shared_ptr<jet_texture> {
} // Error Processing Struct Fields

typedef struct jet_fence {
} // Error Processing Struct Fields

typedef struct shared_ptr<jet_fence> {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct ARFLSpringParameters {
    CGFloat dampingRatio;
    CGFloat dampingRatioSmoothing;
    CGFloat response;
    CGFloat responseSmoothing;
} ARFLSpringParameters;

typedef struct ARFLSimpleSpringState {
    CGFloat position;
    CGFloat velocity;
} ARFLSimpleSpringState;

typedef struct ARFLSimpleSpring {
    ARFLSimpleSpringState state;
    CGFloat mass;
    CGFloat stiffness;
    CGFloat damping;
    CGFloat anchor;
    CGFloat stablePositionThreshold;
    CGFloat stableVelocityThreshold;
} ARFLSimpleSpring;

typedef struct ARFLCompoundSpring {
    ARFLSimpleSpringState state;
    ARFLSimpleSpring stiffness;
    ARFLSimpleSpring damping;
    ARFLSimpleSpring dampingRatio;
    ARFLSimpleSpring response;
    ARFLSimpleSpring anchor;
    BOOL usesDampingRatioResponse;
} ARFLCompoundSpring;

typedef struct SCNVector4 {
    float field0;
    float field1;
    float field2;
    float field3;
} SCNVector4;

typedef struct SCNMatrix4 {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
} SCNMatrix4;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> {
} // Error Processing Struct Fields

typedef struct vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

