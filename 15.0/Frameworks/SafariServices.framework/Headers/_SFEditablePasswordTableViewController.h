// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFEDITABLEPASSWORDTABLEVIEWCONTROLLER_H
#define _SFEDITABLEPASSWORDTABLEVIEWCONTROLLER_H

@class SFPasswordTableViewController, UIBarButtonItem, WBSAutoFillQuirksManager, WBSSavedPasswordStore, _SFSiteMetadataManager, SFSharablePassword, WBSPasswordWarningManager, WBSPasswordGenerationManager, SFAutoFillFeatureManager, NSString, UITableViewCell, WBSSavedPassword;
@protocol PSStateRestoration, SFAddPasswordViewControllerDelegate, SFPasswordDetailViewControllerDelegate, SFPasswordTableViewCellDelegate, _SFSharedSiteMetadataManagerProvider, _SFTableViewDiffableDataSourceDelegate, SFCredentialProviderExtensionManagerObserver, _ASAccountAuthenticationModificationExtensionManagerObserver, _SFEditablePasswordTableViewControllerDelegate;


#import "_SFTableViewDiffableDataSource.h"
#import "SFPasswordListSectionIdentifier.h"
#import "_SFSecurityRecommendationsDrillInTableViewCell.h"

@interface _SFEditablePasswordTableViewController : SFPasswordTableViewController <PSStateRestoration, SFAddPasswordViewControllerDelegate, SFPasswordDetailViewControllerDelegate, SFPasswordTableViewCellDelegate, _SFSharedSiteMetadataManagerProvider, _SFTableViewDiffableDataSourceDelegate, SFCredentialProviderExtensionManagerObserver, _ASAccountAuthenticationModificationExtensionManagerObserver>

 {
    _SFTableViewDiffableDataSource *_diffableDataSource;
    SFPasswordListSectionIdentifier *_autoFillSectionIdentifier;
    SFPasswordListSectionIdentifier *_securityRecommendationsSectionIdentifier;
    UIBarButtonItem *_addNavigationBarItem;
    UIBarButtonItem *_cancelNavigationBarItem;
    UIBarButtonItem *_deleteNavigationBarItem;
    UIBarButtonItem *_editNavigationBarItem;
    UIBarButtonItem *_cancelToolbarItem;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_editToolbarItem;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedPasswordStore *_passwordStore;
    NSUInteger _persona;
    _SFSiteMetadataManager *_siteMetadataManager;
    SFSharablePassword *_receivedSharablePasswordRequiringPromptBeforeSaving;
    WBSPasswordWarningManager *_passwordWarningManager;
    BOOL _hasBeenAuthenticated;
    BOOL _hasEverShownSectionHeaders;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFAutoFillFeatureManager *_autoFillFeatureManager;
    BOOL _hasCredentialProviderExtensions;
    BOOL _userIsEditingCellInTableView;
    NSString *_securityRecommendationsSubtitleText;
    BOOL _isFirstWillAppear;
    BOOL _isObservingExtensionManagers;
    BOOL _hasLoadedSecurityRecommendations;
    BOOL _hasLoadedPasswords;
    BOOL _isSearching;
    BOOL _hasLoadedCredentialProviderExtensions;
    _SFSecurityRecommendationsDrillInTableViewCell *_securityRecommendationsCell;
    UITableViewCell *_autoFillPasswordsCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFEditablePasswordTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSSavedPassword *passwordToRemoveAfterCompletedUpgradeInDetailView; // ivar: _passwordToRemoveAfterCompletedUpgradeInDetailView
@property (nonatomic) BOOL showsPasswordManagerLockedView; // ivar: _showsPasswordManagerLockedView
@property (readonly) Class superclass;


-(BOOL)_autoFillWhiteListExists;
-(BOOL)_canAddPasswords;
-(BOOL)_passwordAutoFillIsEnabled;
-(BOOL)_sectionWithIndexIsConfigurationSection:(NSInteger)arg0 ;
-(BOOL)_shouldShowAutoFillItem;
-(BOOL)_shouldShowSectionHeaders;
-(BOOL)_shouldShowSecurityRecommendationsItem;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)dataSource:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_indexOfFirstPasswordSection;
-(NSInteger)_passwordAutoFillCellStyle;
-(NSInteger)_warningStyleForSecurityRecommendationsDrillInCell;
-(NSInteger)dataSource:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)dataSource:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_autoFillCellForTableView:(id)arg0 cellData:(id)arg1 ;
-(id)_autoFillCellWithoutAccessoryForTableView:(id)arg0 ;
-(id)_autoFillFeatureManager;
-(id)_autoFillSectionIdentifier;
-(id)_cellForIdentifier:(id)arg0 tableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_deletePasswordActionTitle;
-(id)_drillInAutoFillCellForTableView:(id)arg0 ;
-(id)_passwordCellDataForUser:(id)arg0 highLevelDomain:(id)arg1 ;
-(id)_rightToolbarItem;
-(id)_savePasswordIfPossibleAndGetController:(id)arg0 ;
-(id)_securityRecommendationsSectionIdentifier;
-(id)_sharablePasswordFromResourceDictionary:(id)arg0 ;
-(id)_switchAutoFillCellForTableView:(id)arg0 enabled:(BOOL)arg1 ;
-(id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg0 didAuthenticate:(BOOL)arg1 ;
-(id)dataSource:(id)arg0 headerTextForSection:(NSInteger)arg1 ;
-(id)initWithSiteMetadataManager:(id)arg0 autoFillQuirksManager:(id)arg1 ;
-(id)initWithSiteMetadataManager:(id)arg0 autoFillQuirksManager:(id)arg1 persona:(NSUInteger)arg2 ;
-(id)navigationItem;
-(id)newSharedSiteMetadataManager;
-(id)passwordControllerForQuery:(id)arg0 queryBundleID:(id)arg1 authenticationRequirementsMet:(BOOL)arg2 ;
-(id)passwordGeneratorForPasswordDetailViewController:(id)arg0 ;
-(id)passwordWarningManagerForPasswordDetailViewController:(id)arg0 ;
-(id)sectionIndexTitlesForDataSource:(id)arg0 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)viewControllerToPresentWithURLResourceDictionary:(id)arg0 ;
-(void)_addNavigationBarItemTapped:(id)arg0 ;
-(void)_autoFillSwitchValueChanged:(id)arg0 ;
-(void)_beginEditing;
-(void)_cancelEditing;
-(void)_cancelNavigationBarItemTapped:(id)arg0 ;
-(void)_configureNavigationBar;
-(void)_configureTableView;
-(void)_deleteButtonTapped:(id)arg0 ;
-(void)_deletePasswordsAtIndexPaths:(id)arg0 ;
-(void)_didSelectAutoFillCellAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(void)_editNavigationBarItemTapped:(id)arg0 ;
-(void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
-(void)_managedConfigurationSettingsDidChange:(id)arg0 ;
-(void)_passwordStoreDidChange;
-(void)_presentDuplicateCodeGeneratorAlert;
-(void)_presentInvalidOtpauthURLAlert;
-(void)_reloadPasswords;
-(void)_reloadPasswordsAndTableViewData;
-(void)_reloadSecurityRecommendationsSection;
-(void)_setAccessibilityIdentifiersOnPasswordCell:(id)arg0 ;
-(void)_updateContentUnavailableView;
-(void)_updateCredentialProviderExtensionStatus;
-(void)_updateDeleteButton;
-(void)_updateHeaderAndFooterViewsFloat;
-(void)_updateNavigationBarItems;
-(void)_updateSecurityRecommendationsSubtitleTextWithWarnings:(id)arg0 ;
-(void)_updateToolbarItemsAnimated:(BOOL)arg0 ;
-(void)addPasswordViewControllerDidFinish:(id)arg0 withSavedPassword:(id)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)dealloc;
-(void)handleContextMenuDeleteForIndexPath:(id)arg0 ;
-(void)searchPatternDidUpdate;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPasswordAutoFillIsEnabled:(BOOL)arg0 ;
-(void)setToolbarItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)showConflictAlertForSharablePasswordIfNecessary;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityIdentifierForPasswordCell:(id)arg0 ;
-(void)updateUserAuthenticationState:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif