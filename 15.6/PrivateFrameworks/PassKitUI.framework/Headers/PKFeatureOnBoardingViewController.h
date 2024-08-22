// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFEATUREONBOARDINGVIEWCONTROLLER_H
#define PKFEATUREONBOARDINGVIEWCONTROLLER_H

@class PKAccount, NSMutableArray, PKPaymentInstallmentConfiguration;


#import "PKOnBoardingViewController.h"
#import "PKApplyController.h"

@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {
    NSUInteger _featureIdentifier;
    PKApplyController *_applyController;
    BOOL _isMainFeatureOnboardingPage;
    BOOL _useCompactLayout;
    NSUInteger _layout;
    BOOL _didBeginOnboardingSubject;
    PKAccount *_defaultFeatureAccount;
    BOOL _fetchedDefaultFeatureAccount;
    NSInteger _onboardingContext;
    NSMutableArray *_defaultFeatureAccountCompletions;
}


@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration


-(id)_analyticsPartialEventDictionaryForButtonTapWithButtonTagKey:(id)arg0 ;
-(id)initWithParentFlowController:(id)arg0 setupDelegate:(id)arg1 setupContext:(NSInteger)arg2 onboardingContext:(NSInteger)arg3 featureIdentifier:(NSUInteger)arg4 provisioningController:(id)arg5 paymentSetupProduct:(id)arg6 currentPage:(id)arg7 ;
-(id)nextOnboardingViewControllerWithPage:(id)arg0 product:(id)arg1 ;
-(void)_beginReportingIfNecessary;
-(void)_checkSecurityCapabilities:(NSUInteger)arg0 nextStep:(id)arg1 ;
-(void)_defaultFeatureAccountAnalyticsWithCompletion:(id)arg0 ;
-(void)_defaultFeatureAccountWithCompletion:(id)arg0 ;
-(void)_endReportingIfNecessary;
-(void)_handleAccountCredential:(id)arg0 completion:(id)arg1 ;
-(void)_handleApplyFlowWithCompletion:(id)arg0 ;
-(void)_openSecondaryActionItem;
-(void)_openTermsAndConditions;
-(void)_reportAnalyticsSubject:(id)arg0 withPartialEventDictionary:(id)arg1 ;
-(void)_reportAnalyticsViewDidAppear:(BOOL)arg0 ;
-(void)_reportCancelTapped;
-(void)_reportContinueTapped;
-(void)_reportRatesAndTermsTapped;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidUpdateLayout:(id)arg0 ;
-(void)handleProductAvailable;
-(void)handleSetupLater;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)updateForHeroImage;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif