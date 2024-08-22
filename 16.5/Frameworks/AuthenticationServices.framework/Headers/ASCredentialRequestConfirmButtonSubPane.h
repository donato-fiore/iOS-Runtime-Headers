// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTCONFIRMBUTTONSUBPANE_H
#define ASCREDENTIALREQUESTCONFIRMBUTTONSUBPANE_H

@class UIStackView, UIView, LAUIAuthenticationView, UILabel, NSString;
@protocol LAUIAuthenticationDelegate, OS_os_activity, OS_dispatch_group, ASCredentialRequestSubPaneConfirmButtonDelegate;


#import "ASCredentialRequestSubPane.h"
#import "ASCredentialRequestPaneContext.h"
#import "ASCredentialRequestButton.h"

@interface ASCredentialRequestConfirmButtonSubPane : ASCredentialRequestSubPane <LAUIAuthenticationDelegate>

 {
    UIStackView *_mainStackView;
    UIView *_containerView;
    BOOL _canPerformBiometricAuthentication;
    UIView *_authorizationButtonContainerView;
    LAUIAuthenticationView *_biometricsView;
    ASCredentialRequestPaneContext *_paneContext;
    NSObject<OS_os_activity> *_authorizationActivity;
    UILabel *_biometricLabel;
    id *_processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
}


@property (readonly, nonatomic) ASCredentialRequestButton *authorizationButton; // ivar: _authorizationButton
@property (nonatomic) BOOL authorizationCapabilityEnabled;
@property (copy, nonatomic) NSString *buttonText;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASCredentialRequestSubPaneConfirmButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_createMainStackView;
-(BOOL)_isDelegateReadyForAuthorization;
-(NSUInteger)_authenticationMechanism;
-(id)_passcodeOrPasswordButtonTitle;
-(id)_passwordAuthenticationButtonTitle;
-(id)_setUpAlertImageWithConstraints;
-(id)_verticalSpacerWithConstant:(CGFloat)arg0 ;
-(id)initWithActivity:(id)arg0 ;
-(void)_addArrangedSpaceToMainStackView:(CGFloat)arg0 ;
-(void)_authorizationButtonBioSelected:(id)arg0 ;
-(void)_authorizationWithPasscodeOrPasswordButtonSelected:(id)arg0 ;
-(void)_authorizeAppleAccountWithPasswordButtonSelected:(id)arg0 ;
-(void)_continueButtonTapped;
-(void)_disableBiometricView;
-(void)_enableLAUIAuthenticationMechanism;
-(void)_enterProcessingStateWithCompletionHandler:(id)arg0 ;
-(void)_initializeAuthorizationButton;
-(void)_performPasscodeOrPasswordValidation:(id)arg0 ;
-(void)_setGlyphViewGestureRecognizerEnabled:(BOOL)arg0 ;
-(void)_setupBiometricButtonWithConstraints:(id)arg0 ;
-(void)_setupLabelWithTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_switchToAppleAccountPassword;
-(void)_switchToBiometricsView:(BOOL)arg0 withAuthenticationMechanismEnabled:(BOOL)arg1 showAlert:(BOOL)arg2 alertString:(id)arg3 ;
-(void)_switchToPasscodeOrPassword;
-(void)_updateLabelAnimatedWithTitle:(id)arg0 ;
-(void)_waitForTimeInterval:(CGFloat)arg0 withGroup:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg0 ;
-(void)addToStackView:(id)arg0 withCustomSpacingAfter:(CGFloat)arg1 context:(id)arg2 ;
-(void)authenticationResult:(id)arg0 error:(id)arg1 context:(id)arg2 ;
-(void)biometricAuthenticationFailureWithAlertString:(id)arg0 ;
-(void)dealloc;
-(void)finishProcessingWithCompletionHandler:(id)arg0 ;
-(void)invalidateProcessingState;
-(void)processBiometricMatchWithCompletionHandler:(id)arg0 ;
-(void)setUpButtonInPaneContext:(id)arg0 withUsername:(id)arg1 ;
-(void)showAlertContinuingWithPassword:(BOOL)arg0 ;
-(void)showAuthenticationMechanismForExternalPasswordCredential;
-(void)showContinueButton;
-(void)showContinueButtonWithTitle:(id)arg0 ;
-(void)showContinueWithPasswordButton;


@end


#endif