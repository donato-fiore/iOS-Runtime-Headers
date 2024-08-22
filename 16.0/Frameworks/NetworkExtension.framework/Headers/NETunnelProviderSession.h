// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETUNNELPROVIDERSESSION_H
#define NETUNNELPROVIDERSESSION_H



#import "NEVPNConnection.h"

@interface NETunnelProviderSession : NEVPNConnection



-(BOOL)sendProviderMessage:(id)arg0 returnError:(*id)arg1 responseHandler:(id)arg2 ;
-(BOOL)startTunnelWithOptions:(id)arg0 andReturnError:(*id)arg1 ;
-(void)stopTunnel;


@end


#endif