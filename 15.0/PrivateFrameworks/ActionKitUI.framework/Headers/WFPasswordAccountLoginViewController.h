// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPASSWORDACCOUNTLOGINVIEWCONTROLLER_H
#define WFPASSWORDACCOUNTLOGINVIEWCONTROLLER_H

@class NSString, UIBarButtonItem, NSURL, UITextField, UITableView, NSDictionary;
@protocol UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate;


#import "WFAccountLoginViewController.h"

@interface WFPasswordAccountLoginViewController : WFAccountLoginViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *loadingItem; // ivar: _loadingItem
@property (retain, nonatomic) UIBarButtonItem *loginItem; // ivar: _loginItem
@property (readonly, nonatomic) NSURL *loginURL;
@property (readonly, weak, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (copy, nonatomic) NSDictionary *textFieldsByIndexPath; // ivar: _textFieldsByIndexPath
@property (readonly, weak, nonatomic) UITextField *usernameField; // ivar: _usernameField


-(BOOL)canAttemptLogin;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)usernameIsEmail;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAccountClass:(Class)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)cancelPressed:(id)arg0 ;
-(void)configureTextField:(id)arg0 forKey:(id)arg1 ;
-(void)loadView;
-(void)loginPressed:(id)arg0 ;
-(void)loginWithUsername:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
-(void)textFieldDidChange:(id)arg0 ;


@end


#endif