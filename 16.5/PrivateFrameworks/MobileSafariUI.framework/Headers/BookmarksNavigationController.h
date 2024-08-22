// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BOOKMARKSNAVIGATIONCONTROLLER_H
#define BOOKMARKSNAVIGATIONCONTROLLER_H

@class UINavigationController, WebBookmarkCollection, WebBookmarkReadonlyCollection, NSTimer, UIBarButtonItem, UISegmentedControl, NSArray, NSMutableDictionary, _UINavigationBarPalette, NSString;
@protocol WBTabGroupManagerObserver, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, _SFBookmarkInfoViewControllerDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, _SFNavigationIntentHandling, OS_dispatch_queue, BookmarksNavigationControllerDelegate, LinkPreviewProvider, TabGroupProvider;



@interface BookmarksNavigationController : UINavigationController <WBTabGroupManagerObserver, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, _SFBookmarkInfoViewControllerDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, _SFNavigationIntentHandling>

 {
    WebBookmarkCollection *_bookmarkCollection;
    WebBookmarkReadonlyCollection *_readonlyCollection;
    NSObject<OS_dispatch_queue> *_readonlyCollectionQueue;
    NSTimer *_bookmarkSyncTimer;
    BOOL _hasScheduledBookmarkSyncTimer;
    BOOL _isEditing;
    BOOL _needsReloadSavedState;
    BOOL _contentDirtyFlag;
    UIBarButtonItem *_createFolderButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_editingDoneButtonItem;
    UIBarButtonItem *_flexibleSpaceItem;
    BOOL _showCollections;
    UISegmentedControl *_collectionSegmentedControl;
    NSArray *_topLevelCollections;
    NSMutableDictionary *_savedCollectionState;
    _UINavigationBarPalette *_palette;
    UIBarButtonItem *_doneButtonItem;
}


@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (weak, nonatomic) NSObject<BookmarksNavigationControllerDelegate> *bookmarksNavigationControllerDelegate; // ivar: _bookmarksNavigationControllerDelegate
@property (nonatomic, getter=isContentBorrowed) BOOL contentBorrowed; // ivar: _contentBorrowed
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) NSString *currentCollection; // ivar: _currentCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doneButtonHidden; // ivar: _doneButtonHidden
@property (nonatomic) BOOL hasTranslucentAppearance; // ivar: _hasTranslucentAppearance
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *importHandler; // ivar: _importHandler
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (nonatomic) BOOL prefersHalfHeightSheetPresentationWithLoweredBar; // ivar: _prefersHalfHeightSheetPresentationWithLoweredBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider;
@property (nonatomic) UIEdgeInsets tableSeparatorInset; // ivar: _tableSeparatorInset


+(id)test_savedStateCollection;
+(void)test_setSavedStateCollection:(id)arg0 ;
-(BOOL)_createSavedPanelStateForTesting;
-(BOOL)_isVisibleFolderID:(int)arg0 ;
-(BOOL)_shouldShowPaletteForViewController:(id)arg0 ;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)bookmarksTableViewIsReadOnly:(id)arg0 ;
-(BOOL)bookmarksTableViewShouldDispatchNavigationIntent:(id)arg0 forSelectedBookmark:(id)arg1 ;
-(BOOL)panelViewControllerShouldTranslucentAppearance:(id)arg0 ;
-(BOOL)rebaseOnAncestorBookmark:(id)arg0 skipOffset:(unsigned int)arg1 ;
-(BOOL)rebaseOnDescendentBookmark:(id)arg0 ;
-(id)_favoritesFolderBasedOnContentRestriction;
-(id)_initWithBookmarksDelegate:(id)arg0 linkPreviewProvider:(id)arg1 topBookmark:(id)arg2 skipOffset:(unsigned int)arg3 activeCollection:(id)arg4 showsOnlyActiveCollection:(BOOL)arg5 ;
-(id)_lastExistingBookmarkWithUUIDs:(id)arg0 ;
-(id)_pathForBookmark:(id)arg0 startingFromAncestor:(id)arg1 ;
-(id)_segmentedControlItemForCollection:(id)arg0 ;
-(id)_toolbarItemsForViewController:(id)arg0 ;
-(id)initWithBookmarksDelegate:(id)arg0 linkPreviewProvider:(id)arg1 ;
-(id)initWithBookmarksDelegate:(id)arg0 linkPreviewProvider:(id)arg1 collection:(id)arg2 showsOnlyActiveCollection:(BOOL)arg3 ;
-(id)initWithBookmarksDelegate:(id)arg0 linkPreviewProvider:(id)arg1 topBookmark:(id)arg2 skipOffset:(unsigned int)arg3 ;
-(id)makeHistoryViewController;
-(id)newBookmarksTableViewControllerWithFolder:(id)arg0 skipOffset:(unsigned int)arg1 ;
-(id)newRootViewControllerForCollection:(id)arg0 ;
-(id)readingListViewControllerCurrentReadingListItem:(id)arg0 ;
-(id)rootBookmark;
-(id)tabGroupProviderForBookmarkInfoViewController:(id)arg0 ;
-(id)topBookmarksTableViewController;
-(id)topHistoryTableViewController;
-(id)topReadingListViewController;
-(id)topmostBookmarksTableViewController;
-(struct UIEdgeInsets )contentInsetForBookmarksTableViewController:(id)arg0 ;
-(struct UIEdgeInsets )separatorInsetForBookmarksTableViewController:(id)arg0 ;
-(void)_applicationSuspended:(id)arg0 ;
-(void)_bookmarkCollectionHasBecomeAvailable:(id)arg0 ;
-(void)_bookmarkSyncTimerDidFire:(id)arg0 ;
-(void)_clearBookmarkSyncTimer;
-(void)_createToolbarItemsIfNecessary;
-(void)_didPressEditButton;
-(void)_didPressEditingDoneButton;
-(void)_didPressNewFolderButton;
-(void)_doneButtonPressed;
-(void)_folderContentsDidChange:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_loadSavedPanelState;
-(void)_reloadFailed;
-(void)_reloadFolderContentsForFolderIDIfNeeded:(int)arg0 ;
-(void)_reloadSucceeded;
-(void)_restoreCurrentCollectionState;
-(void)_restorePanelState;
-(void)_savePanelState;
-(void)_selectedCollectionChanged:(id)arg0 ;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setContentsDirty;
-(void)_setEditingFromToolbarButton:(BOOL)arg0 ;
-(void)_setupCollectionSegmentedControlIfNeeded;
-(void)_setupCollections;
-(void)_updateBookmarkCollection;
-(void)_updateClearHistoryButton;
-(void)_updateDoneButtonItemForViewController:(id)arg0 ;
-(void)_updateToolbarItemsForViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateToolbarVisibility;
-(void)_webBookmarksDidReload:(id)arg0 ;
-(void)bookmarkSourceContentsChanged:(id)arg0 ;
-(void)bookmarksTableViewControllerDidBeginEditing:(id)arg0 ;
-(void)bookmarksTableViewControllerDidEndEditing:(id)arg0 ;
-(void)dealloc;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)historyTableViewControllerDidBeginEditing:(id)arg0 ;
-(void)historyTableViewControllerDidEndEditing:(id)arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)panelViewController:(id)arg0 updateToolbarItemsAnimated:(BOOL)arg1 ;
-(void)readingListViewController:(id)arg0 setBookmark:(id)arg1 asRead:(BOOL)arg2 ;
-(void)readingListViewController:(id)arg0 updateUnreadFilterShowingAllBookmarks:(BOOL)arg1 ;
-(void)readingListViewControllerDidBeginEditing:(id)arg0 ;
-(void)readingListViewControllerDidEndEditing:(id)arg0 ;
-(void)reloadViewControllers;
-(void)setPinnedPaletteForPanelViewController:(id)arg0 ;
-(void)setRootBookmark:(id)arg0 skipOffset:(unsigned int)arg1 ;
-(void)setRootBookmarkUUIDString:(id)arg0 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateScopedBookmarkList:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManagerDidUpdateTabGroups:(id)arg0 ;
-(void)toggleEditBookmarks;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif