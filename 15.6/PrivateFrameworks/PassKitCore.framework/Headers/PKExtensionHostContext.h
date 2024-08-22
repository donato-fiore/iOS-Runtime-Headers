// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXTENSIONHOSTCONTEXT_H
#define PKEXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol PKExtensionHostContextProtocol, OS_dispatch_group, PKPaymentAuthorizationHostProtocol;


#import "PKExtensionBaseContext.h"

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup; // ivar: _delayCallbacksGroup
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(id)arg0 ;
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
-(void)beginDelayingCallbacks;
-(void)didEncounterAuthorizationEvent:(NSUInteger)arg0 ;
-(void)endDelayingCallbacks;


@end


#endif