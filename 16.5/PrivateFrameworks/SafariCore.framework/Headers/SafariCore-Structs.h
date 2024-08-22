typedef struct ? {
    BOOL result;
    BOOL timestamp;
} ?;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _LXLexicon {
} // Error Processing Struct Fields

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct malloc_introspection_t {
} // Error Processing Struct Fields

typedef struct _malloc_zone_t {
    void field0;
    void field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    char * field9;
    unk field10;
    unk field11;
    malloc_introspection_t field12;
    unsigned int field13;
    unk field14;
    unk field15;
    unk field16;
    unk field17;
    unk field18;
} _malloc_zone_t;

typedef struct malloc_statistics_t {
    unsigned int blocks_in_use;
    NSUInteger size_in_use;
    NSUInteger max_size_in_use;
    NSUInteger size_allocated;
} malloc_statistics_t;

typedef struct task_vm_info {
    NSUInteger virtual_size;
    int region_count;
    int page_size;
    NSUInteger resident_size;
    NSUInteger resident_size_peak;
    NSUInteger device;
    NSUInteger device_peak;
    NSUInteger internal;
    NSUInteger internal_peak;
    NSUInteger external;
    NSUInteger external_peak;
    NSUInteger reusable;
    NSUInteger reusable_peak;
    NSUInteger purgeable_volatile_pmap;
    NSUInteger purgeable_volatile_resident;
    NSUInteger purgeable_volatile_virtual;
    NSUInteger compressed;
    NSUInteger compressed_peak;
    NSUInteger compressed_lifetime;
    NSUInteger phys_footprint;
    NSUInteger min_address;
    NSUInteger max_address;
    NSInteger ledger_phys_footprint_peak;
    NSInteger ledger_purgeable_nonvolatile;
    NSInteger ledger_purgeable_novolatile_compressed;
    NSInteger ledger_purgeable_volatile;
    NSInteger ledger_purgeable_volatile_compressed;
    NSInteger ledger_tag_network_nonvolatile;
    NSInteger ledger_tag_network_nonvolatile_compressed;
    NSInteger ledger_tag_network_volatile;
    NSInteger ledger_tag_network_volatile_compressed;
    NSInteger ledger_tag_media_footprint;
    NSInteger ledger_tag_media_footprint_compressed;
    NSInteger ledger_tag_media_nofootprint;
    NSInteger ledger_tag_media_nofootprint_compressed;
    NSInteger ledger_tag_graphics_footprint;
    NSInteger ledger_tag_graphics_footprint_compressed;
    NSInteger ledger_tag_graphics_nofootprint;
    NSInteger ledger_tag_graphics_nofootprint_compressed;
    NSInteger ledger_tag_neural_footprint;
    NSInteger ledger_tag_neural_footprint_compressed;
    NSInteger ledger_tag_neural_nofootprint;
    NSInteger ledger_tag_neural_nofootprint_compressed;
    NSUInteger limit_bytes_remaining;
    int decompressions;
    NSInteger ledger_swapins;
} task_vm_info;

typedef struct SuddenTerminationDisabler {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> {
    SuddenTerminationDisabler __value_;
} __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>>;

typedef struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> {
    __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> __ptr_;
} unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>>;

typedef struct _CCECCryptor {
} // Error Processing Struct Fields

typedef struct cc_blinding_keys_ctx {
} // Error Processing Struct Fields

typedef struct RawData {
    BOOL field0;
    void field1;
    int field2;
} RawData;

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

typedef struct os_state_hints_s {
    unsigned int field0;
    char * field1;
    unsigned int field2;
    unsigned int field3;
} os_state_hints_s;

