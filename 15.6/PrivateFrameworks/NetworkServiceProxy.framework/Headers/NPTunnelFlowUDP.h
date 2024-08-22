// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTUNNELFLOWUDP_H
#define NPTUNNELFLOWUDP_H

@class NWUDPSession, NSDate, NWEndpoint, NSMutableArray;


#import "NPTunnelFlowProtocol.h"

@interface NPTunnelFlowUDP : NPTunnelFlowProtocol

@property (retain) NWUDPSession *directSession; // ivar: _directSession
@property (retain) NSDate *firstPacketDate; // ivar: _firstPacketDate
@property (readonly) NWEndpoint *remoteEndpoint; // ivar: _remoteEndpoint
@property NSUInteger savedDataSize; // ivar: _savedDataSize
@property (retain) NSMutableArray *savedDirectData; // ivar: _savedDirectData


-(?)initWithTunnel:(?)arg0 appRule:(?)arg1 inputProtocolextraProperties;
-(void)handleAppData:(id)arg0 ;
-(void)handleIncomingData:(id)arg0 andError:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendDataOnDirectSession:(id)arg0 ;
-(void)startDirectConnection;
-(void)startHandlingIncomingData;
-(void)stopDirectConnection;


@end


#endif