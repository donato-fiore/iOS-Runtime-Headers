// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPPURCHASECONTROLLER_H
#define PKPAYMENTSETUPPURCHASECONTROLLER_H

@class PKPaymentProvisioningController, UIViewController<PKPaymentSetupPurchaseControllerDelegate><PKPaymentSetupDelegate><PKPaymentAuthorizationCoordinatorDelegate><PKPaymentAuthorizationCoordinatorPrivateDelegate>, PKPaymentProvisioningMethodMetadata, PKPaymentSetupProduct, NSString, RemoteUIController;
@protocol RemoteUIControllerDelegate, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupPurchaseController : NSObject <RemoteUIControllerDelegate>

 {
    PKPaymentProvisioningController *_provisioningController;
    NSInteger _setupContext;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    UIViewController<PKPaymentSetupPurchaseControllerDelegate><PKPaymentSetupDelegate><PKPaymentAuthorizationCoordinatorDelegate><PKPaymentAuthorizationCoordinatorPrivateDelegate> *_purchaseControllerDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    PKPaymentSetupProduct *_product;
}


@property (nonatomic) BOOL acceptedTerms; // ivar: _acceptedTerms
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) RemoteUIController *termsController; // ivar: _termsController


-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 purchaseControllerDelegate:(id)arg3 product:(id)arg4 provisioningMetadata:(id)arg5 ;
-(id)paymentRequestForAmount:(id)arg0 ;
-(id)paymentRequestForProduct:(id)arg0 serviceProviderProduct:(id)arg1 productItem:(id)arg2 ;
-(void)presentAddCardAlert:(id)arg0 ;
-(void)presentTermsAndConditionsWithCompletion:(id)arg0 ;
-(void)presetPaymentRequest:(id)arg0 forResultType:(NSInteger)arg1 ;


@end


#endif