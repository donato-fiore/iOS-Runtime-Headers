// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPPURCHASEVIEWCONTROLLER_H
#define PKPAYMENTSETUPPURCHASEVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSLayoutConstraint, PKPaymentAuthorizationCoordinator, UIImage, NSDecimalNumber, NSString, UIImageView, PKPaymentSetupProduct, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, PKServiceProviderPurchase, PKPaymentSetupPurchaseController, RemoteUIController, UILabel;
@protocol PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable;


#import "PKPaymentSetupPurchaseAmountView.h"

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable>

 {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
}


@property (nonatomic) BOOL acceptedTerms; // ivar: _acceptedTerms
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) PKPaymentSetupPurchaseAmountView *amountView; // ivar: _amountView
@property (retain, nonatomic) NSLayoutConstraint *amountViewBottomHeightConstraint; // ivar: _amountViewBottomHeightConstraint
@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *authorizationCoordinator; // ivar: _authorizationCoordinator
@property (retain, nonatomic) UIImage *cardImage; // ivar: _cardImage
@property (copy, nonatomic) NSDecimalNumber *currentAmount; // ivar: _currentAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fieldsVerified; // ivar: _fieldsVerified
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *passView; // ivar: _passView
@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (retain, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata; // ivar: _provisioningMethodMetadata
@property (retain, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase
@property (readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController; // ivar: _purchaseController
@property (nonatomic) NSInteger setupContext; // ivar: _setupContext
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) RemoteUIController *termsController; // ivar: _termsController
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_isCompactHeight;
-(BOOL)_readerModeIsSupported;
-(BOOL)_shouldHideImage;
-(id)_paymentRequestForAmount:(id)arg0 ;
-(id)_rightBarButton;
-(id)_spinnerBarButton;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 product:(id)arg3 ;
-(struct CGSize )_imageSizeShowingTransferButton:(BOOL)arg0 ;
-(void)_createConstraints;
-(void)_createSubviews;
-(void)_presentAddCardAlert:(id)arg0 ;
-(void)_presentTermsAndConditionsWithCompletion:(id)arg0 ;
-(void)_presetPaymentRequest:(id)arg0 forResultType:(NSInteger)arg1 ;
-(void)_rightBarButtonPressed:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_updateBottomHeightConstraint;
-(void)didUpdateAmount:(id)arg0 isValid:(BOOL)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePurchase:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)paymentSetupPurchaseAmountViewDidLayoutKeyboard:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)shakeCard;
-(void)transferBalanceFromExistingCard;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif