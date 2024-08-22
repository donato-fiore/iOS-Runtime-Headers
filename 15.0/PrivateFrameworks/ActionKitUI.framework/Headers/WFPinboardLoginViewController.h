// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPINBOARDLOGINVIEWCONTROLLER_H
#define WFPINBOARDLOGINVIEWCONTROLLER_H

@class UITableViewController, NSString, UIBarButtonItem, UITextField, WFPinboardSessionManager;
@protocol UITextFieldDelegate, WFPinboardLoginViewControllerDelegate;



@interface WFPinboardLoginViewController : UITableViewController <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFPinboardLoginViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *loadingItem; // ivar: _loadingItem
@property (retain, nonatomic) UIBarButtonItem *loginItem; // ivar: _loginItem
@property (weak, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (retain, nonatomic) WFPinboardSessionManager *sessionManager; // ivar: _sessionManager
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextField *tokenField; // ivar: _tokenField
@property (weak, nonatomic) UITextField *usernameField; // ivar: _usernameField


-(BOOL)accessibilityPerformEscape;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)cancel;
-(void)login;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)updateLoginButton;
-(void)viewDidLoad;


@end


#endif