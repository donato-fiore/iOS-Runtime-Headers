// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKFAVORITESVIEWCONTROLLER_H
#define BOOKMARKFAVORITESVIEWCONTROLLER_H

@class UIViewController, WebBookmarkCollection, WebBookmarkList, NSMutableSet, NSMutableArray, NSString, WebBookmark;
@protocol BookmarkFavoritesGridViewDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController, WBBookmarkProvider, OS_dispatch_queue, BookmarkFavoritesViewControllerDelegate, LinkPreviewProvider, _SFNavigationIntentHandling;


#import "BookmarkFavoritesGridView.h"
#import "ForYouRecommendationMediator.h"

@interface BookmarkFavoritesViewController : UIViewController <BookmarkFavoritesGridViewDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController>

 {
    WebBookmarkCollection *_collection;
    id<WBBookmarkProvider> *_bookmarkProvider;
    NSObject<OS_dispatch_queue> *_bookmarkProviderQueue;
    BookmarkFavoritesGridView *_favoritesGridView;
    WebBookmarkList *_favoritesList;
    BOOL _ignoreBookmarksFolderContentsDidChangeNotification;
    BOOL _showWhitelistFavorites;
    NSMutableSet *_changedBookmarkIDs;
    ForYouRecommendationMediator *_mediator;
    NSMutableArray *_currentSiriSuggestions;
    ? _delegateFlags;
    BOOL _shouldUseOpaqueBackground;
    id<BookmarkFavoritesViewControllerDelegate> *_delegate;
    id<LinkPreviewProvider> *_linkPreviewProvider;
    id<_SFNavigationIntentHandling> *_navigationIntentHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WebBookmark *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)bookmarkFavoritesGridView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)bookmarkFavoritesGridViewCanPromoteFrequentlyVisitedSiteToFavorite:(id)arg0 ;
-(BOOL)bookmarkFavoritesGridViewIsPresentedInsideBlankTab:(id)arg0 ;
-(NSInteger)bookmarkFavoritesGridViewLayoutType:(id)arg0 ;
-(id)bookmarkFavoritesGridView:(id)arg0 contextMenuConfigurationWithIdentifier:(id)arg1 forBookmark:(id)arg2 ;
-(id)bookmarkFavoritesGridView:(id)arg0 contextMenuConfigurationWithIdentifier:(id)arg1 forSiriSuggestion:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_fetchHandoffResult;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg0 ;
-(void)_receivedBookmarksReloadOrSpecialFolderChangeNotification:(id)arg0 ;
-(void)_receivedFrequentlyVisitedSitesDidChangeNotification:(id)arg0 ;
-(void)_scheduleHandoffApplicationUpdate:(id)arg0 ;
-(void)_updateImageForRecommendation:(id)arg0 ;
-(void)_updateSiriSuggestions:(id)arg0 ;
-(void)bookmark:(id)arg0 didProduceNavigationIntent:(id)arg1 userInfo:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg0 banFrequentlyVisitedSite:(id)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg0 didSelectActionButton:(id)arg1 forSiriSuggestion:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg0 didSelectBookmark:(id)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg0 didSelectRecommendation:(id)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg0 didToggleExpansionForSection:(NSInteger)arg1 expanded:(BOOL)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg0 dropBookmarkWithCoordinator:(id)arg1 ;
-(void)bookmarkFavoritesGridView:(id)arg0 getChildCountForBookmarkFolder:(int)arg1 completionHandler:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg0 getChildCountForBookmarkFoldersInParent:(int)arg1 completionHandler:(id)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg0 promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(NSUInteger)arg2 ;
-(void)bookmarkFavoritesGridView:(id)arg0 willCommitPreviewViewController:(id)arg1 ;
-(void)bookmarkFavoritesGridViewContentChanged:(id)arg0 ;
-(void)bookmarkFavoritesGridViewDidReceiveTapOutside:(id)arg0 ;
-(void)bookmarkFavoritesGridViewWillDismissLinkPreview:(id)arg0 ;
-(void)dealloc;
-(void)deleteBookmark:(id)arg0 userInfo:(id)arg1 ;
-(void)editBookmark:(id)arg0 userInfo:(id)arg1 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setScrollViewScrollsToTop:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif