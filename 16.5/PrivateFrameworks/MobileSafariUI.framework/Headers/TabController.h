// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABCONTROLLER_H
#define TABCONTROLLER_H

@class NSTimer, NSUUID, NSArray, NSMapTable, NSHashTable, NSMutableDictionary, NSString, CKContextCompleter, NSMutableArray, WBTabGroup, NSSet, UIImage, UIMenu, _SFBrowserSavedState, CKShare, WBTabGroupManager, WBSTabOrderManager, _SWCollaborationButtonView, NSUndoManager, WBWindowState;
@protocol TabBarDelegate, TabBarManagerObserving, TabOverviewDelegate, TabSnapshotCacheDelegate, UITextFieldDelegate, WBSTabGroupConfirmationAlertDelegate, WBTabGroupSyncAgentSyncObserver, SFTabHoverPreviewControllerDelegate, PinnedTabsObserving, TabDocumentDragDropDataSource, TabGroupProvider, WBTabGroupManagerObserver, WBSTabOrderProvider, WBSOrderedTab, TabCollectionView, TabThumbnailCollectionView;

#import <Foundation/Foundation.h>

#import "BrowserController.h"
#import "TabDocument.h"
#import "TabSnapshotCache.h"
#import "TabCloseUndoGroup.h"
#import "CloudTabStore.h"
#import "PinnedTabsManager.h"
#import "TabBar.h"
#import "TabBarManager.h"
#import "TabOverview.h"

@interface TabController : NSObject <TabBarDelegate, TabBarManagerObserving, TabOverviewDelegate, TabSnapshotCacheDelegate, UITextFieldDelegate, WBSTabGroupConfirmationAlertDelegate, WBTabGroupSyncAgentSyncObserver, SFTabHoverPreviewControllerDelegate, PinnedTabsObserving, TabDocumentDragDropDataSource, TabGroupProvider, WBTabGroupManagerObserver, WBSTabOrderProvider>

 {
    BrowserController *_browserController;
    NSTimer *_saveStateTimer;
    NSTimer *_stateValidateTimer;
    TabDocument *_tabDocumentBeingHiddenFromTabView;
    BOOL _didReadWindowState;
    BOOL _didFinishTabGroupSetup;
    NSUUID *_browserWindowUUID;
    NSTimer *_updateContinuityTimer;
    NSUInteger _tabBarItemsFixed;
    NSUInteger _tabViewItemsFixed;
    TabSnapshotCache *_snapshotCache;
    BOOL _flushPendingSnapshots;
    id *_flushPendingSnapshotsCompletion;
    BOOL _didRestoreCloudTabsForEducationDevice;
    BOOL _didReceiveFirstCloudTabDeviceUpdateNotification;
    TabDocument *_tabDocumentBeingDragged;
    NSArray *_tabDocumentsToKeepVisible;
    NSMapTable *_uuidToTabDocumentMap;
    NSHashTable *_documentObservers;
    NSHashTable *_documentObserversToReceiveUpdatesDidEnd;
    NSMutableDictionary *_originalToReplacementUUIDMap;
    NSInteger _documentUpdateCount;
    BOOL _switchingActiveDocument;
    BOOL _isClosingDocuments;
    TabCloseUndoGroup *_undoGroup;
    NSString *_lastSearchTerm;
    NSArray *_searchTermWords;
    NSUInteger _veryRecentlyClosedTabCount;
    NSUInteger _tabsClosedWhileTabViewPresentedCount;
    NSTimer *_veryRecentlyClosedTabCountInvalidationTimer;
    TabDocument *_tabShowingPreview;
    NSInteger _updateTabsSuppressionCount;
    BOOL _suppressTabBarAnimation;
    BOOL _suppressSidebarReloadAnimation;
    NSArray *_tabDocumentsThatShouldSuppressOnCreatedEvents;
    NSArray *_tabGroupSuggestions;
    CKContextCompleter *_contextCompleter;
    BOOL _showsTabGroupNameSuggestions;
    NSMutableArray *_expandedTabGroupUUIDs;
    id *_postponedSnapshotInvalidationBlock;
    BOOL _didSelectAcceptedSharedTabGroup;
    BOOL _shouldDeferSnapshotRequest;
}


