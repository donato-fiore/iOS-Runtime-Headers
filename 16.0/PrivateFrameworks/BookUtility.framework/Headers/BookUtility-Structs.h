typedef struct ? {
    unsigned short field0;
    unsigned short field1;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGDataProvider {
} // Error Processing Struct Fields

typedef struct os_state_data_decoder_s {
    char field0;
    char field1;
} os_state_data_decoder_s;

typedef struct os_state_data_s {
    unsigned int field0;
    unk field1;
    BOOL field2;
    unsigned int field3;
    os_state_data_decoder_s field4;
    char field5;
    unsigned char field6;
} os_state_data_s;

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

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

