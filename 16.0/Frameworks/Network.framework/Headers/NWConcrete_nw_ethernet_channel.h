// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ETHERNET_CHANNEL_H
#define NWCONCRETE_NW_ETHERNET_CHANNEL_H

@class NSString;
@protocol OS_nw_ethernet_channel, OS_nw_interface, OS_dispatch_queue, OS_nw_context, OS_nw_path_evaluator, OS_nw_path_flow_registration, OS_nw_path_flow;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_ethernet_channel : NSObject <OS_nw_ethernet_channel>

 {
    os_unfair_lock_s _lock;
    unsigned short _ether_type;
    NSObject<OS_nw_interface> *_interface;
    char * _interfaceName;
    int _state;
    NSObject<OS_dispatch_queue> *_client_queue;
    id *_client_state_handler;
    id *_client_receive_handler;
    NSObject<OS_nw_context> *_context;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_path_flow_registration> *_registration;
    NSObject<OS_nw_path_flow> *_flow;
    unsigned char _flow_local_ethernet_address;
    *void _input_source;
    BOOL _input_suspended;
    BOOL _cancelled;
    BOOL _delay_cancel;
    unsigned char _nexusInstance;
    unsigned int _nexusPort;
    unsigned char _flowId;
    *channel _channel;
    *channel_attr _attributes;
    int _channel_fd;
    unsigned short _slot_size;
    *channel_ring_desc _rx_ring;
    *channel_ring_desc _tx_ring;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif