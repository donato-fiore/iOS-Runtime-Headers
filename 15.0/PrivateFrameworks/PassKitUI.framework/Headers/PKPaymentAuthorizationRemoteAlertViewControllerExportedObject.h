// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONREMOTEALERTVIEWCONTROLLEREXPORTEDOBJECT_H
#define PKPAYMENTAUTHORIZATIONREMOTEALERTVIEWCONTROLLEREXPORTEDOBJECT_H

@class NSMutableSet, NSString;
@protocol PKPaymentAuthorizationServiceProtocol;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationRemoteAlertViewController.h"

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol>

 {
    BOOL _dismissed;
}


@property (retain, nonatomic) NSMutableSet *completionHandlers; // ivar: _completionHandlers
@property (weak, nonatomic) PKPaymentAuthorizationRemoteAlertViewController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationServiceProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithController:(id)arg0 ;
-(void)_executeCompletionHandlers;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg0 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(NSInteger)arg0 ;
-(void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg0 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg0 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg0 signatureRequest:(id)arg1 ;
-(void)dealloc;
-(void)dismissed;
-(void)handleDismissWithCompletion:(id)arg0 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)handleHostApplicationDidCancel;
-(void)handleHostApplicationWillResignActive:(BOOL)arg0 ;


@end


#endif