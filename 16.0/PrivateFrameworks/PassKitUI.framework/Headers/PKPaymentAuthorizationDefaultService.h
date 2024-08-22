// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONDEFAULTSERVICE_H
#define PKPAYMENTAUTHORIZATIONDEFAULTSERVICE_H

@class NSString;
@protocol PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationPresenter;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationDefaultService : NSObject <PKPaymentAuthorizationServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationPresenter> *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg0 signatureRequest:(id)arg1 ;
-(void)handleDismissWithCompletion:(id)arg0 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)handleHostApplicationWillResignActive:(BOOL)arg0 ;
-(void)hostCallDidGoUnhandledForMethod:(id)arg0 ;


@end


#endif