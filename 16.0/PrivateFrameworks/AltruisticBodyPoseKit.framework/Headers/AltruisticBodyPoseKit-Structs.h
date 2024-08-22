typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CoreIKSolver {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> __begin_;
} vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>;

typedef struct ? {
    void plan;
    int network_index;
} ?;

typedef struct ABPKTransform {
    ? field0;
} ABPKTransform;

typedef struct vector<ABPKTransform, std::allocator<ABPKTransform>> {
} // Error Processing Struct Fields

typedef struct vector<simd_float4x4, std::allocator<simd_float4x4>> {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger __value_;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long *, std::allocator<long>> __end_cap_;
} vector<long, std::allocator<long>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, std::vector<long>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, std::vector<long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>, true>>;

typedef struct __tree<std::__value_type<long, std::vector<long>>, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>, true>, std::allocator<std::__value_type<long, std::vector<long>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, std::vector<long>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>, true>> __pair3_;
} __tree<std::__value_type<long, std::vector<long>>, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>, true>, std::allocator<std::__value_type<long, std::vector<long>>>>;

typedef struct map<long, std::vector<long>, std::less<long>, std::allocator<std::pair<const long, std::vector<long>>>> {
    __tree<std::__value_type<long, std::vector<long>>, std::__map_value_compare<long, std::__value_type<long, std::vector<long>>, std::less<long>, true>, std::allocator<std::__value_type<long, std::vector<long>>>> __tree_;
} map<long, std::vector<long>, std::less<long>, std::allocator<std::pair<const long, std::vector<long>>>>;

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct inputparams_t {
    ? preprocessor;
    CGSize resolution;
} inputparams_t;

typedef struct networkparams_t {
    inputparams_t input;
} networkparams_t;

typedef struct inputvariables_t {
    ? imageTensor;
} inputvariables_t;

typedef struct outputvariables_t {
    ? heatmapsTensor;
} outputvariables_t;

typedef struct networkvariables_t {
    inputvariables_t input;
    outputvariables_t output;
} networkvariables_t;

typedef struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> {
} // Error Processing Struct Fields

typedef struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

typedef struct e5rt_program_function {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct e5rt_io_port {
} // Error Processing Struct Fields

typedef struct e5rt_buffer_object {
} // Error Processing Struct Fields

typedef struct e5rt_surface_object {
} // Error Processing Struct Fields

typedef struct e5rt_tensor_desc {
} // Error Processing Struct Fields

typedef struct e5rt_surface_desc {
} // Error Processing Struct Fields

typedef struct vImage_Buffer {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} vImage_Buffer;

typedef struct e5rt_execution_stream {
} // Error Processing Struct Fields

typedef struct e5rt_program_library {
} // Error Processing Struct Fields

typedef struct Matrix<float, 0U, 0U, false> {
    float m_data;
    NSUInteger m_capacity;
    unsigned int m_rows;
    unsigned int m_cols;
} Matrix<float, 0U, 0U, false>;

typedef struct Matrix<float, 0U, 1U, false> {
    float m_data;
    NSUInteger m_capacity;
    unsigned int m_rows;
} Matrix<float, 0U, 1U, false>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __compressed_pair<float **, std::allocator<float *>> {
    float __value_;
} __compressed_pair<float **, std::allocator<float *>>;

typedef struct __split_buffer<float *, std::allocator<float *>> {
    float __first_;
    float __begin_;
    float __end_;
    __compressed_pair<float **, std::allocator<float *>> __end_cap_;
} __split_buffer<float *, std::allocator<float *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<float>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<float>>;

typedef struct deque<float, std::allocator<float>> {
    __split_buffer<float *, std::allocator<float *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<float>> __size_;
} deque<float, std::allocator<float>>;

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct array<float, 2UL> {
    float __elems_;
} array<float, 2UL>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct SkeletonJointFilter<float> {
    vector<float, std::allocator<float>> m_values;
    vector<float, std::allocator<float>> m_speed;
    vector<double, std::allocator<double>> m_timestamps;
    float m_smoothing;
    float m_lowest_threshold;
    float m_low_threshold;
    float m_high_threshold;
    float m_highest_threshold;
    float m_temporal_smoothing;
    float m_prediction_factor;
    float m_min_smoothing;
    float m_up_slope;
    float m_down_slope;
    float m_temporal_slope;
} SkeletonJointFilter<float>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, float __attribute__((ext_vector_type(2)))>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, float __attribute__((ext_vector_type(2)))>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__map_value_compare<int, std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::less<int>, true>, std::allocator<std::__value_type<int, float __attribute__((ext_vector_type(2)))>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, float __attribute__((ext_vector_type(2)))>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__map_value_compare<int, std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::less<int>, true>, std::allocator<std::__value_type<int, float __attribute__((ext_vector_type(2)))>>>;

typedef struct map<int, float __attribute__((ext_vector_type(2))), std::less<int>, std::allocator<std::pair<const int, float __attribute__((ext_vector_type(2)))>>> {
    __tree<std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__map_value_compare<int, std::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::less<int>, true>, std::allocator<std::__value_type<int, float __attribute__((ext_vector_type(2)))>>> __tree_;
} map<int, float __attribute__((ext_vector_type(2))), std::less<int>, std::allocator<std::pair<const int, float __attribute__((ext_vector_type(2)))>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, float>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, float>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, float>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, float>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, float>, std::__map_value_compare<int, std::__value_type<int, float>, std::less<int>, true>, std::allocator<std::__value_type<int, float>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, float>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, float>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, float>, std::__map_value_compare<int, std::__value_type<int, float>, std::less<int>, true>, std::allocator<std::__value_type<int, float>>>;

typedef struct map<int, float, std::less<int>, std::allocator<std::pair<const int, float>>> {
    __tree<std::__value_type<int, float>, std::__map_value_compare<int, std::__value_type<int, float>, std::less<int>, true>, std::allocator<std::__value_type<int, float>>> __tree_;
} map<int, float, std::less<int>, std::allocator<std::pair<const int, float>>>;

typedef struct Human {
    NSUInteger numberOfJoints;
    map<int, float __attribute__((ext_vector_type(2))), std::less<int>, std::allocator<std::pair<const int, float __attribute__((ext_vector_type(2)))>>> jointMap;
    map<int, float, std::less<int>, std::allocator<std::pair<const int, float>>> confidenceMap;
    vector<float, std::allocator<float>> rawArray;
    vector<unsigned int, std::allocator<unsigned int>> jointsTrackingState;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> keypoints;
    vector<float, std::allocator<float>> confidence;
    CGRect boundingbox;
    BOOL missingJoints;
} Human;

typedef struct vector<Human, std::allocator<Human>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::array<float, 3> *, std::allocator<std::array<float, 3>>> {
    void __value_;
} __compressed_pair<std::array<float, 3> *, std::allocator<std::array<float, 3>>>;

typedef struct vector<std::array<float, 3>, std::allocator<std::array<float, 3>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::array<float, 3> *, std::allocator<std::array<float, 3>>> __end_cap_;
} vector<std::array<float, 3>, std::allocator<std::array<float, 3>>>;

typedef struct array<std::vector<std::array<float, 3>>, 243UL> {
    vector<std::array<float, 3>, std::allocator<std::array<float, 3>>> __elems_;
} array<std::vector<std::array<float, 3>>, 243UL>;

typedef struct RingBuffer<std::vector<std::array<float, 3>>, 243UL> {
    NSUInteger _insertionIndex;
    array<std::vector<std::array<float, 3>>, 243UL> _storage;
    BOOL _filled;
} RingBuffer<std::vector<std::array<float, 3>>, 243UL>;

typedef struct array<std::vector<float>, 9UL> {
    vector<float, std::allocator<float>> __elems_;
} array<std::vector<float>, 9UL>;

typedef struct RingBuffer<std::vector<float>, 9UL> {
    NSUInteger _insertionIndex;
    array<std::vector<float>, 9UL> _storage;
    BOOL _filled;
} RingBuffer<std::vector<float>, 9UL>;

typedef struct Matrix<double, 3U, 3U, false> {
    CGFloat m_data;
} Matrix<double, 3U, 3U, false>;

typedef struct SE3GroupStorage<double, cva::Matrix<double, 4, 4, false>> {
    CGFloat m_data;
} SE3GroupStorage<double, cva::Matrix<double, 4, 4, false>>;

typedef struct CameraPoseInfo {
    Matrix<double, 3U, 3U, false> camera_matrix;
    SE3GroupStorage<double, cva::Matrix<double, 4, 4, false>> transform;
    ? pose;
} CameraPoseInfo;

typedef struct __compressed_pair<cva::Matrix<double, 2, 1, false> *, std::allocator<cva::Matrix<double, 2, 1, false>>> {
    void __value_;
} __compressed_pair<cva::Matrix<double, 2, 1, false> *, std::allocator<cva::Matrix<double, 2, 1, false>>>;

typedef struct vector<cva::Matrix<double, 2, 1, false>, std::allocator<cva::Matrix<double, 2, 1, false>>> {
    void __begin_;
    void __end_;
    __compressed_pair<cva::Matrix<double, 2, 1, false> *, std::allocator<cva::Matrix<double, 2, 1, false>>> __end_cap_;
} vector<cva::Matrix<double, 2, 1, false>, std::allocator<cva::Matrix<double, 2, 1, false>>>;

typedef struct __compressed_pair<cva::Matrix<double, 3, 1, false> *, std::allocator<cva::Matrix<double, 3, 1, false>>> {
    void __value_;
} __compressed_pair<cva::Matrix<double, 3, 1, false> *, std::allocator<cva::Matrix<double, 3, 1, false>>>;

typedef struct vector<cva::Matrix<double, 3, 1, false>, std::allocator<cva::Matrix<double, 3, 1, false>>> {
    void __begin_;
    void __end_;
    __compressed_pair<cva::Matrix<double, 3, 1, false> *, std::allocator<cva::Matrix<double, 3, 1, false>>> __end_cap_;
} vector<cva::Matrix<double, 3, 1, false>, std::allocator<cva::Matrix<double, 3, 1, false>>>;

typedef struct Correspondences2d3d {
    vector<cva::Matrix<double, 2, 1, false>, std::allocator<cva::Matrix<double, 2, 1, false>>> image_points;
    vector<cva::Matrix<double, 3, 1, false>, std::allocator<cva::Matrix<double, 3, 1, false>>> model_points;
} Correspondences2d3d;

typedef struct BodyRegistrationInfo {
    int status;
    CameraPoseInfo camera_from_body;
    Correspondences2d3d correspondences;
} BodyRegistrationInfo;

typedef struct BodyRegistration {
    BodyRegistrationInfo m_last_result;
} BodyRegistration;

typedef struct array<float, 32UL> {
    float __elems_;
} array<float, 32UL>;

typedef struct vector<ABPKSRT, std::allocator<ABPKSRT>> {
} // Error Processing Struct Fields

