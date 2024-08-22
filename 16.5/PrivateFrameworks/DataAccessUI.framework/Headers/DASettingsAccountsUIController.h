// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASETTINGSACCOUNTSUICONTROLLER_H
#define DASETTINGSACCOUNTSUICONTROLLER_H

@class ACUIViewController, DAAccount, NSString;
@protocol DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate;



@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate>



@property (retain, nonatomic) DAAccount *account; // ivar: _account
@property (nonatomic) BOOL accountNeedsAdd; // ivar: _accountNeedsAdd
@property (nonatomic) BOOL attemptedValidation; // ivar: _attemptedValidation
@property (nonatomic) BOOL confirmedUnvalidatedAccount; // ivar: _confirmedUnvalidatedAccount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFullHostURL; // ivar: _didSetFullHostURL
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveRegisteredForAccountsChanged; // ivar: _haveRegisteredForAccountsChanged
@property (nonatomic) BOOL isSettingUpNewAccount; // ivar: _isSettingUpNewAccount
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitioningToFinishedAccountSetup; // ivar: _transitioningToFinishedAccountSetup
@property (nonatomic) BOOL validatedSuccessfully; // ivar: _validatedSuccessfully


-(BOOL)dismissesAfterInitialSetup;
-(BOOL)haveEnoughValues;
-(BOOL)isRunningFromMobileMailApp;
-(BOOL)transitionsAfterInitialSetup;
-(BOOL)validateAccount;
-(id)_defaultAccountDescription;
-(id)accountBooleanPropertyWithSpecifier:(id)arg0 ;
-(id)accountPropertyWithSpecifier:(id)arg0 ;
-(id)currentlyEditingCell;
-(id)daAccountWithBackingAccountInfo:(id)arg0 ;
-(id)lastGroupSpecifierInSpecifiers:(id)arg0 ;
-(id)localizedAccountSetupTitleString;
-(id)localizedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(int)indexOfCurrentlyEditingCell;
-(void)_accountsChanged:(id)arg0 ;
-(void)_beginAccountValidation;
-(void)_confirmSaveUnvalidatedAccount;
-(void)_deleteAccount;
-(void)_dismissAndUpdateParent;
-(void)_finishSaveAccountDismissWhenDone:(BOOL)arg0 ;
-(void)_saveAccountDismissWhenDone:(BOOL)arg0 ;
-(void)account:(id)arg0 isValid:(BOOL)arg1 validationError:(id)arg2 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)deleteAccountButtonTapped;
-(void)didConfirmSaveUnvalidatedAccount:(BOOL)arg0 ;
-(void)didConfirmTryWithoutSSL:(BOOL)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)finishedAccountSetup;
-(void)hideProgressWithPrompt:(id)arg0 ;
-(void)operationsHelper:(id)arg0 didRemoveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 didSaveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)propertyValueChanged:(id)arg0 ;
-(void)reloadAccount;
-(void)setHostString:(id)arg0 ;
-(void)showAlertWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)showIdenticalAccountFailureView;
-(void)showSSLFailureView;
-(void)updateDoneButton;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif