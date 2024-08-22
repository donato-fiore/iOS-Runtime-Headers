typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct FaceQualityPredictor {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceQualityPredictor> {
    FaceQualityPredictor __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceQualityPredictor>;

typedef struct vImage_Buffer {
    void data;
    NSUInteger height;
    NSUInteger width;
    NSUInteger rowBytes;
} vImage_Buffer;

typedef struct FaceClustering {
} // Error Processing Struct Fields

typedef struct shared_ptr<const vision::mod::FaceClustering> {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceClustering> {
} // Error Processing Struct Fields

typedef struct ImageDescriptorBufferAbstract {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> {
} // Error Processing Struct Fields

typedef struct FaceprintAndAttributes {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceprintAndAttributes> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::tuple<simd_float3x3, float> *, std::allocator<std::tuple<simd_float3x3, float>>> {
    void __value_;
} __compressed_pair<std::tuple<simd_float3x3, float> *, std::allocator<std::tuple<simd_float3x3, float>>>;

typedef struct vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::tuple<simd_float3x3, float> *, std::allocator<std::tuple<simd_float3x3, float>>> __end_cap_;
} vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>>;

typedef struct PetprintGenerator {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::PetprintGenerator> {
} // Error Processing Struct Fields

typedef struct ImageAnalyzer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<vision::mod::ImageAnalyzer *, std::default_delete<vision::mod::ImageAnalyzer>> {
    ImageAnalyzer __value_;
} __compressed_pair<vision::mod::ImageAnalyzer *, std::default_delete<vision::mod::ImageAnalyzer>>;

typedef struct unique_ptr<vision::mod::ImageAnalyzer, std::default_delete<vision::mod::ImageAnalyzer>> {
    __compressed_pair<vision::mod::ImageAnalyzer *, std::default_delete<vision::mod::ImageAnalyzer>> __ptr_;
} unique_ptr<vision::mod::ImageAnalyzer, std::default_delete<vision::mod::ImageAnalyzer>>;

typedef struct _Geometry2D_size2D_ {
    float height;
    float width;
} _Geometry2D_size2D_;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct TapToBox {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::TapToBox> {
} // Error Processing Struct Fields

typedef struct ObjectDetector_DCNFaceDetector_v2 {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> {
} // Error Processing Struct Fields

typedef struct ObjectTrackerOptions {
    unk field0;
    id field1;
    int field2;
} ObjectTrackerOptions;

typedef struct ObjectTrackerAbstract {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ObjectTrackerAbstract> {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct _Geometry2D_point2D_ {
    float x;
    float y;
} _Geometry2D_point2D_;

typedef struct _Geometry2D_rect2D_ {
    _Geometry2D_point2D_ origin;
    _Geometry2D_size2D_ size;
} _Geometry2D_rect2D_;

typedef struct _LandmarkDetector_faceMeshParts_ {
    int field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    int field7;
    int field8;
    int field9;
    int field10;
    int field11;
    int field12;
    int field13;
    int field14;
    int field15;
    int field16;
    int field17;
    int field18;
    int field19;
    int field20;
    int field21;
    int field22;
    int field23;
    int field24;
    int field25;
    int field26;
    int field27;
    int field28;
    int field29;
    int field30;
    int field31;
    int field32;
    int field33;
    int field34;
} _LandmarkDetector_faceMeshParts_;

typedef struct LandmarkAttributes {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::LandmarkAttributes> {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct CC_MD5state_st {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    int field7;
} CC_MD5state_st;

typedef struct ObjectDetector_DCNFaceDetector {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> {
} // Error Processing Struct Fields

typedef struct MPClusteringTreeNode {
} // Error Processing Struct Fields

typedef struct vector<MPClusteringTreeNode *, std::allocator<MPClusteringTreeNode *>> {
} // Error Processing Struct Fields

typedef struct ScreenGazePredictor {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ScreenGazePredictor> {
} // Error Processing Struct Fields

typedef struct __MRCDescriptor {
} // Error Processing Struct Fields

typedef struct ImageClassifierAbstract {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ImageClassifierAbstract> {
} // Error Processing Struct Fields

typedef struct ImageDescriptorProcessorAbstract {
    unk field0;
} ImageDescriptorProcessorAbstract;

typedef struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
} // Error Processing Struct Fields

typedef struct Options {
    BOOL field0;
    NSUInteger field1;
    id field2;
    id field3;
} Options;

typedef struct ImageClassifier_HierarchicalModel {
    ImageClassfier_Graph field0;
} ImageClassifier_HierarchicalModel;

typedef struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
} // Error Processing Struct Fields

typedef struct Projections_meanStdTable {
    float sumTable;
    float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
    float piRow;
    NSUInteger nPiRow;
    Projections_meanStdTable piRowTable;
    float piCol;
    NSUInteger nPiCol;
    Projections_meanStdTable piColTable;
    char * _memoryContainer;
} FastRegistration_Signatures;

typedef struct FaceFrontalizer {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceFrontalizer> {
} // Error Processing Struct Fields

typedef struct FaceSegmenterDNN {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceSegmenterDNN> {
} // Error Processing Struct Fields

typedef struct ACBSConfig {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct EPolygon {
} // Error Processing Struct Fields

typedef struct EPolygonList {
    int field0;
    int field1;
    EPolygon field2;
    int field3;
} EPolygonList;

typedef struct shared_ptr<apple::vision::libraries::autotrace::EPolygonList> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> {
    void __value_;
} __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>>;

typedef struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> __end_cap_;
} vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>>;

typedef struct FaceRegionMap {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceRegionMap> {
} // Error Processing Struct Fields

typedef struct TorsoprintGenerator {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::TorsoprintGenerator> {
} // Error Processing Struct Fields

typedef struct FaceIDModel {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::FaceIDModel> {
} // Error Processing Struct Fields

typedef struct CVMLCanceller {
    unk field0;
    BOOL field1;
    int field2;
} CVMLCanceller;

typedef struct ImageDescriptorBufferFloat32 {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> {
} // Error Processing Struct Fields

typedef struct LKTCPU {
} // Error Processing Struct Fields

typedef struct __compressed_pair<apple::vision::OpticalFlow::LKTCPU *, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> {
    LKTCPU __value_;
} __compressed_pair<apple::vision::OpticalFlow::LKTCPU *, std::default_delete<apple::vision::OpticalFlow::LKTCPU>>;

typedef struct unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> {
    __compressed_pair<apple::vision::OpticalFlow::LKTCPU *, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> __ptr_;
} unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>>;

typedef struct LandmarkDetectorERT {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::LandmarkDetectorERT> {
} // Error Processing Struct Fields

typedef struct LandmarkDetectorDNN {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::LandmarkDetectorDNN> {
} // Error Processing Struct Fields

typedef struct vector<_Geometry2D_point2D_, std::allocator<_Geometry2D_point2D_>> {
} // Error Processing Struct Fields

typedef struct ImageClassfier_Graph {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, InternalObservedParabola>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, InternalObservedParabola>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, InternalObservedParabola>, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>, true>, std::allocator<std::__value_type<int, InternalObservedParabola>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, InternalObservedParabola>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, InternalObservedParabola>, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>, true>, std::allocator<std::__value_type<int, InternalObservedParabola>>>;

typedef struct map<int, InternalObservedParabola, std::less<int>, std::allocator<std::pair<const int, InternalObservedParabola>>> {
    __tree<std::__value_type<int, InternalObservedParabola>, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>, true>, std::allocator<std::__value_type<int, InternalObservedParabola>>> __tree_;
} map<int, InternalObservedParabola, std::less<int>, std::allocator<std::pair<const int, InternalObservedParabola>>>;

typedef struct __compressed_pair<std::vector<CGPointWithPts> **, std::allocator<std::vector<CGPointWithPts> *>> {
    void __value_;
} __compressed_pair<std::vector<CGPointWithPts> **, std::allocator<std::vector<CGPointWithPts> *>>;

typedef struct __split_buffer<std::vector<CGPointWithPts> *, std::allocator<std::vector<CGPointWithPts> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<CGPointWithPts> **, std::allocator<std::vector<CGPointWithPts> *>> __end_cap_;
} __split_buffer<std::vector<CGPointWithPts> *, std::allocator<std::vector<CGPointWithPts> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::vector<CGPointWithPts>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::vector<CGPointWithPts>>>;

typedef struct deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>> {
    __split_buffer<std::vector<CGPointWithPts> *, std::allocator<std::vector<CGPointWithPts> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::vector<CGPointWithPts>>> __size_;
} deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>>;

typedef struct ParabolaSearchBuffer {
    int maxFramesSkippedForDetection;
    int minRegionSizeX;
    int minRegionSizeY;
    deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>> contourPointsQ;
} ParabolaSearchBuffer;

typedef struct InternalParameters {
    int minRegionSizeX;
    int minRegionSizeY;
    float initialYDiffLimit;
    float startingMinDiffDeviation;
    float maxDistanceForSolution;
    int frameWidth;
    int frameHeight;
    float xScaleFactor;
    float yScaleFactor;
    int runningMinDiffDeviation;
    float maxFrameSkipScaleFactor;
    float majorAxisScaler;
    float minorAxisScalar;
    float contourSizeUpperBound;
    float contourSizeLowerBound;
    float maxRadiusToCompensate;
    float maxRadiusBasedDeviation;
    float xConsistencyDeviation;
    float rejectionScaler;
} InternalParameters;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ObservedParabola>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ObservedParabola>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, ObservedParabola>, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>, true>, std::allocator<std::__value_type<int, ObservedParabola>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ObservedParabola>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, ObservedParabola>, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>, true>, std::allocator<std::__value_type<int, ObservedParabola>>>;

typedef struct map<int, ObservedParabola, std::less<int>, std::allocator<std::pair<const int, ObservedParabola>>> {
    __tree<std::__value_type<int, ObservedParabola>, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>, true>, std::allocator<std::__value_type<int, ObservedParabola>>> __tree_;
} map<int, ObservedParabola, std::less<int>, std::allocator<std::pair<const int, ObservedParabola>>>;

typedef struct ForestAlgoParams {
    float FAFrameRate;
    int parabolaLength;
    int minXDistanceFromLastPointOnParabola;
    int maxXDistanceFromLastPointOnParabola;
    int minYDistanceFromLastPointOnParabola;
    int maxYDistanceFromLastPointOnParabola;
    int maxFramesSkippedToContinueParabolaDetection;
    int minObjectSize;
} ForestAlgoParams;

typedef struct OpticalFlowOptions {
    id field0;
    unsigned int field1;
    NSUInteger field2;
    NSUInteger field3;
    BOOL field4;
    NSUInteger field5;
    NSUInteger field6;
    float field7;
    float field8;
    float field9;
} OpticalFlowOptions;

typedef struct optional<OpticalFlowOptions> {
    unk field0;
    char field1;
    OpticalFlowOptions field2;
    BOOL field3;
} optional<OpticalFlowOptions>;

typedef struct CVPixelBufferWrapper {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

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

typedef struct mapped_model_file {
    unk field0;
    NSUInteger field1;
} mapped_model_file;

typedef struct model_file_cache {
} // Error Processing Struct Fields

typedef struct __compressed_pair<cvml::util::model_file_cache *, std::default_delete<cvml::util::model_file_cache>> {
    model_file_cache __value_;
} __compressed_pair<cvml::util::model_file_cache *, std::default_delete<cvml::util::model_file_cache>>;

typedef struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> {
    __compressed_pair<cvml::util::model_file_cache *, std::default_delete<cvml::util::model_file_cache>> __ptr_;
} unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>>;

typedef struct map<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> {
    __tree<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> __tree_;
} map<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>>;

typedef struct ImageAnalyzer_PCA {
} // Error Processing Struct Fields

typedef struct __compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::default_delete<vision::mod::ImageAnalyzer_PCA>> {
    ImageAnalyzer_PCA __value_;
} __compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::default_delete<vision::mod::ImageAnalyzer_PCA>>;

typedef struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> {
    __compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::default_delete<vision::mod::ImageAnalyzer_PCA>> __ptr_;
} unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>;

typedef struct map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> {
    __tree<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> __tree_;
} map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>;

typedef struct __compressed_pair<std::tuple<std::string, float, bool> *, std::allocator<std::tuple<std::string, float, bool>>> {
    void __value_;
} __compressed_pair<std::tuple<std::string, float, bool> *, std::allocator<std::tuple<std::string, float, bool>>>;

typedef struct vector<std::tuple<std::string, float, bool>, std::allocator<std::tuple<std::string, float, bool>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::tuple<std::string, float, bool> *, std::allocator<std::tuple<std::string, float, bool>>> __end_cap_;
} vector<std::tuple<std::string, float, bool>, std::allocator<std::tuple<std::string, float, bool>>>;

typedef struct __CCRange {
    unsigned short field0;
    unsigned short field1;
} __CCRange;

typedef struct __CCPulseWindowContext {
    __CCRange field0;
    unsigned short field1;
    unsigned short field2;
    short field3;
    BOOL field4;
} __CCPulseWindowContext;

typedef struct ThresholdSet_t {
    float field0;
    float field1;
    float field2;
} ThresholdSet_t;

typedef struct __CCSumDerivVectors {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    int field7;
    int field8;
} __CCSumDerivVectors;

typedef struct __CCColorProfileContext {
    vImage_Buffer field0;
    vImage_Buffer field1;
    vImage_Buffer field2;
    vImage_Buffer field3;
    int field4;
    int field5;
    unsigned short field6;
    unsigned short field7;
} __CCColorProfileContext;

typedef struct __rgbaColor {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} __rgbaColor;

typedef struct __rgbMinMaxU8 {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    unsigned char field5;
} __rgbMinMaxU8;

typedef struct __rgbMinMaxFloat {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
} __rgbMinMaxFloat;

typedef struct __CCBox {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
} __CCBox;

typedef struct __CCCharBox {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
} __CCCharBox;

typedef struct __CCBigBox {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    __CCCharBox field4;
} __CCBigBox;

typedef struct __CCFilterSumDerivConfig {
    __CCRange field0;
    __CCRange field1;
    BOOL field2;
    BOOL field3;
    NSUInteger field4;
    NSUInteger field5;
} __CCFilterSumDerivConfig;

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> __begin_;
} vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>;

typedef struct ImageRegistrationCtx_s {
} // Error Processing Struct Fields

typedef struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> {
    float field0;
    float field1;
    float field2;
} __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float>;

typedef struct tuple<float, float, float> {
    __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> field0;
} tuple<float, float, float>;

typedef struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>>;

typedef struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> __end_cap_;
} vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>>;

typedef struct __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>> {
    void __value_;
} __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>>;

typedef struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>> {
    __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>> __ptr_;
} unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>>;

typedef struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> {
} // Error Processing Struct Fields

typedef struct CamGazePredictor {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::CamGazePredictor> {
} // Error Processing Struct Fields

typedef struct GazeFollowPredictor {
} // Error Processing Struct Fields

typedef struct shared_ptr<vision::mod::GazeFollowPredictor> {
} // Error Processing Struct Fields

