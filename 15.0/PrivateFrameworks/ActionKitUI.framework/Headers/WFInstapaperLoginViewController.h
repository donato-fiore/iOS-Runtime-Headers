// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINSTAPAPERLOGINVIEWCONTROLLER_H
#define WFINSTAPAPERLOGINVIEWCONTROLLER_H

@class UITableViewController, NSString, IKEngine, UIBarButtonItem, UITextField;
@protocol UITextFieldDelegate, IKEngineDelegate, WFInstapaperLoginViewControllerDelegate;



@interface WFInstapaperLoginViewController : UITableViewController <UITextFieldDelegate, IKEngineDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFInstapaperLoginViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IKEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *loadingItem; // ivar: _loadingItem
@property (retain, nonatomic) UIBarButtonItem *loginItem; // ivar: _loginItem
@property (weak, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextField *usernameField; // ivar: _usernameField


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)cancel;
-(void)engine:(id)arg0 connection:(id)arg1 didReceiveAuthToken:(id)arg2 andTokenSecret:(id)arg3 ;
-(void)engine:(id)arg0 didFailConnection:(id)arg1 error:(id)arg2 ;
-(void)login;
-(void)textFieldDidChange:(id)arg0 ;
-(void)updateLoginButton;
-(void)viewDidLoad;


@end


#endif