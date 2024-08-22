// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTUNNELFLOWTELEMETRY_H
#define NPTUNNELFLOWTELEMETRY_H



#import "NPTunnelFlowHTTP.h"

@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP



-(BOOL)isBestEffort;
-(id)initWithTunnel:(id)arg0 service:(id)arg1 postURL:(id)arg2 ;
-(void)handleTunnelConnected;
-(void)reportTelemetry:(id)arg0 ;


@end


#endif