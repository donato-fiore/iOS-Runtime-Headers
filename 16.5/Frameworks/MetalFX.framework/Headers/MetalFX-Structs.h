typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct ? {
} // Error Processing Struct Fields

typedef struct BRNetDescriptor {
    int version;
    unsigned int image_width;
    unsigned int image_height;
    unsigned int input_width;
    unsigned int input_height;
    unsigned int input_channels;
    unsigned int input_unshuffle_ratio;
    unsigned int unshuffle_width;
    unsigned int unshuffle_height;
    unsigned int unshuffle_channels;
    unsigned int output_shuffle_ratio;
    unsigned int output_width;
    unsigned int output_height;
    unsigned int output_channels;
    unsigned int up_channels;
    unsigned int layers_channels;
    BOOL atrous_filter;
    BOOL quarter_res;
} BRNetDescriptor;

typedef struct MPSGraphMPSGraphExecutableWrapper {
    id _graph;
    id MPSGraph;
    id _graphExecutable;
    id MPSGraphExecutable;
    BRNetDescriptor _input_Tensor;
} MPSGraphMPSGraphExecutableWrapper;

typedef struct BRNet_v3_Filter {
    int field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    int field7;
    int field8;
    int field9;
    int field10;
    unsigned short field11;
    unsigned short field12;
    BOOL field13;
    BOOL field14;
    int field15;
    id field16;
    id field17;
    id field18;
    id field19;
    id field20;
    id field21;
    id field22;
    id field23;
    id field24;
    unsigned char field25;
    id field26;
    id field27;
    id field28;
    id field29;
    id field30;
    unsigned char field31;
    id field32;
    id field33;
    id field34;
    id field35;
    id field36;
    id field37;
    id field38;
    id field39;
    id field40;
    id field41;
    id field42;
    id field43;
    id field44;
    id field45;
    id field46;
    id field47;
    id field48;
    id field49;
    id field50;
    id field51;
    id field52;
    id field53;
    id field54;
    id field55;
    id field56;
    id field57;
    id field58;
    id field59;
    id field60;
    id field61;
    id field62;
    id field63;
    id field64;
    id field65;
    id field66;
    id field67;
    id field68;
    id field69;
} BRNet_v3_Filter;

