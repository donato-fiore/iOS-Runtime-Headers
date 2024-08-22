// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSUBSCRIBERTELEPHONYCONTROLLER_H
#define TPSSUBSCRIBERTELEPHONYCONTROLLER_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientSubscriberDelegate;


#import "TPSTelephonyController.h"

@interface TPSSubscriberTelephonyController : TPSTelephonyController <CoreTelephonyClientSubscriberDelegate>



@property (nonatomic, getter=isSIMPasscodeLockEnabled) BOOL SIMPasscodeLockEnabled; // ivar: _SIMPasscodeLockEnabled
@property (nonatomic) NSInteger SIMPasscodeRemainingAttempts; // ivar: _SIMPasscodeRemainingAttempts
@property (copy, nonatomic) NSString *SIMStatus; // ivar: _SIMStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


-(id)getSIMPasscodeLockEnabledValue;
-(id)getSIMPasscodeLockEnabledValueWithError:(*id)arg0 ;
-(id)getSIMPasscodeRemainingAttemptsValueWithError:(*id)arg0 ;
-(id)getSIMStatusWithError:(*id)arg0 ;
-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)changePIN:(id)arg0 newPin:(id)arg1 ;
-(void)changePIN:(id)arg0 newPin:(id)arg1 completion:(id)arg2 ;
-(void)fetchSIMPasscodeLockEnabled;
-(void)fetchSIMPasscodeLockEnabledWithCompletion:(id)arg0 ;
-(void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(id)arg0 ;
-(void)fetchSIMStatusWithCompletion:(id)arg0 ;
-(void)presentSIMPasscodeAlert;
-(void)setSIMLockEnabled:(BOOL)arg0 pin:(id)arg1 ;
-(void)setSIMLockEnabled:(BOOL)arg0 pin:(id)arg1 completion:(id)arg2 ;
-(void)simLockSaveRequestDidComplete:(id)arg0 success:(BOOL)arg1 ;
-(void)simPinChangeRequestDidComplete:(id)arg0 success:(BOOL)arg1 ;
-(void)simPinEntryErrorDidOccur:(id)arg0 status:(id)arg1 ;
-(void)simPukEntryErrorDidOccur:(id)arg0 status:(id)arg1 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif