typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL mptcpAggregateAllBytes;
    BOOL mptcpAggregateAttempt;
    BOOL mptcpAggregateCellBytes;
    BOOL mptcpBackToWiFi;
    BOOL mptcpCellDenied;
    BOOL mptcpCellProxy;
    BOOL mptcpFirstPartyAggregateAttempt;
    BOOL mptcpFirstPartyHandoverAttempt;
    BOOL mptcpFirstPartyInteractiveAttempt;
    BOOL mptcpHandoverAllBytes;
    BOOL mptcpHandoverAttempts;
    BOOL mptcpHandoverCellBytes;
    BOOL mptcpHandoverCellSubflowFromWiFi;
    BOOL mptcpHandoverWiFiSubflowFromCell;
    BOOL mptcpHandshakeAggregateSuccess;
    BOOL mptcpHandshakeAggregateSuccessFirstParty;
    BOOL mptcpHandshakeHandoverSuccessCell;
    BOOL mptcpHandshakeHandoverSuccessCellFirstParty;
    BOOL mptcpHandshakeHandoverSuccessWiFi;
    BOOL mptcpHandshakeHandoverSuccessWiFiFirstParty;
    BOOL mptcpHandshakeInteractiveSuccess;
    BOOL mptcpHandshakeInteractiveSuccessFirstParty;
    BOOL mptcpHeuristicFallback;
    BOOL mptcpHeuristicFallbackFirstParty;
    BOOL mptcpInteractiveAllBytes;
    BOOL mptcpInteractiveAttempt;
    BOOL mptcpInteractiveCellBytes;
    BOOL mptcpInteractiveCellUsage;
    BOOL mptcpTriggeredCell;
    BOOL mptcpWiFiProxy;
} ?;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct nw_association_cache_entry {
} // Error Processing Struct Fields

typedef struct _cache_entries_head {
} // Error Processing Struct Fields

typedef struct _idle_cache_entries_head {
} // Error Processing Struct Fields

typedef struct nw_hash_table {
} // Error Processing Struct Fields

typedef struct nw_context_cache {
} // Error Processing Struct Fields

typedef struct nw_timer_entry {
} // Error Processing Struct Fields

typedef struct nw_timer_list_head {
} // Error Processing Struct Fields

typedef struct nw_context_globals {
} // Error Processing Struct Fields

typedef struct tcp_connection_info {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
    unsigned int field13;
    unsigned int field14;
    unsigned int field15;
    BOOL field16;
    BOOL field17;
    BOOL field18;
    BOOL field19;
    BOOL field20;
    BOOL field21;
    BOOL field22;
    BOOL field23;
    BOOL field24;
    BOOL field25;
    BOOL field26;
    BOOL field27;
    BOOL field28;
    BOOL field29;
    BOOL field30;
    BOOL field31;
    NSUInteger field32;
    NSUInteger field33;
    NSUInteger field34;
    NSUInteger field35;
    NSUInteger field36;
    NSUInteger field37;
    NSUInteger field38;
} tcp_connection_info;

typedef struct channel {
} // Error Processing Struct Fields

typedef struct channel_attr {
} // Error Processing Struct Fields

typedef struct channel_ring_desc {
} // Error Processing Struct Fields

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr;

typedef struct nw_protocol_entry {
} // Error Processing Struct Fields

typedef struct nw_protocol_entry_list {
    nw_protocol_entry lh_first;
} nw_protocol_entry_list;

typedef struct nw_protocol_identifier {
    char name;
    int level;
    int mapping;
} nw_protocol_identifier;

typedef struct nw_protocol_callbacks {
    unk add_input_handler;
    unk remove_input_handler;
    unk replace_input_handler;
    unk connect;
    unk disconnect;
    unk connected;
    unk disconnected;
    unk error;
    unk input_available;
    unk output_available;
    unk get_input_frames;
    unk get_output_frames;
    unk finalize_output_frames;
    unk link_state;
    unk get_parameters;
    unk get_path;
    unk get_local_endpoint;
    unk get_remote_endpoint;
    unk register_notification;
    unk unregister_notification;
    unk notify;
    unk updated_path;
    unk supports_external_data;
    unk input_finished;
    unk output_finished;
    unk get_output_local_endpoint;
    unk get_output_interface;
    unk waiting_for_output;
    unk copy_info;
    unk add_listen_handler;
    unk remove_listen_handler;
    unk get_message_properties;
    unk reset;
    unk input_flush;
} nw_protocol_callbacks;

typedef struct nw_protocol {
} // Error Processing Struct Fields

typedef struct nw_frame {
} // Error Processing Struct Fields

typedef struct nw_frame_array_s {
} // Error Processing Struct Fields

typedef struct _DNSServiceRef_t {
} // Error Processing Struct Fields

typedef struct nw_endpoint_alterative_s {
    ? chain;
    id endpoint;
    id NWConcrete_nw_endpoint;
} nw_endpoint_alterative_s;

typedef struct nw_data_transfer_path_report_value {
    NSUInteger received_ip_packet_count;
    NSUInteger sent_ip_packet_count;
    NSUInteger received_transport_byte_count;
    NSUInteger received_transport_duplicate_byte_count;
    NSUInteger received_transport_out_of_order_byte_count;
    NSUInteger sent_transport_byte_count;
    NSUInteger sent_transport_retransmitted_byte_count;
    NSUInteger transport_smoothed_rtt_milliseconds;
    NSUInteger transport_minimum_rtt_milliseconds;
    NSUInteger transport_rtt_variance;
    NSUInteger transport_congestion_window;
    NSUInteger transport_slow_start_threshold;
    NSUInteger received_application_byte_count;
    NSUInteger sent_application_byte_count;
    unsigned char __pad;
} nw_data_transfer_path_report_value;

typedef struct nw_data_transfer_path_report {
    nw_data_transfer_path_report_value total;
    nw_data_transfer_path_report_value incremental;
    id interface;
    unsigned char NSObject<OS_nw_interface>;
} nw_data_transfer_path_report;

typedef struct nw_listen_protocol_callbacks {
    unk new_flow;
    unk disconnected;
} nw_listen_protocol_callbacks;

typedef struct nw_listen_protocol {
} // Error Processing Struct Fields

typedef struct nw_protocol_definition_common_state {
    unk field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
    id field10;
    unk field11;
} nw_protocol_definition_common_state;

typedef struct nw_protocol_definition_extended_state {
    unk field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    unk field12;
    unk field13;
    unk field14;
    unk field15;
    unk field16;
    unk field17;
    unk field18;
    unk field19;
    unk field20;
    unk field21;
    unk field22;
    unk field23;
    unk field24;
    unk field25;
    unk field26;
    unsigned int field27;
    unsigned int field28;
} nw_protocol_definition_extended_state;

typedef struct nw_parameters_path_value {
    unsigned char proc_uuid;
    unsigned char e_proc_uuid;
    NSUInteger delegated_upid;
    unsigned int traffic_class;
    int pid;
    unsigned int uid;
    int required_interface_type;
    int required_interface_subtype;
    int multipath_service;
    int companion_preference;
    int companion_link_upgrade_preference;
    BOOL prohibit_expensive_paths;
    BOOL prohibit_constrained_paths;
    BOOL prohibit_roaming;
    BOOL discretionary;
    BOOL allow_socket_access;
    BOOL only_primary_requires_type;
    BOOL __pad_bits;
} nw_parameters_path_value;

typedef struct nw_parameters_joinable_path_value {
    unsigned char attribution;
    unsigned char fallback_mode;
    BOOL no_proxy;
    BOOL no_transform;
    BOOL use_awdl;
    BOOL use_p2p;
    BOOL no_fallback;
    BOOL no_cellular_fallback;
    BOOL no_wake_from_sleep;
    BOOL prefer_no_proxy;
    BOOL no_proxy_path_selection;
    BOOL privacy_proxy_fail_closed;
    BOOL privacy_proxy_fail_closed_for_unreachable_hosts;
    BOOL prohibit_privacy_proxy;
    BOOL fallback_applied;
    BOOL proxy_applied;
    BOOL system_proxy;
    BOOL known_tracker;
    BOOL third_party_web_content;
    BOOL approved_app_domain;
    BOOL enhanced_privacy;
    BOOL __pad_bits;
} nw_parameters_joinable_path_value;

typedef struct nw_parameters_extended_objects {
    id field0;
    id field1;
    id field2;
    id field3;
    id field4;
    id field5;
    id field6;
    id field7;
    id field8;
    id field9;
    id field10;
    id field11;
    id field12;
    id field13;
    id field14;
    id field15;
    id field16;
} nw_parameters_extended_objects;

typedef struct netcore_stats_tcp_statistics_report {
    NSUInteger bytes_in;
    NSUInteger bytes_out;
    NSUInteger bytes_duplicate;
    NSUInteger bytes_ooo;
    NSUInteger bytes_retransmitted;
    NSUInteger packets_in;
    NSUInteger packets_out;
    NSUInteger packets_duplicate;
    NSUInteger packets_ooo;
    NSUInteger packets_retransmitted;
    NSUInteger multipath_bytes_in_cell;
    NSUInteger multipath_bytes_out_cell;
    NSUInteger multipath_bytes_in_wifi;
    NSUInteger multipath_bytes_out_wifi;
    NSUInteger multipath_bytes_in_initial;
    NSUInteger multipath_bytes_out_initial;
    unsigned int time_to_dns_resolved_msecs;
    unsigned int time_to_dns_start_msecs;
    unsigned int dns_resolved_time_msecs;
    unsigned int time_to_connection_start_msecs;
    unsigned int time_to_connection_establishment_msecs;
    unsigned int connection_establishment_time_msecs;
    unsigned int flow_duration_msecs;
    unsigned int traffic_class;
    unsigned int current_rtt_msecs;
    unsigned int smoothed_rtt_msecs;
    unsigned int best_rtt_msecs;
    unsigned int rtt_variance;
    unsigned int syn_retransmission_count;
    unsigned int better_route_event_count;
    unsigned int connection_reuse_count;
    unsigned int app_reporting_data_stall_count;
    unsigned int app_data_stall_timer_msecs;
    int interface_type;
    int connected_interface_type;
    int multipath_service_type;
    BOOL dns_answers_cached;
    BOOL connected;
    BOOL cellular_fallback;
    BOOL cellular_rrc_connected;
    BOOL prefer_fallback;
    BOOL kernel_reported_stalls;
    BOOL kernel_reporting_connection_stalled;
    BOOL kernel_reporting_read_stalled;
    BOOL kernel_reporting_write_stalled;
    BOOL tcp_fast_open;
    BOOL first_party;
    BOOL tls13_configured;
    BOOL __pad_bits;
    unsigned char __pad;
} netcore_stats_tcp_statistics_report;

typedef struct netcore_stats_network_event {
    int network_event_type;
    unsigned int time_to_network_event_msecs;
} netcore_stats_network_event;

typedef struct netcore_stats_data_usage_snapshot {
    NSUInteger bytes_in;
    NSUInteger bytes_out;
    NSUInteger multipath_bytes_in_cell;
    NSUInteger multipath_bytes_out_cell;
    NSUInteger multipath_bytes_in_wifi;
    NSUInteger multipath_bytes_out_wifi;
    NSUInteger multipath_bytes_in_initial;
    NSUInteger multipath_bytes_out_initial;
} netcore_stats_data_usage_snapshot;

typedef struct netcore_stats_tcp_cell_fallback_report {
    netcore_stats_network_event network_events;
    netcore_stats_data_usage_snapshot data_usage_snapshots_at_network_events;
    int deny_reason;
    unsigned int network_event_count;
    unsigned int data_usage_snapshots_at_network_events_count;
    unsigned int fallback_timer_msecs;
    BOOL fellback;
    unsigned char __pad;
} netcore_stats_tcp_cell_fallback_report;

typedef struct nw_connection_protocol_establishment_report_s {
    char protocol_name;
    NSUInteger handshake_milliseconds;
    NSUInteger handshake_rtt_milliseconds;
    int protocol_index;
    unsigned char __pad;
} nw_connection_protocol_establishment_report_s;

typedef struct nw_connection_proxy_hop_s {
    char proxy_name;
    unsigned char __pad;
} nw_connection_proxy_hop_s;

typedef struct nw_connection_report_s {
    NSUInteger bytes_in;
    NSUInteger bytes_out;
    NSUInteger bytes_duplicate;
    NSUInteger bytes_ooo;
    NSUInteger bytes_retransmitted;
    NSUInteger packets_in;
    NSUInteger packets_out;
    NSUInteger multipath_bytes_in_cell;
    NSUInteger multipath_bytes_out_cell;
    NSUInteger multipath_bytes_in_wifi;
    NSUInteger multipath_bytes_out_wifi;
    NSUInteger multipath_bytes_in_initial;
    NSUInteger multipath_bytes_out_initial;
    NSUInteger estimated_upload_throughput;
    NSUInteger estimated_download_throughput;
    NSUInteger transform_last_timeout_msecs;
    unsigned int current_rtt_msecs;
    unsigned int smoothed_rtt_msecs;
    unsigned int best_rtt_msecs;
    unsigned int rtt_variance;
    unsigned int syn_retransmission_count;
    unsigned int used_proxy_type;
    unsigned int traffic_class;
    unsigned int path_trigger_milliseconds;
    unsigned int resolution_milliseconds;
    unsigned int proxy_milliseconds;
    unsigned int flow_connect_milliseconds;
    unsigned int tls_milliseconds;
    unsigned int flow_duration_milliseconds;
    unsigned int ipv4_address_count;
    unsigned int ipv6_address_count;
    unsigned int connected_address_index;
    unsigned int connection_reuse_count;
    unsigned int data_stall_count;
    unsigned int ipv4_dns_server_count;
    unsigned int ipv6_dns_server_count;
    unsigned int seconds_since_interface_change;
    unsigned int transport_protocol;
    unsigned int dns_protocol;
    unsigned int connection_report_reason;
    unsigned int transform_first_protocol;
    unsigned int transform_connected_protocol;
    unsigned int transform_connected_protocol_index;
    int failure_reason;
    int connected_interface_type;
    int connected_interface_subtype;
    int multipath_service_type;
    int connection_mode;
    int apple_host;
    int apple_app;
    int dns_provider;
    int tls_version;
    int stack_level;
    unsigned char mptcp_version;
    unsigned char first_address_family;
    unsigned char connected_address_family;
    unsigned char connection_uuid;
    unsigned char parent_uuid;
    unsigned char activities;
    char bundle_id;
    char effective_bundle_id;
    unsigned char privacy_stance;
    BOOL is_known_tracker;
    BOOL is_third_party_web_content;
    BOOL triggered_path;
    BOOL system_proxy_configured;
    BOOL custom_proxy_configured;
    BOOL fallback_eligible;
    BOOL weak_fallback;
    BOOL prefer_fallback;
    BOOL used_fallback;
    BOOL resolution_required;
    BOOL tls_configured;
    BOOL tls13_configured;
    BOOL tfo_configured;
    BOOL multipath_configured;
    BOOL connected;
    BOOL tls_succeeded;
    BOOL synthesized_ipv6_address;
    BOOL synthesized_extra_ipv6_address;
    BOOL ipv4_available;
    BOOL ipv6_available;
    BOOL used_tfo;
    BOOL tls_version_timeout;
    BOOL first_party;
    BOOL is_daemon;
    BOOL tls_handshake_timed_out;
    BOOL is_path_expensive;
    BOOL is_path_constrained;
    BOOL prohibits_expensive;
    BOOL prohibits_constrained;
    BOOL svcb_requested;
    BOOL svcb_received;
    BOOL svcb_dohuri;
    BOOL is_probe;
    BOOL quic_experiment_enabled;
    BOOL quic_deferred;
    BOOL quic_application_deferred;
    BOOL quic_denied;
    BOOL quic_alternative_present;
    BOOL quic_updated_alternative;
    BOOL quic_speculative_attempt;
    BOOL tls_ech_enabled;
    BOOL __pad_bits;
    unsigned char __pad_bytes;
    nw_connection_protocol_establishment_report_s protocol_establishment_reports;
    nw_connection_proxy_hop_s proxy_hops;
    unsigned char __pad;
} nw_connection_report_s;

typedef struct netcore_stats_tcp_report {
    unk u;
    ? legacy;
    nw_connection_report_s nw_connection_report;
    BOOL delegated;
    BOOL legacy;
    unsigned char __pad;
} netcore_stats_tcp_report;

typedef struct nw_connection_metadata_changed_registration {
} // Error Processing Struct Fields

typedef struct metadata_changed_registration_list_s {
} // Error Processing Struct Fields

typedef struct nw_endpoint_handler_event_s {
    unsigned short domain;
    unsigned short event;
} nw_endpoint_handler_event_s;

typedef struct nw_connection_timestamp_s {
    NSUInteger field0;
    nw_endpoint_handler_event_s field1;
    unk field2;
    ? field3;
    ? field4;
    unsigned char field5;
} nw_connection_timestamp_s;

typedef struct nw_connection_throughput_monitor_s {
    NSUInteger current_bytes;
    NSUInteger current_time;
    NSUInteger last_bytes;
    NSUInteger last_time;
    void timer;
    unsigned int minimum;
    unsigned char __pad;
} nw_connection_throughput_monitor_s;

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct nw_shoes_statistics {
    unsigned int ss_max_simultaneous_connections;
    unsigned int ss_total_connections;
} nw_shoes_statistics;

typedef struct nw_storage_provider {
    unk lookup;
    unk store;
    unk remove;
    unk key;
    unk canvas_create;
    unk canvas_deserialize;
    unk canvas_serialize;
    unk canvas_dirty;
    unk canvas_can_evict;
    unk canvas_memory_size;
    unk canvas_compact;
    unk needs_canvas_destroy;
    unk canvas_destroy;
    unk canvas_remove_past;
} nw_storage_provider;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct nw_storage_chain {
    ? entry;
} nw_storage_chain;

typedef struct OpaqueCFHTTPCookieStorage {
} // Error Processing Struct Fields

typedef struct netagent {
    unsigned char field0;
    char field1;
    char field2;
    char field3;
    unsigned int field4;
    unsigned int field5;
    unsigned char field6;
} netagent;

typedef struct __sockaddr_header {
    unsigned char field0;
    unsigned char field1;
} __sockaddr_header;

typedef struct in_addr {
    unsigned int field0;
} in_addr;

typedef struct sockaddr_in {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    in_addr field3;
    char field4;
} sockaddr_in;

typedef struct in6_addr {
    unk __u6_addr;
    unsigned char __u6_addr8;
    unsigned short __u6_addr16;
    unsigned int __u6_addr32;
} in6_addr;

typedef struct sockaddr_in6 {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
    in6_addr field4;
    unsigned int field5;
} sockaddr_in6;

typedef struct retained_ptr<NSObject<OS_xpc_object> *> {
    id m_obj;
} retained_ptr<NSObject<OS_xpc_object> *>;

typedef struct retained_ptr<NSObject<OS_dispatch_source> *> {
    id m_obj;
} retained_ptr<NSObject<OS_dispatch_source> *>;

typedef struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> {
    id m_obj;
} retained_ptr<NSObject<OS_nw_fd_wrapper> *>;

typedef struct unfair_mutex {
    os_unfair_lock_s m_mutex;
} unfair_mutex;

typedef struct retained_ptr<NWConcrete_nw_activity *> {
    id m_obj;
} retained_ptr<NWConcrete_nw_activity *>;

typedef struct retained_ptr<NSString *> {
    id m_obj;
} retained_ptr<NSString *>;

typedef struct description_cache {
    retained_ptr<NSString *> description;
    unfair_mutex mutex;
    unsigned char __pad;
} description_cache;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct necp_client_result_netagent {
    unsigned int generation;
    unsigned char netagent_uuid;
} necp_client_result_netagent;

typedef struct necp_client_result_interface {
    unsigned int generation;
    unsigned int index;
} necp_client_result_interface;

typedef struct necp_stats_hdr {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
} necp_stats_hdr;

typedef struct necp_stat_counts {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
} necp_stat_counts;

typedef struct necp_basic_metadata {
    unsigned int field0;
    unsigned int field1;
} necp_basic_metadata;

typedef struct necp_connection_probe_status {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} necp_connection_probe_status;

typedef struct necp_extra_tcp_metadata {
    necp_connection_probe_status field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
} necp_extra_tcp_metadata;

typedef struct necp_tcp_stats {
    necp_stats_hdr field0;
    necp_stat_counts field1;
    necp_basic_metadata field2;
    necp_extra_tcp_metadata field3;
} necp_tcp_stats;

typedef struct necp_udp_stats {
    necp_stats_hdr field0;
    necp_stat_counts field1;
    necp_basic_metadata field2;
} necp_udp_stats;

typedef struct necp_extra_quic_metadata {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned char field8;
} necp_extra_quic_metadata;

typedef struct necp_quic_stats {
    necp_udp_stats field0;
    necp_extra_quic_metadata field1;
} necp_quic_stats;

typedef struct necp_all_stats {
    unk field0;
    necp_tcp_stats field1;
    necp_udp_stats field2;
    necp_quic_stats field3;
} necp_all_stats;

typedef struct ifnet_stats_per_flow {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
    unsigned int field13;
    unsigned int field14;
    unsigned int field15;
    unsigned int field16;
    unsigned int field17;
    unsigned int field18;
    unsigned int field19;
    unsigned int field20;
    BOOL field21;
    BOOL field22;
    BOOL field23;
    BOOL field24;
    BOOL field25;
    BOOL field26;
    BOOL field27;
    BOOL field28;
    BOOL field29;
    BOOL field30;
} ifnet_stats_per_flow;

typedef struct sk_nexusadv {
} // Error Processing Struct Fields

typedef struct nw_path_necp_result {
} // Error Processing Struct Fields

typedef struct necp_client_result_estimated_throughput {
    unsigned char up;
    unsigned char down;
} necp_client_result_estimated_throughput;

typedef struct ipv6_prefix {
    in6_addr ipv6_prefix;
    unsigned int prefix_len;
} ipv6_prefix;

typedef struct nw_activity_report_s {
    NSUInteger investigation_identifier;
    unsigned int domain;
    unsigned int label;
    unsigned char activity_uuid;
    unsigned char parent_activity_uuid;
    char bundle_id;
    BOOL retry;
    BOOL __pad_bits;
    unsigned char __pad;
} nw_activity_report_s;

typedef struct nw_activity_epilogue_report_s {
    NSUInteger duration_msecs;
    nw_activity_report_s activity;
    unsigned int fragments_quenched;
    int underlying_error_domain;
    int underlying_error_code;
    int completion_reason;
    unsigned char __pad;
} nw_activity_epilogue_report_s;

typedef struct nw_activity_client_metric_report_s {
    unsigned char activity_uuid;
    char client_metric_name;
    char client_metric;
    unsigned char __pad;
} nw_activity_client_metric_report_s;

typedef struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1;
    NSInteger __ss_align;
    char __ss_pad2;
} sockaddr_storage;

typedef struct ether_addr {
    unsigned char octet;
} ether_addr;

typedef struct nw_agent_resolve_handlers {
    int resolve_from_type;
    int resolve_to_type;
    id start_resolve_handler;
    unk stop_resolve_handler;
    id field4;
    unk field5;
} nw_agent_resolve_handlers;

typedef struct nw_flow_protocol {
} // Error Processing Struct Fields

typedef struct tcp_conn_status {
    unk field0;
    ? field1;
    unsigned int field2;
} tcp_conn_status;

typedef struct tcp_info {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
    unsigned int field13;
    unsigned int field14;
    unsigned int field15;
    unsigned int field16;
    unsigned int field17;
    int field18;
    unsigned int field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    NSUInteger field26;
    NSUInteger field27;
    NSUInteger field28;
    unsigned char field29;
    unsigned char field30;
    unsigned short field31;
    NSUInteger field32;
    NSUInteger field33;
    NSUInteger field34;
    NSUInteger field35;
    NSUInteger field36;
    NSUInteger field37;
    NSUInteger field38;
    NSUInteger field39;
    NSUInteger field40;
    NSUInteger field41;
    NSUInteger field42;
    NSUInteger field43;
    tcp_conn_status field44;
    BOOL field45;
    BOOL field46;
    BOOL field47;
    BOOL field48;
    BOOL field49;
    BOOL field50;
    BOOL field51;
    BOOL field52;
    BOOL field53;
    BOOL field54;
    BOOL field55;
    BOOL field56;
    BOOL field57;
    BOOL field58;
    BOOL field59;
    BOOL field60;
    BOOL field61;
    BOOL field62;
    BOOL field63;
    BOOL field64;
    BOOL field65;
    BOOL field66;
    BOOL field67;
    BOOL field68;
    BOOL field69;
    BOOL field70;
    BOOL field71;
    BOOL field72;
    unsigned int field73;
    unsigned int field74;
    unsigned int field75;
    unsigned int field76;
    unsigned int field77;
    unsigned int field78;
    unsigned int field79;
    unsigned int field80;
    unsigned int field81;
    NSUInteger field82;
    unsigned int field83;
} tcp_info;

typedef struct nw_data_transfer_snapshot {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
} nw_data_transfer_snapshot;

typedef struct nw_interface_signature {
    unsigned char signature;
    unsigned char signature_len;
    unsigned char ___pad;
} nw_interface_signature;

typedef struct nw_interface_details {
    nw_interface_signature ipv4_signature;
    nw_interface_signature ipv6_signature;
    unsigned int mtu;
    unsigned int tso_max_segment_size_v4;
    unsigned int tso_max_segment_size_v6;
    unsigned int ipv4_netmask;
    unsigned int ipv4_broadcast;
    unsigned char radio_type;
    BOOL expensive;
    BOOL constrained;
    BOOL tx_start;
    BOOL ack_priority;
    BOOL carrier_aggregation;
    BOOL multilayer_packet_logging;
    BOOL has_netmask;
    BOOL has_broadcast;
    BOOL supports_multicast;
    BOOL has_dns;
    BOOL has_nat64;
    BOOL ipv4_routable;
    BOOL ipv6_routable;
    BOOL __pad_bits;
    unsigned char ___pad;
} nw_interface_details;

