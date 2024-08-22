// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONCOORDINATOREXPORTEDOBJECT_H
#define PKPAYMENTAUTHORIZATIONCOORDINATOREXPORTEDOBJECT_H

@class NSString;
@protocol PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationCoordinator.h"

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>

 {
    os_unfair_lock_s _delegateLock;
}


@property (weak, nonatomic) PKPaymentAuthorizationCoordinator *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationCoordinatorPrivateDelegate> *privateDelegate; // ivar: _privateDelegate
@property (retain, nonatomic) NSObject<PKPaymentAuthorizationServiceProtocol> *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


-(id)init;
-(id)initWithController:(id)arg0 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg0 ;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizeDisbursement:(id)arg0 ;
-(void)authorizationDidAuthorizePayment:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg0 ;
-(void)authorizationDidAuthorizePurchase:(id)arg0 ;
-(void)authorizationDidChangeCouponCode:(id)arg0 ;
-(void)authorizationDidFinishWithError:(id)arg0 ;
-(void)authorizationDidPresent;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidSelectPaymentMethod:(id)arg0 ;
-(void)authorizationDidSelectShippingAddress:(id)arg0 ;
-(void)authorizationDidSelectShippingMethod:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg0 ;
-(void)authorizationWillStart;
-(void)dealloc;
-(void)didEncounterAuthorizationEvent:(NSUInteger)arg0 ;
-(void)handleConnectionDidOpenWithCompletion:(id)arg0 ;


@end


#endif