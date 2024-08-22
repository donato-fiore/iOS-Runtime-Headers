// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKMODALSIGNINVIEWCONTROLLER_H
#define AKMODALSIGNINVIEWCONTROLLER_H

@class UIColor, UILabel, UIView, NSString, UIButton, UITextField;
@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate;


#import "AKBaseSignInViewController.h"
#import "AKRoundedButton.h"

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSString *customBodyText; // ivar: _customBodyText
@property (retain, nonatomic) NSString *customButtonTitle; // ivar: _customButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle
@property (retain, nonatomic) UIButton *iForgotButton; // ivar: _iForgotButton
@property (retain, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (retain, nonatomic) AKRoundedButton *signInButton; // ivar: _signInButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_isSignInAllowed;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_bodyText;
-(id)_buttonTitle;
-(id)init;
-(void)_createViews;
-(void)_passwordRecoveryButtonWasTapped:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupViews;
-(void)_signInButtonTapped:(id)arg0 ;
-(void)_updateViewConstraints;
-(void)context:(id)arg0 needsPasswordWithCompletion:(id)arg1 ;
-(void)displayAlertForContext:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif