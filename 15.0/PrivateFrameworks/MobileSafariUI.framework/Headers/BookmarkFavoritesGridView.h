// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BOOKMARKFAVORITESGRIDVIEW_H
#define BOOKMARKFAVORITESGRIDVIEW_H

@class UIView, UITapGestureRecognizer, NSMapTable, _UICollectionViewDiffableDataSource, NSDictionary, NSArray, UICollectionView, NSString;
@protocol BookmarkFavoritesGridSectionHeaderViewDelegate, CollectionViewDelegateBookmarkFavoritesGridLayout, SiriSuggestionsCollectionViewCellDelegate, UICollectionViewDropDelegate_Private, UICollectionViewDragDelegate_Private, UIGestureRecognizerDelegate, UIScrollViewDelegate, _SFSiteIconViewUpdateObserver, BookmarkFavoritesGridViewDelegate;


#import "BookmarkFavoritesGridSectionHeaderView.h"
#import "SiriSuggestionsCollectionViewCell.h"
#import "BookmarkFavoritesGridLayout.h"
#import "BookmarkFavoriteViewMetrics.h"

@interface BookmarkFavoritesGridView : UIView <BookmarkFavoritesGridSectionHeaderViewDelegate, CollectionViewDelegateBookmarkFavoritesGridLayout, SiriSuggestionsCollectionViewCellDelegate, UICollectionViewDropDelegate_Private, UICollectionViewDragDelegate_Private, UIGestureRecognizerDelegate, UIScrollViewDelegate, _SFSiteIconViewUpdateObserver>

 {
    CGFloat _rowHeight;
    CGFloat _previousContentViewWidth;
    UIEdgeInsets _contentInset;
    UITapGestureRecognizer *_tapOutsideRecognizer;
    BOOL _isShowingFavorites;
    BookmarkFavoritesGridSectionHeaderView *_favoritesHeader;
    BookmarkFavoritesGridSectionHeaderView *_frequentsHeader;
    BookmarkFavoritesGridSectionHeaderView *_siriSuggestionsHeader;
    BOOL _isEditingSiriSuggestions;
    SiriSuggestionsCollectionViewCell *_lastPannedCell;
    CGFloat _lastPannedCellStartingOffset;
    NSMapTable *_recommendationMetadataTokens;
    BookmarkFavoritesGridLayout *_collectionViewLayout;
    _UICollectionViewDiffableDataSource *_collectionViewDataSource;
    NSDictionary *_bookmarksByIdentifier;
    NSDictionary *_bookmarkFolderIDToChildCount;
    UIView *_siriSuggestionsWelcomeView;
    NSDictionary *_siriSuggestionsByIdentifier;
    NSInteger _layoutType;
    BookmarkFavoriteViewMetrics *_favoriteViewMetrics;
}


@property (nonatomic, getter=isAdjustedForSidebar) BOOL adjustedForSidebar; // ivar: _adjustedForSidebar
@property (nonatomic) BOOL allowsReordering; // ivar: _allowsReordering
@property (readonly, copy, nonatomic) NSArray *bookmarks; // ivar: _bookmarks
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) UIEdgeInsets contentInset;
@property (readonly, nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BookmarkFavoritesGridViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *frequentlyVisitedSites; // ivar: _frequentlyVisitedSites
@property (nonatomic) BOOL hasTransparentBackground; // ivar: _hasTransparentBackground
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPresentedWithinPopover) BOOL presentedWithinPopover; // ivar: _presentedWithinPopover
@property (readonly, nonatomic) BOOL showingContextMenu; // ivar: _showingContextMenu
@property (nonatomic) BOOL showsPrivateBrowsingExplanation; // ivar: _showsPrivateBrowsingExplanation
@property (readonly, copy, nonatomic) NSArray *siriSuggestions; // ivar: _siriSuggestions
@property (readonly) Class superclass;
@property (nonatomic, getter=isTapOutsideEnabled) BOOL tapOutsideEnabled;


-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 dragSessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)bookmarkAtLocation:(struct CGPoint )arg0 ;
-(id)bookmarkPreviewSourceViewAtLocation:(struct CGPoint )arg0 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dragPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )collectionView:(id)arg0 layout:(id)arg1 iconRectForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_didSelectSiriSuggestionsWelcomeViewCloseButton;
-(void)_didTapPrivacyLabel:(id)arg0 ;
-(void)_tapOutsideRecognized:(id)arg0 ;
-(void)bookmarkFavoritesGridSectionHeaderView:(id)arg0 didChangeIsEditing:(BOOL)arg1 ;
-(void)bookmarkFavoritesGridSectionHeaderViewDidSelectShowLess:(id)arg0 ;
-(void)bookmarkFavoritesGridSectionHeaderViewDidSelectShowMore:(id)arg0 ;
-(void)cancelGestures;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)filterOutSiriSuggestionsWithDomain:(id)arg0 ;
-(void)filterOutSiriSuggestionsWithSource:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)reloadBookmark:(id)arg0 ;
-(void)reloadSiriSuggestion:(id)arg0 ;
-(void)resetScrollPosition;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setKeyboardDismissMode:(NSInteger)arg0 ;
-(void)setScrollViewScrollsToTop:(BOOL)arg0 ;
-(void)siriSuggestionsCollectionViewCell:(id)arg0 didSelectActionButton:(id)arg1 ;
-(void)siteIconViewDidUpdate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCollectionViewToCurrentStateAnimated:(BOOL)arg0 ;


@end


#endif