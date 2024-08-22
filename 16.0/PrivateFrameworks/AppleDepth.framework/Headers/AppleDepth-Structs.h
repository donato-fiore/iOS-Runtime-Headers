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

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger scales;
    id nwarpings;
    BOOL NSMutableArray;
    int useNonLocalRegularization;
    int nlreg_radius;
    float nlreg_padding;
    float nlreg_sigma_l;
    float nlreg_sigma_c;
} ?;

typedef struct CalModel {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} CalModel;

typedef struct DistortionModel {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} DistortionModel;

typedef struct AdaptiveCorrectionStatus {
    int field0;
    BOOL field1;
    CalModel field2;
    int field3;
    BOOL field4;
    BOOL field5;
    CalModel field6;
    CGFloat field7;
    int field8;
    BOOL field9;
    CGFloat field10;
    CalModel field11;
    BOOL field12;
    int field13;
    BOOL field14;
    CalModel field15;
    CGFloat field16;
    int field17;
    BOOL field18;
    CGFloat field19;
    CalModel field20;
    BOOL field21;
    DistortionModel field22;
    DistortionModel field23;
    int field24;
    BOOL field25;
    CGFloat field26;
    int field27;
    BOOL field28;
    CGFloat field29;
    CalModel field30;
    DistortionModel field31;
    DistortionModel field32;
    BOOL field33;
} AdaptiveCorrectionStatus;

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
} AdaptiveCorrectionConfig;

typedef struct AdaptiveCorrection {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct PixelBufferUtilsSession {
} // Error Processing Struct Fields

typedef struct VZLogger {
} // Error Processing Struct Fields

typedef struct VZDestination {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> __begin_;
} vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>;

