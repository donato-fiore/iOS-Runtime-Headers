// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPKUSERSWITCHCYCLECONTROLLER_H
#define LPKUSERSWITCHCYCLECONTROLLER_H

@protocol LPKUserSwitchCycleResponder;

#import <Foundation/Foundation.h>


@interface LPKUserSwitchCycleController : NSObject

@property (weak, nonatomic) NSObject<LPKUserSwitchCycleResponder> *delegate; // ivar: _delegate


-(BOOL)_isLoginSession;
-(BOOL)_setUserSwitchDestinationExpectation:(NSUInteger)arg0 ;
-(BOOL)_validateUserSwitchExpectation;
-(BOOL)startUserSwitchWithType:(NSUInteger)arg0 count:(NSInteger)arg1 username:(id)arg2 password:(id)arg3 ;
-(BOOL)triggerTestUserSwitchIfNeeded;
-(NSUInteger)_currentEnvironment;
-(id)initWithDelegate:(id)arg0 ;
-(void)_clearOutLocalPerfTestDefaults;
-(void)_fixTestStatesForRetry;
-(void)_loginAccount:(id)arg0 password:(id)arg1 localLoginOnly:(BOOL)arg2 delay:(CGFloat)arg3 ;
-(void)_scheduleRetryWithTimeout:(CGFloat)arg0 ;
-(void)_triggerFastLogoutWithDelay:(CGFloat)arg0 ;
-(void)_triggerFullLogoutWithDelay:(CGFloat)arg0 ;
-(void)_updateLocalPerfTestCycleCount:(NSInteger)arg0 ;
-(void)interruptLocalUserSwitchTest;


@end


#endif