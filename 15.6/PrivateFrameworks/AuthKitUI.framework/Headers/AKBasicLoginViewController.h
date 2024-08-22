// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKBASICLOGINVIEWCONTROLLER_H
#define AKBASICLOGINVIEWCONTROLLER_H

@class OBWelcomeController, NSString, NSLayoutConstraint, UIView, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol, AKBasicLoginControllerDelegate;


#import "AKAppleIDAuthenticationInAppContext.h"
#import "AKBasicLoginActions.h"
#import "AKBasicLoginOptionsViewController.h"
#import "AKBasicLoginTableViewCell.h"

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol>



@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKBasicLoginControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (nonatomic) BOOL isPasswordFieldVisible; // ivar: _isPasswordFieldVisible
@property (copy, nonatomic) AKBasicLoginActions *loginActions; // ivar: _loginActions
@property (retain, nonatomic) UIView *loginOptions; // ivar: _loginOptions
@property (retain, nonatomic) AKBasicLoginOptionsViewController *loginOptionsViewController; // ivar: _loginOptionsViewController
@property (retain, nonatomic) AKBasicLoginTableViewCell *passwordCell; // ivar: _passwordCell
@property (copy, nonatomic) id *passwordHandler; // ivar: _passwordHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) AKBasicLoginTableViewCell *usernameCell; // ivar: _usernameCell


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldShowPassword;
-(BOOL)_shouldShowUserName;
-(BOOL)isPresentedModally;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)modalPresentationStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cancelBarButtonItem;
-(id)_signInBarButtonItem;
-(id)_title;
-(id)initWithContext:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelPressed:(id)arg0 ;
-(void)_initializeView;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_setContentInset:(CGFloat)arg0 ;
-(void)_setPasswordHiddenIfNeeded;
-(void)_signInPressed:(id)arg0 ;
-(void)_updatePlaceholderIfNeeded;
-(void)clearPasswordField;
-(void)context:(id)arg0 needsPasswordWithCompletion:(id)arg1 ;
-(void)initializePasswordCellTextField:(id)arg0 ;
-(void)initializeUsernameCellTextField:(id)arg0 ;
-(void)loadView;
-(void)startAnimating;
-(void)stopAnimating;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif