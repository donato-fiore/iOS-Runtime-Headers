// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPASSWORDAUDITINGVIEWCONTROLLER_H
#define _SFPASSWORDAUDITINGVIEWCONTROLLER_H

@class SFAccountTableViewController, WBSAutoFillQuirksManager, WBSSavedAccountStore, WBSPasswordWarningManager, NSArray, UIActivityIndicatorView, WBSPasswordGenerationManager, ASAccountAuthenticationModificationController, WBSPasswordWarning, _SFSiteMetadataManager, NSString, WBSSavedAccount;
@protocol SFPasswordBreachToggleCellDelegate, SFActionableSecurityRecommendationDataDelegate, SFAccountDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, _SFTableLinkableFooterViewDelegate, PSStateRestoration, OS_dispatch_queue, _SFPasswordAuditingViewControllerDelegate;


#import "_SFTableViewDiffableDataSource.h"
#import "SFSafariViewController.h"
#import "SFActionableSecurityRecommendationData.h"
#import "_SFTableLinkableFooterView.h"

@interface _SFPasswordAuditingViewController : SFAccountTableViewController <SFPasswordBreachToggleCellDelegate, SFActionableSecurityRecommendationDataDelegate, SFAccountDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, _SFTableLinkableFooterViewDelegate, PSStateRestoration>

 {
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedAccountStore *_savedAccountStore;
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;
    WBSPasswordWarningManager *_passwordWarningManager;
    NSArray *_highPriorityRecommendationData;
    NSArray *_flaggedPasswordData;
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;
    NSUInteger _numberOfWarnings;
    UIActivityIndicatorView *_spinner;
    SFSafariViewController *_changePasswordOnWebsiteSafariViewController;
    SFActionableSecurityRecommendationData *_recommendationForMostRecentSafariViewController;
    NSUInteger _persona;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFActionableSecurityRecommendationData *_passwordDataForCurrentUpgrade;
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
    _SFTableLinkableFooterView *_passwordBreachFooterView;
    WBSPasswordWarning *_warningHiddenInDetailView;
    _SFSiteMetadataManager *_siteMetadataManager;
    NSArray *_hiddenRecommendationData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPasswordAuditingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView; // ivar: _savedAccountToRemoveAfterCompletedUpgradeInDetailView
@property (readonly) Class superclass;


+(id)hiddenSecurityRecommendationsViewControllerWithWarningData:(id)arg0 siteMetadataManager:(id)arg1 passwordWarningManager:(id)arg2 ;
+(id)securityRecommendationsViewControllerWithSiteMetadataManager:(id)arg0 autoFillQuirksManager:(id)arg1 passwordWarningManager:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_cellForIdentifier:(id)arg0 indexPath:(id)arg1 ;
-(id)_hiddenSecurityRecommendationsCell;
-(id)_passwordBreachFooterTextForDeviceClass:(int)arg0 ;
-(id)_passwordBreachFooterView;
-(id)_passwordBreachToggleCell;
-(id)_passwordGenerationManager;
-(id)_resetHiddenSecurityRecommendationsCell;
-(id)_standardRecommendationCellWithPasswordCellData:(id)arg0 ;
-(id)_warningStringForPasswordCellData:(id)arg0 ;
-(id)dataSource:(id)arg0 headerTextForSection:(NSInteger)arg1 ;
-(id)initWithPersona:(NSUInteger)arg0 siteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 passwordWarningManager:(id)arg3 ;
-(id)passwordGeneratorForAccountDetailViewController:(id)arg0 ;
-(id)passwordWarningManagerForAccountDetailViewController:(id)arg0 ;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg0 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_accountStoreDidUpdate;
-(void)_addHiddenSecurityRecommendationsSectionIfNecessary;
-(void)_addWarningToHiddenRecommendationData:(id)arg0 ;
-(void)_changePasswordOnWebsiteForActionableSecurityRecommendation:(id)arg0 ;
-(void)_completedSignInWithAppleUpgrade;
-(void)_completedStrongPasswordUpgrade;
-(void)_configureSecurityRecommendationInformationCell:(id)arg0 withActionableRecommendationData:(id)arg1 ;
-(void)_findAndRemoveEntryForSavedAccount:(id)arg0 ;
-(void)_initiateChangeToStrongPasswordForActionableSecurityRecommendation:(id)arg0 ;
-(void)_reloadSavedAccountsForceUpdate:(BOOL)arg0 ;
-(void)_reloadTableViewDiffableDataSource;
-(void)_reloadTableViewDiffableDataSourceOnInternalQueue;
-(void)_reloadTableViewDiffableDataSourceOnInternalQueueForHiddenSecurityRecommendationsPersona;
-(void)_reloadTableViewDiffableDataSourceOnInternalQueueForSecurityRecommendationsPersona;
-(void)_removeAddressedActionableRecommendation:(id)arg0 ;
-(void)_removeHideMarkerForWarning:(id)arg0 ;
-(void)_removeHideWarningMarkerForSavedAccount:(id)arg0 ;
-(void)_resetHiddenSecurityRecommendations;
-(void)_upgradeToSignInWithAppleForActionableSecurityRecommendation:(id)arg0 ;
-(void)accountAuthenticationModificationController:(id)arg0 didFailRequest:(id)arg1 withError:(id)arg2 ;
-(void)accountAuthenticationModificationController:(id)arg0 didSuccessfullyCompleteRequest:(id)arg1 withUserInfo:(id)arg2 ;
-(void)accountDetailViewController:(id)arg0 didHideWarning:(id)arg1 ;
-(void)accountModificationExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)actionableSecurityRecommendationDataDidUpdate:(id)arg0 ;
-(void)didSetPasswordBreachDetectionState:(BOOL)arg0 ;
-(void)linkableFooterViewDidInteractWithLink:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif