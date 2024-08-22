typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned short fHead;
    unsigned short fSize;
} ?;

typedef struct Status {
    unsigned short bits;
} Status;

typedef struct Sample {
    CGFloat timestamp;
    ? acceleration;
} Sample;

typedef struct CMMotionContextLogger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMMotionContextLogger *, std::default_delete<CMMotionContextLogger>> {
    CMMotionContextLogger __value_;
} __compressed_pair<CMMotionContextLogger *, std::default_delete<CMMotionContextLogger>>;

typedef struct unique_ptr<CMMotionContextLogger, std::default_delete<CMMotionContextLogger>> {
    __compressed_pair<CMMotionContextLogger *, std::default_delete<CMMotionContextLogger>> __ptr_;
} unique_ptr<CMMotionContextLogger, std::default_delete<CMMotionContextLogger>>;

typedef struct Dispatcher {
    unk field0;
    id field1;
} Dispatcher;

typedef struct CMVector<double, 2UL> {
    CGFloat elements;
} CMVector<double, 2UL>;

typedef struct CMQueueStorage<CMPdrDirectionality::AggAccelSample, 245UL> {
    char buffer;
} CMQueueStorage<CMPdrDirectionality::AggAccelSample, 245UL>;

typedef struct CMFixedSizeQueue<CMPdrDirectionality::AggAccelSample, 245UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<CMPdrDirectionality::AggAccelSample, 245UL> fStorage;
} CMFixedSizeQueue<CMPdrDirectionality::AggAccelSample, 245UL>;

typedef struct CMPdrDirectionality {
    CGFloat _lastStartImpulseTimestamp;
    CGFloat _lastEndImpulseTimestamp;
    CGFloat _lastStepDirectionRadians;
    CMVector<double, 2UL> _lastPosition;
    CMFixedSizeQueue<CMPdrDirectionality::AggAccelSample, 245UL> _inertialBuffer;
} CMPdrDirectionality;

typedef struct CMAccumulator<float> {
    float fValue;
    float fError;
} CMAccumulator<float>;

typedef struct CMQueue<float> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
} CMQueue<float>;

typedef struct CMQueueStorage<float, 25UL> {
    char buffer;
} CMQueueStorage<float, 25UL>;

typedef struct CMFixedSizeAccumulationBuffer<float, 25UL> {
    BOOL fIsStaleStatistics;
    float fMean;
    float fVariance;
    CMAccumulator<float> fSum;
    CMAccumulator<float> fSqSum;
    CMQueue<float> fSamples;
    CMQueueStorage<float, 25UL> fQueueStorage;
} CMFixedSizeAccumulationBuffer<float, 25UL>;

typedef struct CMOQuaternion {
    float elements;
} CMOQuaternion;

typedef struct CMVector<float, 3UL> {
    float elements;
} CMVector<float, 3UL>;

typedef struct AccelTNBFrame {
    CGFloat lastValidTNBTimestamp;
    CMVector<float, 3UL> lastSample;
    CMVector<float, 3UL> T;
    CMVector<float, 3UL> N;
    CMVector<float, 3UL> B;
    float jerkNorm;
    float curvature;
    float torsion;
} AccelTNBFrame;

typedef struct CMVector<float, 2UL> {
    float elements;
} CMVector<float, 2UL>;

typedef struct CMQueueStorage<float, 6UL> {
    char buffer;
} CMQueueStorage<float, 6UL>;

typedef struct CMFixedSizeAccumulationBuffer<float, 6UL> {
    BOOL fIsStaleStatistics;
    float fMean;
    float fVariance;
    CMAccumulator<float> fSum;
    CMAccumulator<float> fSqSum;
    CMQueue<float> fSamples;
    CMQueueStorage<float, 6UL> fQueueStorage;
} CMFixedSizeAccumulationBuffer<float, 6UL>;

typedef struct AnomalySteppingDetect {
    CGFloat lastFeedTimestamp;
    BOOL detectedAnomaly;
    CMFixedSizeAccumulationBuffer<float, 6UL> deltaGazeAnglesRadBuffer;
    CMFixedSizeAccumulationBuffer<float, 6UL> deltaDoTAnglesRadBuffer;
    CMFixedSizeAccumulationBuffer<float, 6UL> stepRecencyBuffer;
    float lastBufferedGazeAngleRad;
    float lastBufferedDoTAngleRad;
    BOOL checkBufferUpdated;
    int likelyFailureCount;
} AnomalySteppingDetect;

typedef struct Parameters {
    CGFloat B;
    CGFloat A;
    CGFloat inputScaleValues;
    CGFloat outputScaleValues;
} Parameters;

typedef struct CMSosFilter<4UL> {
} // Error Processing Struct Fields

typedef struct array<CMSosFilter<4>, 3UL> {
    CMSosFilter<4UL> __elems_;
} array<CMSosFilter<4>, 3UL>;

typedef struct __compressed_pair<CLButterworthFilter<float, 2> *, std::default_delete<CLButterworthFilter<float, 2>>> {
    void __value_;
} __compressed_pair<CLButterworthFilter<float, 2> *, std::default_delete<CLButterworthFilter<float, 2>>>;

typedef struct unique_ptr<CLButterworthFilter<float, 2>, std::default_delete<CLButterworthFilter<float, 2>>> {
    __compressed_pair<CLButterworthFilter<float, 2> *, std::default_delete<CLButterworthFilter<float, 2>>> __ptr_;
} unique_ptr<CLButterworthFilter<float, 2>, std::default_delete<CLButterworthFilter<float, 2>>>;

typedef struct CMDoTEstimator {
    CMFixedSizeAccumulationBuffer<float, 25UL> fInertialSwayAngleBuffer;
    CMOQuaternion fHeadsetOrientation;
    BOOL fHeadSetOrientationIsSet;
    AccelTNBFrame fInertialAccelTNB;
    float fLastDoTAngleRadians;
    CMVector<float, 2UL> fLastRawDoTVector;
    CMVector<float, 2UL> fLastDoTVector;
    CMVector<float, 3UL> fLastPosition;
    CGFloat fLastTimestamp;
    CGFloat fTimeOfLastDetectedStep;
    BOOL fIsFirstStep;
    float fDoTQuality;
    float fSpeedMetersPerSecond;
    int fSpeedEstType;
    CMVector<float, 2UL> fLastFilteredGaze;
    AnomalySteppingDetect fAnomalyDetector;
    Parameters kSosFilterParams;
    array<CMSosFilter<4>, 3UL> fInertialUserAccelFilter;
    unique_ptr<CLButterworthFilter<float, 2>, std::default_delete<CLButterworthFilter<float, 2>>> fDoTFilter;
    unique_ptr<CLButterworthFilter<float, 2>, std::default_delete<CLButterworthFilter<float, 2>>> fJerkNormFilter;
    unique_ptr<CLButterworthFilter<float, 2>, std::default_delete<CLButterworthFilter<float, 2>>> fGazeFilter;
} CMDoTEstimator;

typedef struct CMPdr {
    int fAlgType;
    CMPdrDirectionality fDirectionalityDetector;
    CMDoTEstimator fDoTEstimator;
} CMPdr;

typedef struct Impulse {
    CGFloat start;
    CGFloat end;
} Impulse;

typedef struct ActivityPacket {
    int state;
    CGFloat stateTransitionTimestamp;
    Impulse stepImpulse;
} ActivityPacket;

typedef struct CMSitStandDetector {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMSitStandDetector *, std::default_delete<CMSitStandDetector>> {
    CMSitStandDetector __value_;
} __compressed_pair<CMSitStandDetector *, std::default_delete<CMSitStandDetector>>;

typedef struct unique_ptr<CMSitStandDetector, std::default_delete<CMSitStandDetector>> {
    __compressed_pair<CMSitStandDetector *, std::default_delete<CMSitStandDetector>> __ptr_;
} unique_ptr<CMSitStandDetector, std::default_delete<CMSitStandDetector>>;

typedef struct CMQueueStorage<CMAccessoryStepDetector::AggAccelSample, 50UL> {
    char buffer;
} CMQueueStorage<CMAccessoryStepDetector::AggAccelSample, 50UL>;

typedef struct CMFixedSizeQueue<CMAccessoryStepDetector::AggAccelSample, 50UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<CMAccessoryStepDetector::AggAccelSample, 50UL> fStorage;
} CMFixedSizeQueue<CMAccessoryStepDetector::AggAccelSample, 50UL>;

typedef struct CMQueueStorage<CMAccessoryStepDetector::VectorSample, 50UL> {
    char buffer;
} CMQueueStorage<CMAccessoryStepDetector::VectorSample, 50UL>;

typedef struct CMFixedSizeQueue<CMAccessoryStepDetector::VectorSample, 50UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<CMAccessoryStepDetector::VectorSample, 50UL> fStorage;
} CMFixedSizeQueue<CMAccessoryStepDetector::VectorSample, 50UL>;

typedef struct CMQueueStorage<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> {
    char buffer;
} CMQueueStorage<CMAccessoryStepDetector::FaceRotationRateSample, 50UL>;

typedef struct CMFixedSizeQueue<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> fStorage;
} CMFixedSizeQueue<CMAccessoryStepDetector::FaceRotationRateSample, 50UL>;

typedef struct CMQueueStorage<float, 150UL> {
    char buffer;
} CMQueueStorage<float, 150UL>;

typedef struct CMFixedSizeQueue<float, 150UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<float, 150UL> fStorage;
} CMFixedSizeQueue<float, 150UL>;

typedef struct CMQueueStorage<float, 50UL> {
    char buffer;
} CMQueueStorage<float, 50UL>;

typedef struct CMFixedSizeQueue<float, 50UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<float, 50UL> fStorage;
} CMFixedSizeQueue<float, 50UL>;

typedef struct CMQueueStorage<double, 7UL> {
    char buffer;
} CMQueueStorage<double, 7UL>;

typedef struct CMFixedSizeQueue<double, 7UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<double, 7UL> fStorage;
} CMFixedSizeQueue<double, 7UL>;

typedef struct CMQueueStorage<CMVector<float, 3>, 7UL> {
    char buffer;
} CMQueueStorage<CMVector<float, 3>, 7UL>;

typedef struct CMFixedSizeQueue<CMVector<float, 3>, 7UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<CMVector<float, 3>, 7UL> fStorage;
} CMFixedSizeQueue<CMVector<float, 3>, 7UL>;

typedef struct AggAccelSample {
    CGFloat timestamp;
    CMVector<float, 3UL> aggAccel;
} AggAccelSample;

typedef struct CMQueueStorage<double, 3UL> {
    char buffer;
} CMQueueStorage<double, 3UL>;

typedef struct CMFixedSizeQueue<double, 3UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<double, 3UL> fStorage;
} CMFixedSizeQueue<double, 3UL>;

typedef struct StepModel {
    CGFloat timeSinceLastStepSecRatio;
    CGFloat impulseDurationSecRatio;
    CGFloat deltaInertialZVelRatio;
    CGFloat thetaRollFaceDegreesRatio;
    CGFloat thetaPitchFaceDegreesRatio;
    CGFloat horizontalDisplacementRatio;
    CGFloat peakinessRatio;
    CGFloat bobbinessRatio;
    CGFloat timeSinceLastStepSecEdge;
    CGFloat impulseDurationSecEdge;
    CGFloat deltaInertialZVelEdge;
    CGFloat thetaRollFaceDegreesEdge;
    CGFloat thetaPitchFaceDegreesEdge;
    CGFloat horizontalDisplacementEdge;
    CGFloat peakinessEdge;
    CGFloat bobbinessEdge;
    CGFloat ratios;
    CGFloat rightBinEdges;
} StepModel;

