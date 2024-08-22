// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGFTMETRICSLOCALJOIN_H
#define IDSGFTMETRICSLOCALJOIN_H



#import "IDSGFTMetricsReferencePoint.h"

@interface IDSGFTMetricsLocalJoin : IDSGFTMetricsReferencePoint

@property BOOL didJoin; // ivar: _didJoin


-(void)avcReceiveMKMTime:(CGFloat)arg0 forMKI:(id)arg1 isGeneratedLocally:(BOOL)arg2 ;
-(void)clientChannelConnected;
-(void)connectQRServer;
-(void)didConnectUnderlyingE2ELink;
-(void)didConnectUnderlyingRelayLink;
-(void)didCreateMKM:(id)arg0 ;
-(void)didSendJoin;
-(void)firstIncomingPacketTime:(CGFloat)arg0 forMKI:(id)arg1 ;
-(void)firstOutgoingPacketTime:(CGFloat)arg0 forMKI:(id)arg1 ;
-(void)globalLinkStart;
-(void)join;
-(void)quicAllocbindRequest;
-(void)quicAllocbindResponse;
-(void)sendAllocationRequest;
-(void)sendMKMToAVC:(id)arg0 isGeneratedLocally:(BOOL)arg1 ;
-(void)stunAllocbindRequest;
-(void)stunAllocbindResponse;
-(void)tcpAllocbindRequest;
-(void)tcpAllocbindResponse;
-(void)willSendAllocbindRequest;
-(void)willSendJoin;


@end


#endif