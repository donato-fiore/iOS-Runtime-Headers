// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACUIDATACLASSCONFIGURATIONVIEWCONTROLLER_H
#define ACUIDATACLASSCONFIGURATIONVIEWCONTROLLER_H

@class NSString, NSMutableDictionary, PSSpecifier, NSArray, MCUIUserEnrollmentAccountSpecifierProvider, ACAccount;


#import "ACUIViewController.h"

@interface ACUIDataclassConfigurationViewController : ACUIViewController {
    BOOL _forceMailSetup;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    BOOL _isMergingSyncData;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    BOOL _didShowDataclassActionPickerDuringRemoval;
    MCUIUserEnrollmentAccountSpecifierProvider *_userEnrollmentAccountSpecifierProvider;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) id *configurationCompletion; // ivar: _configurationCompletion
@property (retain, nonatomic) PSSpecifier *dataclassGroupSpecifier; // ivar: _dataclassGroupSpecifier
@property (readonly, nonatomic) PSSpecifier *deleteButtonSpecifier; // ivar: _deleteButtonSpecifier
@property (nonatomic, getter=isFirstTimeSetup) BOOL firstTimeSetup; // ivar: _firstTimeSetup
@property BOOL isAccountModificationDisabled; // ivar: _isAccountModificationDisabled
@property (nonatomic) BOOL isMailSetupForced; // ivar: _isMailSetupForced
@property (copy, nonatomic) NSArray *preEnabledDataclasses; // ivar: _preEnabledDataclasses
@property (nonatomic) BOOL shouldEnableAccountSummaryCell; // ivar: _shouldEnableAccountSummaryCell
@property (nonatomic) BOOL shouldEnableDataclassSwitches; // ivar: _shouldEnableDataclassSwitches
@property (nonatomic) BOOL shouldEnableDeleteAccountButton; // ivar: _shouldEnableDeleteAccountButton
@property (nonatomic) BOOL shouldShowDeleteAccountButton; // ivar: _shouldShowDeleteAccountButton


+(BOOL)shouldPresentAsModalSheet;
-(BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg0 ;
-(BOOL)_confirmKeepLocalDataForDataclasses:(id)arg0 ;
-(BOOL)_confirmSyncDelete;
-(BOOL)_isShowingDeleteAccountButton;
-(BOOL)_isUserOverridableForDataclass:(id)arg0 ;
-(BOOL)_promptUserToConfirmAccountDeletion;
-(BOOL)isAppleMailAccount:(id)arg0 ;
-(BOOL)isUserEnrollment;
-(BOOL)operationsHelper:(id)arg0 shouldRemoveAccount:(id)arg1 ;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg0 ;
-(BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
-(BOOL)shouldShowSpecifierForDataclass:(id)arg0 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(NSInteger)_promptUserToConfirmAccountSyncDeletion;
-(NSInteger)deleteButtonIndex;
-(NSInteger)operationsHelper:(id)arg0 shouldRemoveOrDisableAccount:(id)arg1 ;
-(id)_navigationTitle;
-(id)_orderDataclassList:(id)arg0 ;
-(id)_specifiersForDataclasses:(id)arg0 ;
-(id)dataclassSwitchStateForSpecifier:(id)arg0 ;
-(id)deviceMessage;
-(id)displayedAccountTypeString;
-(id)displayedShortAccountTypeString;
-(id)init;
-(id)messageForAccountDeletionProgressUI;
-(id)messageForAccountDeletionWarning;
-(id)operationsHelper:(id)arg0 desiredDataclassActionFromPicker:(id)arg1 ;
-(id)otherSpecifiers;
-(id)specifierForAccountSummaryCell;
-(id)specifierForDataclass:(id)arg0 ;
-(id)specifiers;
-(id)titleForDeleteButton;
-(id)userEnrollmentAccountSpecifierProvider;
-(id)valueForAccountSummaryCell;
-(void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
-(void)_notifyOfAccountSetupCompletion;
-(void)_presentUndoAlert:(id)arg0 reason:(id)arg1 ;
-(void)_setDataclass:(id)arg0 enabled:(BOOL)arg1 onAccount:(id)arg2 completion:(id)arg3 ;
-(void)appendDeleteAccountButton;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dataclassSwitchStateDidChange:(id)arg0 withSpecifier:(id)arg1 ;
-(void)deleteButtonTapped:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)forceMailSetup;
-(void)operationsHelper:(id)arg0 didRemoveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 didSaveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 willRemoveAccount:(id)arg1 ;
-(void)operationsHelper:(id)arg0 willSaveAccount:(id)arg1 ;
-(void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg0 ;
-(void)setDataclass:(id)arg0 enabled:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif