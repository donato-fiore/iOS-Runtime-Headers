// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEAGENTTUNNELEXTENSION_H
#define NEAGENTTUNNELEXTENSION_H

@class NSString;
@protocol NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver;


#import "NEAgentExtension.h"

@interface NEAgentTunnelExtension : NEAgentExtension <NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver>



@property BOOL cancelCalled; // ivar: _cancelCalled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)driverInterface;
-(id)managerInterface;
-(void)attachIPCWithCompletionHandler:(id)arg0 ;
-(void)connectWithParameters:(id)arg0 ;
-(void)disconnectWithReason:(int)arg0 ;
-(void)extension:(id)arg0 didRequestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 effectivePID:(int)arg5 completionHandler:(id)arg6 ;
-(void)extension:(id)arg0 didSetStatus:(NSInteger)arg1 ;
-(void)extension:(id)arg0 didSetTunnelConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)extension:(id)arg0 didStartWithError:(id)arg1 ;
-(void)extensionDidDetachIPC:(id)arg0 ;
-(void)handleAppsUninstalled:(id)arg0 ;
-(void)handleAppsUpdateBegins:(id)arg0 ;
-(void)handleAppsUpdateEnding:(id)arg0 ;
-(void)handleAppsUpdateEnds:(id)arg0 ;
-(void)handleCancel;
-(void)handleExtensionStartedWithCompletionHandler:(id)arg0 ;
-(void)sendExtensionFailed;
-(void)sendStatus:(NSInteger)arg0 withDisconnectError:(id)arg1 ;
-(void)setAppUUIDMap:(id)arg0 ;


@end


#endif