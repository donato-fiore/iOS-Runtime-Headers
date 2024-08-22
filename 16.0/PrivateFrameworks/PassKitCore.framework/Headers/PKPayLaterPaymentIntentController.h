// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPAYMENTINTENTCONTROLLER_H
#define PKPAYLATERPAYMENTINTENTCONTROLLER_H

@class NSString, NSMutableDictionary;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKAccountServiceObserver, PKPaymentAuthorizationCoordinatorPrivateDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationCoordinator.h"
#import "PKPassLibrary.h"
#import "PKPaymentWebService.h"
#import "PKPeerPaymentWebService.h"
#import "PKAccountService.h"
#import "PKPaymentRequest.h"
#import "PKPayLaterAvailableFundingSourcesFilter.h"
#import "PKAccount.h"
#import "PKPeerPaymentAccount.h"

@interface PKPayLaterPaymentIntentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKAccountServiceObserver, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    id *_paymentAuthorizationCompletion;
    PKPassLibrary *_passLibrary;
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
    NSString *_defaultPassUniqueIdentifier;
    PKAccountService *_accountService;
    NSMutableDictionary *_cacheByIntentType;
    NSMutableDictionary *_requests;
    os_unfair_lock_s _lock;
    BOOL _didAuthorizePayment;
    PKPaymentRequest *_currentPaymentRequest;
    NSString *_presentationSceneIdentifier;
}


@property (readonly, nonatomic) PKPayLaterAvailableFundingSourcesFilter *availableFundingSourcesFilter; // ivar: _availableFundingSourcesFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly) Class superclass;


-(id)availableFundingSourcesForPaymentIntentDetails:(id)arg0 currencyAmount:(id)arg1 planIdentifier:(id)arg2 primaryPaymentSource:(id)arg3 ;
-(id)initWithPayLaterAccount:(id)arg0 paymentWebService:(id)arg1 passLibrary:(id)arg2 peerPaymentWebService:(id)arg3 accountService:(id)arg4 defaultPassUniqueIdentifier:(id)arg5 ;
-(id)payLaterPaymentRequestWithIntentDetails:(id)arg0 financingPlan:(id)arg1 primaryPaymentSource:(id)arg2 intent:(NSUInteger)arg3 currencyAmount:(id)arg4 ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(void)_executeNextRequest:(id)arg0 ;
-(void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg0 presentationSceneIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)accountChanged:(id)arg0 ;
-(void)dealloc;
-(void)intentDetailsForPlanIdentifier:(id)arg0 intent:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didUpdateAccountServicePaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)presentPaymentAuthorizationForFinancingPlan:(id)arg0 primaryPaymentSource:(id)arg1 intentDetails:(id)arg2 intent:(NSUInteger)arg3 currencyAmount:(id)arg4 presentationSceneIdentifier:(id)arg5 completion:(id)arg6 ;


@end


#endif