@property (readonly, nonatomic) NSString *activeLibraryType;
@property (retain, nonatomic) TabDocument *activeTabDocument;
@property (readonly, copy, nonatomic) WBTabGroup *activeTabGroup;
@property (copy, nonatomic) NSString *activeTabGroupUUID; // ivar: _activeTabGroupUUID
@property (readonly, copy, nonatomic) NSSet *allSnapshotIdentifiers;
@property (readonly, nonatomic) NSArray *allSyntheticBookmarkFolders;
@property (readonly, copy, nonatomic) NSArray *allTabDocuments;
@property (readonly, nonatomic) NSArray *allTabGroups;
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
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) WBTabGroup *focusedTabGroup;
@property (readonly, nonatomic) BOOL hasTabBar;
@property (readonly, nonatomic) BOOL hasTabsThatShouldBeObscuredForDigitalHealth;
@property (readonly, nonatomic) BOOL hasUnreadTab;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TabDocument *hiddenPrivateTabDocumentWhenShowingPrivateBrowsingExplanationText;
@property (readonly, nonatomic) UIImage *iconForSharingActiveTabGroup;
@property (readonly, nonatomic) NSUInteger indexOfSelectedTab;
@property (readonly, nonatomic) NSString *moveLocalTabsToNewGroupTitle;
@property (readonly, nonatomic) NSArray *namedTabGroups;
@property (readonly, nonatomic) UIMenu *newTabGroupMenu;
@property (readonly, nonatomic) NSSet *nonActiveTabGroupsInCurrentBrowsingMode;
@property (retain, nonatomic) TabDocument *normalActiveTabDocument; // ivar: _normalActiveTabDocument
@property (readonly, copy, nonatomic) NSArray *normalUnpinnedTabDocuments;
@property (readonly, nonatomic) NSUInteger numberOfCurrentNonHiddenTabs;
@property (readonly, nonatomic) NSUInteger numberOfTabs;
@property (readonly, nonatomic) NSUInteger numberOfTabsForCloseAllAction;
@property (readonly, copy, nonatomic) NSArray *pinnedTabDocuments;
@property (retain, nonatomic) PinnedTabsManager *pinnedTabsManager; // ivar: _pinnedTabsManager
@property (copy, nonatomic) id *postponedSnapshotInvalidationCondition; // ivar: _postponedSnapshotInvalidationCondition
@property (retain, nonatomic) TabDocument *privateActiveTabDocument; // ivar: _privateActiveTabDocument
@property (nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (nonatomic) NSInteger privateBrowsingMode; // ivar: _privateBrowsingMode
@property (readonly, copy, nonatomic) NSArray *privateTabDocuments; // ivar: _privateTabDocuments
@property (readonly, copy, nonatomic) NSArray *privateUnpinnedTabDocuments;
@property (retain, nonatomic) _SFBrowserSavedState *savedState; // ivar: _savedState
@property (readonly, nonatomic) NSObject<WBSOrderedTab> *selectedTabForTabOrderProvider;
@property (readonly, nonatomic) CKShare *shareRecordForActiveTabGroup;
@property (nonatomic) BOOL shouldTogglePrivateBrowsingOnSplit; // ivar: _shouldTogglePrivateBrowsingOnSplit
@property (readonly, nonatomic, getter=isShowingLibraryDocument) BOOL showingLibraryDocument;
@property (readonly, nonatomic, getter=isShowingTabView) BOOL showingTabView;
@property (readonly, nonatomic) TabDocument *singleUnpinnedBlankTab;
@property (nonatomic) BOOL snapshotInvalidationIsPostponed; // ivar: _snapshotInvalidationIsPostponed
@property (nonatomic) BOOL snapshotsAreEnabled; // ivar: _snapshotsAreEnabled
@property (readonly, copy, nonatomic) NSString *startPageBackgroundImageIdentifier;
@property (readonly) Class superclass;
@property (weak, nonatomic) TabBar *tabBar; // ivar: _tabBar
@property (weak, nonatomic) TabBarManager *tabBarManager; // ivar: _tabBarManager
@property (readonly, nonatomic) NSObject<TabCollectionView> *tabCollectionView;
@property (nonatomic) NSInteger tabDisplayMode; // ivar: _tabDisplayMode
@property (readonly, nonatomic) TabDocument *tabDocumentBeingActivated;
@property (readonly, nonatomic) TabDocument *tabDocumentForSpotlightSearch;
@property (readonly, copy, nonatomic) NSArray *tabDocuments; // ivar: _normalTabDocuments
@property (readonly, nonatomic) NSArray *tabDocumentsMatchingSearchTerm;
@property (readonly, nonatomic) UIMenu *tabExposeMenu;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager; // ivar: _tabGroupManager
@property (nonatomic) BOOL tabGroupOverviewIsPresented;
@property (readonly, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) WBSTabOrderManager *tabOrderManager; // ivar: _tabOrderManager
@property (readonly, retain, nonatomic) TabOverview *tabOverview; // ivar: _tabOverview
@property (readonly, nonatomic) _SWCollaborationButtonView *tabOverviewCollaborationButton; // ivar: _tabOverviewCollaborationButton
@property (readonly, nonatomic) NSObject<TabThumbnailCollectionView> *tabThumbnailCollectionView;
@property (nonatomic) NSInteger tabThumbnailCollectionViewStyle; // ivar: _tabThumbnailCollectionViewStyle
@property (nonatomic) BOOL tabViewDefersActivation;
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) NSArray *unnamedTabGroups;
@property (readonly, copy, nonatomic) NSArray *unpinnedTabDocuments;
@property (readonly, nonatomic) BOOL updatingTabGroupTabs;
@property (readonly, nonatomic) NSInteger visibleTabCollectionViewType;
@property (retain, nonatomic) WBWindowState *windowState; // ivar: _windowState


-(BOOL)canAddNewTabForPrivateBrowsing:(BOOL)arg0 ;
-(BOOL)isTabGroupActive:(id)arg0 ;
-(BOOL)isTabGroupUUIDExpanded:(id)arg0 ;
-(BOOL)isTabUUIDActive:(id)arg0 ;
-(BOOL)moveTabWithUUID:(id)arg0 fromForeignLocalGroupWithUUIDIntoActiveGroup:(id)arg1 ;
-(BOOL)selectFirstUnpinnedTab;
-(BOOL)switchToTabWithUUID:(id)arg0 inTabGroupWithUUID:(id)arg1 ;
-(BOOL)tabBar:(id)arg0 canMoveItem:(id)arg1 ;
-(BOOL)tabCollectionView:(id)arg0 canCloseItem:(id)arg1 ;
-(BOOL)tabCollectionView:(id)arg0 cloudTab:(id)arg1 matchesSearchText:(id)arg2 ;
-(BOOL)tabCollectionView:(id)arg0 item:(id)arg1 matchesSearchText:(id)arg2 ;
-(BOOL)tabCollectionView:(id)arg0 validSnapshotExistsForItem:(id)arg1 ;
-(BOOL)tabItem:(id)arg0 matchesSearchText:(id)arg1 ;
-(BOOL)tabSnapshotCache:(id)arg0 shouldRequestSavedSnapshotWithIdentifier:(id)arg1 ;
-(BOOL)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)arg0 ;
-(BOOL)trySwitchingToPinnedTabOnNavigationToURL:(id)arg0 ;
-(CGFloat)tabCollectionViewItemHeaderHeight:(id)arg0 ;
-(CGFloat)tabOverviewAdditionalItemHeaderHeight:(id)arg0 ;
-(NSUInteger)capacityForTabSnapshotCache:(id)arg0 ;
-(NSUInteger)indexForTab:(id)arg0 ;
-(id)_currentTabs;
-(id)addNewTabGroupWithTitle:(id)arg0 fromExistingTabs:(BOOL)arg1 ;
-(id)addNewTabGroupWithTitle:(id)arg0 fromTabs:(id)arg1 ;
-(id)blankTabDocumentToReuse;
-(id)blankTabDocumentToReuseAllowingReorder:(BOOL)arg0 ;
-(id)browserControllerContainingLocalTabGroupUUID:(id)arg0 ;
-(id)cachedContentImageForTabDocument:(id)arg0 ;
-(id)contextMenuConfigurationForTab:(id)arg0 inTabGroup:(id)arg1 ;
-(id)contextMenuConfigurationForTabGroup:(id)arg0 forPickerSheet:(BOOL)arg1 ;
-(id)copyBookmark:(id)arg0 toPerTabGroupBookmarkFolderWithID:(int)arg1 ;
-(id)currentItemForTabOverview:(id)arg0 ;
-(id)dragItemForTab:(id)arg0 inTabGroup:(id)arg1 ;
-(id)duplicateTabDocument:(id)arg0 ;
-(id)existingPersistedTitleForTabDocument:(id)arg0 ;
-(id)iconForSharingTabGroup:(id)arg0 ;
-(id)iconForTabUUID:(id)arg0 ;
-(id)imageForTabGroup:(id)arg0 ;
-(id)initWithBrowserController:(id)arg0 ;
-(id)insertInitialBlankTabDocumentWithPrivateBrowsingIfNeeded:(BOOL)arg0 ;
-(id)insertPlaceholderTabDocumentAfterDocument:(id)arg0 ;
-(id)itemsToKeepVisibleForTabOverview:(id)arg0 ;
-(id)menuForTabGroup:(id)arg0 forPickerSheet:(BOOL)arg1 forEditMode:(BOOL)arg2 ;
-(id)openInTabGroupMenuWithNewTabGroupName:(id)arg0 URL:(id)arg1 descendantCount:(NSInteger)arg2 handler:(id)arg3 ;
-(id)originatingTabForTab:(id)arg0 ;
-(id)perTabGroupBookmarkListForFolderID:(int)arg0 filteredUsingString:(id)arg1 ;
-(id)replacePlaceholderTabDocument:(id)arg0 withTabDocuments:(id)arg1 transitionToDragStateWithBlock:(id)arg2 ;
-(id)representativeURLForTabGroupConfirmationAlert:(id)arg0 ;
-(id)restoreRecentlyClosedTabDocumentWithTabStateData:(id)arg0 ;
-(id)snapshotsToPresistOnDiskForTabSnapshotCache:(id)arg0 ;
-(id)swipeActionsConfigurationForTab:(id)arg0 inTabGroup:(id)arg1 ;
-(id)swipeActionsConfigurationForTabGroup:(id)arg0 forPickerSheet:(BOOL)arg1 ;
-(id)syntheticBookmarkFolderForTabGroup:(id)arg0 withAttribution:(BOOL)arg1 ;
-(id)syntheticBookmarkFoldersIncludingActiveTabGroup:(BOOL)arg0 ;
-(id)tabAtIndex:(NSUInteger)arg0 ;
-(id)tabCollectionView:(id)arg0 borrowContentViewForItem:(id)arg1 withTopBackdropView:(*id)arg2 ofHeight:(CGFloat)arg3 ;
-(id)tabCollectionView:(id)arg0 snapshotForItem:(id)arg1 ;
-(id)tabDocumentForURL:(id)arg0 ;
-(id)tabDocumentWithIDForWebExtensions:(CGFloat)arg0 ;
-(id)tabDocumentWithUUID:(id)arg0 ;
-(id)tabGroupShareSheetForCurrentTabGroup;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabGroupsMenuElementsWithOptions:(NSUInteger)arg0 newTabGroupName:(id)arg1 hostTitle:(id)arg2 descendantCount:(NSInteger)arg3 movingSelectedTabs:(id)arg4 actionHandler:(id)arg5 ;
-(id)tabGroupsMenuForTabGroupButton:(BOOL)arg0 ;
-(id)topScopedBookmarkListForActiveTabGroup;
-(id)undoManagerForTabCollectionView:(id)arg0 ;
-(struct UIEdgeInsets )effectiveSafeAreaInsetsForTabCollectionView:(id)arg0 ;
-(void)_beganSharingTabGroup:(id)arg0 ;
-(void)_cancelVeryRecentlyClosedTabCountInvalidationTimer;
-(void)_cloudTabsDidUpdate:(id)arg0 ;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_dismissTabView;
-(void)_newTabFromTabViewButton;
-(void)_redoCloseTabsWithUUIDs:(id)arg0 ;
-(void)_saveStateFromTimer:(id)arg0 ;
-(void)_undoCloseTabs:(id)arg0 ;
-(void)_updateUserActivityTimerFired;
-(void)_validateSavedState:(id)arg0 ;
-(void)addDocumentObserver:(id)arg0 ;
-(void)addSnapshotCacheObserver:(id)arg0 ;
-(void)adoptTabsFromTabController:(id)arg0 ;
-(void)attemptToSelectTabGroupFromShare:(id)arg0 ;
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
-(void)closeTabs:(id)arg0 inInactiveTabGroup:(id)arg1 ;
-(void)closeTabsAutomaticallyIfNecessary;
-(void)createNewTabGroup;
-(void)createTabGroupFromExistingTabs:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)deactivateAllUsageTrackingInformationIfNecessary;
-(void)dealloc;
-(void)deleteScopedBookmarkWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)didBeginTrackingSession:(id)arg0 ;
-(void)didEndTrackingSession:(id)arg0 ;
-(void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)arg0 acceptedShareDate:(id)arg1 ;
-(void)didGainOwnershipOfTabDocument:(id)arg0 ;
-(void)didTransitionTabView;
-(void)didUpdateTabDocuments;
-(void)dismissOpenTabGroupAlertIfNeeded;
-(void)enumerateTabCollectionViewsWithBlock:(id)arg0 ;
-(void)evictTabDocument:(id)arg0 ;
-(void)flushPendingSnapshotsWithCompletion:(id)arg0 ;
-(void)hideTabDocuments:(id)arg0 ;
-(void)insertNewBlankTabDocumentAnimated:(BOOL)arg0 ;
-(void)insertNewTabDocument:(id)arg0 forcingOrderAfterTabDocument:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)insertNewTabDocumentWithDefaultOrdering:(id)arg0 inBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)insertPerTabGroupBookmark:(id)arg0 inPerTabGroupBookmarkFolderWithID:(int)arg1 ;
-(void)insertTabDocument:(id)arg0 afterTabDocument:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)insertTabDocumentFromTabStateData:(id)arg0 ;
-(void)insertTabDocuments:(id)arg0 beforeTabDocument:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)invalidateSnapshotForTabDocument:(id)arg0 ;
-(void)logTabActivationInterval:(CGFloat)arg0 forActivationType:(NSInteger)arg1 ;
-(void)makeActiveTabDocumentActive;
-(void)moveTab:(id)arg0 fromTabGroupWithUUID:(id)arg1 toTabGroupWithUUID:(id)arg2 overTab:(id)arg3 ;
-(void)moveTabDocument:(id)arg0 overTabDocument:(id)arg1 ;
-(void)moveTabDocument:(id)arg0 toTabGroupWithUUID:(id)arg1 ;
-(void)moveTabDocumentToEndOfPinnedTabs:(id)arg0 ;
-(void)moveTabGroup:(id)arg0 beforeOrAfterTabGroup:(id)arg1 ;
-(void)openBookmark:(id)arg0 inTabGroup:(id)arg1 ;
-(void)openFocusedTabGroupWithCompletionHandler:(id)arg0 ;
-(void)openInitialBlankTabDocumentIfNeeded;
-(void)openNewTabWithOptions:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)openNewTabWithOptions:(NSInteger)arg0 libraryType:(id)arg1 completionHandler:(id)arg2 ;
-(void)openTabDocumentForLibraryType:(id)arg0 ;
-(void)openURL:(id)arg0 inTabGroup:(id)arg1 ;
-(void)performBatchUpdatesWithBlock:(id)arg0 ;
-(void)performSuppressingDataModelUpdates:(id)arg0 ;
-(void)pinnedTabsManager:(id)arg0 didUpdatePinnedTabs:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)presentAlertToCreateTabGroupFromTabs:(id)arg0 withTitle:(id)arg1 message:(id)arg2 suggestedName:(id)arg3 okActionTitle:(id)arg4 completionHandler:(id)arg5 ;
-(void)registerTabGroupManagerObserver:(id)arg0 ;
-(void)registerUndoWithName:(id)arg0 actions:(id)arg1 ;
-(void)registerUndoWithType:(NSInteger)arg0 actions:(id)arg1 ;
-(void)removeDocumentObserver:(id)arg0 ;
-(void)removeSingleBlankTabFromActiveTabGroup;
-(void)removeSingleBlankTabFromInactiveTabGroup:(id)arg0 ;
-(void)removeSnapshotCacheObserver:(id)arg0 ;
-(void)removeSnapshotForDocument:(id)arg0 ;
-(void)renameTabGroup:(id)arg0 ;
-(void)reorderPinnedTabsIntoPlace;
-(void)reorderScopedBookmarkWithUUID:(id)arg0 afterBookmarkWithUUID:(id)arg1 notify:(BOOL)arg2 ;
-(void)replaceTabDocument:(id)arg0 withTabDocument:(id)arg1 ;
-(void)replaceTabDocument:(id)arg0 withTabDocument:(id)arg1 committingSpeculativeLoad:(BOOL)arg2 ;
-(void)requestSnapshotForTabDocument:(id)arg0 completion:(id)arg1 ;
-(void)restoreEducationDeviceTabs;
-(void)saveTabDocumentUserActivitySoon:(id)arg0 ;
-(void)selectLocalTabGroup;
-(void)selectNextTabGroup;
-(void)selectPreviousTabGroup;
-(void)selectPrivateTabGroup;
-(void)shareDidUpdateForTabGroupWithUUID:(id)arg0 ;
-(void)sortTabsInInactiveTabGroup:(id)arg0 withSortMode:(NSInteger)arg1 ;
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
-(void)tabDocumentDidUpdatePinned:(id)arg0 ;
-(void)tabDocumentDidUpdateUUID:(id)arg0 previousUUID:(id)arg1 ;
-(void)tabGroupConfirmationAlertDidBeginDismissal:(id)arg0 ;
-(void)tabGroupManager:(id)arg0 didPerformBlockUpdatesForTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabWithUUID:(id)arg1 userDriven:(BOOL)arg2 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabsInTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 willPerformBlockUpdatesForTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 willReplaceTabWithUUID:(id)arg1 withTabWithUUID:(id)arg2 ;
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
-(void)togglePinningTab:(id)arg0 inInactiveTabGroup:(id)arg1 ;
-(void)toggleTabGroupUUIDExpanded:(id)arg0 ;
-(void)unhideTabDocuments:(id)arg0 ;
-(void)updateActiveTab;
-(void)updateBackgroundImageForTabGroup:(id)arg0 ;
-(void)updateEducationTabsLastSyncDate;
-(void)updateFocusedTabGroupEnteringForeground;
-(void)updateHibernatedTabDocumentsSavingState;
-(void)updateLocalTabGroupTitle;
-(void)updateScopedBookmarkWithUUID:(id)arg0 title:(id)arg1 address:(id)arg2 ;
-(void)updateSelectedTabGroupName;
-(void)updateSnapshotCacheAndSnapshotActiveTab;
-(void)updateSnapshotsForTabHoverPreviewIfNeeded;
-(void)updateTabBarAnimated:(BOOL)arg0 ;
-(void)updateTabCount;
-(void)updateTabViewsAnimatingTabBar:(BOOL)arg0 ;
-(void)updateTabWithTabDocument:(id)arg0 notify:(BOOL)arg1 persist:(BOOL)arg2 ;
-(void)updateUsageTrackingInformationIfNecessary;
-(void)willLoseOwnershipOfTabDocument:(id)arg0 ;
-(void)willTransitionTabView;


@end


#endif