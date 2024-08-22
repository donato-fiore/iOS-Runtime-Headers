// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIACCOUNTBENEFICIARYVIEWCONTROLLER_H
#define AAUIACCOUNTBENEFICIARYVIEWCONTROLLER_H

@class PSListController, AIDAAccountManager, NSArray, AAAccountBeneficiaryManagementViewModel, ACAccount;
@protocol OS_dispatch_queue;


#import "AAUIContactsProvider.h"
#import "AAUIInheritanceSetupFlowController.h"
#import "AAUIAccountBeneficiaryManagementContext.h"

@interface AAUIAccountBeneficiaryViewController : PSListController {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myBeneficiaries;
    NSArray *_myBenefactors;
    AAUIInheritanceSetupFlowController *_inheritanceSetupFlowController;
    AAAccountBeneficiaryManagementViewModel *_viewModel;
    AAUIAccountBeneficiaryManagementContext *_context;
    ACAccount *_idmsAccount;
}




-(BOOL)_canBeBeneficiary;
-(BOOL)_canHaveBeneficiary;
-(id)_addBeneficiarySpecifier;
-(id)_idmsAccount;
-(id)_myBenefactorsGroupSpecifier;
-(id)_myBenefactorsSpecifiers;
-(id)_myBeneficiariesGroupSpecifier;
-(id)_myBeneficiariesSpecifiers;
-(id)_noBenefactorSpecifier;
-(id)init;
-(id)initWithAccountManager:(id)arg0 context:(id)arg1 ;
-(id)specifiers;
-(void)_beginObservingTrustedContactChangeNotification;
-(void)_fetchAllBeneficiaryContacts;
-(void)_learnMoreWasTapped;
-(void)_myBenefactorWasTapped:(id)arg0 ;
-(void)_myBeneficiaryWasTapped:(id)arg0 ;
-(void)_showAddBeneficiary;
-(void)_showViewController:(id)arg0 ;
-(void)_stopObservingTrustedContactChangeNotification;
-(void)_syncTrustedContactsFromCloudKit;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif