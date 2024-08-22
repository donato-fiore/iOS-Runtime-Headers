// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_LISTENER_H
#define NWCONCRETE_NW_LISTENER_H

@class NSString;
@protocol nw_listener_inbox_delegate, OS_nw_listener, OS_nw_parameters, OS_nw_context, OS_nw_group_descriptor, OS_nw_connection, OS_dispatch_queue, OS_nw_error, OS_nw_array, OS_nw_dictionary, OS_nw_path_evaluator, OS_nw_path, OS_xpc_object, OS_nw_advertise_descriptor, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_listener.h"

@interface NWConcrete_nw_listener : NSObject <nw_listener_inbox_delegate, OS_nw_listener>

 {
    os_unfair_lock_s lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_group_descriptor> *multicast_descriptor;
    unsigned short id_value;
    char id_str;
    NSObject<OS_nw_connection> *join_connection;
    char * launchd_key;
    NSObject<OS_dispatch_queue> *client_queue;
    unsigned int client_qos_class;
    id *event_handler;
    id *new_connection_handler;
    id *new_connection_group_handler;
    unsigned int new_connection_limit;
    id *new_packet_handler;
    id *advertised_endpoint_changed_handler;
    int state;
    NSObject<OS_nw_error> *last_error;
    NSObject<OS_nw_array> *inboxes;
    NSObject<OS_nw_array> *flow_registrations;
    NSObject<OS_nw_dictionary> *advertise_flow_registrations;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *path;
    NSObject<OS_xpc_object> *inactive_agents;
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;
    NSObject<OS_xpc_object> *triggered_agents;
    NSObject<OS_nw_parameters> *current_derived_parameters;
    NWConcrete_nw_listener *internally_retained_object;
    NSObject<OS_nw_path_evaluator> *advertise_evaluator;
    NSObject<OS_nw_path> *advertise_path;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    *_DNSServiceRef_t dnsref;
    NSObject<OS_nw_endpoint> *advertised_endpoint;
    NSObject<OS_nw_endpoint> *local_endpoint;
    unsigned int defer_socket;
    unsigned short port;
    BOOL cancelling;
    BOOL reported_state;
    BOOL allow_new_connection_inline;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canHandleNewConnection:(id)arg0 ;
-(void)dealloc;
-(void)handleInbound:(id)arg0 addProtocolInbox:(BOOL)arg1 ;
-(void)handleInboundPacket:(char *)arg0 length:(unsigned short)arg1 from:(id)arg2 to:(id)arg3 interface:(id)arg4 socket:(id)arg5 ;
-(void)handleInboxCancelComplete:(id)arg0 ;
-(void)handleInboxFailed:(id)arg0 error:(id)arg1 ;


@end


#endif