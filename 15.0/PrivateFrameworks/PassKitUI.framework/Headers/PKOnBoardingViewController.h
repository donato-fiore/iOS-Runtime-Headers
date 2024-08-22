// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKONBOARDINGVIEWCONTROLLER_H
#define PKONBOARDINGVIEWCONTROLLER_H

@class PKDynamicProvisioningPageContent, NSString, UIImage, PKPaymentSetupProduct, PKPaymentProvisioningController;
@protocol PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable, UIAdaptivePresentationControllerDelegate, PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKOnBoardingViewController : PKExplanationViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable, UIAdaptivePresentationControllerDelegate>



@property (retain, nonatomic) PKDynamicProvisioningPageContent *currentPage; // ivar: _currentPage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *heroImage; // ivar: _heroImage
@property (weak, nonatomic) NSObject<PKSetupFlowControllerProtocol> *parentFlowController; // ivar: _parentFlowController
@property (retain, nonatomic) PKPaymentSetupProduct *paymentSetupProduct; // ivar: _paymentSetupProduct
@property (readonly, nonatomic) BOOL preflightCalled; // ivar: _preflightCalled
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(id)initWithParentFlowController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 provisioningController:(id)arg3 paymentSetupProduct:(id)arg4 currentPage:(id)arg5 ;
-(id)nextOnboardingViewControllerWithPage:(id)arg0 product:(id)arg1 ;
-(id)paymentSetupMarker;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewControllerDidSelectDone:(id)arg0 ;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)handleNotifyRequested;
-(void)handleProductAvailable;
-(void)handleSetupLater;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)terminateSetupFlow;
-(void)updateForHeroImage;
-(void)viewDidLoad;


@end


#endif