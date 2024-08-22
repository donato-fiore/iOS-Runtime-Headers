// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKORDERPHYSICALCARDADDRESSCONFIRMATIONVIEWCONTROLLER_H
#define PKORDERPHYSICALCARDADDRESSCONFIRMATIONVIEWCONTROLLER_H

@class CNPostalAddress, PKPhysicalCardArtworkOption, CLInUseAssertion, PKPaymentAuthorizationCoordinator, NSString;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKViewControllerPreflightable, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKOrderPhysicalCardController.h"
#import "PKOrderPhysicalCardHeroView.h"
#import "PKBusinessChatController.h"

@interface PKOrderPhysicalCardAddressConfirmationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKViewControllerPreflightable>

 {
    PKOrderPhysicalCardController *_controller;
    NSUInteger _featureIdentifier;
    CNPostalAddress *_shippingAddress;
    PKPhysicalCardArtworkOption *_artworkOption;
    PKOrderPhysicalCardHeroView *_physicalCardHeroView;
    CLInUseAssertion *_inUseAssertion;
    BOOL _authorized;
    PKPaymentAuthorizationCoordinator *_paymentAuthorizationCoordinator;
    PKBusinessChatController *_businessChatController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_addressBodyStringWithPostalAddress:(id)arg0 ;
-(id)initWithOrderPhysicalCardController:(id)arg0 ;
-(void)_presentNextViewControllerOrTerminate;
-(void)_presentViewController:(id)arg0 ;
-(void)_showDisplayableError:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_terminateFlow;
-(void)dealloc;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeApplePayTrustSignature:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif