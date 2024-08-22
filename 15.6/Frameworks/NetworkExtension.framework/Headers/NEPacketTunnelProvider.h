// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPACKETTUNNELPROVIDER_H
#define NEPACKETTUNNELPROVIDER_H

@class NSString;
@protocol NSExtensionRequestHandling;


#import "NETunnelProvider.h"
#import "NEPacketTunnelFlow.h"

@interface NEPacketTunnelProvider : NETunnelProvider <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NEPacketTunnelFlow *packetFlow; // ivar: _packetFlow
@property (readonly) Class superclass;


-(id)createTCPConnectionThroughTunnelToEndpoint:(id)arg0 enableTLS:(BOOL)arg1 TLSParameters:(id)arg2 delegate:(id)arg3 ;
-(id)createUDPSessionThroughTunnelToEndpoint:(id)arg0 fromEndpoint:(id)arg1 ;
-(id)getTunnelInterface;
-(id)init;
-(id)initWithVirtualInterfaceType:(NSInteger)arg0 ;
-(void)cancelTunnelWithError:(id)arg0 ;
-(void)requestSocket:(BOOL)arg0 interface:(id)arg1 local:(id)arg2 remote:(id)arg3 completionHandler:(id)arg4 ;
-(void)startTunnelWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopTunnelWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif