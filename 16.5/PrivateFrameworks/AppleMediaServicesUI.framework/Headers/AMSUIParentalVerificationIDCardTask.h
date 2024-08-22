// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIPARENTALVERIFICATIONIDCARDTASK_H
#define AMSUIPARENTALVERIFICATIONIDCARDTASK_H

@class AMSTask, ACAccount, NSDictionary, NSString, UIViewController;
@protocol AMSBagProtocol;


#import "AMSUIPaymentVerificationMetrics.h"

@interface AMSUIParentalVerificationIDCardTask : AMSTask

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *accountParameters; // ivar: _accountParameters
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) ACAccount *originalAccount; // ivar: _originalAccount
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(NSInteger)_minAgeFromObject:(id)arg0 ;
+(id)_accountToUseFromGivenAccount:(id)arg0 accountParameters:(id)arg1 accountStore:(id)arg2 ;
+(id)_descriptorForMinimumAge:(NSInteger)arg0 ;
+(id)_encoderWithBag:(id)arg0 account:(id)arg1 ;
+(id)_identityController;
+(id)_identityRequestWithDescriptor:(id)arg0 nonce:(id)arg1 ;
+(id)_nonceFromString:(id)arg0 ;
+(id)_promiseToFetchURLResponseForAccount:(id)arg0 accountParameters:(id)arg1 url:(id)arg2 bag:(id)arg3 requestBody:(id)arg4 ;
+(id)_requestDictFromMinimumAge:(NSInteger)arg0 walletData:(id)arg1 nonce:(id)arg2 ;
+(id)_sessionWithBag:(id)arg0 account:(id)arg1 accountParameters:(id)arg2 ;
+(id)_tokenFromObject:(id)arg0 ;
+(id)_tokenResultFromTokenString:(id)arg0 ;
-(id)_dataFromIDCardForMinimumAge:(NSInteger)arg0 nonce:(id)arg1 ;
-(id)_promiseToFetchIDCardTokenURL:(id)arg0 requestBody:(id)arg1 ;
-(id)_promiseToLoadPVTURLWithBody:(id)arg0 ;
-(id)_promiseToPromptAfterFailure;
-(id)_promiseToRequestIDCardData;
-(id)initWithAccount:(id)arg0 accountParameters:(id)arg1 bag:(id)arg2 displayName:(id)arg3 metrics:(id)arg4 viewController:(id)arg5 ;
-(id)performTask;


@end


#endif