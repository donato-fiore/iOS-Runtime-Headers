// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPASSWORDAUDITINGVIEWCONTROLLER_H
#define _SFPASSWORDAUDITINGVIEWCONTROLLER_H

@class SFPasswordTableViewController, WBSAutoFillQuirksManager, WBSSavedPasswordStore, WBSPasswordWarningManager, NSArray, UIActivityIndicatorView, WBSPasswordGenerationManager, ASAccountAuthenticationModificationController, NSString, WBSSavedPassword;
@protocol SFPasswordBreachToggleCellDelegate, SFHighPriorityRecommendationDataDelegate, SFPasswordDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, _SFTableLinkableFooterViewDelegate, PSStateRestoration, OS_dispatch_queue, _SFPasswordAuditingViewControllerDelegate;


#import "_SFTableViewDiffableDataSource.h"
#import "SFSafariViewController.h"
#import "SFHighPriorityRecommendationData.h"
#import "_SFTableLinkableFooterView.h"

@interface _SFPasswordAuditingViewController : SFPasswordTableViewController <SFPasswordBreachToggleCellDelegate, SFHighPriorityRecommendationDataDelegate, SFPasswordDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, _SFTableLinkableFooterViewDelegate, PSStateRestoration>

 {
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedPasswordStore *_savedPasswordStore;
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;
    WBSPasswordWarningManager *_passwordWarningManager;
    NSArray *_highPriorityRecommendationData;
    NSArray *_flaggedPasswordData;
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;
    NSUInteger _numberOfWarnings;
    UIActivityIndicatorView *_spinner;
    SFSafariViewController *_changePasswordOnWebsiteSafariViewController;
    SFHighPriorityRecommendationData *_recommendationForMostRecentSafariViewController;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFHighPriorityRecommendationData *_passwordDataForCurrentUpgrade;
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
    _SFTableLinkableFooterView *_passwordBreachFooterView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPasswordAuditingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSSavedPassword *passwordToRemoveAfterCompletedUpgradeInDetailView; // ivar: _passwordToRemoveAfterCompletedUpgradeInDetailView
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_cellForIdentifier:(id)arg0 indexPath:(id)arg1 ;
-(id)_passwordBreachFooterTextForDeviceClass:(int)arg0 ;
-(id)_passwordBreachFooterView;
-(id)_passwordBreachToggleCell;
-(id)_passwordGenerationManager;
-(id)_standardRecommendationCellWithPasswordCellData:(id)arg0 ;
-(id)_warningStringForPasswordCellData:(id)arg0 ;
-(id)dataSource:(id)arg0 headerTextForSection:(NSInteger)arg1 ;
-(id)initWithSiteMetadataManager:(id)arg0 autoFillQuirksManager:(id)arg1 passwordWarningManager:(id)arg2 ;
-(id)passwordGeneratorForPasswordDetailViewController:(id)arg0 ;
-(id)passwordWarningManagerForPasswordDetailViewController:(id)arg0 ;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg0 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_changePasswordOnWebsiteForHighPriorityRecommendation:(id)arg0 ;
-(void)_completedSignInWithAppleUpgrade;
-(void)_completedStrongPasswordUpgrade;
-(void)_configureHighPriorityInformationCell:(id)arg0 withHighPriorityRecommendationData:(id)arg1 ;
-(void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
-(void)_initiateChangeToStrongPasswordForHighPriorityRecommendation:(id)arg0 ;
-(void)_passwordStoreDidUpdate;
-(void)_reloadSavedPasswordsForceUpdate:(BOOL)arg0 ;
-(void)_reloadTableViewDiffableDataSource;
-(void)_reloadTableViewDiffableDataSourceOnInternalQueue;
-(void)_removeHighPriorityRecommendation:(id)arg0 ;
-(void)_upgradeToSignInWithAppleForHighPriorityRecommendation:(id)arg0 ;
-(void)accountAuthenticationModificationController:(id)arg0 didFailRequest:(id)arg1 withError:(id)arg2 ;
-(void)accountAuthenticationModificationController:(id)arg0 didSuccessfullyCompleteRequest:(id)arg1 withUserInfo:(id)arg2 ;
-(void)accountModificationExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)didSetPasswordBreachDetectionState:(BOOL)arg0 ;
-(void)highPriorityRecommendationDataDidUpdate:(id)arg0 ;
-(void)linkableFooterViewDidInteractWithLink:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif