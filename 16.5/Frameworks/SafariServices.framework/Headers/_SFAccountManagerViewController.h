// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFACCOUNTMANAGERVIEWCONTROLLER_H
#define _SFACCOUNTMANAGERVIEWCONTROLLER_H

@class SFAccountTableViewController, SFTableViewDiffableDataSource, UIBarButtonItem, WBSAutoFillQuirksManager, WBSSavedAccountStore, _SFSiteMetadataManager, SFSharablePassword, WBSPasswordWarningManager, WBSPasswordGenerationManager, SFAutoFillFeatureManager, NSString, UITableViewCell, UINavigationController, WBSSavedAccount;
@protocol PSStateRestoration, SFAccountManagerPlatterWithDeclineButtonCellDelegate, SFAddSavedAccountViewControllerDelegate, SFAccountDetailViewControllerDelegate, SFAccountTableViewCellDelegate, _SFSharedSiteMetadataManagerProvider, SFTableViewDiffableDataSourceDelegate, _SFAccountManagerLockableContentContainer, UIAdaptivePresentationControllerDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, _SFAccountManagerViewControllerDelegate;


#import "SFAccountListSectionIdentifier.h"
#import "_SFSecurityRecommendationsDrillInTableViewCell.h"
#import "SFAddSavedAccountViewController.h"
#import "SFAccountDetailViewController.h"

@interface _SFAccountManagerViewController : SFAccountTableViewController <PSStateRestoration, SFAccountManagerPlatterWithDeclineButtonCellDelegate, SFAddSavedAccountViewControllerDelegate, SFAccountDetailViewControllerDelegate, SFAccountTableViewCellDelegate, _SFSharedSiteMetadataManagerProvider, SFTableViewDiffableDataSourceDelegate, _SFAccountManagerLockableContentContainer, UIAdaptivePresentationControllerDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver>

 {
    SFTableViewDiffableDataSource *_diffableDataSource;
    SFAccountListSectionIdentifier *_autoFillSectionIdentifier;
    SFAccountListSectionIdentifier *_securityRecommendationsSectionIdentifier;
    SFAccountListSectionIdentifier *_tipSectionIdentifier;
    UIBarButtonItem *_addNavigationBarItem;
    UIBarButtonItem *_cancelNavigationBarItem;
    UIBarButtonItem *_deleteNavigationBarItem;
    UIBarButtonItem *_editNavigationBarItem;
    UIBarButtonItem *_cancelToolbarItem;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_editToolbarItem;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedAccountStore *_savedAccountStore;
    NSUInteger _persona;
    _SFSiteMetadataManager *_siteMetadataManager;
    SFSharablePassword *_receivedSharablePasswordRequiringPromptBeforeSaving;
    SFSharablePassword *_receivedInvalidSharablePassword;
    WBSPasswordWarningManager *_passwordWarningManager;
    BOOL _hasBeenAuthenticated;
    BOOL _hasEverShownSectionHeaders;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFAutoFillFeatureManager *_autoFillFeatureManager;
    BOOL _userIsEditingCellInTableView;
    NSString *_securityRecommendationsSubtitleText;
    BOOL _isFirstWillAppear;
    BOOL _isObservingExtensionManagers;
    BOOL _hasLoadedSecurityRecommendations;
    BOOL _hasLoadedPasswords;
    _SFSecurityRecommendationsDrillInTableViewCell *_securityRecommendationsCell;
    UITableViewCell *_autoFillPasswordsCell;
    SFAddSavedAccountViewController *_addPasswordViewController;
    UINavigationController *_addPasswordNavigationController;
    SFAccountDetailViewController *_detailViewController;
    NSInteger _tipToShow;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFAccountManagerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView; // ivar: _savedAccountToRemoveAfterCompletedUpgradeInDetailView
@property (readonly, nonatomic) BOOL shouldSuppressAccountManagerLockedView;
@property (nonatomic, getter=isShowingAccountManagerLockedView) BOOL showingAccountManagerLockedView; // ivar: _showingAccountManagerLockedView
@property (readonly) Class superclass;


-(BOOL)_canAddPasswords;
-(BOOL)_isAccountCellAtIndexPath:(id)arg0 ;
-(BOOL)_sectionWithIndexIsConfigurationSection:(NSInteger)arg0 ;
-(BOOL)_shouldShowAutoFillItem;
-(BOOL)_shouldShowSectionHeaders;
-(BOOL)_shouldShowSecurityRecommendationsItem;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)dataSource:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_indexOfFirstPasswordSection;
-(NSInteger)_warningStyleForSecurityRecommendationsDrillInCell;
-(NSInteger)dataSource:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)dataSource:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_accountCellDataForUser:(id)arg0 highLevelDomain:(id)arg1 ;
-(id)_alertTitleForInvalidSharableAccount:(id)arg0 ;
-(id)_autoFillCellForTableView:(id)arg0 ;
-(id)_autoFillFeatureManager;
-(id)_autoFillSectionIdentifier;
-(id)_cellForIdentifier:(id)arg0 tableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_rightToolbarItem;
-(id)_saveSharableAccount:(id)arg0 ;
-(id)_saveSharableAccountWithPasswordConflicts:(id)arg0 ;
-(id)_securityRecommendationsSectionIdentifier;
-(id)_sharableAccountFromResourceDictionary:(id)arg0 ;
-(id)_tipSectionIdentifier;
-(id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg0 didAuthenticate:(BOOL)arg1 ;
-(id)dataSource:(id)arg0 headerTextForSection:(NSInteger)arg1 ;
-(id)iconControllerForAddSavedAccountDetailViewController:(id)arg0 ;
-(id)initWithSiteMetadataManager:(id)arg0 autoFillQuirksManager:(id)arg1 persona:(NSUInteger)arg2 ;
-(id)navigationItem;
-(id)newSharedSiteMetadataManager;
-(id)passwordGeneratorForAccountDetailViewController:(id)arg0 ;
-(id)passwordWarningManagerForAccountDetailViewController:(id)arg0 ;
-(id)savedAccountControllerForQuery:(id)arg0 queryBundleID:(id)arg1 authenticationRequirementsMet:(BOOL)arg2 ;
-(id)sectionIndexTitlesForDataSource:(id)arg0 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)viewControllerToPresentWithURLResourceDictionary:(id)arg0 ;
-(void)_addItemsAboveAccountListForTopLevelAccountManagerToSnapshot:(id)arg0 ;
-(void)_addNewPassword:(id)arg0 ;
-(void)_beginEditing;
-(void)_cancelEditing;
-(void)_cancelNavigationBarItemTapped:(id)arg0 ;
-(void)_checkForTipsToShow;
-(void)_configureNavigationBar;
-(void)_configureTableView;
-(void)_deleteAccountsAtIndexPaths:(id)arg0 ;
-(void)_deleteButtonTapped:(id)arg0 ;
-(void)_didSelectAutoFillCellAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(void)_editNavigationBarItemTapped:(id)arg0 ;
-(void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
-(void)_managedConfigurationSettingsDidChange:(id)arg0 ;
-(void)_openiCloudKeychainSettings;
-(void)_presentAlertForInvalidSharableAccount:(id)arg0 ;
-(void)_presentAlertForSharableAccountWithPasswordConflicts:(id)arg0 ;
-(void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)arg0 ;
-(void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentDetailViewController:(id)arg0 ;
-(void)_presentDuplicateCodeGeneratorAlert;
-(void)_presentErrorAlertWithString:(id)arg0 ;
-(void)_presentInvalidOtpauthURLAlert;
-(void)_reloadSavedAccounts;
-(void)_reloadSavedAccountsAndTableViewData;
-(void)_reloadSecurityRecommendationsSection;
-(void)_savedAccountStoreDidChange;
-(void)_setAccessibilityIdentifiersOnAccountCell:(id)arg0 ;
-(void)_setUserInterfaceElementsEnabled:(BOOL)arg0 ;
-(void)_updateContentUnavailableView;
-(void)_updateDeleteButton;
-(void)_updateHeaderAndFooterViewsFloat;
-(void)_updateNavigationBarItems;
-(void)_updateSecurityRecommendationsSubtitleTextWithWarnings:(id)arg0 ;
-(void)_updateToolbarItemsAnimated:(BOOL)arg0 ;
-(void)_userChoseToUseTip:(NSInteger)arg0 ;
-(void)addSavedAccountViewControllerDidFinish:(id)arg0 withSavedAccount:(id)arg1 ;
-(void)dealloc;
-(void)handleContextMenuDeleteForIndexPath:(id)arg0 ;
-(void)handleIconDidUpdateForDomain:(id)arg0 ;
-(void)searchPatternDidUpdate;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setToolbarItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)showConflictAlertForSharablePasswordIfNecessary;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityIdentifierForAccountCell:(id)arg0 ;
-(void)updateUserAuthenticationState:(BOOL)arg0 ;
-(void)userDidPressDeclineButtonForPlatterTableViewCell:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif