// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTAUTHENTICATIONVIEWCONTROLLER_H
#define DMCENROLLMENTAUTHENTICATIONVIEWCONTROLLER_H

@class NSString;
@protocol UITextFieldDelegate, DMCDismissalAwareViewController, DMCEnrollmentAuthenticationViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"
#import "DMCEnrollmentConfirmationView.h"
#import "DMCEnrollmentTableViewTextFieldCell.h"

@interface DMCEnrollmentAuthenticationViewController : DMCEnrollmentTemplateTableViewController <UITextFieldDelegate, DMCDismissalAwareViewController>



@property (copy, nonatomic) NSString *bottomViewText; // ivar: _bottomViewText
@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView; // ivar: _confirmationView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DMCEnrollmentAuthenticationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDisplayingPasswordCell; // ivar: _isDisplayingPasswordCell
@property (retain, nonatomic) DMCEnrollmentTableViewTextFieldCell *passwordCell; // ivar: _passwordCell
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userInputSection; // ivar: _userInputSection
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (retain, nonatomic) DMCEnrollmentTableViewTextFieldCell *usernameCell; // ivar: _usernameCell
@property (nonatomic, getter=isUsernameEditable) BOOL usernameEditable; // ivar: _usernameEditable


-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)init;
-(void)_setupNavigationBar;
-(void)continueButtonTapped;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)setBottomText:(id)arg0 ;
-(void)setInProgress:(BOOL)arg0 ;
-(void)showPasswordField:(BOOL)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)updateContinueButtonStatus;
-(void)viewControllerHasBeenDismissed;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif