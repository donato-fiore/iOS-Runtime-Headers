typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct ? {
    int width;
    int height;
} ?;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct OpaqueCMByteStream {
} // Error Processing Struct Fields

typedef struct OpaqueFigAssetWriter {
} // Error Processing Struct Fields

typedef struct OpaqueFigFormatReader {
} // Error Processing Struct Fields

typedef struct OpaqueFigSimpleMutex {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig {
    unsigned int numPyrLevels;
    unsigned int imageWidth;
    unsigned int imageHeight;
    unsigned int keypointGridWidth;
    unsigned int keypointGridHeight;
    unsigned int keypointsTemplateRadius;
    unsigned int keypointsSearchRadius;
    float keypointsMinNccScore;
} BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig;

typedef struct AdaptiveCorrectionConfig {
    CGFloat epErrorLimitWidePix_FirstPass;
    CGFloat epErrorLimitWidePix_SecondPass;
    CGFloat rangePFL_T;
    CGFloat rangePFL_W;
    CGFloat rangeOCxT;
    CGFloat rangeOCxW;
    CGFloat rangeOCyW;
    CGFloat intermediateMacroDistMM;
    CGFloat extremeMacroDistMM;
    int minPointsForAdjustment;
    CGFloat errorVal_GreaterThanInf;
    CGFloat errorVal_LessThanExtremeMacro;
    CGFloat errorVal_BetweenIntermediate_ExtremeMacro;
    BOOL runAnalyticalPreconditioning;
    CGFloat spgEpsilon;
    float temporalFilteringStrength;
    float temporalFilteringStrengthParallel;
} AdaptiveCorrectionConfig;

typedef struct BWRenderListParameterNode {
    ? field0;
    id field1;
} BWRenderListParameterNode;

typedef struct BWRenderListParameterList {
    BWRenderListParameterNode slh_first;
} BWRenderListParameterList;

typedef struct CMPhotoSurfacePool {
} // Error Processing Struct Fields

typedef struct CMPhotoCompressionSession {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CalModel {
    CGFloat focalLengthPix;
    CGFloat opticalCenterX;
    CGFloat opticalCenterY;
    CGFloat extrinRotRefefenceToAuxiliary;
} CalModel;

typedef struct OpaqueVTImageRotationSession {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct __IOSurfaceAccelerator {
} // Error Processing Struct Fields

typedef struct __CVMetalTextureCache {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct OpaqueFigEndpoint {
} // Error Processing Struct Fields

typedef struct OpaqueFigEndpointStream {
} // Error Processing Struct Fields

typedef struct OpaqueFigVirtualDisplaySource {
} // Error Processing Struct Fields

typedef struct BWSmartCameraScene {
    BOOL enabled;
    BOOL confident;
    float confidenceFilterRatio;
    float filteredConfidence;
    float confidenceThreshold;
    float confidenceHysteresisValueLag;
    short confidenceHysteresisTemporalLagBeforeConfident;
    short confidenceHysteresisTemporalLagBeforeNotConfident;
    short currentTemporalHysteresis;
    char * name;
} BWSmartCameraScene;

typedef struct OpaqueCMBlockBuffer {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct BWPreviewStitcherShiftCorrection {
    CGPoint currentValue;
    CGPoint updatedValue;
    BOOL valueIsUpdated;
    BOOL lastRegistrationWasValid;
    int registeredFrameCaptureID;
    id rampX;
    id BWRamp;
} BWPreviewStitcherShiftCorrection;

typedef struct CMPhotoDecompressionSession {
} // Error Processing Struct Fields

typedef struct FigCaptureVideoTransform {
    BOOL mirrored;
    int rotationDegrees;
    ? dimensions;
} FigCaptureVideoTransform;

typedef struct OpaqueCMClock {
} // Error Processing Struct Fields

typedef struct AppC3DTrackingResult {
} // Error Processing Struct Fields

typedef struct AppC3DSession {
} // Error Processing Struct Fields

typedef struct OpaqueFigSampleBufferProcessor {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct OpaqueFigFormatWriter {
} // Error Processing Struct Fields

typedef struct AudioStreamBasicDescription {
    CGFloat mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
} AudioStreamBasicDescription;

typedef struct AudioBuffer {
    unsigned int field0;
    unsigned int field1;
    void field2;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int field0;
    AudioBuffer field1;
} AudioBufferList;

typedef struct BWCoreAnalyticsMovieRecordingSphereAFStatistics {
    float accelStandardDeviation;
    float gyroStandardDeviation;
    float sphereMaxTrackErrorWide;
    float sphereMaxTrackErrorTele;
    float sphereStdTrackErrorSumXXWide;
    float sphereStdTrackErrorSumXXTele;
    float afMaxTrackErrorWide;
    float afMaxTrackErrorTele;
    float afMaxTrackErrorSuperWide;
    float afStdTrackErrorSumXXWide;
    float afStdTrackErrorSumXXTele;
    float afStdTrackErrorSumXXSuperWide;
    float sphereMinDistanceFromEndStopWide;
    float sphereMinDistanceFromEndStopTele;
    float spherePowerWide;
    float spherePowerTele;
    float sphereMaxPeakCurrentWide;
    float sphereMaxPeakCurrentTele;
    float sphereMaxPeakCurrentAllChannels;
    float afPowerWide;
    float afPowerTele;
    float afPowerSuperWide;
    float afMaxPeakCurrentWide;
    float afMaxPeakCurrentTele;
    float afMaxPeakCurrentSuperWide;
    float afMaxPeakCurrentAllChannels;
    float afAndSphereMaxPeakCurrentWide;
    float afAndSphereMaxPeakCurrentTele;
    float afAndSphereMaxPeakCurrentAllChannels;
    unsigned int numberOfSamples;
    unsigned int numberOfSamplesWide;
    unsigned int numberOfSamplesTele;
    unsigned int numberOfSamplesSuperWide;
    unsigned int range_0_90umBinWide;
    unsigned int range_90_110umBinWide;
    unsigned int range_110_130umBinWide;
    unsigned int range_130_150umBinWide;
    unsigned int range_150_175umBinWide;
    unsigned int range_175_infinityBinWide;
    unsigned int range_0_90umBinTele;
    unsigned int range_90_110umBinTele;
    unsigned int range_110_130umBinTele;
    unsigned int range_130_150umBinTele;
    unsigned int range_150_175umBinTele;
    unsigned int range_175_infinityBinTele;
} BWCoreAnalyticsMovieRecordingSphereAFStatistics;

typedef struct BWCoreAnalyticsMovieRecordingVideoSTFStatistics {
    BOOL videoSTFEnabled;
    id cancelReason;
    float NSString;
    float videoSTFAppliedFrameCountPercentage;
    int largestMaxCorrectionLevel;
    unsigned int version;
    unsigned int lowMeanCorrectionLevelFrameCount;
    unsigned int moderateMeanCorrectionLevelFrameCount;
    unsigned int highMeanCorrectionLevelFrameCount;
    unsigned int veryHighMeanCorrectionLevelFrameCount;
} BWCoreAnalyticsMovieRecordingVideoSTFStatistics;

typedef struct BWCoreAnalyticsMovieRecordingCinematicVideoStatistics {
    unsigned int countOfSoftFocusRequests;
    unsigned int countOfHardFocusRequests;
    unsigned int countOfFixedPlaneFocusRequests;
    unsigned int countOfTapToTrackFailures;
    unsigned int countOfFixedTaxonomyFocusDecisions;
    unsigned int countOfNonTaxonomyFocusDecisions;
} BWCoreAnalyticsMovieRecordingCinematicVideoStatistics;

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct CMPhotoDNGCompressor {
} // Error Processing Struct Fields

typedef struct CVAFaceTracking {
} // Error Processing Struct Fields

typedef struct opaqueCMSimpleQueue {
} // Error Processing Struct Fields

typedef struct __CVDataBufferPool {
} // Error Processing Struct Fields

typedef struct opaqueCMSession {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct OpaqueFigCaptureDeferredContainerManager {
} // Error Processing Struct Fields

typedef struct BWDeferredMetadataCacheEntry {
} // Error Processing Struct Fields

typedef struct OpaqueFigCaptureSource {
} // Error Processing Struct Fields

typedef struct NoiseReductionCtx_s {
} // Error Processing Struct Fields

typedef struct OpaqueFigCaptureSession {
} // Error Processing Struct Fields

typedef struct OpaqueFigCaptureStream {
} // Error Processing Struct Fields

typedef struct localQueueOpaque {
} // Error Processing Struct Fields

typedef struct remoteQueueSenderOpaque {
} // Error Processing Struct Fields

typedef struct OpaqueFigCaptureSynchronizedStreamsGroup {
} // Error Processing Struct Fields

typedef struct OpaqueFigCaptureDevice {
} // Error Processing Struct Fields

typedef struct BWInterpolatedColorLookupTableEntry {
    id lookupTable;
    float NSData;
    id strength;
} BWInterpolatedColorLookupTableEntry;

typedef struct OpaqueFigReentrantMutex {
} // Error Processing Struct Fields

typedef struct OpaqueVTCompressionSession {
} // Error Processing Struct Fields

typedef struct BWRenderListRendererNode {
    ? field0;
    id field1;
} BWRenderListRendererNode;

typedef struct BWRenderListRendererList {
    BWRenderListRendererNode slh_first;
} BWRenderListRendererList;

typedef struct BWRenderListOptimizationContext {
} // Error Processing Struct Fields

typedef struct BWVISMotionTensors {
    id entries;
    ? NSDictionary;
} BWVISMotionTensors;

typedef struct OpaqueFigCaptureISPProcessingSession {
} // Error Processing Struct Fields

typedef struct BWAPSStatistics {
    float stdDataFromAPSForWide;
    float maxDataFromAPSForWide;
    float minDataFromAPSForWide;
    float stdDataFromSphereForWide;
    float maxDataFromSphereForWide;
    float minDataFromSphereForWide;
    float stdDataFromAPSForTele;
    float maxDataFromAPSForTele;
    float minDataFromAPSForTele;
    float stdDataFromSphereForTele;
    float maxDataFromSphereForTele;
    float minDataFromSphereForTele;
    float stdDataFromAccel;
    float maxDataFromAccel;
    float minDataFromAccel;
    float stdDataFromGyro;
    float maxDataFromGyro;
    float minDataFromGyro;
} BWAPSStatistics;

typedef struct CMPhotoScaleAndRotateSession {
} // Error Processing Struct Fields

typedef struct work_interval {
} // Error Processing Struct Fields

typedef struct BWStreamOutputStorage {
} // Error Processing Struct Fields

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct __CFAllocator {
} // Error Processing Struct Fields

typedef struct TimestampedAudioBufferList {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct OpaqueFigSemaphore {
} // Error Processing Struct Fields

typedef struct BWCoreMotionMetadataSampleData {
    unsigned int field0;
    unsigned int field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    float field7;
    float field8;
    float field9;
} BWCoreMotionMetadataSampleData;

typedef struct OpaqueFigCaptureDeferredPhotoProcessor {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct OpaqueFigFlatDictionaryKeySpec {
} // Error Processing Struct Fields

typedef struct _CAImageQueue {
} // Error Processing Struct Fields

typedef struct OpaqueBWPreviewSynchronizer {
} // Error Processing Struct Fields

typedef struct _EnqueuedBufferContext {
} // Error Processing Struct Fields

typedef struct FigStateMachineStateConfiguration {
    BOOL field0;
    id field1;
    id field2;
    id field3;
} FigStateMachineStateConfiguration;

typedef struct shmemPoolOpaque {
} // Error Processing Struct Fields

typedef struct OpaqueFigFlatDictionary {
} // Error Processing Struct Fields

