typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct timeval {
    NSInteger tv_sec;
    int tv_usec;
} timeval;

typedef struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
} timezone;

typedef struct ? {
    NSUInteger trace_id;
    NSUInteger timestamp;
    NSUInteger thread;
    mach_timebase_info timebase;
    char * dsc_uuid;
    char * image_uuid;
    char * image_path;
    timeval tv_gmt;
    timezone tz;
    NSUInteger offset;
    NSUInteger format_offset;
    unsigned int opaque_flags;
    char * message;
    NSUInteger sz;
} ?;

typedef struct tracev3_chunk_s {
    tracev3_chunk_preamble_s field0;
    unk field1;
    tracev3_chunk_header_s field2;
    tracev3_chunk_catalog_s field3;
    tracev3_chunk_catalog_v2_s field4;
    tracev3_chunk_log_preamble_s field5;
    tracev3_chunk_firehose_s field6;
    tracev3_chunk_firehose_old_s field7;
    tracev3_chunk_oversize_s field8;
    tracev3_chunk_oversize_old_s field9;
    tracev3_chunk_statedump_s field10;
    tracev3_chunk_simple_s field11;
    unsigned char field12;
} tracev3_chunk_s;

typedef struct catalog_s {
    catalog_hdr_s field0;
    os_trace_uuid_map_s field1;
    os_trace_str_map_s field2;
    NSUInteger field3;
    os_procinfo_map_s field4;
    NSUInteger field5;
    NSUInteger field6;
    subchunk_queue_t field7;
    NSUInteger field8;
} catalog_s;

typedef struct _OSLogEventChunkContext {
} // Error Processing Struct Fields

typedef struct _firehose_unaligned_tracepoint_s {
} // Error Processing Struct Fields

typedef struct os_timesync_header_s {
    unsigned short field0;
    unsigned short field1;
    unsigned int field2;
} os_timesync_header_s;

typedef struct os_timesync_time_entry_s {
    os_timesync_header_s field0;
    NSUInteger field1;
    NSUInteger field2;
    timezone field3;
} os_timesync_time_entry_s;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct _os_timesync_db_s {
} // Error Processing Struct Fields

typedef struct os_log_fmt_hdr_s {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
} os_log_fmt_hdr_s;

typedef struct os_activity_map_s {
} // Error Processing Struct Fields

typedef struct os_log_fmt_cspec_s {
    char * field0;
    unsigned short field1;
    unsigned char field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    unsigned short field6;
    int field7;
    int field8;
    char * field9;
    char * field10;
    char * field11;
    NSUInteger field12;
} os_log_fmt_cspec_s;

typedef struct os_log_fmt_raw_placeholder {
    void field0;
    os_log_fmt_cspec_s field1;
    unk field2;
    NSInteger field3;
    NSUInteger field4;
    CGFloat field5;
    unsigned char field6;
    unsigned char field7;
    unsigned short field8;
    NSUInteger field9;
    BOOL field10;
} os_log_fmt_raw_placeholder;

typedef struct os_log_backtrace_frame_s {
} // Error Processing Struct Fields

typedef struct os_log_backtrace_s {
    os_log_backtrace_frame_s field0;
    int field1;
} os_log_backtrace_s;

typedef struct os_activity_stream_s {
} // Error Processing Struct Fields

typedef struct os_activity_stream_common_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
} os_activity_stream_common_s;

typedef struct os_activity_stream_common_with_name_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
} os_activity_stream_common_with_name_s;

typedef struct os_activity_create_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
    NSUInteger field11;
    NSUInteger field12;
} os_activity_create_s;

typedef struct os_activity_transition_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    NSUInteger field10;
} os_activity_transition_s;

typedef struct os_log_message_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
    char * field11;
    NSUInteger field12;
    char * field13;
    NSUInteger field14;
    char * field15;
    char * field16;
    unsigned int field17;
    unsigned char field18;
    BOOL field19;
    NSUInteger field20;
    char * field21;
    unsigned char field22;
    unsigned char field23;
    char * field24;
} os_log_message_s;

typedef struct os_trace_message_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
    void field11;
    NSUInteger field12;
    id field13;
} os_trace_message_s;

typedef struct os_activity_useraction_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
    BOOL field11;
} os_activity_useraction_s;

typedef struct os_activity_statedump_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
    NSUInteger field11;
} os_activity_statedump_s;

typedef struct os_activity_timesync_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    unsigned char field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    unsigned char field14;
} os_activity_timesync_s;

typedef struct os_activity_loss_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    NSUInteger field10;
    NSUInteger field11;
    unsigned int field12;
} os_activity_loss_s;

typedef struct os_activity_breadcrumb_s {
    unsigned int field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    char * field5;
} os_activity_breadcrumb_s;

typedef struct os_activity_stream_activity_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    timeval field5;
    timezone field6;
    NSUInteger field7;
    NSUInteger field8;
    unsigned int field9;
    char * field10;
} os_activity_stream_activity_s;

typedef struct os_activity_stream_entry_s {
    unsigned int field0;
    int field1;
    NSUInteger field2;
    char * field3;
    char * field4;
    NSUInteger field5;
    NSUInteger field6;
    unk field7;
    os_activity_stream_common_s field8;
    os_activity_stream_common_with_name_s field9;
    os_activity_create_s field10;
    os_activity_transition_s field11;
    os_log_message_s field12;
    os_trace_message_s field13;
    os_activity_useraction_s field14;
    os_activity_statedump_s field15;
    os_activity_timesync_s field16;
    os_activity_loss_s field17;
    os_activity_breadcrumb_s field18;
    os_activity_stream_activity_s field19;
    os_trace_message_s field20;
} os_activity_stream_entry_s;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct tracev3_chunk_preamble_s {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
} tracev3_chunk_preamble_s;

typedef struct tracev3_subchunk_preamble_s {
    unsigned int field0;
    unsigned int field1;
} tracev3_subchunk_preamble_s;

typedef struct tracev3_subchunk_continuous_s {
    NSUInteger field0;
} tracev3_subchunk_continuous_s;

typedef struct tracev3_subchunk_systeminfo_s {
    int field0;
    int field1;
    char field2;
    char field3;
} tracev3_subchunk_systeminfo_s;

typedef struct tracev3_subchunk_generation_s {
    unsigned char field0;
    int field1;
    int field2;
} tracev3_subchunk_generation_s;

typedef struct tracev3_subchunk_timezone_s {
    char field0;
} tracev3_subchunk_timezone_s;

typedef struct tracev3_chunk_header_s {
    mach_timebase_info field0;
    NSUInteger field1;
    NSInteger field2;
    int field3;
    int field4;
    int field5;
    unsigned int field6;
    tracev3_subchunk_preamble_s field7;
    tracev3_subchunk_continuous_s field8;
    tracev3_subchunk_preamble_s field9;
    tracev3_subchunk_systeminfo_s field10;
    tracev3_subchunk_preamble_s field11;
    tracev3_subchunk_generation_s field12;
    tracev3_subchunk_preamble_s field13;
    tracev3_subchunk_timezone_s field14;
} tracev3_chunk_header_s;

typedef struct tracev3_chunk_catalog_s {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned char field4;
} tracev3_chunk_catalog_s;

typedef struct tracev3_chunk_catalog_v2_s {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    NSUInteger field6;
    unsigned char field7;
} tracev3_chunk_catalog_v2_s;

typedef struct tracev3_chunk_log_preamble_s {
    NSUInteger field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
} tracev3_chunk_log_preamble_s;

typedef struct tracev3_chunk_firehose_s {
    NSUInteger field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    unsigned char field5;
} tracev3_chunk_firehose_s;

typedef struct tracev3_chunk_firehose_old_s {
    NSUInteger field0;
    int field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
} tracev3_chunk_firehose_old_s;

typedef struct tracev3_chunk_oversize_s {
    NSUInteger field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
    NSUInteger field4;
    unsigned int field5;
    unsigned short field6;
    unsigned short field7;
    unsigned char field8;
} tracev3_chunk_oversize_s;

typedef struct tracev3_chunk_oversize_old_s {
    NSUInteger field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned char field4;
} tracev3_chunk_oversize_old_s;

typedef struct tracev3_chunk_statedump_s {
    NSUInteger field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
    NSUInteger field4;
    NSUInteger field5;
    unsigned char field6;
    unsigned char field7;
} tracev3_chunk_statedump_s;

typedef struct tracev3_chunk_simple_s {
    NSUInteger field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
} tracev3_chunk_simple_s;

typedef struct hashtable {
} // Error Processing Struct Fields

typedef struct catalog_procinfo_s {
} // Error Processing Struct Fields

typedef struct catalog_subchunk_s {
} // Error Processing Struct Fields

typedef struct catalog_hdr_s {
    unsigned short field0;
    NSUInteger field1;
} catalog_hdr_s;

typedef struct os_trace_uuid_map_s {
} // Error Processing Struct Fields

typedef struct os_trace_str_map_s {
} // Error Processing Struct Fields

typedef struct os_procinfo_map_s {
} // Error Processing Struct Fields

typedef struct subchunk_queue_t {
} // Error Processing Struct Fields

typedef struct _os_log_index_timeref {
    unsigned char uuid;
    NSUInteger continuous;
} _os_log_index_timeref;

typedef struct os_timesync_range_s {
} // Error Processing Struct Fields

typedef struct os_trace_blob_s {
    unk ;
    char * ob_b;
    void ob_v;
    char * ob_s;
    char * ob_c;
    unsigned int ob_len;
    unsigned int ob_size;
    unsigned int ob_maxsize;
    unsigned short ob_flags;
    BOOL ob_binary;
} os_trace_blob_s;

typedef struct uuiddb_dsc_map_s {
    uint8_t field0;
    uuiddb_dsc_map_s field1;
    uuiddb_dsc_header_s field2;
    uuiddb_dsc_range_entry_v2_s field3;
    uuiddb_dsc_uuid_entry_v2_s field4;
    unsigned char field5;
    unsigned int field6;
} uuiddb_dsc_map_s;

typedef struct uuiddb_dsc_header_s {
} // Error Processing Struct Fields

typedef struct uuiddb_dsc_range_entry_v2_s {
} // Error Processing Struct Fields

typedef struct uuiddb_dsc_uuid_entry_v2_s {
} // Error Processing Struct Fields

typedef struct _ftsent {
} // Error Processing Struct Fields

