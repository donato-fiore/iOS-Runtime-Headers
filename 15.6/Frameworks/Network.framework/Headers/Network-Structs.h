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

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr;

typedef struct nw_protocol_identifier {
    char field0;
    int field1;
    int field2;
} nw_protocol_identifier;

typedef struct nw_protocol_callbacks {
} // Error Processing Struct Fields

typedef struct nw_protocol {
} // Error Processing Struct Fields

typedef struct nw_hash_table {
} // Error Processing Struct Fields

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

