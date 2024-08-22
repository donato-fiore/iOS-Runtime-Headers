// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCBYODENROLLMENTFLOWUIPRESENTER_H
#define DMCBYODENROLLMENTFLOWUIPRESENTER_H

@class DMCEnrollmentConsentViewController, NSString, MCInstallProfileQuestionViewController, DMCEnrollmentAuthenticationViewController;
@protocol ASWebAuthenticationPresentationContextProviding, DevicePINControllerDelegate, DMCEnrollmentAuthenticationViewControllerDelegate, DMCEnrollmentConsentViewControllerDelegate, MCProfileQuestionsControllerDelegate, DMCEnrollmentiCloudPromotionViewControllerDelegate, DMCEnrollmentFlowRestoreViewControllerDelegate, DMCRFInteractionClient, DMCEnrollmentFlowPresenter;


#import "DMCEnrollmentFlowUIPresenterBase.h"
#import "DMCEnrollmentAuthenticationController.h"

@interface DMCBYODEnrollmentFlowUIPresenter : DMCEnrollmentFlowUIPresenterBase <ASWebAuthenticationPresentationContextProviding, DevicePINControllerDelegate, DMCEnrollmentAuthenticationViewControllerDelegate, DMCEnrollmentConsentViewControllerDelegate, MCProfileQuestionsControllerDelegate, DMCEnrollmentiCloudPromotionViewControllerDelegate, DMCEnrollmentFlowRestoreViewControllerDelegate, DMCRFInteractionClient, DMCEnrollmentFlowPresenter>



@property (copy, nonatomic) id *authenticationActionHandler; // ivar: _authenticationActionHandler
@property (copy, nonatomic) id *authenticationCompletionHandler; // ivar: _authenticationCompletionHandler
@property (retain, nonatomic) DMCEnrollmentAuthenticationController *authenticationController; // ivar: _authenticationController
@property (copy, nonatomic) id *consentCompletionHandler; // ivar: _consentCompletionHandler
@property (retain, nonatomic) DMCEnrollmentConsentViewController *consentViewController; // ivar: _consentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDoneAuthServices; // ivar: _hasDoneAuthServices
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *iCloudPromotionCompletionHandler; // ivar: _iCloudPromotionCompletionHandler
@property (copy, nonatomic) NSString *managedAppleID; // ivar: _managedAppleID
@property (copy, nonatomic) id *profileInstallationCompletionHandler; // ivar: _profileInstallationCompletionHandler
@property (retain, nonatomic) MCInstallProfileQuestionViewController *questionsController; // ivar: _questionsController
@property (copy, nonatomic) id *restoreCompletionHandler; // ivar: _restoreCompletionHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *userInputCompletionHandler; // ivar: _userInputCompletionHandler
@property (copy, nonatomic) id *usernameCompletionHandler; // ivar: _usernameCompletionHandler
@property (retain, nonatomic) DMCEnrollmentAuthenticationViewController *usernameViewController; // ivar: _usernameViewController


-(BOOL)questionsControllerIsDisplayedInSheet:(id)arg0 ;
-(id)notificationNameForApplicationWillTerminate;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg0 ;
-(void)_makeAuthenticationActionHandlerWithEphemeral:(BOOL)arg0 requireAppleMAID:(BOOL)arg1 presentingViewController:(id)arg2 ;
-(void)_presentOKAlertWithTitle:(id)arg0 message:(id)arg1 action:(id)arg2 ;
-(void)_showCancelAlertForMAID:(id)arg0 actionHandler:(id)arg1 ;
-(void)authenticationViewController:(id)arg0 didReceivePassword:(id)arg1 forUsername:(id)arg2 ;
-(void)authenticationViewController:(id)arg0 didReceiveUsername:(id)arg1 ;
-(void)authenticationViewControllerDidCancel:(id)arg0 ;
-(void)consentViewController:(id)arg0 didReceiveUserAction:(BOOL)arg1 ;
-(void)dismissEnrollmentScene;
-(void)doesUserWantToRestoreSnapshot:(id)arg0 withConflictingApps:(id)arg1 completion:(id)arg2 ;
-(void)iCloudPromotionViewController:(id)arg0 didReceiveUserAction:(BOOL)arg1 ;
-(void)informQuestionViewControllerOfPreflightResult:(id)arg0 ;
-(void)questionsController:(id)arg0 didFinishWithResponses:(id)arg1 ;
-(void)requestAuthServicesAuthenticationWithWebAuthURL:(id)arg0 callbackURLScheme:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestDevicePasscodeWithCompletionHandler:(id)arg0 ;
-(void)requestMAIDAuthenticationWithManagedAppleID:(id)arg0 personaID:(id)arg1 ephemeral:(BOOL)arg2 requireAppleMAID:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)requestMAIDSignInWithAuthenticationResults:(id)arg0 personaID:(id)arg1 makeiTunesAccountActive:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)requestSilentMAIDAuthenticationWithAuthenticationResults:(id)arg0 personaID:(id)arg1 requireAppleMAID:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)requestUserConsentWithProfileData:(id)arg0 managedAppleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestUserInputWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestUsernameWithDefaultUsername:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestiCloudSignInConfirmationWithCompletionHandler:(id)arg0 ;
-(void)restoreViewController:(id)arg0 didReceiveUserAction:(BOOL)arg1 ;
-(void)setCurrentQuestionsController:(id)arg0 ;
-(void)showEnrollmentCompletionScene;
-(void)showEnrollmentFailure:(id)arg0 ;
-(void)showiCloudPromotionPageWithiCloudQuotaString:(id)arg0 completionHandler:(id)arg1 ;
-(void)suggestRestoreForAccountWithUsername:(id)arg0 personaID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif