typedef struct ? {
    CGFloat x;
    CGFloat y;
    CGFloat z;
} ?;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __CFUUID {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CoreIKSolver {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct Matrix<short, 3, 1, false> {
    short m_data;
} Matrix<short, 3, 1, false>;

typedef struct __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> {
    void __value_;
} __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>>;

typedef struct vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> {
    void __begin_;
    void __end_;
    __compressed_pair<cva::Matrix<float, 3, 1, false> *, std::allocator<cva::Matrix<float, 3, 1, false>>> __end_cap_;
} vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>>;

typedef struct __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> {
    void __value_;
} __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>>;

typedef struct vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> {
    void __begin_;
    void __end_;
    __compressed_pair<cva::Matrix<unsigned int, 3, 1, false> *, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> __end_cap_;
} vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>>;

typedef struct __compressed_pair<cva::Matrix<unsigned int, 2, 1, false> *, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> {
    void __value_;
} __compressed_pair<cva::Matrix<unsigned int, 2, 1, false> *, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>>;

typedef struct vector<cva::Matrix<unsigned int, 2, 1, false>, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> {
    void __begin_;
    void __end_;
    __compressed_pair<cva::Matrix<unsigned int, 2, 1, false> *, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> __end_cap_;
} vector<cva::Matrix<unsigned int, 2, 1, false>, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>>;

typedef struct __compressed_pair<cva::Matrix<float, 2, 1, false> *, std::allocator<cva::Matrix<float, 2, 1, false>>> {
    void __value_;
} __compressed_pair<cva::Matrix<float, 2, 1, false> *, std::allocator<cva::Matrix<float, 2, 1, false>>>;

typedef struct vector<cva::Matrix<float, 2, 1, false>, std::allocator<cva::Matrix<float, 2, 1, false>>> {
    void __begin_;
    void __end_;
    __compressed_pair<cva::Matrix<float, 2, 1, false> *, std::allocator<cva::Matrix<float, 2, 1, false>>> __end_cap_;
} vector<cva::Matrix<float, 2, 1, false>, std::allocator<cva::Matrix<float, 2, 1, false>>>;

typedef struct TriMesh<float, unsigned int> {
    vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> vertices;
    vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> colors;
    vector<cva::Matrix<float, 3, 1, false>, std::allocator<cva::Matrix<float, 3, 1, false>>> normals;
    vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> faces;
    vector<cva::Matrix<unsigned int, 2, 1, false>, std::allocator<cva::Matrix<unsigned int, 2, 1, false>>> edges;
    vector<cva::Matrix<float, 2, 1, false>, std::allocator<cva::Matrix<float, 2, 1, false>>> tex_coords;
    vector<cva::Matrix<unsigned int, 3, 1, false>, std::allocator<cva::Matrix<unsigned int, 3, 1, false>>> tex_faces;
} TriMesh<float, unsigned int>;

typedef struct ChunkMesh {
    Matrix<short, 3, 1, false> chunk_position;
    TriMesh<float, unsigned int> mesh;
} ChunkMesh;

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct vImageCVImageFormat {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> {
} // Error Processing Struct Fields

typedef struct vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> __begin_;
} vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>;

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<arkit::KeyMapBuffer<const void *, std::vector<unsigned char>>> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<arkit::KeyMapBuffer<const void *, std::vector<unsigned char>>>;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct OpaqueVTImageRotationSession {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct __CFBoolean {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct __IOHIDServiceClient {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<unsigned long long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::less<unsigned long long>>;

typedef struct __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> field1;
    __compressed_pair<unsigned long, std::less<unsigned long long>> field2;
} __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>>;

typedef struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> {
    __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> field0;
} set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>>;

typedef struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long long *, std::allocator<unsigned long long>>;

typedef struct vector<unsigned long long, std::allocator<unsigned long long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> __end_cap_;
} vector<unsigned long long, std::allocator<unsigned long long>>;

typedef struct CV3DSLAMCalibration {
} // Error Processing Struct Fields

typedef struct CV3DSLAMConfig {
} // Error Processing Struct Fields

typedef struct shared_ptr<arkit::RobustExpFilter<float>> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<arkit::RobustExpFilter<float>>;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CV3DSLAMSession {
} // Error Processing Struct Fields

typedef struct CV3DPosePredictionContext {
} // Error Processing Struct Fields

typedef struct RaycastSession {
} // Error Processing Struct Fields

typedef struct shared_ptr<RaycastSession> {
} // Error Processing Struct Fields

typedef struct PlaneDetectionSession {
} // Error Processing Struct Fields

typedef struct shared_ptr<PlaneDetectionSession> {
} // Error Processing Struct Fields

typedef struct PlaneDetectionConfiguration {
    id options;
    id ARWorldTrackingOptions;
    id detectionCountUserDefaultValue;
    id NSNumber;
    BOOL minVergenceAngleDegreesUserDefaultValue;
    id NSNumber;
} PlaneDetectionConfiguration;

typedef struct __CFError {
} // Error Processing Struct Fields

typedef struct CV3DHitTestResult {
} // Error Processing Struct Fields

typedef struct CV3DSLAMStateContext {
} // Error Processing Struct Fields

typedef struct CV3DRaycastResultMap {
} // Error Processing Struct Fields

typedef struct CV3DPlaneDetectionPlaneList {
} // Error Processing Struct Fields

typedef struct CV3DReconMeshList {
} // Error Processing Struct Fields

typedef struct CV3DHitTestResults {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>, true>>;

typedef struct __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>, true>, std::allocator<std::__value_type<long, double>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>, true>> __pair3_;
} __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>, true>, std::allocator<std::__value_type<long, double>>>;

typedef struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> {
    __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>, true>, std::allocator<std::__value_type<long, double>>> __tree_;
} map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>>;

typedef struct optional<float> {
    unk ;
    char __null_state_;
    float __val_;
    BOOL __engaged_;
} optional<float>;

typedef struct ExponentialSmoother<float> {
    optional<float> state;
} ExponentialSmoother<float>;

typedef struct array<unsigned char, 16> {
    unsigned char field0;
} array<unsigned char, 16>;

typedef struct array<float __attribute__((ext_vector_type(3))), 4> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>>;

typedef struct __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> __pair3_;
} __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>>;

typedef struct set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> {
    __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> __tree_;
} set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>>;

typedef struct ARTexturedPlane {
    array<unsigned char, 16> field0;
    NSUInteger field1;
    ? field2;
    array<float __attribute__((ext_vector_type(3))), 4> field3;
    set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> field4;
    id field5;
} ARTexturedPlane;

typedef struct ARSpatialMappingParameters {
    NSInteger field0;
    NSInteger field1;
} ARSpatialMappingParameters;

typedef struct vector<ARPatch, std::allocator<ARPatch>> {
} // Error Processing Struct Fields

typedef struct vImageMapping {
} // Error Processing Struct Fields

typedef struct CV3DPlaneDetectionPlane {
} // Error Processing Struct Fields

typedef struct CV3DSurfaceDetectionPoint3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} CV3DSurfaceDetectionPoint3D;

typedef struct CV3DSurfaceDetectionAlignedBoundingBox {
} // Error Processing Struct Fields

typedef struct CV3DSurfaceDetectionRect {
} // Error Processing Struct Fields

typedef struct CV3DSurfaceDetectionPoints2D {
} // Error Processing Struct Fields

typedef struct CV3DSurfaceDetectionExtentGrid {
} // Error Processing Struct Fields

typedef struct CV3DSurfaceDetectionPlane {
} // Error Processing Struct Fields

typedef struct CV3DSurfaceDetectionResult {
} // Error Processing Struct Fields

typedef struct ARLabHistogram {
    float field0;
    float field1;
} ARLabHistogram;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct archive {
} // Error Processing Struct Fields

typedef struct archive_entry {
} // Error Processing Struct Fields

typedef struct CV3DODTContext {
} // Error Processing Struct Fields

typedef struct CV3DMLModelData {
} // Error Processing Struct Fields

typedef struct CV3DMLModel {
    ? field0;
    CV3DMLModelData field1;
} CV3DMLModel;

typedef struct FaceTrackingData {
} // Error Processing Struct Fields

typedef struct shared_ptr<arkit::FaceTrackingData> {
} // Error Processing Struct Fields

typedef struct Matrix<float, 0, 1, false> {
    float m_data;
    NSUInteger m_capacity;
    unsigned int m_rows;
} Matrix<float, 0, 1, false>;

typedef struct Matrix<float, 0, 0, false> {
    float m_data;
    NSUInteger m_capacity;
    unsigned int m_rows;
    unsigned int m_cols;
} Matrix<float, 0, 0, false>;

typedef struct PrecomputedFaceData {
} // Error Processing Struct Fields

typedef struct shared_ptr<arkit::PrecomputedFaceData> {
} // Error Processing Struct Fields

typedef struct Matrix<float, 9, 1, false> {
    float m_data;
} Matrix<float, 9, 1, false>;

typedef struct optional<cva::Matrix<float, 9, 1, false>> {
    unk ;
    char __null_state_;
    Matrix<float, 9, 1, false> __val_;
    BOOL __engaged_;
} optional<cva::Matrix<float, 9, 1, false>>;

typedef struct ExponentialSmoother<cva::Matrix<float, 9, 1, false>> {
    optional<cva::Matrix<float, 9, 1, false>> state;
} ExponentialSmoother<cva::Matrix<float, 9, 1, false>>;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct FacialLightEstimation {
    Matrix<float, 0, 1, false> m_validSampleIntensities;
    vector<int, std::allocator<int>> m_validChromaSampleIDS;
    vector<int, std::allocator<int>> m_sampleIndices_all;
    Matrix<float, 0, 0, false> m_validRtfs;
    shared_ptr<arkit::PrecomputedFaceData> m_precomputedFaceData;
    ExponentialSmoother<cva::Matrix<float, 9, 1, false>> m_smoother;
    vector<unsigned long, std::allocator<unsigned long>> m_inliers;
} FacialLightEstimation;

typedef struct CV3DSurfaceDetectionContext {
} // Error Processing Struct Fields

typedef struct AppC3DSession {
} // Error Processing Struct Fields

typedef struct CV3DReconKeyframeList {
} // Error Processing Struct Fields

typedef struct __compressed_pair<short *, std::allocator<short>> {
    short __value_;
} __compressed_pair<short *, std::allocator<short>>;

typedef struct vector<short, std::allocator<short>> {
    short __begin_;
    short __end_;
    __compressed_pair<short *, std::allocator<short>> __end_cap_;
} vector<short, std::allocator<short>>;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct __IOSurfaceNotifier {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct vImage_Buffer {
    void data;
    NSUInteger height;
    NSUInteger width;
    NSUInteger rowBytes;
} vImage_Buffer;

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

typedef struct array<float, 32> {
    float __elems_;
} array<float, 32>;

typedef struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>, true>>;

typedef struct __tree<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>, true>, std::allocator<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>, true>> __pair3_;
} __tree<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>, true>, std::allocator<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>>>;

typedef struct map<std::array<unsigned char, 16>, ARTexturedPlane, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, ARTexturedPlane>>> {
    __tree<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>, true>, std::allocator<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>>> __tree_;
} map<std::array<unsigned char, 16>, ARTexturedPlane, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, ARTexturedPlane>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>, true>>;

typedef struct __tree<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>, true>, std::allocator<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>, true>> field2;
} __tree<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>, true>, std::allocator<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>>;

typedef struct map<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>> {
    __tree<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>, true>, std::allocator<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>> field0;
} map<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>>;

typedef struct __compressed_pair<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> **, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>> {
    void __value_;
} __compressed_pair<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> **, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>>;

typedef struct __split_buffer<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> **, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>> __end_cap_;
} __split_buffer<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>>;

typedef struct deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> {
    __split_buffer<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> __size_;
} deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>>;

typedef struct queue<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> {
    deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> c;
} queue<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>>;

typedef struct ARPlaneUpdateQueue {
    queue<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> queue;
    set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> elements;
} ARPlaneUpdateQueue;

typedef struct array<float, 2> {
    float __elems_;
} array<float, 2>;

typedef struct ScaleCorrection {
} // Error Processing Struct Fields

typedef struct shared_ptr<arkit::btr::ScaleCorrection> {
} // Error Processing Struct Fields

typedef struct BodyRegistration {
} // Error Processing Struct Fields

typedef struct shared_ptr<arkit::btr::BodyRegistration> {
} // Error Processing Struct Fields

typedef struct Matrix<float, 2, 16, false> {
    float m_data;
} Matrix<float, 2, 16, false>;

typedef struct Matrix<float, 3, 16, false> {
    float m_data;
} Matrix<float, 3, 16, false>;

typedef struct Matrix<float, 3, 3, false> {
    float m_data;
} Matrix<float, 3, 3, false>;

typedef struct SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> {
    float m_data;
} SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>>;

typedef struct RegistrationData {
    Matrix<float, 2, 16, false> image_points;
    Matrix<float, 3, 16, false> lifted_points;
    Matrix<float, 3, 3, false> intrinsics;
    SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> cam_from_obj;
    SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> cam_from_vio;
    CGFloat timestamp_obj;
    CGFloat timestamp_vio;
} RegistrationData;

typedef struct array<arkit::btr::RegistrationData, 5> {
    RegistrationData __elems_;
} array<arkit::btr::RegistrationData, 5>;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct __short {
    char __data_;
    ? ;
} __short;

typedef struct __raw {
    NSUInteger __words;
} __raw;

typedef struct __rep {
    unk ;
    __long __l;
    __short __s;
    __raw __r;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> __r_;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __imp {
} // Error Processing Struct Fields

typedef struct locale {
    __imp __locale_;
} locale;

typedef struct __sFILE {
} // Error Processing Struct Fields

typedef struct basic_filebuf<char, std::char_traits<char>> {
    unk _vptr$basic_streambuf;
    locale __loc_;
    char * __binp_;
    char * __ninp_;
    char * __einp_;
    char * __bout_;
    char * __nout_;
    char * __eout_;
    char * __extbuf_;
    char * __extbufnext_;
    char * __extbufend_;
    char __extbuf_min_;
    NSUInteger __ebs_;
    char * __intbuf_;
    NSUInteger __ibs_;
    __sFILE __file_;
    void __cv_;
    unk __st_;
    char __mbstate8;
    NSInteger _mbstateL;
    unk __st_last_;
    char __mbstate8;
    NSInteger _mbstateL;
    unsigned int __om_;
    unsigned int __cm_;
    BOOL __owns_eb_;
    BOOL __owns_ib_;
    BOOL __always_noconv_;
} basic_filebuf<char, std::char_traits<char>>;

typedef struct basic_ofstream<char, std::char_traits<char>> {
    unk _vptr$basic_ostream;
    basic_filebuf<char, std::char_traits<char>> __sb_;
    unk _vptr$ios_base;
    unsigned int __fmtflags_;
    NSInteger __precision_;
    NSInteger __width_;
    unsigned int __rdstate_;
    unsigned int __exceptions_;
    void __rdbuf_;
    void __loc_;
    unk __fn_;
    int __index_;
    NSUInteger __event_size_;
    NSUInteger __event_cap_;
    NSInteger __iarray_;
    NSUInteger __iarray_size_;
    NSUInteger __iarray_cap_;
    void __parray_;
    NSUInteger __parray_size_;
    NSUInteger __parray_cap_;
    void __tie_;
    int __fill_;
} basic_ofstream<char, std::char_traits<char>>;

typedef struct CV3DReconMeshingConfiguration {
} // Error Processing Struct Fields

typedef struct CV3DReconSession {
} // Error Processing Struct Fields

typedef struct CV3DNormalEstimationSession {
} // Error Processing Struct Fields

typedef struct vector<simd_float4x4, std::allocator<simd_float4x4>> {
} // Error Processing Struct Fields

typedef struct vector<ARSRT, std::allocator<ARSRT>> {
} // Error Processing Struct Fields