typedef struct CMSpatialLogger {
} // Error Processing Struct Fields

typedef struct CMAccessoryStepDetector {
    BOOL fDetectedSteps;
    BOOL fCandidateDetected;
    BOOL fNotifiedDetectedSteps;
    BOOL fLookingForFirstStep;
    CMFixedSizeQueue<CMAccessoryStepDetector::AggAccelSample, 50UL> fInertialAggAccelBuffer;
    CMFixedSizeQueue<CMAccessoryStepDetector::VectorSample, 50UL> fInertialAccelBuffer;
    CMFixedSizeQueue<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> fFaceRotationRateBuffer;
    CMFixedSizeQueue<float, 150UL> fAuxRotationRateNormBuffer;
    CMFixedSizeQueue<float, 50UL> fInertialAggForwardAccelBufferFaceFrame;
    CMFixedSizeQueue<float, 50UL> fYawRotationRateBuffer;
    CMFixedSizeQueue<double, 7UL> fSpatialSampleTimestampBuffer;
    CMFixedSizeQueue<CMVector<float, 3>, 7UL> fSpatialSampleAggAccelBuffer;
    CGFloat fCurrentPointTimestamp;
    CMVector<float, 3UL> fCurrentPointAggAccel;
    int fState;
    int fPreviousState;
    int fLastStateTransitionedFrom;
    AggAccelSample fCurrentUpSample;
    AggAccelSample fCurrentDownSample;
    CGFloat fLastEndImpulseTimestamp;
    CMFixedSizeQueue<double, 3UL> fEndImpulseTimestampHistory;
    CMFixedSizeQueue<double, 3UL> fStartImpulseTimestampHistory;
    CMOQuaternion fHeadsetOrientation;
    StepModel fStepModel;
    unk fCallback;
    void fCallbackInfo;
    CGFloat fLastNotifiedTimeSec;
    CMSpatialLogger fLogger;
} CMAccessoryStepDetector;

typedef struct CMAccessoryActivity {
    ActivityPacket fActivityPacket;
    BOOL fSitStandEnabled;
    unique_ptr<CMSitStandDetector, std::default_delete<CMSitStandDetector>> fSitStandDetector;
    CMAccessoryStepDetector fAccessoryStepDetector;
    Impulse fCurrStepImpulse;
    BOOL fHeadsetOrientationIsSet;
} CMAccessoryActivity;

typedef struct PdrResults {
    BOOL step;
    CGFloat startImpulse;
    CGFloat endImpulse;
    CMVector<double, 2UL> position;
    int stepsCount;
    float directionOfTravelDegrees;
    CGFloat speedMps;
    CMOQuaternion attitude;
} PdrResults;

