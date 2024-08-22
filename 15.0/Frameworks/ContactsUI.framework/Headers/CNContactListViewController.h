// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTLISTVIEWCONTROLLER_H
#define CNCONTACTLISTVIEWCONTROLLER_H

@class UITableViewController, CNContact, CNContactFormatter, NSString, NSSet, _UIContentUnavailableView, NSArray, UISearchBar, UISearchController, TPKContent, TPKContentController, UIView;
@protocol CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, TPKContentControllerDelegate, CNContactDataSource, CNContactListViewControllerDelegate, CNHealthStoreManagerToken, CNCancelable;


#import "CNAvatarCardController.h"
#import "CNContactListStyleApplier.h"
#import "CNUIContactsEnvironment.h"
#import "CNAvatarViewController.h"
#import "CNContactListBannerView.h"
#import "CNContactListViewController.h"
#import "CNVCardImportController.h"

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, TPKContentControllerDelegate>

 {
    CNContact *_preferredForNameMeContact;
}


@property (nonatomic) BOOL allowsMultiSelection; // ivar: _allowsMultiSelection
@property (retain, nonatomic) CNAvatarCardController *cardController; // ivar: _cardController
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
@property (retain, nonatomic) NSSet *emergencyContactIdentifiers; // ivar: _emergencyContactIdentifiers
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHandlingSearch; // ivar: _isHandlingSearch
@property (retain, nonatomic) CNAvatarViewController *meBannerAvatarController; // ivar: _meBannerAvatarController
@property (retain, nonatomic) CNContactListBannerView *meContactBanner; // ivar: _meContactBanner
@property (copy, nonatomic) NSString *meContactBannerFootnoteLabel; // ivar: _meContactBannerFootnoteLabel
@property (copy, nonatomic) NSString *meContactBannerFootnoteValue; // ivar: _meContactBannerFootnoteValue
@property (retain, nonatomic) NSObject<CNHealthStoreManagerToken> *medicalIDLookupRegistrationToken; // ivar: _medicalIDLookupRegistrationToken
@property (retain, nonatomic) NSObject<CNCancelable> *medicalIDLookupToken; // ivar: _medicalIDLookupToken
@property (nonatomic) CGPoint noContactsTableViewOffsetStash; // ivar: _noContactsTableViewOffsetStash
@property (readonly, nonatomic) _UIContentUnavailableView *noContactsView; // ivar: _noContactsView
@property (readonly, nonatomic) NSObject<CNContactDataSource> *originalDataSource;
@property (retain, nonatomic) NSArray *pendingLayoutBlocks; // ivar: _pendingLayoutBlocks
@property (nonatomic) BOOL pendingRefreshNoContactsView; // ivar: _pendingRefreshNoContactsView
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
@property (nonatomic) BOOL shouldAutoHideMeContactBanner; // ivar: _shouldAutoHideMeContactBanner
@property (nonatomic) BOOL shouldDisplayCount; // ivar: _shouldDisplayCount
@property (nonatomic) BOOL shouldDisplayEmergencyContacts; // ivar: _shouldDisplayEmergencyContacts
@property (nonatomic) BOOL shouldDisplayGroupsGrid; // ivar: _shouldDisplayGroupsGrid
@property (nonatomic) BOOL shouldDisplayMeContactBanner; // ivar: _shouldDisplayMeContactBanner
@property (nonatomic) BOOL shouldDisplayTipContentView; // ivar: _shouldDisplayTipContentView
@property (readonly, nonatomic) BOOL shouldUseLargeTitle; // ivar: _shouldUseLargeTitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tableViewHeaderConstraints; // ivar: _tableViewHeaderConstraints
@property (retain, nonatomic) TPKContent *tipContent; // ivar: _tipContent
@property (retain, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController
@property (retain, nonatomic) UIView *tipContentView; // ivar: _tipContentView
@property (retain, nonatomic) CNVCardImportController *vCardImportController; // ivar: _vCardImportController
@property (readonly, nonatomic) CNContactListViewController *visibleListViewController;


+(id)descriptorForRequiredKeysForPreferredForNameMeContact;
+(id)emptyContact;
-(BOOL)_tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canSelectContactAtIndexPath:(id)arg0 ;
-(BOOL)canShowNoContactsView;
-(BOOL)hasNoContacts;
-(BOOL)isContactWithIdentifierEmergencyContact:(id)arg0 ;
-(BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg0 ;
-(BOOL)isValidIndexPath:(id)arg0 ;
-(BOOL)refreshNoContactsViewIfNeeded;
-(BOOL)selectContact:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSInteger)arg2 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)avatarCardController:(id)arg0 presentationResultForLocation:(struct CGPoint )arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_contactAtIndexPath:(id)arg0 ;
-(id)_sections;
-(id)_tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)_tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contactStore;
-(id)createTableView;
-(id)dragItemsForIndexPath:(id)arg0 ;
-(id)getVisibleIndexPaths;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 shouldUseLargeTitle:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg0 searchable:(BOOL)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(id)initWithDataSource:(id)arg0 shouldUseLargeTitle:(BOOL)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg0 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 indexPathForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_applicationEnteringForeground:(id)arg0 ;
-(void)_contactCountTelemetry:(NSUInteger)arg0 ;
-(void)_searchBarDidEndEditing:(id)arg0 ;
-(void)_tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)_updateCountStringNow:(BOOL)arg0 ;
-(void)_updateTableViewRowHeight;
-(void)adjustTableViewOffsetForIncomingSearchUI;
-(void)applyStyle;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg0 ;
-(void)bannerView:(id)arg0 wasSelectedToPresentMeContact:(id)arg1 ;
-(void)beginSearch:(id)arg0 ;
-(void)cancelSearch:(id)arg0 ;
-(void)checkForInfoContentWithContext:(id)arg0 ;
-(void)configureNavigationBarForLargeTitles;
-(void)contactDataSourceDidChange:(id)arg0 ;
-(void)contactDataSourceDidChangeDisplayName:(id)arg0 ;
-(void)contactDataSourceMeContactDidChange:(id)arg0 ;
-(void)contactStoreDidChangeWithNotification:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 contentViewNeedsLayout:(id)arg1 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didPresentSearchController:(id)arg0 ;
-(void)didUpdateContentForAvatarViewController:(id)arg0 ;
-(void)disableSearchUI;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performDelayedRefreshNoContactsView;
-(void)performWhenSearchCompleted:(id)arg0 ;
-(void)performWhenViewIsLaidOut:(id)arg0 ;
-(void)refreshNoContactsViewIfVisible;
-(void)refreshTableViewHeader;
-(void)refreshTableViewHeaderIfVisible;
-(void)refreshTableViewHeaderIfVisibleWithSize:(struct CGSize )arg0 ;
-(void)refreshTableViewHeaderWithSize:(struct CGSize )arg0 ;
-(void)reloadContacts;
-(void)scrollToRowAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSInteger)arg2 ;
-(void)scrollTopToContactWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchForString:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)selectRowAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSInteger)arg2 ;
-(void)setCellStateSelectedForContact:(id)arg0 ;
-(void)setupForMultiSelection;
-(void)startHandlingEmergencyContacts;
-(void)startSearching;
-(void)startSearchingForString:(id)arg0 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
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
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif