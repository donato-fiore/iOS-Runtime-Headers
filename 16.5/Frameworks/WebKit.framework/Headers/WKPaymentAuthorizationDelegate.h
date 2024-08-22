// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKPAYMENTAUTHORIZATIONDELEGATE_H
#define WKPAYMENTAUTHORIZATIONDELEGATE_H


#import <Foundation/Foundation.h>


@interface WKPaymentAuthorizationDelegate : NSObject {
    RetainPtr<PKPaymentRequest> _request;
    WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::DefaultWeakPtrImpl> _presenter;
    RetainPtr<NSArray<PKPaymentSummaryItem *>> _summaryItems;
    RetainPtr<PKShippingMethods> _availableShippingMethods;
    RetainPtr<NSError> _sessionError;
    BlockPtr<void (PKPaymentAuthorizationResult *)> _didAuthorizePaymentCompletion;
    BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _didRequestMerchantSessionCompletion;
    BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
    BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
    BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;
    BlockPtr<void (PKPaymentRequestCouponCodeUpdate *)> _didChangeCouponCodeCompletion;
}




-(id)_initWithRequest:(id)arg0 presenter:(*void)arg1 ;
-(void)_didAuthorizePayment:(id)arg0 completion:(id)arg1 ;
-(void)_didChangeCouponCode:(id)arg0 completion:(id)arg1 ;
-(void)_didFinish;
-(void)_didRequestMerchantSession:(id)arg0 ;
-(void)_didSelectPaymentMethod:(id)arg0 completion:(id)arg1 ;
-(void)_didSelectShippingContact:(id)arg0 completion:(id)arg1 ;
-(void)_didSelectShippingMethod:(id)arg0 completion:(id)arg1 ;
-(void)_getPaymentServicesMerchantURL:(id)arg0 ;
-(void)_willFinishWithError:(id)arg0 ;
-(void)completeCouponCodeChange:(id)arg0 ;
-(void)completeMerchantValidation:(id)arg0 error:(id)arg1 ;
-(void)completePaymentMethodSelection:(id)arg0 ;
-(void)completePaymentSession:(NSInteger)arg0 errors:(id)arg1 ;
-(void)completePaymentSession:(NSInteger)arg0 errors:(id)arg1 orderDetails:(id)arg2 ;
-(void)completeShippingContactSelection:(id)arg0 ;
-(void)completeShippingMethodSelection:(id)arg0 ;
-(void)invalidate;


@end


#endif