typedef struct CMPdrMLModel {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMPdrMLModel *, std::default_delete<CMPdrMLModel>> {
    CMPdrMLModel __value_;
} __compressed_pair<CMPdrMLModel *, std::default_delete<CMPdrMLModel>>;

typedef struct unique_ptr<CMPdrMLModel, std::default_delete<CMPdrMLModel>> {
    __compressed_pair<CMPdrMLModel *, std::default_delete<CMPdrMLModel>> __ptr_;
} unique_ptr<CMPdrMLModel, std::default_delete<CMPdrMLModel>>;

typedef struct CMMotionContextSessionAnalyticsTracker {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMMotionContextSessionAnalyticsTracker *, std::default_delete<CMMotionContextSessionAnalyticsTracker>> {
    CMMotionContextSessionAnalyticsTracker __value_;
} __compressed_pair<CMMotionContextSessionAnalyticsTracker *, std::default_delete<CMMotionContextSessionAnalyticsTracker>>;

typedef struct unique_ptr<CMMotionContextSessionAnalyticsTracker, std::default_delete<CMMotionContextSessionAnalyticsTracker>> {
    __compressed_pair<CMMotionContextSessionAnalyticsTracker *, std::default_delete<CMMotionContextSessionAnalyticsTracker>> __ptr_;
} unique_ptr<CMMotionContextSessionAnalyticsTracker, std::default_delete<CMMotionContextSessionAnalyticsTracker>>;

typedef struct CLConnectionMessage {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<CLConnectionMessage> {
    CLConnectionMessage field0;
    __shared_weak_count field1;
} shared_ptr<CLConnectionMessage>;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CLSignificantElevation {
    int field0;
    unsigned char field1;
    CGFloat field2;
    CGFloat field3;
    unsigned int field4;
    unsigned int field5;
} CLSignificantElevation;

typedef struct CLElevationChangeEntry {
    CGFloat field0;
    CGFloat field1;
    unsigned int field2;
    unsigned int field3;
    int field4;
    CGFloat field5;
    int field6;
    int field7;
    float field8;
    unsigned char field9;
    unsigned short field10;
    float field11;
} CLElevationChangeEntry;

typedef struct CLWalkingSteadinessClassificationData {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    int field3;
} CLWalkingSteadinessClassificationData;

typedef struct Delegate {
} // Error Processing Struct Fields

typedef struct internal_state {
} // Error Processing Struct Fields

typedef struct z_stream_s {
    char * next_in;
    unsigned int avail_in;
    NSUInteger total_in;
    char * next_out;
    unsigned int avail_out;
    NSUInteger total_out;
    char * msg;
    internal_state state;
    unk zalloc;
    unk zfree;
    void opaque;
    int data_type;
    NSUInteger adler;
    NSUInteger reserved;
} z_stream_s;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct Reader {
    Delegate fDelegate;
    int fFd;
    NSUInteger fMappedSize;
    NSUInteger fMappedOffset;
    char * fMappedData;
    BOOL fMustScan;
    z_stream_s fZStream;
    vector<unsigned char, std::allocator<unsigned char>> fUncompressedSens;
    NSUInteger fSensRemaining;
    char * fSensData;
} Reader;

typedef struct MemoryDelegate {
    unk _vptr$Delegate;
    char * fBuffer;
    NSUInteger fLength;
} MemoryDelegate;

typedef struct ReaderIterator {
} // Error Processing Struct Fields

typedef struct CMGyro50 {
    float field0;
    float field1;
    float field2;
    float field3;
    NSUInteger field4;
} CMGyro50;

typedef struct AccelUnpacker {
    char * fData;
    unsigned int fBitsLeft;
    unsigned char fPartial;
    NSUInteger fTimestampLast;
    NSInteger fTimestampLastDelta;
    int fSampleLast;
} AccelUnpacker;

typedef struct GyroUnpacker {
    char * fData;
    unsigned int fBitsLeft;
    unsigned char fPartial;
    NSUInteger fTimestampLast;
    NSInteger fTimestampLastDelta;
    int fSampleLast;
} GyroUnpacker;

typedef struct PressureUnpacker {
    char * fData;
    unsigned int fBitsLeft;
    unsigned char fPartial;
    NSUInteger fTimestampLast;
    NSInteger fTimestampLastDelta;
    int fSampleLast;
} PressureUnpacker;

typedef struct GestureReport {
} // Error Processing Struct Fields

typedef struct CMWakeGestureVisitor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMWakeGestureVisitor *, std::default_delete<CMWakeGestureVisitor>> {
    CMWakeGestureVisitor __value_;
} __compressed_pair<CMWakeGestureVisitor *, std::default_delete<CMWakeGestureVisitor>>;

typedef struct unique_ptr<CMWakeGestureVisitor, std::default_delete<CMWakeGestureVisitor>> {
    __compressed_pair<CMWakeGestureVisitor *, std::default_delete<CMWakeGestureVisitor>> __ptr_;
} unique_ptr<CMWakeGestureVisitor, std::default_delete<CMWakeGestureVisitor>>;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct CMPressure {
    float field0;
    float field1;
    NSUInteger field2;
    float field3;
} CMPressure;

typedef struct CMGyro200 {
    float field0;
    float field1;
    float field2;
    float field3;
    NSUInteger field4;
} CMGyro200;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CLIspDataVisitor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLIspDataVisitor *, std::default_delete<CLIspDataVisitor>> {
    CLIspDataVisitor __value_;
} __compressed_pair<CLIspDataVisitor *, std::default_delete<CLIspDataVisitor>>;

typedef struct unique_ptr<CLIspDataVisitor, std::default_delete<CLIspDataVisitor>> {
    __compressed_pair<CLIspDataVisitor *, std::default_delete<CLIspDataVisitor>> __ptr_;
} unique_ptr<CLIspDataVisitor, std::default_delete<CLIspDataVisitor>>;

typedef struct CLDeviceMotionLiteService {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLDeviceMotionLiteService *, std::default_delete<CLDeviceMotionLiteService>> {
    CLDeviceMotionLiteService __value_;
} __compressed_pair<CLDeviceMotionLiteService *, std::default_delete<CLDeviceMotionLiteService>>;

typedef struct unique_ptr<CLDeviceMotionLiteService, std::default_delete<CLDeviceMotionLiteService>> {
    __compressed_pair<CLDeviceMotionLiteService *, std::default_delete<CLDeviceMotionLiteService>> __ptr_;
} unique_ptr<CLDeviceMotionLiteService, std::default_delete<CLDeviceMotionLiteService>>;

typedef struct CMMotionManagerStatsCollector {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMMotionManagerStatsCollector *, std::default_delete<CMMotionManagerStatsCollector>> {
    CMMotionManagerStatsCollector __value_;
} __compressed_pair<CMMotionManagerStatsCollector *, std::default_delete<CMMotionManagerStatsCollector>>;

typedef struct unique_ptr<CMMotionManagerStatsCollector, std::default_delete<CMMotionManagerStatsCollector>> {
    __compressed_pair<CMMotionManagerStatsCollector *, std::default_delete<CMMotionManagerStatsCollector>> __ptr_;
} unique_ptr<CMMotionManagerStatsCollector, std::default_delete<CMMotionManagerStatsCollector>>;

typedef struct LinearFit {
    float fSlope;
    float fIntercept;
} LinearFit;

typedef struct NonlinearGyroBiasFit {
    unsigned char fType;
    unsigned char fPadding;
    LinearFit fFits;
    float fTemperatures;
    float fOverlap;
    unsigned char fError;
} NonlinearGyroBiasFit;

typedef struct Temperature {
    CGFloat field0;
    float field1;
} Temperature;

typedef struct ListenerOrientation {
    CMOQuaternion field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
    BOOL field4;
} ListenerOrientation;

typedef struct AudioAccessorySample {
    ? auxDM;
    NSUInteger sensorTime;
    CGFloat timestamp;
    CGFloat arrivalTimestamp;
    CMVector<float, 3UL> filteredAcceleration;
    float quiescentNoise;
    int quiescentMode;
    unsigned int sequenceNumber;
    int sensorLocation;
    int timeSyncStatus;
    NSUInteger btcTimestamp;
    CGFloat sampleLatency;
} AudioAccessorySample;

typedef struct CMHeadTrackingService {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMHeadTrackingService *, std::default_delete<CMHeadTrackingService>> {
    CMHeadTrackingService __value_;
} __compressed_pair<CMHeadTrackingService *, std::default_delete<CMHeadTrackingService>>;

typedef struct unique_ptr<CMHeadTrackingService, std::default_delete<CMHeadTrackingService>> {
    __compressed_pair<CMHeadTrackingService *, std::default_delete<CMHeadTrackingService>> __ptr_;
} unique_ptr<CMHeadTrackingService, std::default_delete<CMHeadTrackingService>>;

typedef struct CMQueueStorage<double, 10UL> {
    char buffer;
} CMQueueStorage<double, 10UL>;

typedef struct CMFixedSizeQueue<double, 10UL> {
    ? fHeadAndSize;
    unsigned int fCapacity;
    char fBuffer;
    CMQueueStorage<double, 10UL> fStorage;
} CMFixedSizeQueue<double, 10UL>;

typedef struct UnTimesyncedAuxSampleHelper {
    unsigned int totalUnsyncedSamples;
    unsigned int totalUnsyncedOutlierSamples;
    CGFloat auxAndSrcSensorTimeOffset;
    CMFixedSizeQueue<double, 10UL> auxAndSrcSensorTimeOffsetBuffer;
} UnTimesyncedAuxSampleHelper;

typedef struct CMMediaSessionAnalyticsTracker {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CMMediaSessionAnalyticsTracker *, std::default_delete<CMMediaSessionAnalyticsTracker>> {
    CMMediaSessionAnalyticsTracker __value_;
} __compressed_pair<CMMediaSessionAnalyticsTracker *, std::default_delete<CMMediaSessionAnalyticsTracker>>;

typedef struct unique_ptr<CMMediaSessionAnalyticsTracker, std::default_delete<CMMediaSessionAnalyticsTracker>> {
    __compressed_pair<CMMediaSessionAnalyticsTracker *, std::default_delete<CMMediaSessionAnalyticsTracker>> __ptr_;
} unique_ptr<CMMediaSessionAnalyticsTracker, std::default_delete<CMMediaSessionAnalyticsTracker>>;

typedef struct CLSettings {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLSettings *, std::default_delete<CLSettings>> {
    CLSettings __value_;
} __compressed_pair<CLSettings *, std::default_delete<CLSettings>>;

typedef struct unique_ptr<CLSettings, std::default_delete<CLSettings>> {
    __compressed_pair<CLSettings *, std::default_delete<CLSettings>> __ptr_;
} unique_ptr<CLSettings, std::default_delete<CLSettings>>;

typedef struct __compressed_pair<CMSpatialLogger *, std::default_delete<CMSpatialLogger>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<CMSpatialLogger, std::default_delete<CMSpatialLogger>> {
    __compressed_pair<CMSpatialLogger *, std::default_delete<CMSpatialLogger>> __ptr_;
} unique_ptr<CMSpatialLogger, std::default_delete<CMSpatialLogger>>;

typedef struct VO2MaxInput {
    NSUInteger field0;
    unsigned char field1;
    float field2;
    CGFloat field3;
    float field4;
    float field5;
    CGFloat field6;
    int field7;
    CGFloat field8;
    BOOL field9;
    BOOL field10;
    int field11;
    NSInteger field12;
    CGFloat field13;
    CGFloat field14;
    BOOL field15;
} VO2MaxInput;

typedef struct CLSWOLFSummary {
    CGFloat field0;
    CGFloat field1;
    unsigned char field2;
    unsigned char field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
} CLSWOLFSummary;

typedef struct CLMotionActivity {
    int type;
    int confidence;
    int source;
    int mountedState;
    int mountedConfidence;
    BOOL isStanding;
    float tilt;
    CGFloat timestamp;
    BOOL isVehicleConnected;
    int exitState;
    CGFloat estExitTime;
    CGFloat startTime;
    int rawType;
    int rawConfidence;
    ? vehicularFlags;
    int vehicularConfidence;
    float drivingStowedLikelihoodSum;
    float drivingArmLikelihoodSum;
    float ssLikelihoodSum;
    int workoutDetectionType;
    CGFloat workoutDetectionTime;
    NSUInteger workoutEscalationTime;
    int typeYouth;
} CLMotionActivity;

typedef struct CLNotifierBase {
    unk field0;
} CLNotifierBase;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, int>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, int>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, int>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, int>>>;

typedef struct map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> {
    __tree<std::__value_type<unsigned long, int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, int>>> __tree_;
} map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>>;

typedef struct CLVO2MaxClassificationData {
    int field0;
    int field1;
    int field2;
    int field3;
    CGFloat field4;
    CGFloat field5;
} CLVO2MaxClassificationData;

typedef struct CLVO2MaxClassifier {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLVO2MaxClassifier *, std::default_delete<CLVO2MaxClassifier>> {
    CLVO2MaxClassifier __value_;
} __compressed_pair<CLVO2MaxClassifier *, std::default_delete<CLVO2MaxClassifier>>;

typedef struct unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>> {
    __compressed_pair<CLVO2MaxClassifier *, std::default_delete<CLVO2MaxClassifier>> __ptr_;
} unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>>;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> {
    __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> __ptr_;
} unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>>;

typedef struct CLSpringTrackerEntry {
    NSUInteger field0;
    unsigned char field1;
    unsigned char field2;
    CGFloat field3;
    NSInteger field4;
} CLSpringTrackerEntry;

typedef struct CLSkiEntry {
    NSUInteger field0;
    unsigned char field1;
    unsigned char field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
} CLSkiEntry;

typedef struct ParkinsonsResult {
    CGFloat field0;
    CGFloat field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
} ParkinsonsResult;

typedef struct CMMagicMountStateStruct {
    CGFloat timestamp;
    BOOL mounted;
} CMMagicMountStateStruct;

typedef struct WombatState {
    CGFloat field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} WombatState;

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct CMSuppressionEventStruct {
    CGFloat timestamp;
    NSInteger type;
    NSUInteger reason;
} CMSuppressionEventStruct;

typedef struct Suppress {
    unsigned char fType;
    BOOL fShouldSuppress;
    BOOL fAPAwake;
    unsigned char fCurrentState;
    unsigned char fOrientation;
    unsigned char fMotionType;
    float fLux;
    float fPocketProbability;
} Suppress;

typedef struct ViewObstructedState {
    unsigned char fType;
    Suppress fSuppress;
    float fMeanProbabilities;
} ViewObstructedState;

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

typedef struct CLWorkoutMets {
    CGFloat field0;
    CGFloat field1;
    unsigned char field2;
    unsigned char field3;
    CGFloat field4;
} CLWorkoutMets;

typedef struct CLStrideCalEntry {
    int recordId;
    CGFloat startTime;
    unsigned int pacebin;
    CGFloat kvalue;
    CGFloat kvalueTrack;
    CGFloat score;
    CGFloat endTime;
    CGFloat distance;
    int steps;
    int session;
    CGFloat speed;
    CGFloat percentGrade;
    int gpsSource;
    CGFloat timestamp;
    CGFloat runningFormStrideLength;
    int runningFormStrideLengthMetrics;
} CLStrideCalEntry;

typedef struct CLMetMinute {
    CGFloat field0;
    CGFloat field1;
} CLMetMinute;

typedef struct CLSwimEntry {
    NSUInteger field0;
    unsigned char field1;
    unsigned char field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    int field9;
    int field10;
    int field11;
    int field12;
    float field13;
    float field14;
    float field15;
    int field16;
    int field17;
    CGFloat field18;
    CGFloat field19;
    int field20;
} CLSwimEntry;

typedef struct _CLFitnessMachineData {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
} _CLFitnessMachineData;

typedef struct CMAccel100 {
    float field0;
    float field1;
    float field2;
    NSUInteger field3;
} CMAccel100;

typedef struct CLBodyMetrics {
    int field0;
    int field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    int field10;
    float field11;
    BOOL field12;
    float field13;
    BOOL field14;
    BOOL field15;
    BOOL field16;
} CLBodyMetrics;

typedef struct CLNotifierClientBase {
    unk field0;
} CLNotifierClientBase;

