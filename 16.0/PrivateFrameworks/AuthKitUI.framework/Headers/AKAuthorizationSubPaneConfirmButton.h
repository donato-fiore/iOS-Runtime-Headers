// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONSUBPANECONFIRMBUTTON_H
#define AKAUTHORIZATIONSUBPANECONFIRMBUTTON_H

@class UIView, UILabel, NSString, LAUIAuthenticationView, UIStackView, AKAuthorizationPresentationContext;
@protocol LAUIAuthenticationDelegate, OS_dispatch_group, AKAuthorizationSubPaneConfirmButtonDelegate;


#import "AKAuthorizationSubPane.h"
#import "AKAuthorizationButton.h"
#import "AKAuthorizationPaneContext.h"

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane <LAUIAuthenticationDelegate>

 {
    id *_processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
}


@property (readonly, nonatomic) AKAuthorizationButton *authorizationButton; // ivar: _authorizationButton
@property (readonly, nonatomic) UIView *authorizationButtonContainer; // ivar: _authorizationButtonContainer
@property (retain, nonatomic) UILabel *bioLabel; // ivar: _bioLabel
@property (copy, nonatomic) NSString *bioTextForInactiveState; // ivar: _bioTextForInactiveState
@property (retain, nonatomic) LAUIAuthenticationView *bioView; // ivar: _bioView
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL canPerformBiometricValidation; // ivar: _canPerformBiometricValidation
@property (retain, nonatomic) AKAuthorizationPaneContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAuthorizationSubPaneConfirmButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTouchIDOnly; // ivar: _hasTouchIDOnly
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *mainStackView; // ivar: _mainStackView
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext; // ivar: _presentationContext
@property (readonly) Class superclass;


+(id)_createMainStackView;
-(BOOL)_isSubscriptionFlow;
-(BOOL)_isUpgradeFromPassword;
-(BOOL)_shouldUseSIWAButton;
-(NSUInteger)_authenticationMechanism;
-(id)_passcodeButtonTitle;
-(id)_passwordButtonTitle;
-(id)_spaceWithConstant:(CGFloat)arg0 ;
-(id)initWithPresentationContext:(id)arg0 ;
-(void)_addArrangedSpaceToMainStackView:(CGFloat)arg0 ;
-(void)_authorizationButtonBioSelected:(id)arg0 ;
-(void)_authorizationButtonExternalAuthenticationSelected:(id)arg0 ;
-(void)_authorizationButtonSkipBioSelected:(id)arg0 ;
-(void)_authorizationButtonWithAccountPasswordSelected:(id)arg0 ;
-(void)_authorizationWithPasscodeButtonSelected:(id)arg0 ;
-(void)_disableBioView;
-(void)_enableLAUIAuthMechanism;
-(void)_enterProcessingStateWithCompletionHandler:(id)arg0 ;
-(void)_initializeAuthorizationButton;
-(void)_performPasscodeValidations:(id)arg0 ;
-(void)_setGlyphViewGestureRecognizerEnabled:(BOOL)arg0 ;
-(void)_setupAlertImageWithConstraints:(id)arg0 ;
-(void)_setupBioButtonWithConstraints:(id)arg0 ;
-(void)_setupLabelWithTitle:(id)arg0 withConstraints:(id)arg1 animated:(BOOL)arg2 ;
-(void)_switchToBioView:(BOOL)arg0 withEnabled:(BOOL)arg1 showAlert:(BOOL)arg2 alertString:(id)arg3 ;
-(void)_switchToPasscode;
-(void)_updateLabelWithTitle:(id)arg0 ;
-(void)_waitForTimeInterval:(CGFloat)arg0 withGroup:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg0 ;
-(void)addToConstraints:(id)arg0 context:(id)arg1 ;
-(void)addToStackView:(id)arg0 context:(id)arg1 ;
-(void)authenticationResult:(id)arg0 error:(id)arg1 context:(id)arg2 ;
-(void)bioAuthFailWithAlertString:(id)arg0 ;
-(void)dealloc;
-(void)enableAuthorizationCapability:(BOOL)arg0 ;
-(void)finishProcessingWithCompletionHandler:(id)arg0 ;
-(void)invalidateProcessingState;
-(void)processAuthenticationSuccessWithCompletionHandler:(id)arg0 ;
-(void)setUpButtonToPaneContext:(id)arg0 ;
-(void)showAlertAndContinueWithPassword:(BOOL)arg0 ;


@end


#endif