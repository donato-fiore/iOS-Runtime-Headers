// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTVIEWCONTROLLER_H
#define CNCONTACTLISTVIEWCONTROLLER_H

@class UICollectionViewController, CNContact, CNContactFormatter, NSString, NSSet, NSIndexPath, UIView, NSArray, UISearchBar, UISearchController, TPKContent, TPKContentController;
@protocol CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactListDuplicatesBannerCellDelegate, CNContactViewControllerDelegate, CNDuplicateContactsControllerDelegate, CNContactListCountViewDelegate, CNContactListCollectionViewDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UICollectionViewDragSource, UICollectionViewDragDestination, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UICollectionViewDelegate_Private, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, CNContactSuggestionsViewControllerDelegate, CNContactListActionHelperDelegate, TPKContentControllerDelegate, CNContactDataSource, CNContactListViewControllerDelegate, CNHealthStoreManagerToken, CNCancelable;


#import "CNContactListActionHelper.h"
#import "CNContactListStyleApplier.h"
#import "CNDuplicateContactsController.h"
#import "CNUIContactsEnvironment.h"
#import "CNAvatarViewController.h"
#import "CNContactListBannerView.h"
#import "CNContactListViewController.h"
#import "CNContactSuggestionsViewController.h"
#import "CNVCardImportController.h"

@interface CNContactListViewController : UICollectionViewController <CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactListDuplicatesBannerCellDelegate, CNContactViewControllerDelegate, CNDuplicateContactsControllerDelegate, CNContactListCountViewDelegate, CNContactListCollectionViewDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UICollectionViewDragSource, UICollectionViewDragDestination, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UICollectionViewDelegate_Private, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, CNContactSuggestionsViewControllerDelegate, CNContactListActionHelperDelegate, TPKContentControllerDelegate>

 {
    CNContact *_preferredForNameMeContact;
}


@property (retain, nonatomic) CNContactListActionHelper *actionHelper; // ivar: _actionHelper
@property (nonatomic) BOOL allowsEditingActions; // ivar: _allowsEditingActions
@property (nonatomic) BOOL allowsListEditing; // ivar: _allowsListEditing
@property (nonatomic) BOOL allowsMultiSelectContextMenus; // ivar: _allowsMultiSelectContextMenus
@property (nonatomic) BOOL allowsMultiSelection; // ivar: _allowsMultiSelection
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // ivar: _contactListStyleApplier
@property (readonly, nonatomic) CGFloat contentOffsetDueToMeContactBanner; // ivar: _contentOffsetDueToMeContactBanner
@property (readonly, nonatomic) NSString *currentSearchString;
@property (retain, nonatomic) NSObject<CNContactDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNContactListStyleApplier *defaultContactListStyleApplier; // ivar: _defaultContactListStyleApplier
@property (weak, nonatomic) NSObject<CNContactListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDeleteContact; // ivar: _didDeleteContact
@property (retain, nonatomic) CNDuplicateContactsController *duplicatesController; // ivar: _duplicatesController
@property (retain, nonatomic) NSSet *emergencyContactIdentifiers; // ivar: _emergencyContactIdentifiers
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (nonatomic) CGFloat estimatedListHeaderViewHeight; // ivar: _estimatedListHeaderViewHeight
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headerViewNeedsUpdate; // ivar: _headerViewNeedsUpdate
@property (retain, nonatomic) NSIndexPath *indexPathToSelect; // ivar: _indexPathToSelect
@property (nonatomic) BOOL isDuplicatesLaunching; // ivar: _isDuplicatesLaunching
@property (nonatomic) BOOL isHandlingSearch; // ivar: _isHandlingSearch
@property (nonatomic) BOOL isShowingDuplicatesBanner; // ivar: _isShowingDuplicatesBanner
@property (nonatomic) BOOL isViewingTopLevelAllContacts; // ivar: _isViewingTopLevelAllContacts
@property (retain, nonatomic) UIView *listHeaderView; // ivar: _listHeaderView
@property (retain, nonatomic) CNAvatarViewController *meBannerAvatarController; // ivar: _meBannerAvatarController
@property (retain, nonatomic) CNContactListBannerView *meContactBanner; // ivar: _meContactBanner
@property (copy, nonatomic) NSString *meContactBannerFootnoteLabel; // ivar: _meContactBannerFootnoteLabel
@property (copy, nonatomic) NSString *meContactBannerFootnoteValue; // ivar: _meContactBannerFootnoteValue
@property (retain, nonatomic) NSObject<CNHealthStoreManagerToken> *medicalIDLookupRegistrationToken; // ivar: _medicalIDLookupRegistrationToken
@property (retain, nonatomic) NSObject<CNCancelable> *medicalIDLookupToken; // ivar: _medicalIDLookupToken
@property (readonly, nonatomic) NSObject<CNContactDataSource> *originalDataSource;
@property (retain, nonatomic) NSArray *pendingLayoutBlocks; // ivar: _pendingLayoutBlocks
@property (nonatomic) BOOL pendingSearchControllerActivation; // ivar: _pendingSearchControllerActivation
@property (retain, nonatomic) NSString *pendingSearchQuery; // ivar: _pendingSearchQuery
@property (readonly, nonatomic) CNContact *preferredForNameMeContact;
@property (readonly, nonatomic) BOOL presentsSearchUI; // ivar: _presentsSearchUI
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (copy, nonatomic) id *searchCompletionBlock; // ivar: _searchCompletionBlock
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) CNContactListViewController *searchResultsController; // ivar: _searchResultsController
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) NSArray *selectedContacts;
@property (nonatomic) BOOL shouldAllowDrags; // ivar: _shouldAllowDrags
@property (nonatomic) BOOL shouldAllowDrops; // ivar: _shouldAllowDrops
@property (nonatomic) BOOL shouldAllowSearchForMultiSelect; // ivar: _shouldAllowSearchForMultiSelect
@property (nonatomic) BOOL shouldDisplayAddNewContactRow; // ivar: _shouldDisplayAddNewContactRow
@property (nonatomic) BOOL shouldDisplayCount; // ivar: _shouldDisplayCount
@property (nonatomic) BOOL shouldDisplayEmergencyContacts; // ivar: _shouldDisplayEmergencyContacts
@property (nonatomic) BOOL shouldDisplayGroupsGrid; // ivar: _shouldDisplayGroupsGrid
@property (nonatomic) BOOL shouldDisplayMeContactBanner; // ivar: _shouldDisplayMeContactBanner
@property (nonatomic) BOOL shouldDisplaySuggestionsController; // ivar: _shouldDisplaySuggestionsController
@property (nonatomic) BOOL shouldDisplayTipContentView; // ivar: _shouldDisplayTipContentView
@property (nonatomic) BOOL shouldHideDuplicates; // ivar: _shouldHideDuplicates
@property (readonly, nonatomic) BOOL shouldUseLargeTitle; // ivar: _shouldUseLargeTitle
@property (retain, nonatomic) NSArray *suggestedContacts; // ivar: _suggestedContacts
@property (retain, nonatomic) CNContactSuggestionsViewController *suggestionsController; // ivar: _suggestionsController
@property (nonatomic) CGFloat suggestionsControllerHeight; // ivar: _suggestionsControllerHeight
@property (retain, nonatomic) NSArray *suggestionsIgnoredContactIdentifiers; // ivar: _suggestionsIgnoredContactIdentifiers
@property (retain, nonatomic) NSArray *suggestionsInteractionDomains; // ivar: _suggestionsInteractionDomains
@property (readonly) Class superclass;
@property (retain, nonatomic) TPKContent *tipContent; // ivar: _tipContent
@property (retain, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController
@property (retain, nonatomic) UIView *tipContentView; // ivar: _tipContentView
@property (retain, nonatomic) CNVCardImportController *vCardImportController; // ivar: _vCardImportController
@property (readonly, nonatomic) CNContactListViewController *visibleListViewController;


+(id)collectionViewLayout;
// +(id)collectionViewLayoutWithFloatingHeaderViews:(BOOL)arg0 contactListStyleApplier:(id)arg1 trailingSwipeActionsProvider:(id)arg2 shouldDisplaySupplementaryHeaderItemForSection:(unk)arg3 shouldShowSeparatorsForSection:(id)arg4 directionalLayoutMargins:(unk)arg5 collectionViewIsShowingIndexBar:(id)arg6 numberOfItemsInSection:(unk)arg7  ;
+(id)descriptorForRequiredKeysForPreferredForNameMeContact;
+(id)emptyContact;
// +(id)layoutSectionForLayoutConfiguration:(id)arg0 layoutEnvironment:(id)arg1 section:(NSInteger)arg2 contactListStyleApplier:(id)arg3 shouldDisplaySupplementaryHeaderItemForSection:(id)arg4 headerViewsFloat:(unk)arg5 directionalLayoutMargins:(BOOL)arg6 collectionViewIsShowingIndexBar:(id)arg7  ;
-(BOOL)bundleCanManageDuplicates;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canManageDuplicateContacts;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canPerformDuplicatesMerge;
-(BOOL)canSelectContactAtCollectionViewIndexPath:(id)arg0 ;
-(BOOL)canSelectContactAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canEditItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canPerformPrimaryActionForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewIsShowingIndexBar;
-(BOOL)collectionViewShouldDisplayCreateNewContact;
-(BOOL)containsPathToCreateNewContactRow:(id)arg0 ;
-(BOOL)containsPathToDuplicatesBanner:(id)arg0 ;
-(BOOL)fetchDuplicatesCount;
-(BOOL)hasNoContacts;
-(BOOL)hasSearchPrefix;
-(BOOL)isContactWithIdentifierEmergencyContact:(id)arg0 ;
-(BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg0 ;
-(BOOL)isCreateNewContactRowSection:(NSInteger)arg0 ;
-(BOOL)isDuplicatesRowSection:(NSInteger)arg0 ;
-(BOOL)isPathToCreateNewContactRow:(id)arg0 ;
-(BOOL)isPathToDuplicatesBanner:(id)arg0 ;
-(BOOL)isPerformingDuplicatesMerge;
-(BOOL)isShowingAllContacts;
-(BOOL)isShowingServerSearch;
-(BOOL)isValidIndexPath:(id)arg0 ;
-(BOOL)selectContact:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(BOOL)selectContact:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 shouldScroll:(BOOL)arg3 ;
-(BOOL)shouldDisplayCreateNewContactAsRow;
-(BOOL)shouldDisplayListHeaderView;
-(BOOL)shouldDisplaySupplementaryHeaderItemForSection:(NSInteger)arg0 ;
-(BOOL)shouldEnableMultiSelectContextMenus;
-(BOOL)shouldShowDuplicateBannerView;
-(BOOL)showingGroup;
-(BOOL)suggestionsController:(id)arg0 canSelectContact:(id)arg1 ;
-(BOOL)suggestionsController:(id)arg0 shouldSelectContact:(id)arg1 atIndexPath:(id)arg2 ;
-(CGFloat)contactListHeaderHeight;
-(NSInteger)additionalSectionsAtTopCount;
-(NSInteger)allDuplicatesCountToDisplay;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)createNewContactRowSection;
-(NSInteger)dataSourceSectionIndexForCollectionViewSection:(NSInteger)arg0 ;
-(NSInteger)newDuplicatesCountToDisplay;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)globalIndexForCollectionViewIndexPath:(id)arg0 ;
-(id)_contactAtCollectionViewIndexPath:(id)arg0 ;
-(id)_contactAtIndexPath:(id)arg0 ;
-(id)_contentUnavailableConfigurationState;
-(id)_sections;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfiguration:(id)arg1 dismissalPreviewForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfiguration:(id)arg1 highlightPreviewForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemsAtIndexPaths:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 indexPathForIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewIndexPathForDataSourceIndexPath:(id)arg0 ;
-(id)contactForActionsAtIndexPath:(id)arg0 forMultiSelectAction:(BOOL)arg1 ;
-(id)contactProvidersOnPasteboard;
-(id)contactStore;
-(id)contactsForActionsAtIndexPaths:(id)arg0 ;
-(id)contentUnavailableConfigurationForState:(id)arg0 ;
-(id)contextMenuConfigurationForContactsAtIndexPaths:(id)arg0 ;
-(id)createCollectionView;
-(id)dataSourceIndexPathForCollectionViewIndexPath:(id)arg0 ;
-(id)dragItemsForIndexPath:(id)arg0 ;
-(id)filteredSearchString;
-(id)getVisibleIndexPaths;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)ignoredContactIdentifiersForSuggestionsController:(id)arg0 ;
-(id)indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)indexTitlesForCollectionView:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 shouldUseLargeTitle:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg0 searchable:(BOOL)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(id)initWithDataSource:(id)arg0 shouldUseLargeTitle:(BOOL)arg1 ;
-(id)mergableContacts;
-(id)pathToCreateNewContactRow;
-(id)pathToDuplicatesBanner;
-(id)presentingViewControllerForActions;
-(id)setupDuplicatesController;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(id)trailingSwipeActionsConfigurationProvider:(SEL)arg0 ;
-(void)_applicationEnteringForeground:(id)arg0 ;
-(void)_contactCountTelemetry:(NSUInteger)arg0 ;
-(void)_searchBarDidEndEditing:(id)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)_updateCountStringNow:(BOOL)arg0 ;
-(void)action:(id)arg0 presentViewController:(id)arg1 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)addContactsToListTappedWithSourceView:(id)arg0 ;
-(void)adjustTableViewOffsetForIncomingSearchUI;
-(void)applyStyle;
-(void)bannerView:(id)arg0 wasSelectedToPresentMeContact:(id)arg1 ;
-(void)beginSearch:(id)arg0 ;
-(void)cancelSearch:(id)arg0 ;
-(void)checkForInfoContentWithContext:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 performPrimaryActionForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)configureNavigationBarForLargeTitles;
-(void)contactDataSourceDidChange:(id)arg0 ;
-(void)contactDataSourceDidChangeDisplayName:(id)arg0 ;
-(void)contactDataSourceMeContactDidChange:(id)arg0 ;
-(void)contactStoreDidChangeWithNotification:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 contentViewNeedsLayout:(id)arg1 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)copyContacts:(id)arg0 ;
-(void)createNewContactTapped;
-(void)dealloc;
-(void)deleteContact:(id)arg0 ;
-(void)deselectAllItemsExceptIndexPath:(id)arg0 ;
-(void)deselectAllSelectedIndexPathsAnimated:(BOOL)arg0 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didPerformDuplicatesMerge:(id)arg0 ;
-(void)didPresentSearchController:(id)arg0 ;
-(void)didSelectViewAllDuplicates;
-(void)didUpdateContentForAvatarViewController:(id)arg0 ;
-(void)disableSearchUI;
-(void)dismissKeyboard;
-(void)duplicatesBannerCellDidTapDismiss:(id)arg0 ;
-(void)duplicatesBannerCellDidTapViewDuplicates:(id)arg0 ;
-(void)duplicatesDidChange:(id)arg0 ;
-(void)initializeDuplicateContacts;
-(void)listActionHelper:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)loadView;
-(void)mergeUnifyContacts:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pasteContacts:(id)arg0 ;
-(void)performWhenSearchCompleted:(id)arg0 ;
-(void)performWhenViewIsLaidOut:(id)arg0 ;
-(void)reconfigureVisibleItems;
-(void)refreshDuplicates;
-(void)refreshDuplicatesBanner;
-(void)refreshTableViewHeader;
-(void)refreshTableViewHeaderForContactChanges;
-(void)refreshTableViewHeaderIfVisible;
-(void)refreshTableViewHeaderIfVisibleWithSize:(struct CGSize )arg0 ;
-(void)refreshTableViewHeaderWithSize:(struct CGSize )arg0 ;
-(void)reloadContacts;
-(void)reloadTitle;
-(void)reloadVisibleItems;
-(void)removeDuplicatesBanner;
-(void)scrollToItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollTopToContactWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchForString:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)selectNextContact:(id)arg0 ;
-(void)selectPreviousContact:(id)arg0 ;
-(void)setCellStateSelected:(BOOL)arg0 forContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNeedsHeaderViewUpdate;
-(void)setupContactListForMultiSelectContextMenus;
-(void)setupForMultiSelection;
-(void)setupMeBannerAvatarController;
-(void)setupVCardImportController;
-(void)showCardForSelectedContactAtIndexPath:(id)arg0 ;
-(void)startHandlingEmergencyContacts;
-(void)startSearching;
-(void)startSearchingForString:(id)arg0 ;
-(void)suggestionsController:(id)arg0 didChangeToHeight:(CGFloat)arg1 ;
-(void)suggestionsController:(id)arg0 didDeselectContact:(id)arg1 ;
-(void)suggestionsController:(id)arg0 didSelectContact:(id)arg1 ;
-(void)updateAdditionalSectionsAtTop;
-(void)updateDataSourceAndCollectionViewForDuplicatesBanner;
-(void)updateDuplicatesCountBanner;
-(void)updateIsViewingTopLevelAllContacts;
-(void)updateMeContactBannerContentsWithTopKeyline:(BOOL)arg0 ;
-(void)updateMeContactBannerTopKeyline;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateSelectedContactCount;
-(void)vCardImportController:(id)arg0 didSaveContacts:(id)arg1 ;
-(void)vCardImportController:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)vCardImportControllerDidCompleteQueue:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willPerformDuplicatesMerge:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif