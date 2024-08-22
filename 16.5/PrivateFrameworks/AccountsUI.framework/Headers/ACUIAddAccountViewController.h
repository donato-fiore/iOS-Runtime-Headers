// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUIADDACCOUNTVIEWCONTROLLER_H
#define ACUIADDACCOUNTVIEWCONTROLLER_H

@class PSListController, NSArray, PSSpecifier, ACAccountStore, NSString;
@protocol ACUISetupViewControllerDelegate, ACUIAddAccountDataSource;


#import "ACUIAccountViewProvidersManager.h"

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate>

 {
    BOOL _dontShowSecondLevelOtherAccountTypes;
    NSArray *_preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    PSSpecifier *_gmailSpecifier;
    ACAccountStore *_accountStore;
}


@property (retain) NSObject<ACUIAddAccountDataSource> *addAccountDataSource; // ivar: _addAccountDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *filteredDataclass; // ivar: _filteredDataclass
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ACUIAccountViewProvidersManager *viewProvidersManager;


+(id)_debugStringForAction:(NSInteger)arg0 ;
-(BOOL)shouldAddSpecifierForAccountTypeID:(id)arg0 ;
-(BOOL)shouldAddSpecifierForOtherAccountTypes;
-(id)_specifierForAOLAccount;
-(id)_specifierForCustomControlledAccountWithName:(id)arg0 accountTypeID:(id)arg1 ;
-(id)_specifierForExchangeAccount;
-(id)_specifierForGmailAccount;
-(id)_specifierForOutlookAccount;
-(id)_specifierForPrimaryiCloudAccount;
-(id)_specifierForRegionalAccountType:(id)arg0 ;
-(id)_specifierForYahooAccount;
-(id)_specifierForiCloudAccount;
-(id)_specifiersForRegionalMailAccounts;
-(id)giantSpecifierWithName:(id)arg0 forAccountTypeID:(id)arg1 ;
-(id)init;
-(id)specifierForOtherAccounts;
-(id)specifiers;
-(void)_addAccountSpecifierWasTapped:(id)arg0 ;
-(void)_alertIfAccountTypePreventsMultiples:(id)arg0 withCompletion:(id)arg1 ;
-(void)_createCustomControlledAccountTapped:(id)arg0 ;
-(void)_dismissAndBecomeFirstResponder;
-(void)_presentPrimaryAppleIDSignInController:(id)arg0 ;
-(void)dealloc;
-(void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(BOOL)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setupViewControllerDidDismiss:(id)arg0 ;
-(void)signInControllerDidCancel;
-(void)signInControllerDidCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif