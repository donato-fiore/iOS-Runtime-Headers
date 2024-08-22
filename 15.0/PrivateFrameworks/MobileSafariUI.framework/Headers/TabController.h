// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABCONTROLLER_H
#define TABCONTROLLER_H

@class NSTimer, WBTabGroupManager, UIBarButtonItem, NSArray, NSMapTable, NSHashTable, NSUUID, NSString, CKContextCompleter, WBTabGroup, NSSet, UIMenu, _SFBrowserSavedState, UIView<TabCollectionView>, WBSTabOrderManager, UIView<TabThumbnailCollectionView>, WBWindowState;
@protocol TabBarDelegate, TabOverviewDelegate, TabSnapshotCacheDelegate, TiltedTabViewDelegate, TabBarManagerObserving, UITextFieldDelegate, SFTabHoverPreviewControllerDelegate, WBTabGroupManagerObserver, TabDocumentDragDropDataSource, WBSTabOrderProvider, WBSOrderedTab;

#import <Foundation/Foundation.h>

#import "BrowserController.h"
#import "TabDocument.h"
#import "TabSnapshotCache.h"
#import "CloudTabStore.h"
#import "TabBar.h"
#import "TabBarManager.h"
#import "TabOverview.h"
#import "TiltedTabView.h"

@interface TabController : NSObject <TabBarDelegate, TabOverviewDelegate, TabSnapshotCacheDelegate, TiltedTabViewDelegate, TabBarManagerObserving, UITextFieldDelegate, SFTabHoverPreviewControllerDelegate, WBTabGroupManagerObserver, TabDocumentDragDropDataSource, WBSTabOrderProvider>

 {
    BrowserController *_browserController;
    NSTimer *_saveStateTimer;
    NSTimer *_stateValidateTimer;
    TabDocument *_tabDocumentBeingHiddenFromTabView;
    BOOL _didReadWindowState;
    WBTabGroupManager *_tabGroupManager;
    UIBarButtonItem *_tiltedTabViewAddTabButton;
    UIBarButtonItem *_tiltedTabViewPrivateBrowsingButton;
    NSTimer *_updateContinuityTimer;
    BOOL _tabBarItemsFixed;
    BOOL _tabViewItemsFixed;
    TabSnapshotCache *_snapshotCache;
    BOOL _flushPendingSnapshots;
    id *_flushPendingSnapshotsCompletion;
    BOOL _didRestoreCloudTabsForEducationDevice;
    BOOL _didReceiveFirstCloudTabDeviceUpdateNotification;
    TabDocument *_tabDocumentBeingDragged;
    NSArray *_tabDocumentsToKeepVisible;
    NSMapTable *_uuidToTabDocumentMap;
    NSHashTable *_documentObservers;
    NSUUID *_blankDocumentGroupIdentifier;
    NSUUID *_privateBlankDocumentGroupIdentifier;
    BOOL _switchingActiveDocument;
    BOOL _isClosingDocuments;
    NSString *_lastSearchTerm;
    NSArray *_searchTermWords;
    NSUInteger _veryRecentlyClosedTabCount;
    NSUInteger _tabsClosedWhileTabViewPresentedCount;
    NSTimer *_veryRecentlyClosedTabCountInvalidationTimer;
    TabDocument *_tabShowingPreview;
    NSInteger _updateTabsSuppressionCount;
    NSArray *_tabDocumentsThatShouldSuppressOnCreatedEvents;
    NSArray *_tabGroupSuggestions;
    CKContextCompleter *_contextCompleter;
    BOOL _showsTabGroupNameSuggestions;
    id *_postponedSnapshotInvalidationBlock;
    BOOL _shouldDeferSnapshotRequest;
}


@property (readonly, nonatomic) NSString *activeLibraryType;
@property (retain, nonatomic) TabDocument *activeTabDocument;
@property (retain, nonatomic) WBTabGroup *activeTabGroup; // ivar: _activeTabGroup
@property (readonly, copy, nonatomic) NSSet *allSnapshotIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allTabDocuments;
@property (readonly, nonatomic) BOOL canAddNewTabForCurrentBrowsingMode;
@property (readonly, nonatomic) BOOL canCloseOtherTabs;
@property (readonly, nonatomic) BOOL canCloseTab;
@property (readonly, nonatomic) BOOL canCreateTabGroupFromCurrentTabs;
@property (readonly, nonatomic) BOOL canRenameActiveTabGroup;
@property (readonly, nonatomic) CloudTabStore *cloudTabStore;
@property (readonly, nonatomic, getter=isControlledByAutomation) BOOL controlledByAutomation;
@property (readonly, nonatomic) BOOL createTabGroupAlertIsPresented;
@property (readonly, copy, nonatomic) NSArray *currentTabDocuments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTabBar;
@property (readonly, nonatomic) BOOL hasTabsThatShouldBeObscuredForDigitalHealth;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfSelectedTab;
@property (readonly, nonatomic) NSArray *localTabGroups;
@property (readonly, nonatomic) NSString *moveLocalTabsToNewGroupTitle;
@property (readonly, nonatomic) UIMenu *newTabGroupMenu;
@property (readonly, nonatomic) NSSet *nonActiveTabGroups;
@property (retain, nonatomic) TabDocument *normalActiveTabDocument; // ivar: _normalActiveTabDocument
@property (readonly, nonatomic) NSUInteger numberOfCurrentNonHiddenTabs;
@property (readonly, nonatomic) NSUInteger numberOfTabs;
@property (copy, nonatomic) id *postponedSnapshotInvalidationCondition; // ivar: _postponedSnapshotInvalidationCondition
@property (retain, nonatomic) TabDocument *privateActiveTabDocument; // ivar: _privateActiveTabDocument
@property (nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (nonatomic) NSInteger privateBrowsingMode; // ivar: _privateBrowsingMode
@property (readonly, copy, nonatomic) NSArray *privateTabDocuments; // ivar: _privateTabDocuments
@property (retain, nonatomic) _SFBrowserSavedState *savedState; // ivar: _savedState
@property (readonly, nonatomic) NSObject<WBSOrderedTab> *selectedTabForTabOrderProvider;
@property (nonatomic) BOOL shouldTogglePrivateBrowsingOnSplit; // ivar: _shouldTogglePrivateBrowsingOnSplit
@property (readonly, nonatomic, getter=isShowingTabView) BOOL showingTabView;
@property (nonatomic) BOOL snapshotInvalidationIsPostponed; // ivar: _snapshotInvalidationIsPostponed
@property (nonatomic) BOOL snapshotsAreEnabled; // ivar: _snapshotsAreEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncedTabGroups;
@property (weak, nonatomic) TabBar *tabBar; // ivar: _tabBar
@property (weak, nonatomic) TabBarManager *tabBarManager; // ivar: _tabBarManager
@property (readonly, nonatomic) UIView<TabCollectionView> *tabCollectionView;
@property (nonatomic) NSInteger tabDisplayMode; // ivar: _tabDisplayMode
@property (readonly, nonatomic) TabDocument *tabDocumentBeingActivated;
@property (readonly, nonatomic) TabDocument *tabDocumentForSpotlightSearch;
@property (readonly, copy, nonatomic) NSArray *tabDocuments; // ivar: _normalTabDocuments
@property (readonly, nonatomic) NSArray *tabDocumentsMatchingSearchTerm;
@property (readonly, nonatomic) id *tabExposeMenuProvider;
@property (nonatomic) BOOL tabGroupOverviewIsPresented;
@property (readonly, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) id *tabGroupsMenuProvider;
@property (readonly, nonatomic) WBSTabOrderManager *tabOrderManager; // ivar: _tabOrderManager
@property (readonly, retain, nonatomic) TabOverview *tabOverview; // ivar: _tabOverview
@property (readonly, nonatomic) UIView<TabThumbnailCollectionView> *tabThumbnailCollectionView;
@property (nonatomic) NSInteger tabThumbnailCollectionViewStyle; // ivar: _tabThumbnailCollectionViewStyle
@property (nonatomic) BOOL tabViewDefersActivation;
@property (readonly, retain, nonatomic) TiltedTabView *tiltedTabView; // ivar: _tiltedTabView
@property (readonly, nonatomic) NSArray *tiltedTabViewToolbarItems;
@property (readonly, nonatomic) BOOL updatingTabGroupTabs;
@property (readonly, nonatomic) BOOL usesTabOverview;
@property (readonly, nonatomic) BOOL usesTiltedTabView;
@property (readonly, nonatomic) NSInteger visibleTabCollectionViewType;
@property (retain, nonatomic) WBWindowState *windowState; // ivar: _windowState


-(BOOL)canAddNewTabForPrivateBrowsing:(BOOL)arg0 ;
-(BOOL)needsCloudTabPeriodicUpdates;
-(BOOL)switchToTabWithUUID:(id)arg0 inTabGroupWithUUID:(id)arg1 ;
-(BOOL)tabBar:(id)arg0 canMoveItem:(id)arg1 ;
-(BOOL)tabCollectionView:(id)arg0 canCloseItem:(id)arg1 ;
-(BOOL)tabCollectionView:(id)arg0 cloudTab:(id)arg1 matchesSearchText:(id)arg2 ;
-(BOOL)tabCollectionView:(id)arg0 item:(id)arg1 matchesSearchText:(id)arg2 ;
-(BOOL)tabCollectionView:(id)arg0 validSnapshotExistsForItem:(id)arg1 ;
-(BOOL)tabSnapshotCache:(id)arg0 shouldRequestSavedSnapshotWithIdentifier:(id)arg1 ;
-(BOOL)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)arg0 ;
-(CGFloat)tabCollectionView:(id)arg0 headerHeightForItem:(id)arg1 ;
-(NSUInteger)capacityForTabSnapshotCache:(id)arg0 ;
-(NSUInteger)indexForTab:(id)arg0 ;
-(id)_currentTabs;
-(id)addNewTabGroupWithTitle:(id)arg0 fromExistingTabs:(BOOL)arg1 ;
-(id)blankTabDocumentToReuse;
-(id)blankTabDocumentToReuseAllowingReorder:(BOOL)arg0 ;
-(id)browserControllerContainingLocalTabGroupUUID:(id)arg0 ;
-(id)cachedContentImageForTabDocument:(id)arg0 ;
-(id)contextMenuConfigurationForTabGroup:(id)arg0 forPickerSheet:(BOOL)arg1 ;
-(id)currentItemForTabOverview:(id)arg0 ;
-(id)currentItemForTiltedTabView:(id)arg0 ;
-(id)duplicateTabDocument:(id)arg0 ;
-(id)existingPersistedTitleForTabDocument:(id)arg0 ;
-(id)expectedSuperviewForTiltedTabView:(id)arg0 ;
-(id)imageForTabGroup:(id)arg0 ;
-(id)initWithBrowserController:(id)arg0 ;
-(id)insertInitialBlankTabDocumentWithPrivateBrowsingIfNeeded:(BOOL)arg0 ;
-(id)insertPlaceholderTabDocumentAfterDocument:(id)arg0 ;
-(id)itemsToKeepVisibleForTabOverview:(id)arg0 ;
-(id)itemsToKeepVisibleForTiltedTabView:(id)arg0 ;
-(id)menuForTabGroup:(id)arg0 forPickerSheet:(BOOL)arg1 forEditMode:(BOOL)arg2 ;
-(id)openInTabGroupMenuWithNewTabGroupName:(id)arg0 URL:(id)arg1 descendantCount:(NSInteger)arg2 handler:(id)arg3 ;
-(id)originatingTabForTab:(id)arg0 ;
-(id)replacePlaceholderTabDocument:(id)arg0 withTabDocuments:(id)arg1 transitionToDragStateWithBlock:(id)arg2 ;
-(id)restoreRecentlyClosedTabDocumentWithTabStateData:(id)arg0 ;
-(id)snapshotsToPresistOnDiskForTabSnapshotCache:(id)arg0 ;
-(id)swipeActionsConfigurationForTabGroup:(id)arg0 ;
-(id)tabAtIndex:(NSUInteger)arg0 ;
-(id)tabCollectionView:(id)arg0 borrowContentViewForItem:(id)arg1 withTopBackdropView:(*id)arg2 ofHeight:(CGFloat)arg3 ;
-(id)tabCollectionView:(id)arg0 snapshotForItem:(id)arg1 ;
-(id)tabDocumentForURL:(id)arg0 ;
-(id)tabDocumentWithIDForWebExtensions:(CGFloat)arg0 ;
-(id)tabDocumentWithUUID:(id)arg0 ;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabGroupsMenuElementsWithOptions:(NSUInteger)arg0 newTabGroupName:(id)arg1 URL:(id)arg2 descendantCount:(NSInteger)arg3 isMoveAction:(BOOL)arg4 actionHandler:(id)arg5 ;
-(struct CGSize )suggestedSnapshotSizeForTiltedTabView:(id)arg0 ;
-(struct UIEdgeInsets )effectiveSafeAreaInsetsForTabCollectionView:(id)arg0 ;
-(void)_cancelVeryRecentlyClosedTabCountInvalidationTimer;
-(void)_cloudTabsDidUpdate:(id)arg0 ;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_dismissTabView;
-(void)_newTabFromTabViewButton;
-(void)_saveStateFromTimer:(id)arg0 ;
-(void)_updateUserActivityTimerFired;
-(void)_validateSavedState:(id)arg0 ;
-(void)addDocumentObserver:(id)arg0 ;
-(void)addSnapshotCacheObserver:(id)arg0 ;
-(void)adoptTabsFromTabController:(id)arg0 ;
-(void)clearBrowserController;
-(void)closeAllOpenTabsAnimated:(BOOL)arg0 ;
-(void)closeAllOpenTabsAnimated:(BOOL)arg0 temporarily:(BOOL)arg1 ;
-(void)closeOtherTabs;
-(void)closeTab;
-(void)closeTabDocument:(id)arg0 animated:(BOOL)arg1 ;
-(void)closeTabDocumentWithURL:(id)arg0 UUID:(id)arg1 ;
-(void)closeTabDocuments:(id)arg0 ;
-(void)closeTabDocuments:(id)arg0 animated:(BOOL)arg1 ;
-(void)closeTabDocuments:(id)arg0 animated:(BOOL)arg1 allowAddingToRecentlyClosedTabs:(BOOL)arg2 showAutoCloseTabsAlert:(BOOL)arg3 ;
-(void)closeTabGroup:(id)arg0 ;
-(void)closeTabsAutomaticallyIfNecessary;
-(void)createNewTabGroup;
-(void)createTabGroupFromExistingTabs:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)deactivateAllUsageTrackingInformationIfNecessary;
-(void)dealloc;
-(void)didBeginTrackingSession:(id)arg0 ;
-(void)didEndTrackingSession:(id)arg0 ;
-(void)didGainOwnershipOfTabDocument:(id)arg0 ;
-(void)didTransitionTabView;
-(void)evictTabDocument:(id)arg0 ;
-(void)flushPendingSnapshotsWithCompletion:(id)arg0 ;
-(void)hideTabDocuments:(id)arg0 ;
-(void)insertNewBlankTabDocumentAnimated:(BOOL)arg0 ;
-(void)insertNewTabDocument:(id)arg0 forcingOrderAfterTabDocument:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)insertNewTabDocumentWithDefaultOrdering:(id)arg0 inBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)insertTabDocument:(id)arg0 afterTabDocument:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)insertTabDocumentFromTabStateData:(id)arg0 ;
-(void)insertTabDocuments:(id)arg0 beforeTabDocument:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)invalidateSnapshotForTabDocument:(id)arg0 ;
-(void)logTabActivationInterval:(CGFloat)arg0 forActivationType:(NSInteger)arg1 ;
-(void)makeActiveTabDocumentActive;
-(void)moveTabDocument:(id)arg0 overTabDocument:(id)arg1 ;
-(void)moveTabDocument:(id)arg0 toTabGroup:(id)arg1 ;
-(void)moveTabGroup:(id)arg0 beforeOrAfterTabGroup:(id)arg1 ;
-(void)openBookmark:(id)arg0 inTabGroup:(id)arg1 ;
-(void)openInitialBlankTabDocumentIfNeeded;
-(void)openNewTabWithOptions:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)openNewTabWithOptions:(NSInteger)arg0 libraryType:(id)arg1 completionHandler:(id)arg2 ;
-(void)openTabDocumentForLibraryType:(id)arg0 ;
-(void)openURL:(id)arg0 inTabGroup:(id)arg1 ;
-(void)performBatchUpdatesWithBlock:(id)arg0 ;
-(void)presentAlertToCreateTabGroupFromExistingTabs:(BOOL)arg0 withTitle:(id)arg1 withMessage:(id)arg2 withSuggestedName:(id)arg3 okActionTitle:(id)arg4 completionHandler:(id)arg5 ;
-(void)removeDocumentObserver:(id)arg0 ;
-(void)removeSingleBlankTabFromActiveTabGroup;
-(void)removeSingleBlankTabFromInactiveTabGroup:(id)arg0 ;
-(void)removeSnapshotCacheObserver:(id)arg0 ;
-(void)removeSnapshotForDocument:(id)arg0 ;
-(void)renameTabGroup:(id)arg0 ;
-(void)replaceTabDocument:(id)arg0 withTabDocument:(id)arg1 ;
-(void)requestSnapshotForTabDocument:(id)arg0 completion:(id)arg1 ;
-(void)restoreEducationDeviceTabs;
-(void)saveTabDocumentUserActivitySoon:(id)arg0 ;
-(void)selectNextTabGroup;
-(void)selectPreviousTabGroup;
-(void)sortTabsWithMode:(NSInteger)arg0 ;
-(void)switchOutOfSyncedTabGroup;
-(void)tabBar:(id)arg0 toggleMediaStateMutedForItem:(id)arg1 ;
-(void)tabBarManager:(id)arg0 didCreateTabBar:(id)arg1 ;
-(void)tabCollectionView:(id)arg0 closeCloudTab:(id)arg1 onDevice:(id)arg2 ;
-(void)tabCollectionView:(id)arg0 closeItem:(id)arg1 ;
-(void)tabCollectionView:(id)arg0 didMoveItem:(id)arg1 overItem:(id)arg2 ;
-(void)tabCollectionView:(id)arg0 didSelectItem:(id)arg1 ;
-(void)tabCollectionView:(id)arg0 item:(id)arg1 didProduceNavigationIntent:(id)arg2 ;
-(void)tabCollectionView:(id)arg0 relinquishBorrowedContentView:(id)arg1 forItem:(id)arg2 ;
-(void)tabCollectionViewBeginIgnoringUserInteraction:(id)arg0 reason:(id)arg1 ;
-(void)tabCollectionViewDidCancelDismissal:(id)arg0 ;
-(void)tabCollectionViewDidDismiss:(id)arg0 ;
-(void)tabCollectionViewDidPresent:(id)arg0 ;
-(void)tabCollectionViewDidUpdateItemVisibilityOrder:(id)arg0 ;
-(void)tabCollectionViewEndIgnoringUserInteraction:(id)arg0 reason:(id)arg1 ;
-(void)tabCollectionViewWillDismiss:(id)arg0 ;
-(void)tabCollectionViewWillPresent:(id)arg0 ;
-(void)tabDocumentDidUpdateUUID:(id)arg0 previousUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroup:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateTab:(id)arg1 userDriven:(BOOL)arg2 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabsInTabGroup:(id)arg1 ;
-(void)tabGroupManagerDidFinishSetup:(id)arg0 ;
-(void)tabGroupManagerDidUpdateTabGroups:(id)arg0 ;
-(void)tabGroupNamingTextDidChange:(id)arg0 ;
-(void)tabHoverPreviewController:(id)arg0 showPreviewForItem:(id)arg1 ;
-(void)tabHoverPreviewControllerDismissPreview:(id)arg0 ;
-(void)tabHoverPreviewControllerNeedsSnapshotUpdate:(id)arg0 ;
-(void)tabOverview:(id)arg0 closeItems:(id)arg1 ;
-(void)tabOverview:(id)arg0 willInteractivelyCloseItem:(id)arg1 ;
-(void)tabOverviewDidChangeAllowsInteractivePresentation:(id)arg0 ;
-(void)tabOverviewWillUpdateInteractivePresentation:(id)arg0 ;
-(void)tabSnapshotCache:(id)arg0 didCacheSnapshotWithIdentifier:(id)arg1 ;
-(void)tabSnapshotCache:(id)arg0 didEvictSnapshotWithIdentifier:(id)arg1 ;
-(void)tabSnapshotCache:(id)arg0 requestSnapshotWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)tabSnapshotCacheDidFinishUpdating:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)tiltedTabView:(id)arg0 animateTopBackdropView:(id)arg1 hidden:(BOOL)arg2 ;
-(void)tiltedTabViewDidEndSearching:(id)arg0 ;
-(void)tiltedTabViewWillBeginSearching:(id)arg0 ;
-(void)unhideTabDocuments:(id)arg0 ;
-(void)updateActiveTab;
-(void)updateEducationTabsLastSyncDate;
-(void)updateHibernatedTabDocumentsSavingState;
-(void)updateLocalTabGroupTitle;
-(void)updateSelectedTabGroupName;
-(void)updateSnapshotCacheAndSnapshotActiveTab;
-(void)updateSnapshotsForTabHoverPreviewIfNeeded;
-(void)updateTabBarAnimated:(BOOL)arg0 ;
-(void)updateTabCount;
-(void)updateTabGroupTabWithTabDocument:(id)arg0 ;
-(void)updateTabGroupTabWithTabDocument:(id)arg0 notify:(BOOL)arg1 ;
-(void)updateTabViewsAnimatingTabBar:(BOOL)arg0 ;
-(void)updateTiltedTabViewToolbarItems:(BOOL)arg0 ;
-(void)updateUsageTrackingInformationIfNecessary;
-(void)willLoseOwnershipOfTabDocument:(id)arg0 ;
-(void)willTransitionTabView;


@end


#endif