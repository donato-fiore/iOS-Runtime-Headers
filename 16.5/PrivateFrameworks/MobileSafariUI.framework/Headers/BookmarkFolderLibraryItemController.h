// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BOOKMARKFOLDERLIBRARYITEMCONTROLLER_H
#define BOOKMARKFOLDERLIBRARYITEMCONTROLLER_H

@class UIBarButtonItem, WebBookmarkCollection, NSString, WebBookmark;
@protocol WBTabGroupManagerObserver, BookmarksTableViewControllerDelegate, _SFNavigationIntentHandling, _SFBookmarkInfoViewControllerDelegate, WBBookmarkProvider, OS_dispatch_queue, LinkPreviewProvider, TabGroupProvider;


#import "LibraryItemController.h"
#import "BookmarksTableViewController.h"

@interface BookmarkFolderLibraryItemController : LibraryItemController <WBTabGroupManagerObserver, BookmarksTableViewControllerDelegate, _SFNavigationIntentHandling, _SFBookmarkInfoViewControllerDelegate>

 {
    BookmarksTableViewController *_viewController;
    UIBarButtonItem *_createFolderButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_editingDoneButtonItem;
    UIBarButtonItem *_flexibleSpaceItem;
    BOOL _allowsEditing;
    BOOL _isEditing;
}


@property (retain, nonatomic) NSObject<WBBookmarkProvider> *bookmarkProvider; // ivar: _bookmarkProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookmarkProviderQueue; // ivar: _bookmarkProviderQueue
@property (retain, nonatomic) WebBookmarkCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WebBookmark *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider


-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)bookmarksTableViewIsReadOnly:(id)arg0 ;
-(BOOL)bookmarksTableViewShouldDispatchNavigationIntent:(id)arg0 forSelectedBookmark:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSpringLoaded;
-(BOOL)selectionFollowsFocus;
-(NSInteger)dropIntentForSession:(id)arg0 ;
-(NSUInteger)dropOperationForSession:(id)arg0 ;
-(id)_toolbarItemsForViewController:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 sectionController:(id)arg1 folder:(id)arg2 ;
-(id)tabGroupProviderForBookmarkInfoViewController:(id)arg0 ;
-(id)topViewController;
-(id)viewController;
-(struct UIEdgeInsets )contentInsetForBookmarksTableViewController:(id)arg0 ;
-(struct UIEdgeInsets )separatorInsetForBookmarksTableViewController:(id)arg0 ;
-(void)_createToolbarItemsIfNecessary;
-(void)_didPressEditButton;
-(void)_didPressEditingDoneButton;
-(void)_didPressNewFolderButton;
-(void)_folderContentsDidChange:(id)arg0 ;
-(void)_reloadFolderContentsForFolderIDIfNeeded:(int)arg0 ;
-(void)_setEditingFromToolbarButton:(BOOL)arg0 ;
-(void)_updateToolbarItemsForViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)bookmarksTableViewControllerDidBeginEditing:(id)arg0 ;
-(void)bookmarksTableViewControllerDidEndEditing:(id)arg0 ;
-(void)bookmarksTableViewControllerWillDisappear:(id)arg0 ;
-(void)dealloc;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)performDropWithProposal:(id)arg0 session:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateScopedBookmarkList:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManagerDidUpdateTabGroups:(id)arg0 ;
-(void)toggleEditBookmarks;
-(void)updateListContentConfiguration:(id)arg0 ;
-(void)updateToolbarIfNeeded;


@end


#endif