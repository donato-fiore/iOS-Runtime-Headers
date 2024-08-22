typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ne_trie_node {
} // Error Processing Struct Fields

typedef struct ne_trie {
    NSUInteger magic;
    NSUInteger version;
    ne_trie_node nodes;
    unsigned short child_maps;
    char * bytes;
    void memory;
    unsigned short nodes_count;
    unsigned short child_maps_count;
    unsigned short bytes_count;
    unsigned short nodes_free_next;
    unsigned short child_maps_free_next;
    unsigned short bytes_free_next;
    unsigned short root;
    NSUInteger trie_memory_size;
    NSUInteger nodes_mem_size;
    NSUInteger child_maps_mem_size;
    NSUInteger bytes_mem_size;
    BOOL is_mmap;
    CGFloat timestamp;
} ne_trie;

typedef struct _NEFlowDirector {
} // Error Processing Struct Fields

typedef struct _NEFlow {
} // Error Processing Struct Fields

typedef struct __SCNetworkService {
} // Error Processing Struct Fields

typedef struct __SCNetworkInterface {
} // Error Processing Struct Fields

typedef struct __SCPreferences {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int field0;
} ?;

typedef struct ne_filter_globals {
} // Error Processing Struct Fields

typedef struct nw_protocol_identifier {
} // Error Processing Struct Fields

typedef struct nw_protocol_callbacks {
} // Error Processing Struct Fields

typedef struct nw_protocol {
} // Error Processing Struct Fields

typedef struct NEVirtualInterface_s {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct CC_SHA1state_st {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    int field8;
} CC_SHA1state_st;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __SCUserPreferencesRef {
} // Error Processing Struct Fields

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct __CNNetwork {
} // Error Processing Struct Fields

typedef struct __CNPluginResponse {
} // Error Processing Struct Fields

typedef struct __CNPluginCommand {
} // Error Processing Struct Fields

typedef struct OpaqueSecDHContext {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct EAPClientPluginData_s {
} // Error Processing Struct Fields

typedef struct EAPClientModule_s {
} // Error Processing Struct Fields

typedef struct nw_frame {
} // Error Processing Struct Fields

typedef struct nw_frame_array_s {
} // Error Processing Struct Fields

typedef struct NEIPSecDB_s {
} // Error Processing Struct Fields

typedef struct channel {
} // Error Processing Struct Fields

typedef struct channel_attr {
} // Error Processing Struct Fields

typedef struct __slot_desc {
} // Error Processing Struct Fields

typedef struct __user_buflet {
} // Error Processing Struct Fields

typedef struct interpose_frame {
    unsigned char ring_id;
    char * buffer;
    unsigned int bufferLength;
    NSUInteger packet;
    __user_buflet buflet;
} interpose_frame;

typedef struct channel_ring_desc {
} // Error Processing Struct Fields

typedef struct network_config_cellular_blocked_observer_s {
} // Error Processing Struct Fields

typedef struct ccdigest_info {
} // Error Processing Struct Fields

typedef struct cfil_crypto_state {
    ccdigest_info field0;
    unsigned char field1;
} cfil_crypto_state;

