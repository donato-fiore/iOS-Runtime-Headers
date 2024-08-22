// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFACCOUNTREGISTRAR_H
#define CNFACCOUNTREGISTRAR_H

@class IMAccount, UIViewController, NSTimer;

#import <Foundation/Foundation.h>


@interface CNFAccountRegistrar : NSObject

@property (retain) IMAccount *account; // ivar: _account
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (retain) UIViewController *presentationViewController; // ivar: _presentationViewController
@property (retain) NSTimer *registrationTimer; // ivar: _registrationTimer
@property NSInteger serviceType; // ivar: _serviceType


-(id)initWithServiceType:(NSInteger)arg0 presentationViewController:(id)arg1 ;
-(void)_accountRegistrationStatusChanged:(id)arg0 ;
-(void)_configureAliasesForAccount:(id)arg0 ;
-(void)_continueRegisteringAuthenticatedAccount:(id)arg0 ;
-(void)_registrationTimerFired:(id)arg0 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)continueRegistrationForAccount:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)registerAccountWithUsername:(id)arg0 password:(id)arg1 service:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif