// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACCOUNTSETTINGSVIEWCONTROLLER_H
#define VUIACCOUNTSETTINGSVIEWCONTROLLER_H

@class PSListController, NSURL, PSSpecifier, UITextField, NSString;
@protocol UITableViewDataSource, UITextFieldDelegate;



@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate>



@property (retain, nonatomic) NSURL *addFundsUrl; // ivar: _addFundsUrl
@property (nonatomic) BOOL authenticationInProgress; // ivar: _authenticationInProgress
@property (retain, nonatomic) PSSpecifier *createAccountSpecifier; // ivar: _createAccountSpecifier
@property (retain, nonatomic) PSSpecifier *credentialsAppleIDSpecifier; // ivar: _credentialsAppleIDSpecifier
@property (retain, nonatomic) UITextField *credentialsAppleIDTextField; // ivar: _credentialsAppleIDTextField
@property (retain, nonatomic) PSSpecifier *credentialsPasswordSpecifier; // ivar: _credentialsPasswordSpecifier
@property (retain, nonatomic) UITextField *credentialsPasswordTextField; // ivar: _credentialsPasswordTextField
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSSpecifier *signInSpecifier; // ivar: _signInSpecifier
@property (readonly) Class superclass;
@property (retain, nonatomic) PSSpecifier *syncMySportsSpecifier; // ivar: _syncMySportsSpecifier
@property (nonatomic) NSInteger watchListAppsCount; // ivar: _watchListAppsCount


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)_alertStyle;
-(id)_accountSpecifiers;
-(id)_clearHistorySpecifiers;
-(id)_credentialsSpecifiers;
-(id)_dialogMetricsData;
-(id)_externalSpecifiers;
-(id)_getConnectedAppsCountString;
-(id)_mySportsSpecifiers;
-(id)_signOutSpecifiers;
-(id)_sourcesSpecifiers;
-(id)_syncMySportsEnabled;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addPrivacyFooterToGroup:(id)arg0 ;
-(void)_checkConnectedAppsWithDispatchGroup:(id)arg0 ;
-(void)_checkExternalLinksWithDispatchGroup:(id)arg0 ;
-(void)_clearPlayHistory:(id)arg0 ;
-(void)_didSelectSpecifier:(id)arg0 ;
-(void)_dismissViewController;
-(void)_handleAccountSettingsEventWithUrl:(id)arg0 amsBagKey:(id)arg1 useAMSWebView:(BOOL)arg2 ;
-(void)_loadDynamicIdentifiers;
-(void)_openiForgotAppleURL;
-(void)_recordDialogClick:(id)arg0 ;
-(void)_setSyncMySportsEnabled:(id)arg0 ;
-(void)_showPrivacySheet:(id)arg0 ;
-(void)_syncMySportsSettingDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif