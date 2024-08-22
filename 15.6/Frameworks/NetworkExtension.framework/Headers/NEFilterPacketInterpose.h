// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
}


@property (retain) NSUUID *flowId; // ivar: _flowId
@property *void input_source; // ivar: _input_source
@property BOOL input_suspended; // ivar: _input_suspended
@property *void key; // ivar: _key
@property unsigned int keyLength; // ivar: _keyLength
@property (retain) NSUUID *nexusInstance; // ivar: _nexusInstance
@property unsigned int nexusPort; // ivar: _nexusPort


-(BOOL)createChannel;
-(BOOL)matchFlow:(unsigned char)arg0 flowId:(unsigned char)arg1 ;
-(id)delayCurrentPacket;
-(id)description;
-(id)initWithInterface:(id)arg0 flowId:(unsigned char)arg1 nexusInstance:(unsigned char)arg2 nexusPort:(unsigned int)arg3 key:(*void)arg4 keyLength:(unsigned int)arg5 provider:(id)arg6 ;
-(struct interpose_frame *)allocateFrame:(struct interpose_frame *)arg0 ;
-(void)allowPacket:(id)arg0 ;
-(void)close;
-(void)close:(BOOL)arg0 ;
-(void)dealloc;
-(void)deallocateFrame:(struct interpose_frame *)arg0 ;
-(void)freePacket:(id)arg0 ;


@end


#endif