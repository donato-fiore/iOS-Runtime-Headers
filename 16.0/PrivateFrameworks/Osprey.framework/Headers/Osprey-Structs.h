typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct NACContextOpaque_ {
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

typedef struct FPSAPContextOpaque_ {
} // Error Processing Struct Fields

typedef struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID;
} FairPlayHWInfo_;

