// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDTESTFLIGHTSERVICEEXTENSIONREMOTECONTEXT_H
#define ASDTESTFLIGHTSERVICEEXTENSIONREMOTECONTEXT_H

@class NSString;
@protocol ASDTestFlightServiceExtensionRemoteXPCInterface;


#import "ASDTestFlightServiceExtensionContext.h"
#import "ASDTestFlightServiceExtension.h"

@interface ASDTestFlightServiceExtensionRemoteContext : ASDTestFlightServiceExtensionContext <ASDTestFlightServiceExtensionRemoteXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ASDTestFlightServiceExtension *extensionInstance; // ivar: _extensionInstance
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didReachTerminalPhaseWithBetaBundle:(id)arg0 terminalPhase:(NSInteger)arg1 error:(id)arg2 reply:(id)arg3 ;
-(void)didReceivePushMessages:(id)arg0 reply:(id)arg1 ;
-(void)didReceivePushToken:(id)arg0 reply:(id)arg1 ;
-(void)reloadAppsFromServerWithReply:(id)arg0 ;
-(void)serviceExtensionPerformCleanup;
-(void)serviceExtensionTimeWillExpire;


@end


#endif