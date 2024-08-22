// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERPACKETINTERPOSE_H
#define NEFILTERPACKETINTERPOSE_H

@class NSUUID;
@protocol OS_nw_interface;

#import <Foundation/Foundation.h>

#import "NEFilterPacketProvider.h"
#import "NEFilterPacketContext.h"

@interface NEFilterPacketInterpose : NSObject {
    os_unfair_lock_s _lock;
    *channel _channel;
    *channel_attr _attributes;
    int _channel_fd;
    unsigned short _slot_size;
    *__slot_desc _rx_last_slot;
    interpose_frame _frame_buffer;
    *interpose_frame _current_frame;
    *channel_ring_desc _rx_ring_ingress;
    *channel_ring_desc _tx_ring_ingress;
    *channel_ring_desc _rx_ring_egress;
    *channel_ring_desc _tx_ring_egress;
    NEFilterPacketProvider *_provider;
    NSObject<OS_nw_interface> *_interface;
    NEFilterPacketContext *_context;
    BOOL _input_suspended;
    unsigned int _nexusPort;
    unsigned int _keyLength;
    NSUUID *_flowId;
    NSUUID *_nexusInstance;
    *void _key;
    *void _input_source;
}




-(id)description;
-(void)dealloc;


@end


#endif