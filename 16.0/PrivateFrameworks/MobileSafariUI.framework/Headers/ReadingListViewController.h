// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef READINGLISTVIEWCONTROLLER_H
#define READINGLISTVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, WebBookmarkCollection, WebBookmarkList, SafariFetcherServerProxy, NSString, NSTimer, UISearchBar, NSMutableSet, NSArray, UITableView;
@protocol BookmarksToolbarItemProvider, PreviewTableViewControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, WebBookmarksClientDelegateProtocol, BookmarksPanelStateRestoring, UITableViewDelegate, UITableViewDataSource, ReadingListViewControllerDelegate, LinkPreviewProvider, _SFNavigationIntentHandling, TabGroupProvider;


#import "PreviewTableViewController.h"
#import "ReadingListContentUnavailableView.h"
#import "ReadingListLeadImageCache.h"

@interface ReadingListViewController : UIViewController <BookmarksToolbarItemProvider, PreviewTableViewControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, WebBookmarksClientDelegateProtocol, BookmarksPanelStateRestoring, UITableViewDelegate, UITableViewDataSource>

 {
    UIBarButtonItem *_cachedUnreadFilterBarButtonButton;
    UIBarButtonItem *_cachedDeleteBarButtonItem;
    UIBarButtonItem *_cachedSaveOfflineBarButtonItem;
    WebBookmarkCollection *_collection;
    BOOL _networkIsReachable;
    WebBookmarkList *_readingList;
    SafariFetcherServerProxy *_safariFetcherServerProxy;
    NSString *_archivingBookmarkUUID;
    NSTimer *_deletionNotificationTimer;
    PreviewTableViewController *_tableViewController;
    BOOL _loadIconsSynchronously;
    NSString *_userTypedFilter;
    ReadingListContentUnavailableView *_explanationView;
    ReadingListLeadImageCache *_imageCache;
    UISearchBar *_searchBar;
    BOOL _isUsingSwipeAction;
    NSMutableSet *_visibleBookmarkIDs;
    BOOL _needsContentOffsetAdjustment;
    BOOL _deferEnteringEditMode;
}


@property (readonly, nonatomic) NSArray *bookmarksPanelToolbarItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ReadingListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly, nonatomic) BOOL showingAllBookmarks; // ivar: _showingAllBookmarks
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_shouldUseTranslucentAppearance;
-(BOOL)restoreStateWithDictionary:(id)arg0 ;
-(BOOL)safari_wantsDoneButtonInModalBookmarksPanel;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_URLForRowAtIndexPath:(id)arg0 ;
-(id)_bookmarkAtIndexPath:(id)arg0 ;
-(id)_createAction:(NSInteger)arg0 forRowAtIndexPath:(id)arg1 allowingNewlineInTitle:(BOOL)arg2 withBlock:(id)arg3 ;
-(id)_createActions:(id)arg0 forRowAtIndexPath:(id)arg1 allowingNewlineInTitles:(BOOL)arg2 withBlock:(id)arg3 ;
-(id)_currentReadingListBookmark;
-(id)_deleteBarButtonItem;
-(id)_editButtonIdentifier;
-(id)_iconForUUID:(id)arg0 iconData:(id)arg1 ;
-(id)_saveOfflineBarButtonItem;
-(id)_separatorEffect;
-(id)_unreadFilterBarButtonItem;
-(id)_unreadFilterButtonIdentifier;
-(id)_unreadFilterButtonTitle;
-(id)currentStateDictionary;
-(id)init;
-(id)previewTableViewController:(id)arg0 URLForRowAtIndexPath:(id)arg1 ;
-(id)previewTableViewController:(id)arg0 menuForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 leadingSwipeActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsForRowAtIndexPath:(id)arg1 ;
-(void)_adjustContentOffsetIfNeeded;
-(void)_clearExplanationView;
-(void)_connectSafariFetcherServerProxy;
-(void)_deleteBookmarks:(id)arg0 ;
-(void)_didAddNewReadingListBookmark;
-(void)_didChangeUnreadFilter;
-(void)_disconnectSafariFetcherServerProxy;
-(void)_fetchMetadataIfNeededForBookmark:(id)arg0 ;
-(void)_networkReachabilityChanged:(id)arg0 ;
-(void)_postChangeNotification;
-(void)_readingListBookmarkDidUpdate:(id)arg0 ;
-(void)_readingListBookmarkMetadataDidUpdate:(id)arg0 ;
// -(void)_readingListItemAtIndexPath:(id)arg0 lockAndPerformUpdates:(id)arg1 performBlockIfLockFailed:(unk)arg2  ;
-(void)_readingListItemAtIndexPath:(id)arg0 setUnread:(BOOL)arg1 ;
-(void)_readingListItemAtIndexPathDelete:(id)arg0 ;
// -(void)_readingListItemsAtIndexPaths:(id)arg0 lockAndPerformUpdate:(id)arg1 performBlockIfLockFailed:(unk)arg2  ;
-(void)_reloadReadingList;
-(void)_reloadReadingListAndTable;
-(void)_restoreCellSeparator;
-(void)_saveForOffline:(id)arg0 ;
-(void)_scheduleDelayedChangeNotification;
-(void)_setIconForBookmark:(id)arg0 cell:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)_showExplanationView;
-(void)_updateEditingButtonsEnabled;
-(void)_updateSearchBar;
-(void)_updateTableViewByComputingDifference;
-(void)_updateTableViewByRemovingReadingListItemAtIndexPath:(id)arg0 ;
-(void)_updateTableViewByRemovingReadingListItemsAtIndexPaths:(id)arg0 ;
-(void)_updateToolbarItemsAnimated:(BOOL)arg0 ;
-(void)_webBookmarksDidReload:(id)arg0 ;
-(void)bookmarksServerProxy:(id)arg0 didStartFetchingReadingListItem:(id)arg1 ;
-(void)bookmarksServerProxy:(id)arg0 didStopFetchingReadingListItem:(id)arg1 ;
-(void)bookmarksServerProxyConnectionInvalidated:(id)arg0 ;
-(void)bookmarksServerProxyDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)didMarkBookmarkUnreadAtIndex:(NSUInteger)arg0 ;
-(void)loadView;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAndScrollToCurrentSelectedItemIfNeeded:(BOOL)arg0 ;
-(void)updateUserActivityState:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif