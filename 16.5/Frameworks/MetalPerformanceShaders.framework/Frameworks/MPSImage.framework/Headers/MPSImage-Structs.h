typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSInteger x;
    NSInteger y;
    NSInteger z;
} ?;

typedef struct MPSKernelInfo {
} // Error Processing Struct Fields

typedef struct MPSDeviceSpecificInfo {
    MPSKernelInfo field0;
    unk field1;
    NSUInteger field2;
} MPSDeviceSpecificInfo;

typedef struct MPSLibraryInfo {
    int field0;
    unsigned int field1;
    char * field2;
    unk field3;
    MPSDeviceSpecificInfo field4;
    MPSDeviceSpecificInfo field5;
    MPSDeviceSpecificInfo field6;
    MPSDeviceSpecificInfo field7;
    MPSDeviceSpecificInfo field8;
    MPSDeviceSpecificInfo field9;
    MPSDeviceSpecificInfo field10;
    MPSDeviceSpecificInfo field11;
    MPSDeviceSpecificInfo field12;
    MPSDeviceSpecificInfo field13;
    MPSDeviceSpecificInfo field14;
    MPSDeviceSpecificInfo field15;
    MPSDeviceSpecificInfo field16;
    MPSDeviceSpecificInfo field17;
    MPSDeviceSpecificInfo field18;
    MPSDeviceSpecificInfo field19;
    MPSDeviceSpecificInfo field20;
    MPSDeviceSpecificInfo field21;
    MPSDeviceSpecificInfo field22;
    MPSDeviceSpecificInfo field23;
    MPSDeviceSpecificInfo field24;
    MPSDeviceSpecificInfo field25;
    MPSDeviceSpecificInfo field26;
    MPSDeviceSpecificInfo field27;
    MPSDeviceSpecificInfo field28;
    MPSDeviceSpecificInfo field29;
    MPSDeviceSpecificInfo field30;
    MPSDeviceSpecificInfo field31;
    MPSDeviceSpecificInfo field32;
    MPSDeviceSpecificInfo field33;
    MPSDeviceSpecificInfo field34;
    MPSDeviceSpecificInfo field35;
    MPSDeviceSpecificInfo field36;
    MPSDeviceSpecificInfo field37;
    MPSDeviceSpecificInfo field38;
    MPSDeviceSpecificInfo field39;
    MPSDeviceSpecificInfo field40;
    MPSDeviceSpecificInfo field41;
    MPSDeviceSpecificInfo field42;
    MPSDeviceSpecificInfo field43;
} MPSLibraryInfo;

typedef struct MPSOrigin {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} MPSOrigin;

typedef struct MPSSize {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} MPSSize;

typedef struct MPSRegion {
    MPSOrigin field0;
    MPSSize field1;
} MPSRegion;

typedef struct AutotuningState {
    BOOL enabled;
    id copyConfigs;
    id NSDictionary;
    NSUInteger upsampleConfigs;
    NSUInteger NSDictionary;
} AutotuningState;

typedef struct HighlevelState {
    NSUInteger filterHeight;
    NSUInteger filterWidth;
    id weights;
    BOOL NSData;
    float isPyramidAdd;
    float laplacianBias;
} HighlevelState;

typedef struct LinearScale<float> {
    float offset;
    float factor;
} LinearScale<float>;

typedef struct LinearScale<__fp16> {
} // Error Processing Struct Fields

typedef struct DerivedState {
    NSUInteger padHeight;
    NSUInteger padWidth;
    id h_WeightsRawFull;
    id NSMutableData;
    id h_WeightsRawHalf;
    id NSMutableData;
    LinearScale<float> d_WeightsRawFull;
    LinearScale<__fp16> <MTLBuffer>;
} DerivedState;

typedef struct MPSScaleTransform {
    CGFloat scaleX;
    CGFloat scaleY;
    CGFloat translateX;
    CGFloat translateY;
} MPSScaleTransform;

typedef struct RLERow {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
} RLERow;

typedef struct CGColorConversionInfo {
} // Error Processing Struct Fields

typedef struct ConversionInfo_s {
    float bgColor;
    unsigned int nData;
    unsigned int nFData;
    int nStages;
    int nMatrices;
    int nLuts;
    int nTRCs;
    int nLuminanceScales;
    int nCHIn;
    int nCHOut;
    int containsATableTRC;
    unsigned int stagesClampFlags;
    unsigned int trcFCFlags;
    unsigned int stageTypesFC;
} ConversionInfo_s;

typedef struct StageData_s {
} // Error Processing Struct Fields

typedef struct ConversionInfoPtrs_s {
    StageData_s stages;
    int data;
    float fData;
    id texLUTs;
    id trcLUTs;
    id dummyLUTs;
    id devFloatData;
    NSUInteger <MTLBuffer>;
} ConversionInfoPtrs_s;

