// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTVIEWCONTROLLER_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTVIEWCONTROLLER_H

@class PKFamilyMember, PKFamilyMemberCollection, PKPeerPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentService, PKPeerPaymentPreferences, PKTransactionSource, PKPaymentService, NSString;
@protocol PKPaymentServiceDelegate, CNAvatarViewDelegate;


#import "PKSectionTableViewController.h"
#import "PKDashboardPaymentTransactionItemPresenter.h"
#import "PKPeerPaymentPreferencesUpdateRequest.h"

@interface PKPeerPaymentAssociatedAccountViewController : PKSectionTableViewController <PKPaymentServiceDelegate, CNAvatarViewDelegate>

 {
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentWebService *_peerPaymentWebSerivce;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_associatedAccount;
    PKPeerPaymentPreferences *_preferences;
    PKTransactionSource *_transactionSource;
    PKPaymentService *_paymentService;
    NSInteger _detailViewStyle;
    PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    PKPeerPaymentPreferencesUpdateRequest *_currentPreferencesUpdateRequest;
    PKPeerPaymentPreferencesUpdateRequest *_pendingPreferencesUpdateRequest;
    BOOL _hasPaymentTransactions;
    BOOL _modifyingAccount;
    BOOL _preferencesChanged;
    BOOL _didBeginReporter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_actionsCellShouldHighlightForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)_detailsCellShouldHighlightForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)_disableCellShouldHighlightForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)_enableCellShouldHighlightForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)_notificationsCellShouldHighlightForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)_rectrictionsCellShouldHighlightForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_actionsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_balanceCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_defaultCellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(id)_detailsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_disableCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_enableCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_linkCellWithText:(id)arg0 color:(id)arg1 forTableView:(id)arg2 ;
-(id)_notificationTransactionsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_notificationsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_rectrictionsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_restrictionAnyoneCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_restrictionContactsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_restrictionFamilyCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_restrictionScreenTimeSettingsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_switchCellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(id)_transactionsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)familyMemberTransactionViewController;
-(id)initWithFamilyMember:(id)arg0 familyCollection:(id)arg1 account:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_actionsCellSelectedForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_addPreferencesUpdateWithRequest:(id)arg0 ;
-(void)_applyDefaultStylingToCell:(id)arg0 textLabelColor:(id)arg1 ;
-(void)_detailsCellSelectedForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_disableCellSelectedForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_enableCellSelectedForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_executeNextPreferencesUpdateRequestIfPossible;
-(void)_modifyPeerPaymentAccountState:(NSUInteger)arg0 atIndexPath:(id)arg1 ;
-(void)_notificationTransactionsSelectionHasChanged:(id)arg0 ;
-(void)_peerPaymentAccountChanged:(id)arg0 ;
-(void)_peerPaymentPreferencesChanged:(id)arg0 ;
-(void)_presentPassworkPromptWithCompletion:(id)arg0 ;
-(void)_rectrictionsCellSelectedForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updateCellLoadingState:(id)arg0 indexPath:(id)arg1 ;
-(void)_updatePeerPaymentAccountWithNewAccount:(id)arg0 ;
-(void)_updatePreferencesFromPeerPaymentServiceAndReloadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif