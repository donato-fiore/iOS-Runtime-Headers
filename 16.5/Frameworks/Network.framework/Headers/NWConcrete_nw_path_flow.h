// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PATH_FLOW_H
#define NWCONCRETE_NW_PATH_FLOW_H

@class NSString;
@protocol OS_nw_path_flow, OS_nw_interface, OS_xpc_object, OS_nw_endpoint, OS_nw_array, OS_nw_protocol_options;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_path_flow : NSObject <OS_nw_path_flow>

 {
    *void nexus_key;
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_xpc_object> *nexus_agent;
    NSObject<OS_nw_endpoint> *local_endpoint;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    NSObject<OS_nw_array> *discovered_endpoints;
    NSObject<OS_nw_array> *resolved_endpoints;
    NSObject<OS_nw_protocol_options> *assigned_protocol;
    necp_client_result_netagent nexus_agent_struct;
    necp_client_result_interface interface_struct;
    unsigned char tfo_cookie;
    unsigned char nexus_instance;
    unsigned char flow_id;
    unsigned int nexus_key_length;
    unsigned int nexus_flow_index;
    unsigned int nexus_port;
    unsigned int ctl_command_code;
    unsigned int ctl_command_value;
    unsigned int ctl_command_tcp_seq_num;
    unsigned char tfo_cookie_len;
    BOOL viable;
    BOOL assigned;
    BOOL ecn_enabled;
    BOOL fast_open_blocked;
    BOOL is_local;
    BOOL is_direct;
    BOOL has_ipv4;
    BOOL has_ipv6;
    BOOL has_nat64;
    BOOL ctl_command_valid;
    BOOL defunct;
    BOOL is_custom_ip;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif