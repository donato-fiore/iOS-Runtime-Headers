// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTUSERDETAILVIEWCONTROLLER_H
#define PKACCOUNTUSERDETAILVIEWCONTROLLER_H

@class PKPaymentPass, PKAccount, PKAccountUser, PKFeatureApplication, PKFamilyMemberCollection, PKContactResolver, PKPeerPaymentAccount, PKAppleAccountInformation, PKAccountService, PKPaymentService, CNContact, NSString;
@protocol PKAccountServiceObserver, PKPaymentServiceDelegate, PKPhysicalCardActionControllerDelegate;


#import "PKSettingsTableViewController.h"
#import "PKContactAvatarManager.h"
#import "PKPhysicalCardController.h"
#import "PKPhysicalCardActionController.h"
#import "PKApplyController.h"
#import "PKPeerPaymentAssociatedAccountsController.h"
#import "PKAccountUserDetailHeaderView.h"

@interface PKAccountUserDetailViewController : PKSettingsTableViewController <PKAccountServiceObserver, PKPaymentServiceDelegate, PKPhysicalCardActionControllerDelegate>

 {
    PKPaymentPass *_paymentPass;
    NSInteger _style;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKFeatureApplication *_accountUserInvitation;
    PKFamilyMemberCollection *_familyMemberCollection;
    PKContactAvatarManager *_avatarManager;
    PKContactResolver *_contactResolver;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAppleAccountInformation *_appleAccountInformation;
    PKAccountService *_accountService;
    PKPaymentService *_paymentService;
    PKPhysicalCardController *_physicalCardController;
    PKPhysicalCardActionController *_physicalCardActionController;
    PKApplyController *_applyController;
    CNContact *_contact;
    BOOL _performingAction;
    PKPeerPaymentAssociatedAccountsController *_associatedAccountsController;
    PKAccountUserDetailHeaderView *_headerView;
    CGFloat _previousHeaderHeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasPhysicalCardAction;
-(BOOL)_shouldShowRewardsBalance;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_currentConfigurationForAccountUser;
-(id)_currentConfigurationForAccountUserInvitation;
-(id)_footerForTransactionLimitSection;
-(id)_footerViewForPeerPaymentAccountSetup;
-(id)initWithPaymentPass:(id)arg0 style:(NSInteger)arg1 account:(id)arg2 accountUser:(id)arg3 familyMemberCollection:(id)arg4 avatarManager:(id)arg5 contactResolver:(id)arg6 ;
-(id)initWithPaymentPass:(id)arg0 style:(NSInteger)arg1 account:(id)arg2 accountUserInvitation:(id)arg3 familyMemberCollection:(id)arg4 avatarManager:(id)arg5 contactResolver:(id)arg6 ;
-(id)initWithPaymentPass:(id)arg0 style:(NSInteger)arg1 account:(id)arg2 familyMemberCollection:(id)arg3 avatarManager:(id)arg4 contactResolver:(id)arg5 ;
-(id)presentationSceneIdentifierForPhysicalCardActionController:(id)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_appendActionsSectionToConfiguration:(id)arg0 ;
-(void)_appendNotificationsSectionToConfiguration:(id)arg0 ;
-(void)_appendPhysicalCardSectionToConfiguration:(id)arg0 ;
-(void)_appendRewardsBalanceToConfiguration:(id)arg0 ;
-(void)_appendShowAvailableCreditToConfiguration:(id)arg0 ;
-(void)_appendSpendNotificationsSectionToConfiguration:(id)arg0 ;
-(void)_appendTransactionLimitToConfiguration:(id)arg0 ;
-(void)_loadPeerPaymentAccount;
-(void)_presentAccountUserInvitation;
-(void)_presentCancelInvitationAlert;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_presentPasswordAuthorizationWithReason:(id)arg0 completion:(id)arg1 ;
-(void)_presentPeerPaymentFamilySharingSetupForFamilyMember:(id)arg0 ;
-(void)_presentStopSharingAlert;
-(void)_setPerformingAction:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateConfigurationAnimated:(BOOL)arg0 ;
-(void)_updateHeaderViewAnimated:(BOOL)arg0 ;
-(void)_updateMonthlySpendLimit:(id)arg0 ;
-(void)_updateMonthlySpendNotificationThreshold:(id)arg0 ;
-(void)_updateNotificationSettings:(id)arg0 ;
-(void)_updatePreferences:(id)arg0 ;
-(void)_updateShowAvailableCredit:(BOOL)arg0 ;
-(void)_updateSpendingEnabled:(BOOL)arg0 ;
-(void)_updateTransactionLimit:(id)arg0 ;
-(void)_updateTransactionNotificationThreshold:(id)arg0 ;
-(void)_updateTransactionNotificationsEnabled:(BOOL)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountUsersChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)physicalCardActionController:(id)arg0 didChangeToState:(NSInteger)arg1 withError:(id)arg2 ;
-(void)physicalCardsChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif