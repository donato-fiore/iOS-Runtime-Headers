// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPASSWORDAUTHENTICATIONPANEVIEWCONTROLLER_H
#define ASPASSWORDAUTHENTICATIONPANEVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext, UILabel, UITextField, NSLayoutConstraint, NSString;
@protocol UITextFieldDelegate, ASPasswordAuthenticationPaneViewControllerDelegate;


#import "ASCredentialRequestPaneViewController.h"
#import "ASCredentialRequestButtonContinue.h"

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController <UITextFieldDelegate>

 {
    ASCAuthorizationPresentationContext *_presentationContext;
    CGFloat _keyboardHeight;
    NSUInteger _persona;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_usernameField;
    UITextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}


@property (weak, nonatomic) NSObject<ASPasswordAuthenticationPaneViewControllerDelegate> *authenticationDelegate; // ivar: _authenticationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_containerViewHorizontalMargin;
-(CGFloat)_intrinsicContentHeight;
-(CGFloat)_secureTextFieldInsetMargin;
-(CGFloat)_signInButtonInsetMargin;
-(CGFloat)_topViewMargin;
-(id)_manualPasswordEntryTitleLabelText;
-(id)_secureTextFieldPlaceholderText;
-(id)_securityKeyTitleLabelText;
-(id)_subtitleLabelFont;
-(id)_titleLabelFont;
-(id)_titleLabelText;
-(id)_titleLabelTextColor;
-(id)initWithPersona:(NSUInteger)arg0 presentationContext:(id)arg1 ;
-(void)_completeManualPasswordCredentialEntry;
-(void)_createViews;
-(void)_keyboardHeightDidChange;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_setConstraints;
-(void)_setUpAndAddIconImage;
-(void)_setUpSubtitleLabel;
-(void)_setUpUsernameLabel;
-(void)_signInButtonTapped;
-(void)_textFieldChanged:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif