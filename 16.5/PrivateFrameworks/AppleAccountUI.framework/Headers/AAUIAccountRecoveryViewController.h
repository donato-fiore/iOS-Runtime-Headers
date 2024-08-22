// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIACCOUNTRECOVERYVIEWCONTROLLER_H
#define AAUIACCOUNTRECOVERYVIEWCONTROLLER_H

@class PSListController, AIDAAccountManager, NSArray, AAAccountRecoveryManagementViewModel, AACustodianController, AKAppleIDAuthenticationController, ACAccount, NSString;
@protocol AAUIGrandSlamRemoteUIPresenterDelegate, OS_dispatch_queue;


#import "AAUIContactsProvider.h"
#import "AAUICustodianSetupFlowController.h"
#import "AAUIGrandSlamRemoteUIPresenter.h"
#import "AAUISpinnerManager.h"

@interface AAUIAccountRecoveryViewController : PSListController <AAUIGrandSlamRemoteUIPresenterDelegate>

 {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myCustodians;
    NSArray *_myCustodianshipOwners;
    AAUICustodianSetupFlowController *_custodianSetupFlowController;
    AAAccountRecoveryManagementViewModel *_viewModel;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
    AAUISpinnerManager *_spinnerManager;
    AACustodianController *_custodianController;
    AKAppleIDAuthenticationController *_authenticationController;
    BOOL _recoveryKeyStateIsEnabled;
    ACAccount *_idmsAccount;
    NSUInteger _walrusState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canBeCustodian;
-(BOOL)_canHaveCustodian;
-(BOOL)_isEligibleForRecoveryKey;
-(id)_accountRecoveryDetailsSpecifier;
-(id)_accountRecoveryDetailsSpecifierForIneligibleAccount;
-(id)_addRecoveryContactSpecifier;
-(id)_appleAccount;
-(id)_idmsAccount;
-(id)_myRecoveryOptionsSpecifiers;
-(id)_recoveryContactForGroupSpecifier;
-(id)_recoveryContactForSpecifiers;
-(id)_recoveryKeySpecifiers;
-(id)_recoveryKeyState;
-(id)_recoveryOptionsGroupSpecifier;
-(id)_recoveryOptionsGroupSpecifierForIneligibleAccount;
-(id)initWithAccountManager:(id)arg0 ;
-(id)specifiers;
-(void)_beginObservingNotifications;
-(void)_beginObservingTrustedContactChangeNotification;
-(void)_beginObservingWalrusChangeNotification;
-(void)_custodianshipOwnerWasTapped:(id)arg0 ;
-(void)_fetchAllCustodianContacts;
-(void)_fetchAllCustodianContacts:(BOOL)arg0 ;
-(void)_fetchRecoveryKeyUpdate;
-(void)_fetchWalrusStateWithCompletion:(id)arg0 ;
-(void)_footerLearnMoreWasTapped;
-(void)_learnMoreWasTapped;
-(void)_myRecoveryContactWasTapped:(id)arg0 ;
-(void)_rkFooterLearnMoreTapped;
-(void)_showAddCustodian;
-(void)_showRecoveryKey:(id)arg0 ;
-(void)_showViewController:(id)arg0 ;
-(void)_startSpinnerInSpecifier:(id)arg0 ;
-(void)_stopObservingNotifications;
-(void)_stopObservingTrustedContactChangeNotification;
-(void)_stopObservingWalrusChangeNotification;
-(void)_syncAccountRecoveryFactorsWithCompletion:(id)arg0 ;
-(void)_syncTrustedContactsFromCloudKit;
-(void)_walrusStateDidChange;
-(void)dealloc;
-(void)remoteUIRequestComplete:(id)arg0 error:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif