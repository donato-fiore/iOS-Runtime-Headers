typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct update_subset_for_deltas {
    NSUInteger savedRxPackets;
    NSUInteger savedRxBytes;
    NSUInteger savedTxPackets;
    NSUInteger savedTxBytes;
    NSUInteger savedRxCellularBytes;
    NSUInteger savedRxWiFiBytes;
    NSUInteger savedRxWiredBytes;
    NSUInteger savedTxCellularBytes;
    NSUInteger savedTxWiFiBytes;
    NSUInteger savedTxWiredBytes;
    unsigned int savedRxDuplicateBytes;
    unsigned int savedRxOutOfOrderBytes;
    unsigned int savedTxRetransmittedBytes;
} update_subset_for_deltas;

typedef struct nstat_msg_hdr {
    NSUInteger context;
    unsigned int type;
    unsigned short length;
    unsigned short flags;
} nstat_msg_hdr;

typedef struct nstat_counts {
    NSUInteger nstat_rxpackets;
    NSUInteger nstat_rxbytes;
    NSUInteger nstat_txpackets;
    NSUInteger nstat_txbytes;
    NSUInteger nstat_cell_rxbytes;
    NSUInteger nstat_cell_txbytes;
    NSUInteger nstat_wifi_rxbytes;
    NSUInteger nstat_wifi_txbytes;
    NSUInteger nstat_wired_rxbytes;
    NSUInteger nstat_wired_txbytes;
    unsigned int nstat_rxduplicatebytes;
    unsigned int nstat_rxoutoforderbytes;
    unsigned int nstat_txretransmit;
    unsigned int nstat_connectattempts;
    unsigned int nstat_connectsuccesses;
    unsigned int nstat_min_rtt;
    unsigned int nstat_avg_rtt;
    unsigned int nstat_var_rtt;
} nstat_counts;

typedef struct nstat_msg_src_update_hdr {
    nstat_msg_hdr hdr;
    NSUInteger srcref;
    NSUInteger event_flags;
    nstat_counts counts;
    unsigned int provider;
    unsigned char reserved;
} nstat_msg_src_update_hdr;

typedef struct activity_bitmap {
    NSUInteger start;
    NSUInteger bitmap;
} activity_bitmap;

typedef struct in_addr {
    unsigned int s_addr;
} in_addr;

typedef struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    in_addr sin_addr;
    char sin_zero;
} sockaddr_in;

typedef struct in6_addr {
    unk __u6_addr;
    unsigned char __u6_addr8;
    unsigned short __u6_addr16;
    unsigned int __u6_addr32;
} in6_addr;

typedef struct sockaddr_in6 {
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short sin6_port;
    unsigned int sin6_flowinfo;
    in6_addr sin6_addr;
    unsigned int sin6_scope_id;
} sockaddr_in6;

typedef struct ? {
    BOOL probe_activated;
    BOOL write_probe_failed;
    BOOL read_probe_failed;
    BOOL conn_probe_failed;
} ?;

typedef struct tcp_conn_status {
    unk ;
    ? ;
    unsigned int pad_field;
} tcp_conn_status;

typedef struct nstat_tcp_descriptor {
    NSUInteger upid;
    NSUInteger eupid;
    NSUInteger start_timestamp;
    NSUInteger timestamp;
    NSUInteger rx_transfer_size;
    NSUInteger tx_transfer_size;
    activity_bitmap activity_bitmap;
    unsigned int ifindex;
    unsigned int state;
    unsigned int sndbufsize;
    unsigned int sndbufused;
    unsigned int rcvbufsize;
    unsigned int rcvbufused;
    unsigned int txunacked;
    unsigned int txwindow;
    unsigned int txcwindow;
    unsigned int traffic_class;
    unsigned int traffic_mgt_flags;
    unsigned int pid;
    unsigned int epid;
    unk local;
    sockaddr_in v4;
    sockaddr_in6 v6;
    unk remote;
    sockaddr_in v4;
    sockaddr_in6 v6;
    char cc_algo;
    char pname;
    unsigned char uuid;
    unsigned char euuid;
    unsigned char vuuid;
    unsigned char fuuid;
    unk ;
    tcp_conn_status connstatus;
    unsigned char __pad_connstatus;
    unsigned int ifnet_properties;
    unsigned char fallback_mode;
    unsigned char reserved;
} nstat_tcp_descriptor;

typedef struct nstat_udp_descriptor {
    NSUInteger upid;
    NSUInteger eupid;
    NSUInteger start_timestamp;
    NSUInteger timestamp;
    activity_bitmap activity_bitmap;
    unk local;
    sockaddr_in v4;
    sockaddr_in6 v6;
    unk remote;
    sockaddr_in v4;
    sockaddr_in6 v6;
    unsigned int ifindex;
    unsigned int rcvbufsize;
    unsigned int rcvbufused;
    unsigned int traffic_class;
    unsigned int pid;
    char pname;
    unsigned int epid;
    unsigned char uuid;
    unsigned char euuid;
    unsigned char vuuid;
    unsigned char fuuid;
    unsigned int ifnet_properties;
    unsigned char fallback_mode;
    unsigned char reserved;
} nstat_udp_descriptor;

typedef struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data;
} sockaddr;

typedef struct nstat_route_descriptor {
    NSUInteger id;
    NSUInteger parent_id;
    NSUInteger gateway_id;
    unk dst;
    sockaddr_in v4;
    sockaddr_in6 v6;
    sockaddr sa;
    unk mask;
    sockaddr_in v4;
    sockaddr_in6 v6;
    sockaddr sa;
    unk gateway;
    sockaddr_in v4;
    sockaddr_in6 v6;
    sockaddr sa;
    unsigned int ifindex;
    unsigned int flags;
    unsigned char reserved;
} nstat_route_descriptor;

typedef struct nstat_ifnet_desc_cellular_status {
    unsigned int valid_bitmask;
    unsigned int link_quality_metric;
    unsigned int ul_effective_bandwidth;
    unsigned int ul_max_bandwidth;
    unsigned int ul_min_latency;
    unsigned int ul_effective_latency;
    unsigned int ul_max_latency;
    unsigned int ul_retxt_level;
    unsigned int ul_bytes_lost;
    unsigned int ul_min_queue_size;
    unsigned int ul_avg_queue_size;
    unsigned int ul_max_queue_size;
    unsigned int dl_effective_bandwidth;
    unsigned int dl_max_bandwidth;
    unsigned int config_inactivity_time;
    unsigned int config_backoff_time;
    unsigned short mss_recommended;
    unsigned char reserved;
} nstat_ifnet_desc_cellular_status;

typedef struct nstat_ifnet_desc_wifi_status {
    unsigned int valid_bitmask;
    unsigned int link_quality_metric;
    unsigned int ul_effective_bandwidth;
    unsigned int ul_max_bandwidth;
    unsigned int ul_min_latency;
    unsigned int ul_effective_latency;
    unsigned int ul_max_latency;
    unsigned int ul_retxt_level;
    unsigned int ul_bytes_lost;
    unsigned int ul_error_rate;
    unsigned int dl_effective_bandwidth;
    unsigned int dl_max_bandwidth;
    unsigned int dl_min_latency;
    unsigned int dl_effective_latency;
    unsigned int dl_max_latency;
    unsigned int dl_error_rate;
    unsigned int config_frequency;
    unsigned int config_multicast_rate;
    unsigned int scan_count;
    unsigned int scan_duration;
} nstat_ifnet_desc_wifi_status;

typedef struct nstat_ifnet_desc_link_status {
    unsigned int link_status_type;
    unk u;
    nstat_ifnet_desc_cellular_status cellular;
    nstat_ifnet_desc_wifi_status wifi;
} nstat_ifnet_desc_link_status;

typedef struct nstat_ifnet_descriptor {
    NSUInteger threshold;
    unsigned int ifindex;
    nstat_ifnet_desc_link_status link_status;
    unsigned int type;
    char description;
    char name;
    unsigned char reserved;
} nstat_ifnet_descriptor;

typedef struct nstat_sysinfo_descriptor {
    unsigned int flags;
} nstat_sysinfo_descriptor;

typedef struct nstat_msg_src_update_convenient {
    nstat_msg_src_update_hdr hdr;
    unk ;
    nstat_tcp_descriptor tcp;
    nstat_udp_descriptor udp;
    nstat_route_descriptor route;
    nstat_ifnet_descriptor ifnet;
    nstat_sysinfo_descriptor sysinfo;
    nstat_tcp_descriptor quic;
} nstat_msg_src_update_convenient;

typedef struct nstat_msg_src_counts {
    nstat_msg_hdr field0;
    NSUInteger field1;
    NSUInteger field2;
    nstat_counts field3;
} nstat_msg_src_counts;

typedef struct nstat_domain_info {
    char field0;
    char field1;
    char field2;
    char field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    unsigned char field7;
} nstat_domain_info;

typedef struct nstat_msg_src_extended_item_hdr {
    unsigned int field0;
    unsigned int field1;
} nstat_msg_src_extended_item_hdr;

typedef struct updater_nstat_msg_src_update_tcp {
    nstat_msg_hdr hdr;
    NSUInteger srcref;
    NSUInteger event_flags;
    nstat_counts counts;
    unsigned int provider;
    unsigned char reserved;
    nstat_tcp_descriptor tcp_desc;
} updater_nstat_msg_src_update_tcp;

typedef struct updater_nstat_msg_src_update_udp {
    nstat_msg_hdr hdr;
    NSUInteger srcref;
    NSUInteger event_flags;
    nstat_counts counts;
    unsigned int provider;
    unsigned char reserved;
    nstat_udp_descriptor udp_desc;
} updater_nstat_msg_src_update_udp;

typedef struct updater_nstat_msg_src_update_quic {
    nstat_msg_hdr hdr;
    NSUInteger srcref;
    NSUInteger event_flags;
    nstat_counts counts;
    unsigned int provider;
    unsigned char reserved;
    nstat_tcp_descriptor quic_desc;
} updater_nstat_msg_src_update_quic;

