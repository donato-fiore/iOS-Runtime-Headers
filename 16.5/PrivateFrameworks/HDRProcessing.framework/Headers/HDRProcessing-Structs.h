typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct ? {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct RgbHistogram_t {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} RgbHistogram_t;

typedef struct ToneCurve_Control {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct DMAConfig_t {
    unsigned char inputBitDepth;
    int inputColorSpace;
    int inputChromaFmt;
    BOOL fp16RangeadjustEnable;
    float fp16Mult;
    float fp16Offset;
    unsigned char outputBitDepth;
    int outputColorSpace;
} DMAConfig_t;

typedef struct Reshaping_t {
    unsigned short mode;
    unsigned short reshapeData;
} Reshaping_t;

typedef struct ChromaScaling_t {
    unsigned short hscaleMode;
    unsigned char hscaleNumTaps;
    float hscaleCoefficents;
    unsigned short vscaleMode;
    unsigned char vscaleNumTaps;
    float vscaleCoefficents;
} ChromaScaling_t;

typedef struct MSRCSC_t {
    unsigned int precision;
    float inputMinClip;
    float inputMaxClip;
    float offsetIn;
    int coeff;
    float offsetOut;
    float outputMinClip;
    float outputMaxClip;
} MSRCSC_t;

typedef struct SourceToRGB_t {
    unsigned int mode;
    MSRCSC_t src2rgb;
} SourceToRGB_t;

typedef struct Linearization_t {
    unsigned int mode;
    unsigned int deGammaLUT;
} Linearization_t;

typedef struct ColorspaceAToCommonColorspace_t {
    unsigned int mode;
    MSRCSC_t a2c;
} ColorspaceAToCommonColorspace_t;

typedef struct ChromaticAdaptation_t {
} // Error Processing Struct Fields

typedef struct CommonColorspaceToColorspaceB_t {
    unsigned int field0;
    MSRCSC_t field1;
} CommonColorspaceToColorspaceB_t;

typedef struct GammaEncoding_t {
    unsigned int field0;
    float field1;
} GammaEncoding_t;

typedef struct RGBtoYCC_t {
    unsigned int field0;
    MSRCSC_t field1;
} RGBtoYCC_t;

typedef struct ProcessingControlV0_t {
} // Error Processing Struct Fields

typedef struct HDRFrameProcessingControl_t {
    unk ;
    unsigned int all;
    ProcessingControlV0_t processingControl;
} HDRFrameProcessingControl_t;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct EDRMetaData_RBSP {
} // Error Processing Struct Fields

typedef struct HDR10PlusMetaData_RBSP {
    unk field0;
    NSUInteger field1;
    int field2;
    unsigned int field3;
    unsigned int field4;
    char * field5;
    char * field6;
    char * field7;
    unsigned char field8;
    unsigned char field9;
    unsigned int field10;
    char * field11;
    char * field12;
    int field13;
    unsigned char field14;
    unsigned char field15;
    unsigned char field16;
    unsigned short field17;
    unsigned short field18;
    unsigned char field19;
    unsigned char field20;
    unsigned char field21;
    unsigned int field22;
    BOOL field23;
    unsigned int field24;
    unsigned int field25;
    unsigned char field26;
    unsigned char field27;
    unsigned int field28;
    unsigned short field29;
    BOOL field30;
    BOOL field31;
    unsigned short field32;
    unsigned short field33;
    unsigned char field34;
    unsigned short field35;
    BOOL field36;
    unsigned char field37;
} HDR10PlusMetaData_RBSP;

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct __CFError {
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

typedef struct _DpcParam {
    float alpha;
    float alphaPrime;
    float rangeMax;
    float gain;
    BOOL on;
} _DpcParam;

typedef struct MSRHDRContext {
    unsigned int contentType;
    unsigned int displayType;
    int processingType;
    unsigned int operation;
    unsigned int convertType;
    unsigned int inputFormatRaw;
    unsigned int outputFormatRaw;
    unsigned int inputFormat;
    unsigned int outputFormat;
    unsigned int inputColorSpace;
    unsigned int outputColorSpace;
    unsigned int inputTransferFunction;
    unsigned int outputTransferFunction;
    NSUInteger inputWidth;
    NSUInteger inputHeight;
    NSUInteger outputWidth;
    NSUInteger outputHeight;
    BOOL enableReshaping;
    BOOL enableToneMapping;
    BOOL enableConverting;
    _DpcParam dpcParam;
    unsigned int originalInputTransferFunction;
} MSRHDRContext;

typedef struct _splCurveParam {
    unsigned short field0;
    float field1;
    float field2;
    float field3;
} _splCurveParam;

typedef struct _ebzCurveParam {
    unsigned short field0;
    float field1;
    float field2;
    float field3;
    unsigned short field4;
    float field5;
} _ebzCurveParam;

typedef struct _doviCurveParam {
    float field0;
    float field1;
    float field2;
    float field3;
} _doviCurveParam;

typedef struct _TMCurveParam {
    int field0;
    unk field1;
    _splCurveParam field2;
    _ebzCurveParam field3;
    _doviCurveParam field4;
} _TMCurveParam;

typedef struct _HDR10TMParam {
    BOOL field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
    float field20;
    _TMCurveParam field21;
    float field22;
    float field23;
    float field24;
    float field25;
    int field26;
} _HDR10TMParam;

typedef struct _EdrAdaptationParam {
    BOOL field0;
    unsigned short field1;
    float field2;
    float field3;
    float field4;
    BOOL field5;
} _EdrAdaptationParam;

typedef struct _AmbAdaptationParam {
    BOOL field0;
    unsigned short field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    BOOL field7;
} _AmbAdaptationParam;

typedef struct MSRHcuHeader_t {
    unsigned int field0;
    unsigned int field1;
} MSRHcuHeader_t;

typedef struct MSRHcuEntryHeader_t {
    unsigned int field0;
    unsigned int field1;
} MSRHcuEntryHeader_t;

typedef struct _DoViTMParam {
    BOOL field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
    float field20;
    float field21;
    float field22;
    float field23;
    float field24;
    float field25;
    float field26;
    float field27;
    float field28;
    float field29;
    float field30;
    float field31;
    float field32;
    float field33;
    int field34;
    float field35;
} _DoViTMParam;

