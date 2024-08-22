typedef struct UnsignedWide {
    unsigned int field0;
    unsigned int field1;
} UnsignedWide;

typedef struct ? {
    int type;
    int pin;
    int halogenResult;
    CGFloat voltageGainCorrection;
    CGFloat currentGainCorrection;
    CGFloat currentPhaseCompensation;
    CGFloat calVoltageSNR;
    CGFloat calCurrentSNR;
    CGFloat calVoltageAmplitude;
    CGFloat calCurrentAmplitude;
    CGFloat goertzelImpedance;
    CGFloat goertzelPhase;
    CGFloat compensatedImpedance;
    CGFloat compensatedPhase;
    CGFloat resistanceInOhms;
    CGFloat capacitanceInNanoF;
    CGFloat measurementVoltageSNR;
    CGFloat measurementCurrentSNR;
    CGFloat measurementVoltageAmplitude;
    CGFloat measurementCurrentAmplitude;
    CGFloat measurementVoltagePhase;
    CGFloat measurementCurrentPhase;
    CGFloat measurementLoadImpedanceMagnitude;
    CGFloat measurementLoadImpedancePhase;
} ?;

typedef struct DockState {
    int field0;
    UnsignedWide field1;
    UnsignedWide field2;
    NSUInteger field3;
    unsigned char field4;
    NSUInteger field5;
    unsigned char field6;
    NSUInteger field7;
    NSUInteger field8;
    BOOL field9;
    BOOL field10;
    CGFloat field11;
    CGFloat field12;
    BOOL field13;
    BOOL field14;
    id field15;
    ? field16;
    unsigned int field17;
    unsigned int field18;
    BOOL field19;
} DockState;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct SMPTETime {
    short field0;
    short field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    short field5;
    short field6;
    short field7;
    short field8;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat field0;
    NSUInteger field1;
    CGFloat field2;
    NSUInteger field3;
    SMPTETime field4;
    unsigned int field5;
    unsigned int field6;
} AudioTimeStamp;

typedef struct AudioBuffer {
    unsigned int field0;
    unsigned int field1;
    void field2;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int field0;
    AudioBuffer field1;
} AudioBufferList;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct OpaqueFFTSetupD {
} // Error Processing Struct Fields

