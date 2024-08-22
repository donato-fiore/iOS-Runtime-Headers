// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKONBOARDINGCONTROLLER_H
#define CKONBOARDINGCONTROLLER_H

@class CNSharingProfileAvatarItemProviderConfiguration, AVTAvatarStore, OBButtonTray, NSString, OBWelcomeFullCenterContentController, AVPlayer, AVPlayerLooper, UINavigationController, CKCNSharingProfileOnboardingFlowManager, IMCloudKitSyncState, OBWelcomeController;
@protocol CNMeCardSharingPickerViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, IMCNMeCardSharingOnboardingEditViewControllerDelegate, IMCNMeCardSharingOnboardingAudienceViewControllerDelegate, UINavigationControllerDelegate, CKCNSharingProfileOnboardingFlowManagerDelegate, UIAdaptivePresentationControllerDelegate, CKSyndicationOnboardingPageViewControllerDelegate, AVTAvatarRecord, CKOnboardingControllerDelegate, IMCNMeCardSharingResult;

#import <Foundation/Foundation.h>


@interface CKOnboardingController : NSObject <CNMeCardSharingPickerViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, IMCNMeCardSharingOnboardingEditViewControllerDelegate, IMCNMeCardSharingOnboardingAudienceViewControllerDelegate, UINavigationControllerDelegate, CKCNSharingProfileOnboardingFlowManagerDelegate, UIAdaptivePresentationControllerDelegate, CKSyndicationOnboardingPageViewControllerDelegate>



@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration; // ivar: _avatarItemProviderConfiguration
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) AVTAvatarStore *avatarStore; // ivar: _avatarStore
@property (retain, nonatomic) OBButtonTray *buttonTray; // ivar: _buttonTray
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKOnboardingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUserInitiatedEditNameAndPhoto; // ivar: _isUserInitiatedEditNameAndPhoto
@property (retain, nonatomic, getter=_memojiCreationController) OBWelcomeFullCenterContentController *memojiCreationController; // ivar: _memojiCreationController
@property (retain, nonatomic) AVPlayer *memojiVideoPlayer; // ivar: _memojiVideoPlayer
@property (retain, nonatomic) AVPlayerLooper *memojiVideoPlayerLooper; // ivar: _memojiVideoPlayerLooper
@property (nonatomic) int micLayout; // ivar: _micLayout
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) CKCNSharingProfileOnboardingFlowManager *nicknameFlowManager; // ivar: _nicknameFlowManager
@property (retain, nonatomic) NSObject<IMCNMeCardSharingResult> *pendingMeCardSharingResult; // ivar: _pendingMeCardSharingResult
@property (nonatomic) BOOL presentingFromPrefs; // ivar: _presentingFromPrefs
@property (readonly) Class superclass;
@property (retain, nonatomic) IMCloudKitSyncState *syncState; // ivar: _syncState
@property (retain, nonatomic) OBWelcomeController *syndicationIntroController; // ivar: _syndicationIntroController


-(BOOL)_isRunningTest;
-(BOOL)_meCardSharingEnabled;
-(BOOL)_readyToShowNextScreenWithTimeout:(NSUInteger)arg0 ;
-(BOOL)_shouldOnboardCollaborationApps;
-(BOOL)_shouldPresentMiCWelcome;
-(BOOL)_shouldPresentNewInMessages;
-(BOOL)_shouldShowNicknameOnboardingFlow;
-(BOOL)_shouldShowNicknameOnboardingFlowIgnoringVersion:(BOOL)arg0 ;
-(BOOL)_shouldShowNicknameOnboardingFlowOnLaunch;
-(BOOL)_shouldShowSyndicationOnboardingFlowOnLaunch;
-(BOOL)accountCanCreateNickname;
-(BOOL)alwaysShowNicknameOnboarding;
-(BOOL)alwaysShowSyndicationOnboarding;
-(BOOL)presentNicknameSharingSetupFlow;
-(BOOL)presentNicknameSharingSetupFlowWithMemoji:(BOOL)arg0 forUserInitiatedEdit:(BOOL)arg1 ;
-(BOOL)presentOnboardingIfNeeded;
-(BOOL)readyToShowNextScreen;
-(BOOL)shouldPresentOnboarding;
-(NSInteger)_whatsNewLatestShippingVersion;
-(NSInteger)_whatsNewVersion;
-(NSInteger)currentCollaborationOnboardingVersion;
-(NSUInteger)_meCardSharingAudience;
-(NSUInteger)_meCardSharingNameFormat;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(NSUInteger)nicknameOnboardingLastShownVersion;
-(NSUInteger)syndicationOnboardingLastShownVersion;
-(id)_introController;
-(id)_meCardSharingState;
-(id)_micController;
-(id)_nameAndPhotoSharingIntroController;
-(id)_nicknameController;
-(id)_userDefaults;
-(id)contactForNicknameOnboarding;
-(id)getButtonTray;
-(void)_beginMOCFlowForState:(id)arg0 rampState:(id)arg1 ;
-(void)_beginMiCWelcomeScreen;
-(void)_fetchMemojiWithCompletionBlock:(id)arg0 ;
-(void)_onClickMiCNotNow;
-(void)_onClickMiCOnboard;
// -(void)_presentMemojiCreationIfNeeded:(id)arg0 skipAction:(unk)arg1  ;
-(void)_pushOnboardingViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_tryToEnableHSA2;
-(void)_tryToEnableMOC;
-(void)_writeDefaultCollaborationOnboardingVersion;
-(void)_writeDefaultMiCWelcome;
-(void)_writeDefaultNicknameOnboardingVersion;
-(void)_writeDefaultSyndicationOnboardingVersion;
-(void)_writeDefaultWhatsNewDidShow;
-(void)avatarEditorViewController:(id)arg0 didFinishWithAvatarRecord:(id)arg1 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg0 ;
-(void)completedOnboarding;
-(void)completedOnboardingWithCompletion:(id)arg0 ;
-(void)enableSyndication;
-(void)flowManager:(id)arg0 didFinishWithResult:(id)arg1 ;
-(void)flowManagerDidSelectSetupLater:(id)arg0 ;
-(void)initializeBundleIDsInAppPreferences:(BOOL)arg0 ;
-(void)meCardSharingOnboardingAudienceViewControllerDidFinish:(id)arg0 withSharingAudience:(NSUInteger)arg1 ;
-(void)meCardSharingOnboardingEditController:(id)arg0 didFinishWithOnboardingResult:(id)arg1 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)onboardCollaborationApps;
-(void)prepareForOnboarding;
-(void)prepareForSuspend;
-(void)presentFromPrefsPresentationController:(id)arg0 resizeToFitContent:(BOOL)arg1 ;
-(void)presentMemojiSetup;
-(void)presentOnboarding:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)pushMemojiCreationStep;
-(void)pushMemojiCreationStepIfNeeded;
-(void)pushNameAndPhotoSharingConfigDataStep;
-(void)pushNameAndPhotoSharingConfigSharingPreferenceStep;
-(void)pushNameAndPhotoSharingIntroStep;
-(void)pushNameAndPhotoSharingIntroStepIfNeeded;
-(void)pushSyndicationIntroStep;
-(void)reportMoCLayoutShown:(int)arg0 ;
-(void)setUpSyndicationLater;
-(void)sharingPicker:(id)arg0 didChangeSharingState:(BOOL)arg1 ;
-(void)sharingPicker:(id)arg0 didSelectNameFormat:(NSUInteger)arg1 ;
-(void)sharingPicker:(id)arg0 didSelectSharingAudience:(NSUInteger)arg1 ;
-(void)sharingPickerDidFinish:(id)arg0 ;
-(void)startNicknameOnboardingIfNeeded;
-(void)viewIssues:(id)arg0 ;


@end


#endif