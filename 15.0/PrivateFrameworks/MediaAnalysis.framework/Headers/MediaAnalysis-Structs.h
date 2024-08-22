typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CLLocationCoordinate2D {
    CGFloat field0;
    CGFloat field1;
} CLLocationCoordinate2D;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void mData;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int mNumberBuffers;
    AudioBuffer mBuffers;
} AudioBufferList;

typedef struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat mSampleTime;
    NSUInteger mHostTime;
    CGFloat mRateScalar;
    NSUInteger mWordClockTime;
    SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
} AudioTimeStamp;

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

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct __compressed_pair<float **, std::allocator<float *>> {
    float __value_;
} __compressed_pair<float **, std::allocator<float *>>;

typedef struct vector<float *, std::allocator<float *>> {
    float __begin_;
    float __end_;
    __compressed_pair<float **, std::allocator<float *>> __end_cap_;
} vector<float *, std::allocator<float *>>;

typedef struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> {
} // Error Processing Struct Fields

typedef struct CF<opaqueCMSampleBuffer *> {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct DSPSplitComplex {
    float realp;
    float imagp;
} DSPSplitComplex;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct MotionVector {
} // Error Processing Struct Fields

typedef struct EncodeStats {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct FrameBuffer {
    int frame_count_;
    Frame buffer_;
} FrameBuffer;

typedef struct MotionFilter {
    FrameBuffer field0;
    BOOL field1;
    BOOL field2;
} MotionFilter;

typedef struct MetaDataAnalysis {
} // Error Processing Struct Fields

typedef struct IrisAnalysis {
} // Error Processing Struct Fields

typedef struct Translation {
    float x_;
    float y_;
    float z_;
} Translation;

typedef struct Vector<ma::Object *> {
} // Error Processing Struct Fields

typedef struct MotionResult {
} // Error Processing Struct Fields

typedef struct Histogram {
    float extremities_;
    float overexposes_;
    int histogram_;
    int moments_hist_;
} Histogram;

typedef struct Frame {
    int frame_idx_;
    ? timestamp_;
    ? duration_;
    Translation ave_motion_;
    Translation org_motion_;
    float quality_score_;
    NSUInteger distortion_;
    float distortion_norm_;
    Translation motion_change_;
    unsigned int compressed_bytes_;
    BOOL blur_;
    Translation acc_var_;
    float texture_;
    MotionResult motion_result_;
    float flow_;
    float interestingness_;
    float obstruction_;
    float colorfulness_score_;
    Histogram histogram_;
} Frame;

typedef struct Kernel {
    float field0;
    NSUInteger field1;
    NSUInteger field2;
} Kernel;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct CMPhotoDecompressionSession {
} // Error Processing Struct Fields

typedef struct CF<__CVBuffer *> {
} // Error Processing Struct Fields

typedef struct CF<__CVPixelBufferPool *> {
} // Error Processing Struct Fields

typedef struct CF<OpaqueVTPixelTransferSession *> {
} // Error Processing Struct Fields

typedef struct EncodeStatsHW {
} // Error Processing Struct Fields

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct Scaler {
} // Error Processing Struct Fields

typedef struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> {
} // Error Processing Struct Fields

typedef struct layout<double, 6, 1, dlib::memory_manager_stateless_kernel_1<char>, 1> {
    CGFloat field0;
} layout<double, 6, 1, dlib::memory_manager_stateless_kernel_1<char>, 1>;

typedef struct matrix<double, 6, 1, dlib::memory_manager_stateless_kernel_1<char>, dlib::row_major_layout> {
    layout<double, 6, 1, dlib::memory_manager_stateless_kernel_1<char>, 1> field0;
} matrix<double, 6, 1, dlib::memory_manager_stateless_kernel_1<char>, dlib::row_major_layout>;

typedef struct HinkleyStats {
    float upper_;
    float lower_;
    float max_;
    float min_;
} HinkleyStats;

typedef struct HinkleyDetector {
    float sensitivity_;
    float threshold_;
    int min_length_;
    HinkleyStats stats_;
} HinkleyDetector;

typedef struct Rotator {
} // Error Processing Struct Fields

typedef struct OpaqueFigAsset {
} // Error Processing Struct Fields

typedef struct OpaqueFigPlaybackItem {
} // Error Processing Struct Fields

typedef struct OpaqueFigFormatReader {
} // Error Processing Struct Fields

typedef struct OpaqueFigMutableComposition {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __SCNetworkReachability {
} // Error Processing Struct Fields

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct DspLibBiquad {
} // Error Processing Struct Fields

typedef struct LkFsMeasure {
} // Error Processing Struct Fields

typedef struct CAStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} CAStreamBasicDescription;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct AUOutputBL {
} // Error Processing Struct Fields

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct CF<const opaqueCMFormatDescription *> {
    opaqueCMFormatDescription value_;
} CF<const opaqueCMFormatDescription *>;

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct ZPoint {
} // Error Processing Struct Fields

typedef struct RegressionTree {
} // Error Processing Struct Fields

typedef struct LandmarkDetector {
    int field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    BOOL field7;
    float field8;
    float field9;
    float field10;
    int field11;
    ZPoint field12;
    RegressionTree field13;
    unk field14;
} LandmarkDetector;

typedef struct Matrix<float, 12, 1, false> {
    float m_data;
} Matrix<float, 12, 1, false>;

typedef struct Matrix<float, 12, 12, false> {
    float m_data;
} Matrix<float, 12, 12, false>;

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct FigLivePhotoDetectedFaceV1Struct {
    NSInteger field0;
    float field1;
    float field2;
    float field3;
    float field4;
    int field5;
    short field6;
    unsigned short field7;
} FigLivePhotoDetectedFaceV1Struct;

typedef struct FigLivePhotoMetadataV1Struct {
    float field0;
    NSInteger field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    char field8;
    char field9;
    unsigned short field10;
    unsigned int field11;
    FigLivePhotoDetectedFaceV1Struct field12;
} FigLivePhotoMetadataV1Struct;

typedef struct FigLivePhotoMetadata {
    unsigned int field0;
    FigLivePhotoMetadataV1Struct field1;
} FigLivePhotoMetadata;

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

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

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

