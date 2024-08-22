// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCPACKETRELAY_H
#define AVCPACKETRELAY_H

@class NSArray;
@protocol OS_dispatch_queue, AVCPacketRelayDelegate, AVCPacketRelayConnectionProtocol;

#import <Foundation/Foundation.h>

#import "AVCPacketRelayDriver.h"

@interface AVCPacketRelay : NSObject {
    AVCPacketRelayDriver *_packetDriver;
    NSObject<OS_dispatch_queue> *_queue;
    _AVCPacketRelayHealthStats _healthStats;
}


@property (retain) NSArray *connections; // ivar: _connections
@property (nonatomic) NSObject<AVCPacketRelayDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<AVCPacketRelayConnectionProtocol> *multiplexedConnection; // ivar: _multiplexedConnection


-(BOOL)isAllConnectionTypeValid:(id)arg0 ;
-(BOOL)stopAllConnections;
-(id)findConnectionToForwardData:(*void)arg0 size:(int)arg1 ;
-(id)initWithConnection:(id)arg0 connection:(id)arg1 error:(*id)arg2 ;
-(id)initWithConnections:(id)arg0 multiplexedConnection:(id)arg1 error:(*id)arg2 ;
-(int)startAllConnections;
-(void)dealloc;
-(void)healthPrint:(NSUInteger)arg0 isSend:(BOOL)arg1 ;
-(void)start;
-(void)stop;
-(void)updateDemuxPacketStatsWithPacketFilterPacketType:(unsigned char)arg0 ;


@end


#endif