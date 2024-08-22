// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCINSTALLPROFILEVIEWCONTROLLER_H
#define MCINSTALLPROFILEVIEWCONTROLLER_H

@class NSString, MCProfile, NSData, DMCProfileViewController, MCInstallProfileQuestionViewController, NSArray;
@protocol MCInstallationConsentDelegate, DevicePINControllerDelegate, DMCProfileQuestionsControllerDelegate, MCInstallationWarningDelegate, DMCProfileViewControllerDelegate, MCUISignInViewControllerDelegate, UIAdaptivePresentationControllerDelegate, MCInstallProfileDelegate;


#import "MCUIViewController.h"

@interface MCInstallProfileViewController : MCUIViewController <MCInstallationConsentDelegate, DevicePINControllerDelegate, DMCProfileQuestionsControllerDelegate, MCInstallationWarningDelegate, DMCProfileViewControllerDelegate, MCUISignInViewControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayNextQuesion; // ivar: _delayNextQuesion
@property (weak, nonatomic) NSObject<MCInstallProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didAppearBlock; // ivar: _didAppearBlock
@property (copy, nonatomic) NSString *enrollmentPersonaID; // ivar: _enrollmentPersonaID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL installHasFailed; // ivar: _installHasFailed
@property (nonatomic) int installState; // ivar: _installState
@property (nonatomic) BOOL isDeallocating; // ivar: _isDeallocating
@property (retain, nonatomic) MCProfile *originalProfile; // ivar: _originalProfile
@property (retain, nonatomic) NSData *originalProfileData; // ivar: _originalProfileData
@property (retain, nonatomic) NSString *pin; // ivar: _pin
@property (nonatomic) BOOL processingPayload; // ivar: _processingPayload
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSData *profileData; // ivar: _profileData
@property (retain, nonatomic) DMCProfileViewController *profileViewController; // ivar: _profileViewController
@property (nonatomic) BOOL questionsAlreadyAsked; // ivar: _questionsAlreadyAsked
@property (retain, nonatomic) MCInstallProfileQuestionViewController *questionsController; // ivar: _questionsController
@property (nonatomic) BOOL secondaryProfileReceived; // ivar: _secondaryProfileReceived
@property (copy, nonatomic) id *signInCompletionHandler; // ivar: _signInCompletionHandler
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userCancelledInstall; // ivar: _userCancelledInstall
@property (nonatomic) BOOL waitingForNextQuestion; // ivar: _waitingForNextQuestion
@property (retain, nonatomic) NSArray *warnings; // ivar: _warnings


-(BOOL)_attemptRemoteInstallAfterCompletingPrecheck;
-(BOOL)_installErrorIsUserCancelledError:(id)arg0 ;
-(BOOL)displayedAsSheet;
-(BOOL)questionsControllerIsDisplayedInSheet:(id)arg0 ;
-(id)_localizedCPLFinalWarningString;
-(id)_newRightBarButtonItem;
-(id)initWithInstallableProfileData:(id)arg0 fromSource:(NSUInteger)arg1 ;
-(id)initWithProfile:(id)arg0 viewMode:(NSInteger)arg1 ;
-(id)initWithProfileDataFromSettingsJump:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_beginInstallFlow;
-(void)_cancelInstallAfterMAIDAuthenticationAnimated:(BOOL)arg0 ;
-(void)_cancelInstallDueToApplicationExit;
-(void)_didFinishEnteringPINWithCompletion:(id)arg0 ;
-(void)_didFinishPresentingConsent:(id)arg0 ;
-(void)_finishWaitingForMoreQuestions;
-(void)_handleInstallationError:(id)arg0 ;
-(void)_hideProgressIndicatorIfNeeded;
-(void)_installFinishedWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)_presentConsent:(id)arg0 ;
-(void)_promptUserWithQuestions:(id)arg0 ;
-(void)_promptUserWithQuestionsAfterDelay:(id)arg0 ;
-(void)_resetInstallationVariables;
-(void)_returnToSender;
// -(void)_showCPLFinalInstallationWarning:(id)arg0 withMDMWarning:(unk)arg1  ;
-(void)_signInMAID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_takeMeBack;
-(void)_waitForNextQuestion;
-(void)addCancelActionToAlert:(id)arg0 withCompletion:(id)arg1 ;
-(void)addInstallActionWithTitle:(id)arg0 style:(NSInteger)arg1 toAlert:(id)arg2 completion:(id)arg3 ;
-(void)cancelInstallWhilePresentingConsentAndWarningsAnimated:(BOOL)arg0 ;
-(void)cancelInstallWhilePresentingConsentAndWarningsUponDidAppear;
-(void)cancelInstallWhilePresentingQuestionsAnimated:(BOOL)arg0 ;
-(void)consentExtensionShowConsentAndWarnings:(id)arg0 ;
-(void)continueInstallFlowAfterCompletingPrecheck;
-(void)continueInstallFlowAfterPINVerification;
-(void)dealloc;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)hideProgressIndicatorWithShowButtons:(BOOL)arg0 ;
-(void)installationConsentViewController:(id)arg0 finishedWithUserContinueResponse:(BOOL)arg1 ;
-(void)installationWarningViewController:(id)arg0 finishedWithUserContinueResponse:(BOOL)arg1 ;
-(void)performRemoveAfterFinalVerification;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)profileConnection:(id)arg0 didBeginInstallingNextProfile:(id)arg1 ;
-(void)profileConnection:(id)arg0 didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)profileConnection:(id)arg0 didFinishPreflightWithError:(id)arg1 ;
-(void)profileConnection:(id)arg0 didRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 ;
-(void)profileConnection:(id)arg0 didRequestUserInput:(id)arg1 ;
-(void)profileConnection:(id)arg0 didShowUserWarnings:(id)arg1 ;
-(void)profileConnection:(id)arg0 didUpdateStatus:(id)arg1 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg0 ;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg0 ;
-(void)questionsController:(id)arg0 didFinishWithResponses:(id)arg1 ;
-(void)questionsExtensionDidFinishPreflightWithError:(id)arg0 ;
-(void)questionsExtensionDidRequestAnswersForQuestions:(id)arg0 ;
-(void)questionsExtensionInstallFinished;
-(void)queueNextProfileData:(id)arg0 ;
-(void)setCurrentQuestionsController:(id)arg0 ;
-(void)showFinalInstallationAlert:(id)arg0 ;
-(void)showMDMFinalInstallationAlert:(id)arg0 ;
-(void)showProgressIndicator;
-(void)showReEnrollFailureAlert;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)submitQuestionAnswers:(id)arg0 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg0 animated:(BOOL)arg1 ;
-(void)updateTitleForProfileInstallationState:(int)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)warningsExtensionPushWarningsControllerWithWarnings:(id)arg0 ;


@end


#endif