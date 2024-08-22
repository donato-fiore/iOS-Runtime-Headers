// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPAYMENTSHEETTASK_H
#define AMSPAYMENTSHEETTASK_H

@class AKAppleIDAuthenticationContext, NSString, NSDictionary, PKPaymentAuthorizationController, NSMutableArray;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, AMSBagProtocol, OS_dispatch_queue;


#import "AMSTask.h"
#import "AMSPaymentSheetAssetCache.h"
#import "AMSPromise.h"
#import "AMSFinancePaymentSheetResponse.h"
#import "AMSPurchaseInfo.h"
#import "AMSPaymentSheetRequest.h"
#import "_PaymentSheetState.h"

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>



@property (retain, nonatomic) AMSPaymentSheetAssetCache *assetCache; // ivar: _assetCache
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *metricsDictionary; // ivar: _metricsDictionary
@property (retain, nonatomic) PKPaymentAuthorizationController *paymentAuthorizationController; // ivar: _paymentAuthorizationController
@property (retain, nonatomic) AMSPromise *paymentSheetPromise; // ivar: _paymentSheetPromise
@property (readonly, nonatomic) AMSFinancePaymentSheetResponse *paymentSheetResponse; // ivar: _paymentSheetResponse
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presentationQueue; // ivar: _presentationQueue
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // ivar: _purchaseInfo
@property (readonly, nonatomic) AMSPaymentSheetRequest *request; // ivar: _request
@property (retain, nonatomic) _PaymentSheetState *state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *userActions; // ivar: _userActions


+(BOOL)_shouldCompanionAuthFallbackToPasswordForError:(id)arg0 ;
-(BOOL)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)arg0 purchaseResult:(id)arg1 error:(*id)arg2 ;
-(BOOL)_presentPaymentSheetWithPaymentRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancel;
-(float)_challengeSigningDelay;
-(id)_metricsEvent;
-(id)_paymentRequest;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)perform;
-(void)_dismissPaymentAuthorizationController:(id)arg0 ;
-(void)paymentAuthorizationController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didEncounterAuthorizationEvent:(NSUInteger)arg1 ;
-(void)paymentAuthorizationController:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg0 ;


@end


#endif