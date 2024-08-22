// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREREDEMPTIONVIEWCONTROLLER_H
#define PKPASSSHAREREDEMPTIONVIEWCONTROLLER_H

@class PKPassEntitlementsComposer, OBPrivacyLinkController, PKPassShareActivationOptions, NSString, NSArray;
@protocol PKPassShareRedemptionActivationCodeSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPassShareRedemptionActivationCodeSectionController.h"
#import "PKSharePreviewOverviewSectionController.h"
#import "PKShareRedemptionAnalyticsReporter.h"
#import "PKHeroCardExplainationHeaderView.h"

@interface PKPassShareRedemptionViewController : PKPaymentSetupOptionsViewController <PKPassShareRedemptionActivationCodeSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate>

 {
    PKPassShareRedemptionActivationCodeSectionController *_activationCodeSectionController;
    PKSharePreviewOverviewSectionController *_sharePreviewSectionController;
    PKPassEntitlementsComposer *_entitlementComposer;
    OBPrivacyLinkController *_privacyLinkController;
    PKShareRedemptionAnalyticsReporter *_analyticsReporter;
}


@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (nonatomic) BOOL analyticsEnabled; // ivar: _analyticsEnabled
@property (readonly, nonatomic) PKShareRedemptionAnalyticsReporter *analyticsReporter;
@property (readonly, nonatomic) PKHeroCardExplainationHeaderView *cardHeaderView;
@property (retain, nonatomic) NSString *continueButtonText; // ivar: _continueButtonText
@property (retain, nonatomic) NSString *continueLaterText; // ivar: _continueLaterText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayableSharedEntitlements; // ivar: _displayableSharedEntitlements
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *referralSource; // ivar: _referralSource
@property (readonly) Class superclass;


-(id)init;
-(void)_configureHeaderSize;
-(void)_reloadSections;
-(void)_updateContinueButtonState;
-(void)activationCodeDidChange;
-(void)activationCodeDidChangeToCode:(id)arg0 ;
-(void)cancelButtonPressed;
-(void)continueButtonPressed;
-(void)continueLaterButtonPressed;
-(void)loadView;
-(void)setHeaderImage:(id)arg0 ;
-(void)setIsEnteringActivationCode:(BOOL)arg0 ;
-(void)sharePreviewSectionControllerDidSelectEntitlements:(id)arg0 ;
-(void)sharePreviewSectionControllerDidUpdateEntitlements:(id)arg0 ;
-(void)showFailureUI;
-(void)showLoadingUI;
-(void)showStartingUI;
-(void)showSuccessUI;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif