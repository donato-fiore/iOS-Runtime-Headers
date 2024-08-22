// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUVOICEPROFILESETUPVIEWCONTROLLER_H
#define HUVOICEPROFILESETUPVIEWCONTROLLER_H

@class NSString, HMHome, OBLinkTrayButton, OBTrayButton, VTUIEnrollTrainingViewController;
@protocol VTUIEnrollTrainingViewControllerDelegate, HUOnboardingWarningPresenter, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"
#import "HUPersonalRequestsEditorItemManager.h"

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <VTUIEnrollTrainingViewControllerDelegate, HUOnboardingWarningPresenter, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) NSString *buttonOneText; // ivar: _buttonOneText
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton; // ivar: _notNowButton
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // ivar: _prEditorItemManager
@property (retain, nonatomic) OBTrayButton *setupButton; // ivar: _setupButton
@property (readonly) Class superclass;
@property (retain, nonatomic) VTUIEnrollTrainingViewController *voiceProfileVC; // ivar: _voiceProfileVC


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_dontSetupVoiceProfile;
-(void)_dontSetupVoiceProfileWithWarning:(id)arg0 ;
-(void)_resetVoiceProfileSetup;
-(void)_setupPersonalRequestsItemInfrastructure;
-(void)_setupVoiceProfile:(id)arg0 ;
-(void)_turnOffPersonalRequests;
-(void)_turnOffVoiceRecognition;
-(void)continueSetup;
-(void)dismissSetup;
-(void)showLearnMore;
-(void)skipSetup;
-(void)userTappedCancelFromWarning;
-(void)userTappedContinueFromWarning;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif