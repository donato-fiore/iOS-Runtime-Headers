// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COSTATUSBAR_H
#define COSTATUSBAR_H

@class NSString, SBSStatusBarStyleOverridesCoordinator, SBSStatusBarStyleOverridesAssertion;
@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface COStatusBar : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>



@property (retain, nonatomic) NSString *conditionClass; // ivar: _conditionClass
@property (retain, nonatomic) SBSStatusBarStyleOverridesCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didRequestTeardownOnce; // ivar: _didRequestTeardownOnce
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *profileDescription; // ivar: _profileDescription
@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarAssertion; // ivar: _statusBarAssertion
@property (readonly) Class superclass;
@property (copy, nonatomic) id *terminationBeganCallback; // ivar: _terminationBeganCallback
@property (copy, nonatomic) id *terminationNotifyCallback; // ivar: _terminationNotifyCallback
@property (nonatomic) *__CFUserNotification userNotificationStopCondition; // ivar: _userNotificationStopCondition


-(BOOL)showStopConditionAlert;
-(BOOL)statusBarCoordinator:(id)arg0 receivedTapWithContext:(id)arg1 completionBlock:(id)arg2 ;
-(id)doTeardownOnStop;
-(id)getDeviceType;
// -(id)initWithConditionClass:(id)arg0 profile:(id)arg1 teardownBeganCb:(id)arg2 teardownCompleteCb:(unk)arg3  ;
-(void)acquireStatusBarWithCompletionHandler:(id)arg0 ;
-(void)clearStatusBar;
-(void)dealloc;
-(void)showConditionIsTearingDownAlert;
-(void)statusBarCoordinator:(id)arg0 invalidatedRegistrationWithError:(id)arg1 ;


@end


#endif