// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BOOKMARKSTABLEVIEWCONTROLLER_H
#define BOOKMARKSTABLEVIEWCONTROLLER_H

@class SFPopoverSizingTableViewController, WebBookmarkList, WebBookmark, UISearchBar, NSString, WebBookmarkCollection;
@protocol UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, _SFBookmarkInfoViewControllerDelegate, _SFWebBookmarkActionHandler, BookmarksPanelStateRestoring, BookmarksTableViewControllerDelegate, LinkPreviewProvider, _SFNavigationIntentHandling;



@interface BookmarksTableViewController : SFPopoverSizingTableViewController <UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, _SFBookmarkInfoViewControllerDelegate, _SFWebBookmarkActionHandler, BookmarksPanelStateRestoring>

 {
    WebBookmarkList *_bookmarkList;
    WebBookmark *_favoritesFolder;
    UISearchBar *_searchBar;
    NSString *_userTypedFilter;
    NSUInteger _skipOffset;
    BOOL _needsInitialContentOffsetUpdateForTableHeaderView;
    BOOL _needsContentOffsetUpdate;
    BOOL _shouldDeferReload;
}


@property (retain, nonatomic) WebBookmarkCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BookmarksTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WebBookmark *folder; // ivar: _folder
@property (readonly, nonatomic) int folderID;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (nonatomic, getter=isPreviewing) BOOL previewing; // ivar: _previewing
@property (readonly) Class superclass;


-(BOOL)_inRootFolder;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)hasTranslucentAppearance;
-(BOOL)restoreStateWithDictionary:(id)arg0 ;
-(BOOL)safari_wantsDoneButtonInModalBookmarksPanel;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldSpringLoadRowAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(NSInteger)minimumNumberOfRows;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_bookmarkAtIndexPath:(id)arg0 ;
-(id)_dragItemsAtIndexPath:(id)arg0 includingFolders:(BOOL)arg1 ;
-(id)_fontForCurrentTraitCollection;
-(id)_newViewControllerForFolder:(id)arg0 ;
-(id)_tableViewCellForBookmark:(id)arg0 ;
-(id)bookmarksNavigationController;
-(id)bookmarksTableViewCellWithReuseIdentifier:(id)arg0 ;
-(id)currentStateDictionary;
-(id)initWithFolder:(id)arg0 inCollection:(id)arg1 ;
-(id)initWithFolder:(id)arg0 inCollection:(id)arg1 skipOffset:(unsigned int)arg2 ;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)selectedBookmarks;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_deleteBookmark:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_moveBookmarks:(id)arg0 toFolderID:(int)arg1 toIndex:(unsigned int)arg2 shouldReorder:(BOOL)arg3 isAddingBookmark:(BOOL)arg4 ;
-(void)_pushInfoViewControllerForBookmark:(id)arg0 ;
-(void)_recreateBookmarkLists;
-(void)_updateContentOffsetIfNeeded;
-(void)_updateTableViewCellsTextStyleForEditing:(BOOL)arg0 ;
-(void)_updateTitle;
-(void)bookmark:(id)arg0 didProduceNavigationIntent:(id)arg1 userInfo:(id)arg2 ;
-(void)deleteBookmark:(id)arg0 userInfo:(id)arg1 ;
-(void)editBookmark:(id)arg0 userInfo:(id)arg1 ;
-(void)loadView;
-(void)reloadBookmarks;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setScrollViewScrollsToTop:(BOOL)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSeparatorInset;
-(void)updateUserActivityState:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif