// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DVTIOSDEVICEGLOBALSTATUSINDICATOR_H
#define DVTIOSDEVICEGLOBALSTATUSINDICATOR_H

@class SBSStatusBarStyleOverridesCoordinator, NSString, SBSStatusBarStyleOverridesAssertion;
@protocol SBSStatusBarStyleOverridesCoordinatorDelegate, DVTDeviceGlobalStatusIndicator, OS_os_log;

#import <Foundation/Foundation.h>

#import "DVTDeviceGlobalStatusIndicatorConfiguration.h"

@interface DVTiOSDeviceGlobalStatusIndicator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate, DVTDeviceGlobalStatusIndicator>

 {
    NSObject<OS_os_log> *_statusIndicatorLog;
}


@property (retain, nonatomic) DVTDeviceGlobalStatusIndicatorConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) SBSStatusBarStyleOverridesCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarAssertion; // ivar: _statusBarAssertion
@property (copy, nonatomic) id *stoppedByUserBlock; // ivar: _stoppedByUserBlock
@property (readonly) Class superclass;
@property (nonatomic) *__CFUserNotification userNotificationStopCondition; // ivar: _userNotificationStopCondition


-(BOOL)_showStopConditionAlert;
-(BOOL)statusBarCoordinator:(id)arg0 receivedTapWithContext:(id)arg1 completionBlock:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 stoppedByUserBlock:(id)arg1 ;
-(void)acquireStatusBarWithCompletionHandler:(id)arg0 ;
-(void)activateWithCompletionBlock:(id)arg0 ;
-(void)clearStatusBar;
-(void)deactivate;
-(void)statusBarCoordinator:(id)arg0 invalidatedRegistrationWithError:(id)arg1 ;


@end


#endif