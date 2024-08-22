// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPASSWORDAUTHENTICATIONPANEVIEWCONTROLLER_H
#define ASPASSWORDAUTHENTICATIONPANEVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext, UILabel, UITextField, UIActivityIndicatorView, NSLayoutConstraint;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;


#import "ASCredentialRequestPaneViewController.h"
#import "ASCredentialRequestButtonContinue.h"

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    CGFloat _keyboardHeight;
    NSUInteger _persona;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_usernameField;
    UITextField *_secureTextField;
    UIActivityIndicatorView *_signInButtonActivityIndicator;
    ASCredentialRequestButtonContinue *_signInButton;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}


@property (weak, nonatomic) NSObject<ASPasswordAuthenticationPaneViewControllerDelegate> *authenticationDelegate; // ivar: _authenticationDelegate


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(CGFloat)_containerViewHorizontalMargin;
-(CGFloat)_intrinsicContentHeight;
-(CGFloat)_secureTextFieldInsetMargin;
-(CGFloat)_signInButtonInsetMargin;
-(CGFloat)_topViewMargin;
-(id)_activateSecurityKeySubtitleText;
-(id)_manualPasswordEntryTitleLabelText;
-(id)_secureTextFieldPlaceholderText;
-(id)_subtitleTextForPINValidationError:(id)arg0 ;
-(id)_titleLabelText;
-(id)initWithPersona:(NSUInteger)arg0 presentationContext:(id)arg1 ;
-(void)_completeManualPasswordCredentialEntry;
-(void)_createViews;
-(void)_pinValidationFailedWithError:(id)arg0 ;
-(void)_setConstraints;
-(void)_setUpAndAddIconImage;
-(void)_setUpSubtitleLabel;
-(void)_setUpUsernameLabel;
-(void)_signInButtonTapped;
-(void)_startAnimatingActivityIndicator;
-(void)_stopAnimatingActivityIndicator;
-(void)_textFieldChanged:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)sizeToFitPaneContentAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif