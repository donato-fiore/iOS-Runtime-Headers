// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPASSWORDCHANGEVIEWCONTROLLER_H
#define ICPASSWORDCHANGEVIEWCONTROLLER_H

@class UIViewController, ICAccount, NSArray, UIView, NSLayoutConstraint, UIBarButtonItem, NSString, UITextField, UILabel, UIScrollView, UISwitch;
@protocol ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate;


#import "ICLearnMoreTextView.h"
#import "ICPasswordUtilities.h"
#import "ICScrollViewKeyboardResizer.h"

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate>



@property (retain, nonatomic) ICAccount *account; // ivar: _account
@property (retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes; // ivar: _alternateConstraintsForAXLargerTextSizes
@property (weak, nonatomic) UIView *biometricIDContainer; // ivar: _biometricIDContainer
@property (weak, nonatomic) NSLayoutConstraint *biometricIDTopConstraint; // ivar: _biometricIDTopConstraint
@property (weak, nonatomic) NSLayoutConstraint *biometricIDZeroHeightConstraint; // ivar: _biometricIDZeroHeightConstraint
@property (weak, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultConstraints; // ivar: _defaultConstraints
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAttemptToSubmitWithoutHint; // ivar: _didAttemptToSubmitWithoutHint
@property (weak, nonatomic) NSLayoutConstraint *disclaimerHeightConstraint; // ivar: _disclaimerHeightConstraint
@property (weak, nonatomic) ICLearnMoreTextView *disclaimerLabel; // ivar: _disclaimerLabel
@property (weak, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) UITextField *firstResponderTextField;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *headerBackground; // ivar: _headerBackground
@property (weak, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (weak, nonatomic) UILabel *hintLabel; // ivar: _hintLabel
@property (weak, nonatomic) UITextField *hintTextField; // ivar: _hintTextField
@property (nonatomic) NSInteger incorrectPasswordAttempts; // ivar: _incorrectPasswordAttempts
@property (nonatomic) BOOL isInSettings; // ivar: _isInSettings
@property (nonatomic) BOOL isSettingInitialPassword; // ivar: _isSettingInitialPassword
@property (nonatomic) BOOL isSetupForChangePassword; // ivar: _isSetupForChangePassword
@property (weak, nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint; // ivar: _oldPasswordHeightConstraint
@property (weak, nonatomic) UILabel *oldPasswordLabel; // ivar: _oldPasswordLabel
@property (weak, nonatomic) UITextField *oldPasswordTextField; // ivar: _oldPasswordTextField
@property (retain, nonatomic) NSArray *orderedTextFields; // ivar: _orderedTextFields
@property (readonly, nonatomic) BOOL passwordAndVerifyTextFieldsMatch;
@property (weak, nonatomic) UILabel *passwordLabel; // ivar: _passwordLabel
@property (weak, nonatomic) UITextField *passwordTextField; // ivar: _passwordTextField
@property (retain, nonatomic) ICPasswordUtilities *passwordUtilities; // ivar: _passwordUtilities
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer; // ivar: _scrollViewResizer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *textBackgroundViews; // ivar: _textBackgroundViews
@property (weak, nonatomic) UILabel *useBiometricIDLabel; // ivar: _useBiometricIDLabel
@property (weak, nonatomic) UISwitch *useBiometricIDSwitch; // ivar: _useBiometricIDSwitch
@property (nonatomic) BOOL usingLargerAXSizes; // ivar: _usingLargerAXSizes
@property (weak, nonatomic) UILabel *verifyLabel; // ivar: _verifyLabel
@property (weak, nonatomic) UITextField *verifyTextField; // ivar: _verifyTextField
@property (weak, nonatomic) UILabel *warningLabel; // ivar: _warningLabel


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)validateInput;
-(CGFloat)consumedBottomAreaForResizer:(id)arg0 ;
-(id)disclaimerAttributedString;
-(id)initWithCompletionHandler:(id)arg0 ;
-(id)keyboardResizerScrollView;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)dismissKeyboardIfNeeded;
-(void)doneButtonPressed:(id)arg0 ;
-(void)resetTextFields;
-(void)setUpForAddingPasswordWithAccount:(id)arg0 ;
-(void)setUpForChangePasswordWithAccount:(id)arg0 ;
-(void)setUpNavigationBar;
-(void)setupAccessibility;
-(void)showEnterAPasswordAlert;
-(void)showOldPasswordIsNotCorrectAlert;
-(void)showPasswordsDoNotMatchAlert;
-(void)showSimpleAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showUnableToSetPasswordAlert;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFonts;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif