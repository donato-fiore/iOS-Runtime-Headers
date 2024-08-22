// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKLOGINFIELDSVIEWCONTROLLER_H
#define AKLOGINFIELDSVIEWCONTROLLER_H

@class UIViewController, AKAppleIDAuthenticationContext, NSString, UITextField;
@protocol UITextFieldDelegate, AKLoginFieldsViewControllerProtocol, AKLoginFieldsDelegate;



@interface AKLoginFieldsViewController : UIViewController <UITextFieldDelegate, AKLoginFieldsViewControllerProtocol>



@property (weak, nonatomic) AKAppleIDAuthenticationContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKLoginFieldsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextField *usernameField; // ivar: _usernameField


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)passwordText;
-(id)usernameText;
-(void)_hidePasswordIfNeeded;
-(void)_preparePasswordField;
-(void)_prepareUsernameField;
-(void)clearPassword;
-(void)showPasswordField;
-(void)viewDidLoad;


@end


#endif