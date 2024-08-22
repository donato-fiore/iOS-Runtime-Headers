// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYOFFERVIEWCONTROLLER_H
#define PKAPPLYOFFERVIEWCONTROLLER_H

@class NSString, CLInUseAssertion, PKPaymentInstallmentConfiguration, UIImage;
@protocol PKApplyFlowControllerProtocol;


#import "PKApplyExplanationViewController.h"
#import "PKAccountFlowController.h"
#import "PKApplyOfferCreditCardView.h"

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol>

 {
    PKAccountFlowController *_accountController;
    PKApplyOfferCreditCardView *_offerView;
    NSString *_offerTermsIdentifier;
    CLInUseAssertion *_inUseAssertion;
    NSUInteger _layout;
    BOOL _useCompactLayout;
    PKPaymentInstallmentConfiguration *_installmentConfiguration;
    BOOL _hasSufficientOTBForInstallment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *heroImage; // ivar: _heroImage
@property (readonly) Class superclass;


-(id)analyticsAdditionalValues;
-(id)analyticsPageTag;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 ;
-(void)_openTermsAndConditions;
-(void)_setupForBroadwayApplication:(id)arg0 ;
-(void)_terminateApplyFlowWithoutDeclining;
-(void)_termsAccepted:(BOOL)arg0 ;
-(void)dealloc;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif