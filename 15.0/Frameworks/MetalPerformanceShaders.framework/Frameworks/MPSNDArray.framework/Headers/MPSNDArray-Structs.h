typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSInteger dimensions;
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
} MPSLibraryInfo;

typedef struct MPSNDArrayConv3dOffsets_s {
    NSInteger offsets;
} MPSNDArrayConv3dOffsets_s;

typedef struct MPSNDArrayConv3dSizes_s {
    NSUInteger sizes;
} MPSNDArrayConv3dSizes_s;

typedef struct MPSNDArrayPaddingSize {
    NSUInteger paddingSize;
} MPSNDArrayPaddingSize;

typedef struct MPSNDArrayConvolutionSizes {
    NSUInteger size;
} MPSNDArrayConvolutionSizes;

typedef struct MPSPluginNDArrayConvolutionSizes {
    NSUInteger size;
} MPSPluginNDArrayConvolutionSizes;

typedef struct MPSScaleTransform {
    CGFloat scaleX;
    CGFloat scaleY;
    CGFloat translateX;
    CGFloat translateY;
} MPSScaleTransform;

typedef struct MPSStateTextureInfo {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
} MPSStateTextureInfo;

typedef struct NDArraySrcInfo {
    NSUInteger field0;
} NDArraySrcInfo;

typedef struct MPSNDArrayConvolutionOffsets {
    NSInteger offset;
} MPSNDArrayConvolutionOffsets;

typedef struct MPSNDArrayDataTensorDescriptor {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned int field5;
} MPSNDArrayDataTensorDescriptor;

typedef struct MPSNDArrayWeightsTensorDescriptor {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned int field5;
} MPSNDArrayWeightsTensorDescriptor;

typedef struct MPSNDArrayStencilOffsets_s {
    NSInteger offsets;
} MPSNDArrayStencilOffsets_s;

typedef struct MPSNDArrayStencilSizes_s {
    NSUInteger sizes;
} MPSNDArrayStencilSizes_s;

typedef struct MPSNDArrayPoolingSizes_s {
    NSUInteger sizes;
} MPSNDArrayPoolingSizes_s;

typedef struct MPSNDArrayPoolingOffsets_s {
    NSInteger offsets;
} MPSNDArrayPoolingOffsets_s;

