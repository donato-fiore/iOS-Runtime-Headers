// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DASETTINGSDATACLASSCONFIGURATIONVIEWCONTROLLER_H
#define DASETTINGSDATACLASSCONFIGURATIONVIEWCONTROLLER_H

@class ACUIDataclassConfigurationViewController, DAAccount;



@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {
    BOOL _haveRegisteredForAccountsChanged;
}


@property (retain, nonatomic) DAAccount *daAccount; // ivar: _daAccount


-(BOOL)shouldVerifyBeforeAccountSave;
-(Class)accountInfoControllerClass;
-(id)_navTitle;
-(id)accountDescriptionForFirstTimeSetup;
-(id)accountFromSpecifier;
-(id)otherSpecifiers;
-(id)specifiers;
-(void)_accountsChanged:(id)arg0 ;
-(void)_listenForAccountsChangedNotifications;
-(void)cancelButtonClicked:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)operationsHelper:(id)arg0 didRemoveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)reloadAccount;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif