// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSKEYCHAINSYNCMANAGER_H
#define PSKEYCHAINSYNCMANAGER_H

@class UIView, NSTimer, NSString, UIViewController;
@protocol KeychainSyncViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "KeychainSyncDevicePINController.h"
#import "PSKeychainSyncSecurityCodeController.h"
#import "KeychainSyncAdvancedSecurityCodeController.h"
#import "KeychainSyncPhoneNumberController.h"
#import "KeychainSyncSMSVerificationController.h"
#import "PSRootController.h"
#import "PSSetupController.h"

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate>

 {
    BOOL _joiningCircle;
    BOOL _joiningCircleAfterRecovery;
    int _circleNotificationToken;
    int _flow;
    KeychainSyncDevicePINController *_devicePinController;
    PSKeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    PSKeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    PSKeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIView *_spinningView;
    unsigned int _spinnerCount;
    NSTimer *_credentialExpirationTimer;
    NSTimer *_joinAfterRecoveryTimeoutTimer;
}


@property (readonly, nonatomic) NSString *appleIDPasswordOrEquivalentToken; // ivar: _appleIDPasswordOrEquivalentToken
@property (copy, nonatomic) NSString *appleIDRawPassword; // ivar: _appleIDRawPassword
@property (copy, nonatomic) NSString *appleIDUsername; // ivar: _appleIDUsername
@property (retain, nonatomic) PSRootController *buddyNavigationController; // ivar: _buddyNavigationController
@property (copy, nonatomic) id *changeSecurityCodeCompletion; // ivar: _changeSecurityCodeCompletion
@property (copy, nonatomic) id *circleJoinCompletion; // ivar: _circleJoinCompletion
@property (nonatomic) BOOL circleWasReset; // ivar: _circleWasReset
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (copy, nonatomic) id *passwordPromptCompletion; // ivar: _passwordPromptCompletion
@property (copy, nonatomic) id *resetCompletion; // ivar: _resetCompletion
@property (retain, nonatomic) UIViewController *resetPromptControllerHost; // ivar: _resetPromptControllerHost
@property (readonly, nonatomic, getter=isRunningInBuddy) BOOL runningInBuddy;
@property (retain, nonatomic) NSString *securityCodeRecoveryAttempt; // ivar: _securityCodeRecoveryAttempt
@property (retain, nonatomic) PSSetupController *settingsSetupController; // ivar: _settingsSetupController
@property (readonly, nonatomic) NSString *stagedSecurityCode; // ivar: _stagedSecurityCode
@property (readonly, nonatomic) int stagedSecurityCodeType; // ivar: _stagedSecurityCodeType
@property (readonly) Class superclass;


+(id)sharedManager;
+(void)getStatusWithCompletion:(id)arg0 ;
-(BOOL)_changeSecurityCode:(id)arg0 type:(int)arg1 smsTarget:(id)arg2 smsTargetCountryInfo:(id)arg3 username:(id)arg4 passwordOrEquivalentToken:(id)arg5 error:(*id)arg6 ;
-(BOOL)_errorRequiresPasswordPrompt:(id)arg0 ;
-(BOOL)_registerUserCredentialsName:(id)arg0 rawPassword:(id)arg1 error:(*id)arg2 ;
-(BOOL)_resetCircleAndDisableBackupWithError:(*id)arg0 ;
-(id)_defaultKeychainViewSet;
-(id)init;
-(id)navigationController;
-(id)preferencesApp;
-(id)viewControllerForPresentingAlerts;
-(void)_autoVetSMSValidationWithToken:(id)arg0 ;
-(void)_callCompletionWithStatus:(int)arg0 error:(id)arg1 ;
-(void)_changeToNewSecurityCode:(id)arg0 type:(int)arg1 smsTarget:(id)arg2 smsTargetCountryInfo:(id)arg3 ;
-(void)_circleJoinAfterRecoveryTimerFired:(id)arg0 ;
-(void)_cleanup;
-(void)_cleanupAppleIDCredentials;
-(void)_deleteSafariAutoFillPasswords;
-(void)_disableCDPKeychainSyncOverController:(id)arg0 deletingSafariPasswords:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_disableKeychainSyncOverController:(id)arg0 deletingSafariPasswords:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_enableSecureBackupWithPhoneNumber:(id)arg0 countryInfo:(id)arg1 ;
-(void)_finishedWithStatus:(int)arg0 error:(id)arg1 ;
-(void)_peerApprovalFromRecoveryFlow;
-(void)_preSetupCancelledWithCurrentStatus;
-(void)_promptUserToDeleteSafariSavedContentWithCompletion:(id)arg0 ;
-(void)_recoverWithSecurityCode:(id)arg0 verificationCode:(id)arg1 ;
-(void)_registerForCircleChangeNotifications;
-(void)_registerForCircleChangeNotificationsWithCompletion:(id)arg0 ;
-(void)_resetFromRecoveryFlow;
-(void)_showGenericFlowErrorAlert;
-(void)_showGenericFlowErrorAlertWithDismissalHandler:(id)arg0 ;
-(void)_showInvalidPhoneNumberAlertWithDigits:(id)arg0 countryInfo:(id)arg1 ;
-(void)_showResetFlowOverController:(id)arg0 withEnableBackupText:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_startCircleJoinAfterRecoveryTimer;
-(void)_stopCircleJoinAfterRecoveryTimer;
-(void)dealloc;
-(void)disableKeychainSyncOverController:(id)arg0 withCompletion:(id)arg1 ;
-(void)dismissAppleSupportPane:(id)arg0 ;
-(void)handleCircleChangedNotification;
-(void)joinCircleAfterRecovery:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg0 countryInfo:(id)arg1 ;
-(void)joinCircleWithCompletion:(id)arg0 ;
-(void)keychainSyncController:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)keychainSyncControllerCancel:(id)arg0 ;
-(void)keychainSyncPhoneNumberController:(id)arg0 didCompleteWithPhoneNumber:(id)arg1 countryInfo:(id)arg2 ;
-(void)makeSettingsSetupControllerWithSpecifier:(id)arg0 parent:(id)arg1 initialController:(id)arg2 ;
-(void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)arg0 ;
-(void)promptForDevicePasscodeChangeToPasscode:(id)arg0 overController:(id)arg1 completion:(id)arg2 ;
-(void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg0 withCompletion:(id)arg1 ;
-(void)promptForPasswordIfNeededForWritingOverController:(id)arg0 withCompletion:(id)arg1 ;
-(void)promptForPasswordIfNeededOverController:(id)arg0 withCompletion:(id)arg1 ;
-(void)promptForPasswordIfNeededWithCompletion:(id)arg0 ;
-(void)promptForPasswordOverController:(id)arg0 withCompletion:(id)arg1 ;
-(void)showAlert:(id)arg0 ;
-(void)showChangeSecurityCodeFlowWithSpecifier:(id)arg0 overController:(id)arg1 completion:(id)arg2 ;
-(void)showContactAppleSupportPane;
-(void)showController:(id)arg0 ;
-(void)showEnableEscrowFlowWithSpecifier:(id)arg0 overController:(id)arg1 completion:(id)arg2 ;
-(void)showEnableFlowWithNavigationController:(id)arg0 completion:(id)arg1 ;
-(void)showEnableSyncFlowWithSpecifier:(id)arg0 overController:(id)arg1 completion:(id)arg2 ;
-(void)showNetworkReachabilityError;
-(void)showPinChoiceAlert;
-(void)showRecoveryFlowWithNavigationController:(id)arg0 completion:(id)arg1 ;
-(void)showRecoveryFlowWithSpecifier:(id)arg0 overController:(id)arg1 completion:(id)arg2 ;
-(void)showResetAcknowledgementIfNeededWithCompletion:(id)arg0 ;
-(void)showResetAndJoinFlowOverController:(id)arg0 withCompletion:(id)arg1 ;
-(void)startNavigationSpinnerInViewController:(id)arg0 ;
-(void)stopNavigationSpinner;


@end


#endif