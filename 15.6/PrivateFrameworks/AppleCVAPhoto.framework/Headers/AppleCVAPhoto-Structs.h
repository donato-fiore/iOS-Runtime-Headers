typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct CVAQuaternion {
    CGFloat w;
    CGFloat x;
    CGFloat y;
    CGFloat z;
} CVAQuaternion;

typedef struct CVAVector {
    CGFloat x;
    CGFloat y;
    CGFloat z;
} CVAVector;

typedef struct TransitionData {
    BOOL _inTransition;
} TransitionData;

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct VideoPostprocessingParams {
    BOOL useFaceAsFocus;
    float faceSizeRatioInFocus;
    BOOL fillLargeHolesWithBackground;
    float disparityIntervalInHoleSearch;
    float backgroundFillMarginFromValidDisparity_px;
    BOOL useTemporalRejection;
} VideoPostprocessingParams;

typedef struct VideoMattingStaticParams {
    unsigned int colorWidth;
    unsigned int colorHeight;
    unsigned int shiftWidth;
    unsigned int shiftHeight;
    unsigned int alphaWidth;
    unsigned int alphaHeight;
    int guidedFilterWidth;
    int guidedFilterHeight;
    unsigned int kernelSize;
    float referenceShift;
    float guidedFilterUnconfidentWeight;
    float guidedFilterMinDistToDeweight;
    float alphaMaxLaplacian;
    float alphaContrastExponent;
    float shiftFilterColorStd;
    float shiftFilterUpdateRate;
    float minimumConfidenceToKeepDisparity;
    float maximumSimilarityToKeepDisparity;
    float maxShiftFillingInconsistency;
    float maxShiftFillingDistFromFg;
    unsigned int maxDistToPushShiftEdgesFwd;
    unsigned int maxDistToPushShiftEdgesRev;
    int shiftPushingBgToFgShiftDifference;
    float foregroundMaskDilationRadius;
    float infConvolutionDownsampling;
    float laplacianLimitingDownsampling;
    float laplacianLimitingBlurSize;
} VideoMattingStaticParams;

typedef struct array<float, 3UL> {
    float __elems_;
} array<float, 3UL>;

typedef struct VideoMattingDynamicParams {
    float updateRate;
    float sdofDeltaCanonicalDisparity;
    float alphaCoeffFilterColorStd;
    float alphaGammaExponent;
    float focusCanonicalDisparity;
    float backgroundCanonicalDisparity;
    float thresholdHardness;
    array<float, 3UL> gravity;
    float alphaMatteDeltaCanonicalDisparity;
    BOOL doDisparityHoleFilling;
} VideoMattingDynamicParams;

typedef struct DynamicMetaParams {
    float mattingCoeffUpdateRate;
    float mattingCoeffUpdateRateFast;
    float mattingCoeffColorStd;
    float mattingCoeffColorStdFast;
} DynamicMetaParams;

typedef struct Preferences {
    BOOL drawFocusMachineState;
    int overlayShiftOnRendering;
    int displayFrameTime;
    int noiseBits;
    int fNumber_tenths;
    BOOL bypassGPUProcessing;
    BOOL bypassCPUProcessing;
} Preferences;

typedef struct DisparityConversion {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DisparityConversion *, std::default_delete<DisparityConversion>> {
    DisparityConversion __value_;
} __compressed_pair<DisparityConversion *, std::default_delete<DisparityConversion>>;

typedef struct unique_ptr<DisparityConversion, std::default_delete<DisparityConversion>> {
    __compressed_pair<DisparityConversion *, std::default_delete<DisparityConversion>> __ptr_;
} unique_ptr<DisparityConversion, std::default_delete<DisparityConversion>>;

typedef struct GeometricTransformation {
} // Error Processing Struct Fields

typedef struct __compressed_pair<GeometricTransformation *, std::default_delete<GeometricTransformation>> {
    GeometricTransformation __value_;
} __compressed_pair<GeometricTransformation *, std::default_delete<GeometricTransformation>>;

typedef struct unique_ptr<GeometricTransformation, std::default_delete<GeometricTransformation>> {
    __compressed_pair<GeometricTransformation *, std::default_delete<GeometricTransformation>> __ptr_;
} unique_ptr<GeometricTransformation, std::default_delete<GeometricTransformation>>;

typedef struct FocusStatsPostprocessing {
} // Error Processing Struct Fields

typedef struct __compressed_pair<FocusStatsPostprocessing *, std::default_delete<FocusStatsPostprocessing>> {
    FocusStatsPostprocessing __value_;
} __compressed_pair<FocusStatsPostprocessing *, std::default_delete<FocusStatsPostprocessing>>;

typedef struct unique_ptr<FocusStatsPostprocessing, std::default_delete<FocusStatsPostprocessing>> {
    __compressed_pair<FocusStatsPostprocessing *, std::default_delete<FocusStatsPostprocessing>> __ptr_;
} unique_ptr<FocusStatsPostprocessing, std::default_delete<FocusStatsPostprocessing>>;

typedef struct DisparityAutofocus {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DisparityAutofocus *, std::default_delete<DisparityAutofocus>> {
    DisparityAutofocus __value_;
} __compressed_pair<DisparityAutofocus *, std::default_delete<DisparityAutofocus>>;

typedef struct unique_ptr<DisparityAutofocus, std::default_delete<DisparityAutofocus>> {
    __compressed_pair<DisparityAutofocus *, std::default_delete<DisparityAutofocus>> __ptr_;
} unique_ptr<DisparityAutofocus, std::default_delete<DisparityAutofocus>>;

typedef struct DisparityStatistics {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DisparityStatistics *, std::default_delete<DisparityStatistics>> {
    DisparityStatistics __value_;
} __compressed_pair<DisparityStatistics *, std::default_delete<DisparityStatistics>>;

typedef struct unique_ptr<DisparityStatistics, std::default_delete<DisparityStatistics>> {
    __compressed_pair<DisparityStatistics *, std::default_delete<DisparityStatistics>> __ptr_;
} unique_ptr<DisparityStatistics, std::default_delete<DisparityStatistics>>;

typedef struct FocusStateMachine {
} // Error Processing Struct Fields

typedef struct __compressed_pair<cva::FocusStateMachine *, std::default_delete<cva::FocusStateMachine>> {
    FocusStateMachine __value_;
} __compressed_pair<cva::FocusStateMachine *, std::default_delete<cva::FocusStateMachine>>;

typedef struct unique_ptr<cva::FocusStateMachine, std::default_delete<cva::FocusStateMachine>> {
    __compressed_pair<cva::FocusStateMachine *, std::default_delete<cva::FocusStateMachine>> __ptr_;
} unique_ptr<cva::FocusStateMachine, std::default_delete<cva::FocusStateMachine>>;

typedef struct StageLightStateMachine {
} // Error Processing Struct Fields

typedef struct __compressed_pair<StageLightStateMachine *, std::default_delete<StageLightStateMachine>> {
    StageLightStateMachine __value_;
} __compressed_pair<StageLightStateMachine *, std::default_delete<StageLightStateMachine>>;

typedef struct unique_ptr<StageLightStateMachine, std::default_delete<StageLightStateMachine>> {
    __compressed_pair<StageLightStateMachine *, std::default_delete<StageLightStateMachine>> __ptr_;
} unique_ptr<StageLightStateMachine, std::default_delete<StageLightStateMachine>>;

typedef struct SdofStateMachine {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SdofStateMachine *, std::default_delete<SdofStateMachine>> {
    SdofStateMachine __value_;
} __compressed_pair<SdofStateMachine *, std::default_delete<SdofStateMachine>>;

typedef struct unique_ptr<SdofStateMachine, std::default_delete<SdofStateMachine>> {
    __compressed_pair<SdofStateMachine *, std::default_delete<SdofStateMachine>> __ptr_;
} unique_ptr<SdofStateMachine, std::default_delete<SdofStateMachine>>;

typedef struct RetainPtr<__CVBuffer *> {
    void m_ptr;
} RetainPtr<__CVBuffer *>;

typedef struct CVAPerfEndTimeProfilerSet {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::default_delete<CVAPerfEndTimeProfilerSet>> {
    CVAPerfEndTimeProfilerSet __value_;
} __compressed_pair<CVAPerfEndTimeProfilerSet *, std::default_delete<CVAPerfEndTimeProfilerSet>>;

typedef struct unique_ptr<CVAPerfEndTimeProfilerSet, std::default_delete<CVAPerfEndTimeProfilerSet>> {
    __compressed_pair<CVAPerfEndTimeProfilerSet *, std::default_delete<CVAPerfEndTimeProfilerSet>> __ptr_;
} unique_ptr<CVAPerfEndTimeProfilerSet, std::default_delete<CVAPerfEndTimeProfilerSet>>;

typedef struct CVAPhotoMetalContext {
    id device;
    id <MTLDeviceSPI>;
    id commandQueue;
    id <MTLCommandQueue>;
    id library;
    unique_ptr<CVAPerfEndTimeProfilerSet, std::default_delete<CVAPerfEndTimeProfilerSet>> <MTLLibrary>;
    BOOL pipelineLibrary;
} CVAPhotoMetalContext;

typedef struct BoxFilterConfig {
    int field0;
} BoxFilterConfig;

typedef struct ? {
    NSUInteger width;
    NSUInteger height;
    NSUInteger depth;
} ?;

typedef struct pair<id<MTLTexture>, id<MTLTexture>> {
    id field0;
    id field1;
} pair<id<MTLTexture>, id<MTLTexture>>;

typedef struct InfimumConvolutionConfig {
} // Error Processing Struct Fields

typedef struct a4 {
} // Error Processing Struct Fields

typedef struct aligned_storage<float> {
    CGFloat dummy_;
    char data;
    a4 aligner_;
} aligned_storage<float>;

typedef struct optional<float> {
    BOOL m_initialized;
    aligned_storage<float> m_storage;
} optional<float>;

typedef struct float4x4 {
} // Error Processing Struct Fields

typedef struct TC_MatrixUniforms {
    float4x4 modelViewProjectionMatrix;
} TC_MatrixUniforms;

typedef struct SlideUniforms {
    float center_x;
    float center_y;
} SlideUniforms;

typedef struct half2x2 {
} // Error Processing Struct Fields

typedef struct LerpUniforms {
} // Error Processing Struct Fields

typedef struct TrapezoidUniforms {
    LerpUniforms l0;
    LerpUniforms l1;
} TrapezoidUniforms;

typedef struct LerpClampUniforms {
    LerpUniforms l;
} LerpClampUniforms;

typedef struct RelightUniforms {
    half2x2 outSizeInv;
    TrapezoidUniforms backgroundColor;
    TrapezoidUniforms proxyToFaceEffectLerp;
    LerpClampUniforms blurStrengthByDistance;
} RelightUniforms;

typedef struct FaceVertex {
} // Error Processing Struct Fields

typedef struct vector<FaceVertex, std::allocator<FaceVertex>> {
} // Error Processing Struct Fields

typedef struct FaceKitStreamedData {
    id verticesPos;
    id NSData;
    id intrinsics;
    id NSArray;
    id camR;
    id NSArray;
    id camT;
    float NSArray;
} FaceKitStreamedData;

typedef struct allocator<bool> {
} // Error Processing Struct Fields

typedef struct circular_buffer<bool, std::allocator<bool>> {
    BOOL m_buff;
    BOOL m_end;
    BOOL m_first;
    BOOL m_last;
    NSUInteger m_size;
    allocator<bool> m_alloc;
} circular_buffer<bool, std::allocator<bool>>;

typedef struct a8 {
} // Error Processing Struct Fields

typedef struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>>;

typedef struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> {
    BOOL m_initialized;
    aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> m_storage;
} optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>>;

typedef struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>>;

typedef struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> {
    BOOL m_initialized;
    aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> m_storage;
} optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>>;

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

typedef struct aligned_storage<unsigned long> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<unsigned long>;

typedef struct optional<unsigned long> {
    BOOL m_initialized;
    aligned_storage<unsigned long> m_storage;
} optional<unsigned long>;

typedef struct pair<float, float> {
    float field0;
    float field1;
} pair<float, float>;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct CompositeConfig {
    unsigned int frameNumber;
    unsigned int seedGeneratorFactor;
    int noiseBits;
    float noiseBitsFactor;
    float cubeIntensity;
    float noisePercentToAddAtInfinity;
} CompositeConfig;

typedef struct __IOSurfaceAccelerator {
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

typedef struct array<id<MTLBuffer>, 3UL> {
    id __elems_;
} array<id<MTLBuffer>, 3UL>;

