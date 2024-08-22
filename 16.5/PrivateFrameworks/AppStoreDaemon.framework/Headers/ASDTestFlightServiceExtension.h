// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDTESTFLIGHTSERVICEEXTENSION_H
#define ASDTESTFLIGHTSERVICEEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface ASDTestFlightServiceExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)didReachTerminalPhaseWithBetaBundleID:(id)arg0 terminalPhase:(NSInteger)arg1 error:(id)arg2 reply:(id)arg3 ;
-(void)didReceivePushMessages:(id)arg0 reply:(id)arg1 ;
-(void)didReceivePushToken:(id)arg0 reply:(id)arg1 ;
-(void)invokeCommand:(id)arg0 withArguments:(id)arg1 reply:(id)arg2 ;
-(void)reloadAppsFromServerWithReply:(id)arg0 ;
-(void)serviceExtensionTimeWillExpire;


@end


#endif