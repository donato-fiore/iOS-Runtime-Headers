// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATALOGVIEWCONTROLLER_H
#define CATALOGVIEWCONTROLLER_H

@class UIViewController, UIPopoverPresentationController, NSMutableSet, NSTimer, UIButton, NSString, UIView, UIView<_SFNavigationBarCommon>, UIColor, UIImage;
@protocol SFStartPageDelegate, CompletionItemActionHandler, CompletionListDelegate, UITableViewDataSource, UITableViewDelegate, UnifiedFieldDelegate, SKStoreProductViewControllerDelegatePrivate, UIPopoverPresentationControllerDelegate, UniversalSearchFeedbackDelegate, UniversalSearchFirstTimeExperienceViewControllerDelegate, TabSnapshotContentProvider, CatalogViewControllerDelegate, CompletionItem, LoadProgressObserver, SFStartPageScrollObserver;


#import "AbstractCatalogViewController.h"
#import "StartPageController.h"
#import "BrowserController.h"
#import "PopoverCatalogViewController.h"
#import "CompletionDetailViewController.h"
#import "CompletionListDismissalAnalyticsReporter.h"
#import "CompletionListTableViewController.h"
#import "UniversalSearchFirstTimeExperienceViewController.h"
#import "CompletionList.h"
#import "UniversalSearchSession.h"
#import "UnifiedField.h"
#import "BookmarkFavoritesGridView.h"

@interface CatalogViewController : AbstractCatalogViewController <SFStartPageDelegate, CompletionItemActionHandler, CompletionListDelegate, UITableViewDataSource, UITableViewDelegate, UnifiedFieldDelegate, SKStoreProductViewControllerDelegatePrivate, UIPopoverPresentationControllerDelegate, UniversalSearchFeedbackDelegate, UniversalSearchFirstTimeExperienceViewControllerDelegate, TabSnapshotContentProvider>

 {
    StartPageController *_startPageController;
    BOOL _startPageGeometryIsFrozen;
    BrowserController *_browserController;
    PopoverCatalogViewController *_popoverCatalogViewController;
    BOOL _transitioningToNewSizeClass;
    UIViewController *_completionDetailViewController;
    NSUInteger _lastTopHitMatchLength;
    UIPopoverPresentationController *_popoverPresentationController;
    BOOL _dismissingPopover;
    CompletionDetailViewController *_detailViewController;
    BOOL _completionTableIsReloading;
    CGFloat _lastScrollOffset;
    CGRect _keyboardFrame;
    NSMutableSet *_seenVisibleResults;
    BOOL _feedbackIsBeingGenerated;
    BOOL _lastFeedbackSentWasScrolling;
    BOOL _hasKeyboardBeenDismissedForThisQuery;
    BOOL _waitingOnFirstCompletionListUpdateForTelemetry;
    UIEdgeInsets _contentOverlayInsets;
    BOOL _lastInputWasSearchTextCompletion;
    BOOL _hasPendingVoiceSearchUpdate;
    NSTimer *_pendingVoiceSearchTimer;
    CompletionListDismissalAnalyticsReporter *_completionDismissalReporter;
    UIButton *_sidebarButton;
    id *_startPageNavigationBarHeightUpdateHandler;
    BOOL _nextSnapshotRequiresScreenUpdates;
    CompletionListTableViewController *_completionsViewController;
    UIViewController *_startPageViewController;
    UniversalSearchFirstTimeExperienceViewController *_universalSearchFirstTimeExperienceViewController;
}


@property (readonly, nonatomic) CGFloat chromelessScrollDistance;
@property (readonly, nonatomic) BOOL completionDetailIsPresented; // ivar: _completionDetailIsPresented
@property (retain, nonatomic) CompletionList *completionList; // ivar: _completionList
@property (nonatomic, getter=isContentBorrowed) BOOL contentBorrowed; // ivar: _contentBorrowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CatalogViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *favoritesView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isShowingUniversalSearchFirstTimeExperience;
@property (retain, nonatomic) NSObject<CompletionItem> *lastTopHitMatch; // ivar: _lastTopHitMatch
@property (copy, nonatomic) NSString *libraryType;
@property (weak, nonatomic) NSObject<LoadProgressObserver> *loadProgressObserver; // ivar: _loadProgressObserver
@property (retain, nonatomic) UIView<_SFNavigationBarCommon> *navigationBar; // ivar: _navigationBar
@property (readonly, nonatomic) CGFloat navigationBarHeight;
@property (nonatomic) UIEdgeInsets obscuredInsets; // ivar: _obscuredInsets
@property (retain, nonatomic) UniversalSearchSession *parsecSearchSession; // ivar: _parsecSearchSession
@property (readonly, nonatomic) BOOL popoverIsShowing;
@property (retain, nonatomic) NSString *queryString;
@property (readonly, nonatomic, getter=isShowingCompletionDetail) BOOL showingCompletionDetail;
@property (nonatomic, getter=isShowingCompletions) BOOL showingCompletions; // ivar: _showingCompletions
@property (readonly, nonatomic) UIButton *sidebarButton;
@property (readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property (readonly, nonatomic) UIImage *snapshotContentImage;
@property (readonly, nonatomic) BOOL snapshotContentShouldUnderlapTopBackdrop;
@property (readonly, nonatomic) UIView *snapshotContentView;
@property (retain, nonatomic) NSObject<SFStartPageScrollObserver> *startPageScrollObserver;
@property (readonly) Class superclass;
@property (retain, nonatomic) UnifiedField *textField; // ivar: _textField
@property (readonly, nonatomic) BookmarkFavoritesGridView *topFavoritesGridView;
@property (nonatomic) BOOL usesPopoverStyleForFavorites; // ivar: _usesPopoverStyleForFavorites


-(BOOL)_cardIsDigestible:(id)arg0 ;
-(BOOL)_completionsViewControllerIsTranslucent;
-(BOOL)_shouldPresentCompletionDetailViewControllerAfterSizeTransition:(id)arg0 ;
-(BOOL)_shouldUsePopoverForCompletions;
-(BOOL)_showCompletionsInPopover;
-(BOOL)checkAndResetIfNextSnapshotRequiresScreenUpdates;
-(BOOL)startPageViewController:(id)arg0 shouldBeginDismissGestureUsingStyle:(NSInteger)arg1 ;
-(BOOL)startPageViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(id)arg0 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)unifiedField:(id)arg0 shouldWaitForTopHitForText:(id)arg1 ;
-(BOOL)unifiedFieldShouldMoveCompletionSelection:(id)arg0 ;
-(CGFloat)requiredContentWidth;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_relevanceForItem:(id)arg0 ;
-(NSInteger)_relevanceForResult:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)startPageCustomizationPolicy;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_completionItemAtIndexPath:(id)arg0 ;
-(id)_rootFavoritesGridView;
-(id)browserController;
-(id)childViewControllerForStatusBarStyle;
-(id)completionsViewController;
-(id)completionsViewControllerIfLoaded;
-(id)initWithDelegate:(id)arg0 bookmarksNavigationController:(id)arg1 browserController:(id)arg2 ;
-(id)startPageViewController;
-(id)startPageViewController:(id)arg0 leadingBarItemsForSection:(id)arg1 ;
-(id)startPageViewController:(id)arg0 trailingBarItemsForSection:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)unifiedField:(id)arg0 topHitForText:(id)arg1 ;
-(id)unifiedTextField;
-(id)universalSearchFirstTimeExperienceViewController;
-(struct CGRect )snapshotContentRectInBounds:(struct CGRect )arg0 ;
-(void)_beginParsecSessionIfNeeded;
-(void)_clearParsecSearchSession;
-(void)_commitVoiceSearchIfNecessary;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_deselectCompletionsViewControllerSelectedRow;
-(void)_dismissPopoverAnimated:(BOOL)arg0 dismissalReason:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_dismissUniversalSearchFirstTimeExperience:(id)arg0 dismissalReason:(NSInteger)arg1 ;
-(void)_dismissUniversalSearchFirstTimeExperience:(id)arg0 dismissalReason:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_ensureCompletionListAndParsecSession;
-(void)_favoritesGridViewDidChangeBookmarks:(id)arg0 ;
-(void)_generateVisibleResultsFeedbackForEvent:(NSInteger)arg0 ;
-(void)_invalidatePendingVoiceSearchTimer;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_logQueryEngagement;
-(void)_logTopHitWasChosen:(BOOL)arg0 ;
-(void)_parsecEnabledDidChange:(id)arg0 ;
-(void)_popoverDismissCompletion;
-(void)_presentPopoverWithViewController:(id)arg0 ;
-(void)_presentPopoverWithViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentStagedCompletionDetailViewControllerAnimated:(BOOL)arg0 ;
-(void)_reloadCompletionTable;
-(void)_selectedCompletionItemAtIndexPath:(id)arg0 ;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)_showCompletionsPopoverIfNecessary;
-(void)_showStartPageInPopover;
-(void)_updateAlternateContentViewController;
-(void)_updateBackgroundColorWhenShowingFavoritesNavigationController;
-(void)_updateStartPageSafeAreaInsets;
-(void)_updateVoiceSearchState;
-(void)beginTransitionToNewSizeClassWithState:(id)arg0 ;
-(void)cancelFavoritesGestures;
-(void)cancelUnifiedFieldSearch;
-(void)clearCachedTabCompletionData;
-(void)clearNavigationBarPalette;
-(void)completionList:(id)arg0 topHitDidBecomeReadyForString:(id)arg1 ;
-(void)completionListDidRestoreCachedCompletions:(id)arg0 ;
-(void)completionListDidUpdate:(id)arg0 forQuery:(id)arg1 ;
-(void)dealloc;
-(void)didCancelUniversalSearchFirstTimeExperienceViewController:(id)arg0 ;
-(void)didGainOwnershipOfCompletionsViewController;
-(void)didGainOwnershipOfStartPageViewController;
-(void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
-(void)didInteractWithUniversalSearchFirstTimeExperienceViewController:(id)arg0 ;
-(void)didTogglePrivateBrowsing;
-(void)dismissCompletionDetailWindowAndResumeEditingIfNeeded:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dismissCompletionsForSizeClassTransition;
-(void)displayPopover;
-(void)endTransitionToNewSizeClassWithState:(id)arg0 ;
-(void)feedbackButtonWasTappedWithProblemURL:(id)arg0 ;
-(void)findOnPage;
-(void)firstTimeExperienceContinueButtonPressed;
-(void)goToURL:(id)arg0 ;
-(void)goToURLString:(id)arg0 ;
-(void)loadFavoritesList;
-(void)openURLInExternalApplication:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerWillDismissPopover:(id)arg0 ;
-(void)presentDetail:(id)arg0 ;
-(void)productViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;
-(void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;
-(void)reloadNavigationItemAnimated:(BOOL)arg0 ;
-(void)resetFavorites;
-(void)resume;
-(void)resumeSearchWithQuery:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)search:(id)arg0 ;
-(void)searchTextCompletionAccessoryButtonTappedForCompletionItem:(id)arg0 ;
-(void)showUniversalSearchFirstTimeExperienceIfNotShowing;
-(void)startPageControllerDidCompleteDismissGesture:(id)arg0 ;
-(void)startPageControllerDidCompleteUnfocusGesture:(id)arg0 ;
-(void)startPageUpdatePolicyDidChange;
-(void)startPageViewControllerDidChangeNavigationBarHeight:(id)arg0 ;
-(void)startPageViewControllerDidScroll:(id)arg0 animated:(BOOL)arg1 ;
-(void)stopCompleting;
-(void)switchToTabWithUUID:(id)arg0 inWindowWithUUID:(id)arg1 ;
-(void)switchToTabWithUUID:(id)arg0 inWindowWithUUID:(id)arg1 forTabGroupWithUUID:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)test_simulateTyping:(id)arg0 inGroup:(id)arg1 startIndex:(NSUInteger)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)toggleVoiceSearch;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unifiedField:(id)arg0 didEndEditingWithAddress:(id)arg1 ;
-(void)unifiedField:(id)arg0 didEndEditingWithParsecTopHit:(id)arg1 ;
-(void)unifiedField:(id)arg0 didEndEditingWithSearch:(id)arg1 ;
-(void)unifiedField:(id)arg0 didEngageWithQuerySuggestion:(id)arg1 forQueryString:(id)arg2 ;
-(void)unifiedField:(id)arg0 focusNextKeyView:(BOOL)arg1 ;
-(void)unifiedField:(id)arg0 moveCompletionSelectionByRowOffset:(NSInteger)arg1 ;
-(void)unifiedField:(id)arg0 moveCompletionSelectionBySectionOffset:(NSInteger)arg1 ;
-(void)unifiedField:(id)arg0 willUpdateUserTypedText:(id)arg1 toText:(id)arg2 ;
-(void)unifiedFieldDidUpdateUserTypedText:(id)arg0 forQueryString:(id)arg1 didUpdateSuggestions:(BOOL)arg2 ;
-(void)unifiedFieldReflectedItemDidChange:(id)arg0 ;
-(void)unifiedFieldSelectCompletionItemIfAvailable:(id)arg0 ;
-(void)unifiedFieldShouldPasteAndNavigate:(id)arg0 ;
-(void)unifiedFieldVoiceSearchStateDidChange:(id)arg0 ;
-(void)updatePreferredContentSize;
-(void)updateQuerySuggestionsFromResponse:(id)arg0 ;
-(void)updateStartPageControlTintColor;
-(void)updateStartPageCustomizationPolicy;
-(void)updateStartPageHidesEmptyRootViewNavigationBar;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willTogglePrivateBrowsing:(BOOL)arg0 ;


@end


#endif