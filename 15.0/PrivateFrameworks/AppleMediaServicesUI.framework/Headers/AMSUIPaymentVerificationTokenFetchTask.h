// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIPAYMENTVERIFICATIONTOKENFETCHTASK_H
#define AMSUIPAYMENTVERIFICATIONTOKENFETCHTASK_H

@class AMSTask, ACAccount, NSDictionary, AMSProcessInfo, NSString, AMSPromise, UIViewController;
@protocol AMSBagConsumer, AMSUIWebDelegate, AMSBagProtocol;


#import "AMSUIPaymentVerificationMetrics.h"
#import "WrappedAMSUIWebViewController.h"

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSDictionary *accountParameters; // ivar: _accountParameters
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) AMSPromise *resultPromise; // ivar: _resultPromise
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (retain, nonatomic) WrappedAMSUIWebViewController *webVC; // ivar: _webVC


+(id)_contextCombining:(id)arg0 with:(id)arg1 ;
+(id)_promiseToTryNextFlowWithResult:(id)arg0 error:(id)arg1 continuationBlock:(id)arg2 ;
+(id)_tokenFromDictionary:(id)arg0 ;
+(id)accountForNetworkingFromAccount:(id)arg0 accountParameters:(id)arg1 accountStore:(id)arg2 ;
+(id)createBagForSubProfile;
+(id)performApplePayTask:(id)arg0 ;
+(id)performCardOnFileTask:(id)arg0 ;
-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(id)initWithMode:(NSUInteger)arg0 account:(id)arg1 viewController:(id)arg2 bag:(id)arg3 displayName:(id)arg4 ;
-(id)initWithMode:(NSUInteger)arg0 accountParameters:(id)arg1 viewController:(id)arg2 bag:(id)arg3 displayName:(id)arg4 ;
-(id)performApplePayTaskWithFeatureFlag:(BOOL)arg0 ;
-(id)performCardOnFileTaskWithFeatureFlag:(BOOL)arg0 ;
-(id)performTask;
-(id)performWebFlowTask;
-(void)_finishPromiseWithResult:(id)arg0 error:(id)arg1 ;
-(void)setHeader:(id)arg0 withValueIn:(id)arg1 forKey:(id)arg2 onRequest:(id)arg3 ;
-(void)webViewController:(id)arg0 didEncodeNetworkRequest:(id)arg1 ;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif