// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICALCARDACTIONCONTROLLER_H
#define PKPHYSICALCARDACTIONCONTROLLER_H

@class PKAccountService, PKPaymentDevice, PKAccountWebServicePhysicalCardActionRequest, NSError, PKPaymentAuthorizationCoordinator, PKAccount, PKAccountUser, NSString;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPhysicalCardActionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPhysicalCardActionController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKAccountService *_accountService;
    id<PKPhysicalCardActionControllerDelegate> *_delegate;
    PKPaymentDevice *_paymentDevice;
    PKAccountWebServicePhysicalCardActionRequest *_lastActionRequest;
    BOOL _lastActionSuccess;
    NSError *_lastActionError;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)_canPerformActionWithState:(NSInteger)arg0 ;
-(id)_generatePaymentRequestWithSignatureRequest:(id)arg0 ;
-(id)initWithAccountService:(id)arg0 account:(id)arg1 accountUser:(id)arg2 delegate:(id)arg3 ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(void)_performAction:(id)arg0 onPhysicalCard:(id)arg1 ;
-(void)_performApplePayTrustSignatureRequestWithSignature:(id)arg0 completion:(id)arg1 ;
-(void)_presentApplePayTrustWithPaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_transitionToState:(NSInteger)arg0 withError:(id)arg1 ;
-(void)activatePhysicalCard:(id)arg0 withActivationCode:(id)arg1 ;
-(void)activatePhysicalCardWithoutActivationCode:(id)arg0 ;
-(void)cancelPhysicalCard:(id)arg0 ;
-(void)disablePhysicalCard:(id)arg0 ;
-(void)enablePhysicalCard:(id)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeApplePayTrustSignature:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)replacePhysicalCard:(id)arg0 withReason:(NSUInteger)arg1 ;


@end


#endif