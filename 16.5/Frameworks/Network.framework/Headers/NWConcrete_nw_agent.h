// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_AGENT_H
#define NWCONCRETE_NW_AGENT_H

@class NSString;
@protocol OS_nw_agent, OS_dispatch_queue, OS_dispatch_data, OS_nw_context, OS_nw_nexus, OS_nw_dictionary, OS_nw_fd_wrapper, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_agent : NSObject <OS_nw_agent>

 {
    os_unfair_lock_s lock;
    unsigned int logging_id;
    uint8_t last_client_id;
    char domain;
    char type;
    char description;
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_data> *data;
    int state;
    int options;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_nexus> *nexus;
    int flow_protocol_level;
    int flow_endpoint_type;
    NSUInteger tx_slots;
    NSUInteger rx_slots;
    NSUInteger slot_size;
    int flow_request_types;
    unsigned char flow_request_type_count;
    nw_agent_resolve_handlers resolve_handlers;
    unsigned char resolve_handler_count;
    unsigned int token_low_water;
    unsigned char uuid;
    NSObject<OS_nw_dictionary> *clients;
    NSObject<OS_nw_dictionary> *channels;
    id *activate_handler;
    id *assert_handler;
    id *unassert_handler;
    id *start_flow_handler;
    id *stop_flow_handler;
    id *start_browse_handler;
    id *stop_browse_handler;
    id *add_members_handler;
    id *remove_members_handler;
    id *tokens_needed_handler;
    id *error_handler;
    NSObject<OS_nw_fd_wrapper> *fd_wrapper;
    NSObject<OS_dispatch_source> *event_source;
    BOOL registered;
    BOOL supports_listen;
    BOOL require_assert;
    BOOL nexus_agent;
    BOOL browse_agent;
    BOOL resolve_agent;
    BOOL group_agent;
    BOOL do_not_coalesce_flow;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif