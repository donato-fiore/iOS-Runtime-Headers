// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUICARDONFILEPVTFETCHTASK_H
#define AMSUICARDONFILEPVTFETCHTASK_H

@class AMSTask, ACAccount, NSDictionary, NSString, UIViewController;
@protocol AMSBagProtocol;


#import "AMSUIPaymentVerificationMetrics.h"

@interface AMSUICardOnFilePVTFetchTask : AMSTask

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *accountParameters; // ivar: _accountParameters
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) ACAccount *originalAccount; // ivar: _originalAccount
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(BOOL)_isCardOnFileOnStack:(id)arg0 ;
+(id)_accountToUseFromGivenAccount:(id)arg0 accountParameters:(id)arg1 activeiTunesAccount:(id)arg2 ;
+(id)_encoderWithBag:(id)arg0 account:(id)arg1 ;
+(id)_promiseToFetchURLResponseForAccount:(id)arg0 accountParameters:(id)arg1 url:(id)arg2 bag:(id)arg3 ;
+(id)_sessionWithBag:(id)arg0 account:(id)arg1 accountParameters:(id)arg2 ;
+(id)_tokenFromObject:(id)arg0 ;
+(id)_tokenResultFromTokenString:(id)arg0 ;
-(id)_promiseToFetchCardOnStackBooleanURL:(id)arg0 ;
-(id)_promiseToFetchCardOnStackTokenURL:(id)arg0 ;
-(id)_promiseToLoadBooleanURL;
-(id)_promiseToLoadPVTURL;
-(id)_promiseToPromptAfterCancel;
-(id)_promiseToPromptBeforeBiometricAuth;
-(id)initWithAccount:(id)arg0 accountParameters:(id)arg1 bag:(id)arg2 displayName:(id)arg3 metrics:(id)arg4 viewController:(id)arg5 ;
-(id)performTask;


@end


#endif