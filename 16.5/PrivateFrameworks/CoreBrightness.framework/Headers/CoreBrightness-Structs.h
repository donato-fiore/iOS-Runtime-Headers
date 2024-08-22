typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CustomCurve {
    float _E;
    float _L;
    int size;
} CustomCurve;

typedef struct __DisplayFactorFade {
    CGFloat period;
    CGFloat startTime;
    float Ftarget;
    float Fcurrent;
    float Fstart;
    float coeff;
    unk rampDoneCallback;
    void refcon;
} __DisplayFactorFade;

typedef struct CBAABParams {
    float e0a;
    float e0b;
    float e1;
    float e2;
    float l0a;
    float l0b;
    float l1;
    float l2;
    float thirdSlope;
} CBAABParams;

typedef struct CBSliderCommitInfo {
    NSInteger timestamp;
    NSInteger localTimestamp;
    int trustedLux;
    float frontLux;
    float rearLux;
    BOOL rearLuxInUse;
    float nits;
    float slider;
    float apce;
    float delayedAPCE;
    int delayedAPCEStatus;
    BOOL autobrightnessEnabled;
    BOOL ecoModeEnabled;
    float ecoModeFactor;
    CBAABParams aabParams;
    BOOL aabParamsUpdateOnly;
    BOOL cpmsMitigationLimitingBrightness;
    BOOL touchMitigationTriggered;
    BOOL proxMitigationTriggered;
    float auroraFactor;
    float edrHeadroom;
    float colorAdaptationStrength;
    int colorAdaptationMode;
    BOOL darkThemeApplied;
    BOOL landscapeOrientation;
} CBSliderCommitInfo;

typedef struct ? {
    unsigned int sbim;
    NSUInteger duration_us;
} ?;

typedef struct BlueReductionReport {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    BOOL field3;
    float field4;
} BlueReductionReport;

typedef struct ColorReport {
    ? field0;
    ? field1;
    ? field2;
    BlueReductionReport field3;
    ? field4;
    ? field5;
    int field6;
} ColorReport;

typedef struct IOMFBShortTermBIM {
    unsigned int version;
    unk ;
    ? v1;
} IOMFBShortTermBIM;

typedef struct __IOMobileFramebuffer {
} // Error Processing Struct Fields

typedef struct MitigationState {
    int stage;
    BOOL violation;
    unsigned int sbim_reset_frequency;
    unsigned int sbim_timer_interval;
    unsigned int mitigation_timer_interval;
    unsigned int sbim_size;
    float delta_factor;
    float minutes_per_stop_mitigate;
    float minutes_per_stop_recovery;
    int sbim_above_max;
    int sbim_sustain_max;
    int sbim_above_num;
    int sbim_sustain_num;
    CGFloat lastStateUpdate_;
    unsigned int sbim_read_stage;
    IOMFBShortTermBIM lastSBIMBlock_;
    float scalingFactor;
} MitigationState;

typedef struct __Display {
} // Error Processing Struct Fields

typedef struct recoverycurve_t {
    float panelNits;
    float apce;
    NSUInteger size;
} recoverycurve_t;

typedef struct NMFactorState {
    CGFloat rampStartTime;
    float factor;
    float target;
    float start;
    float rampLength;
} NMFactorState;

typedef struct __CFTimeZone {
} // Error Processing Struct Fields

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct PeakAPCE {
    float current;
    float cap;
    float timeTaperConstant;
    float windowSize;
    float windowStart;
    id recoveryTimer;
    float NSObject<OS_dispatch_source>;
    float recoveryMultiplier;
} PeakAPCE;

typedef struct RTPLCCapApplied {
    BOOL previous;
    float count;
    float triggerCount;
} RTPLCCapApplied;

typedef struct __IOHIDServiceClient {
} // Error Processing Struct Fields

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct Ramp {
    float start;
    float target;
    float current;
    CGFloat startTime;
    CGFloat duration;
} Ramp;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct ColorEffects {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct TrackedState {
    BOOL darkThemeApplied;
    BOOL landscapeOrientation;
    BOOL autobrightnessEnabled;
    BOOL ecoModeEnabled;
} TrackedState;

typedef struct array<CBSliderCommitInfo, 100UL> {
    CBSliderCommitInfo __elems_;
} array<CBSliderCommitInfo, 100UL>;

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct __IOHIDDevice {
} // Error Processing Struct Fields

typedef struct __IOHIDElement {
} // Error Processing Struct Fields

typedef struct APDSLuxInfo {
    float luxSamples;
    float gains;
    NSUInteger absoluteTime;
    char * coexFlags;
    int error;
    unsigned char numSamples;
} APDSLuxInfo;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

