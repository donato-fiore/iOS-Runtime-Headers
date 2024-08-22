// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIACCOUNTRECOVERYVIEWCONTROLLER_H
#define AAUIACCOUNTRECOVERYVIEWCONTROLLER_H

@class PSListController, AIDAAccountManager, NSArray, AAAccountRecoveryManagementViewModel, ACAccount, NSString;
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
    BOOL _recoveryKeyStateIsEnabled;
    ACAccount *_idmsAccount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canBeCustodian;
-(BOOL)_canHaveCustodian;
-(id)_accountRecoveryDetailsSpecifier;
-(id)_accountRecoveryDetailsSpecifierForIneligibleAccount;
-(id)_addRecoveryContactSpecifier;
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
-(void)_beginObservingTrustedContactChangeNotification;
-(void)_custodianshipOwnerWasTapped:(id)arg0 ;
-(void)_fetchAllCustodianContacts;
-(void)_footerLearnMoreWasTapped;
-(void)_learnMoreWasTapped;
-(void)_myRecoveryContactWasTapped:(id)arg0 ;
-(void)_showAddCustodian;
-(void)_showAppleDataRecoveryDetails:(id)arg0 ;
-(void)_showRecoveryKey:(id)arg0 ;
-(void)_showViewController:(id)arg0 ;
-(void)_startSpinnerInSpecifier:(id)arg0 ;
-(void)_stopObservingTrustedContactChangeNotification;
-(void)_syncTrustedContactsFromCloudKit;
-(void)dealloc;
-(void)remoteUIRequestComplete:(id)arg0 error:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif