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
} // Error Processing Struct Fields

