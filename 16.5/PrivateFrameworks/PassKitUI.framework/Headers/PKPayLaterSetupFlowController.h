// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERSETUPFLOWCONTROLLER_H
#define PKPAYLATERSETUPFLOWCONTROLLER_H

@class NSBundle, NSString, PKPaymentPass, UIViewController, PKPayLaterFinancingController, PKPayLaterFinancingOption, PKPayLaterPreliminaryAssessment;
@protocol PKSetupFlowControllerProtocol, PKAccountFlowControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPayLaterSetupFlowControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKApplyController.h"
#import "PKPassSnapshotter.h"
#import "PKAccountFlowController.h"
#import "PKSecurityCapabilitiesController.h"

@interface PKPayLaterSetupFlowController : NSObject <PKSetupFlowControllerProtocol, PKAccountFlowControllerDelegate, PKPaymentSetupViewControllerDelegate>

 {
    PKApplyController *_applyController;
    PKPassSnapshotter *_snapshotter;
    NSBundle *_localizedBundle;
    NSString *_preferredLanguage;
    PKPaymentPass *_payLaterPass;
    PKAccountFlowController *_accountFlowController;
    PKSecurityCapabilitiesController *_securityCapabiltiesController;
    UIViewController *_parentViewController;
    BOOL _meetsSecurityCheck;
    BOOL _didBeginAnalyticsReporter;
    NSUInteger _lastFeatureApplicationState;
    id *_nextViewControllerCompletion;
}


@property (readonly, nonatomic) NSInteger controllerContext; // ivar: _controllerContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPayLaterSetupFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPayLaterFinancingController *financingController; // ivar: _financingController
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (retain, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption; // ivar: _selectedFinancingOption
@property (nonatomic) PKPayLaterPreliminaryAssessment *selectedPreliminaryAssessment; // ivar: _selectedPreliminaryAssessment
@property (readonly, nonatomic) NSInteger setupContext; // ivar: _setupContext
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupViewControllerDelegate; // ivar: _setupViewControllerDelegate
@property (readonly) Class superclass;


+(id)defaultPayLaterSetupFlowControllerForAccount:(id)arg0 controllerContext:(NSInteger)arg1 referrerIdentifier:(id)arg2 ;
+(id)payLaterSetupFlowControllerForAccount:(id)arg0 controllerContext:(NSInteger)arg1 referrerIdentifier:(id)arg2 paymentWebService:(id)arg3 accountService:(id)arg4 peerPaymentService:(id)arg5 paymentService:(id)arg6 passLibrary:(id)arg7 ;
-(BOOL)_didStartPayLaterPassProvisioning;
-(BOOL)hasPayLaterPass;
-(NSUInteger)selectedProductType;
-(id)_firstViewControllerWithoutNavController;
-(id)_genericError;
-(id)firstViewController;
-(id)initWithFinancingController:(id)arg0 controllerContext:(NSInteger)arg1 selectedFinancingOption:(id)arg2 selectedPreliminaryAssessment:(id)arg3 referrerIdentifier:(id)arg4 ;
-(id)localizedBundle;
-(id)payLaterPassUniqueIdentifier;
-(id)preferredLanguage;
-(id)snapshotForPass:(id)arg0 completion:(id)arg1 ;
-(void)_acceptTermsIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_callNextViewControllerCompletionBlockWithError:(id)arg0 ;
-(void)_checkSecurityCapabiltiesWithCompletion:(id)arg0 ;
-(void)_nextApplyViewControllerWithCompletion:(id)arg0 ;
-(void)_updatePayLaterPass;
-(void)_viewControllerForState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)accountFlowController:(id)arg0 requestsPresentationOfDisplayableError:(id)arg1 ;
-(void)accountFlowController:(id)arg0 requestsPresentationOfViewController:(id)arg1 ;
-(void)endSetupFlowFromViewController:(id)arg0 shouldDismiss:(BOOL)arg1 ;
-(void)fetchPayLaterDynamicContentWithCompletion:(id)arg0 ;
-(void)nextViewControllerFromState:(NSInteger)arg0 parentViewController:(id)arg1 completion:(id)arg2 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)provisionPayLaterPassWithCompletion:(id)arg0 ;
-(void)reportAnalyticsEvent:(id)arg0 ;
-(void)reportAnalyticsEventForPageTag:(id)arg0 dictionary:(id)arg1 ;
-(void)termsViewControllerForTermsIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif