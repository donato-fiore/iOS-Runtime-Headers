// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSEARCHVIEWCONTROLLER_H
#define CKSEARCHVIEWCONTROLLER_H

@class UICollectionViewCompositionalLayout, UIContextMenuInteraction, UICollectionViewDiffableDataSource, NSString, NSMutableSet, NSArray, IMTimingCollection;
@protocol CKSearchResultsTitleHeaderCellDelegate, UIContextMenuInteractionDelegate, UICollectionViewDragDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate, CKContainerSearchControllerDelegate;


#import "CKScrollViewController.h"
#import "CKSearchCollectionView.h"

@interface CKSearchViewController : CKScrollViewController <CKSearchResultsTitleHeaderCellDelegate, UIContextMenuInteractionDelegate, UICollectionViewDragDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate>



@property (retain, nonatomic) CKSearchCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKContainerSearchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissingSearchController; // ivar: _dismissingSearchController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (copy, nonatomic) id *performAfterInitialLoadBlock; // ivar: _performAfterInitialLoadBlock
@property (retain, nonatomic) NSMutableSet *searchCompleteControllerSet; // ivar: _searchCompleteControllerSet
@property (retain, nonatomic) NSArray *searchControllers; // ivar: _searchControllers
@property (nonatomic) BOOL searchInProgress; // ivar: _searchInProgress
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;
@property (retain, nonatomic) IMTimingCollection *timingCollection; // ivar: _timingCollection


-(BOOL)__im_ff_isInterstellarEnabled;
-(BOOL)_currentModeIsDetails;
-(BOOL)_hasSelectedItemAtIndexPath:(*id)arg0 ;
-(BOOL)_isInternalInstall;
-(BOOL)_needsIndexing;
-(BOOL)_shouldHideShowAllButtonForController:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg0 ;
-(BOOL)conversationSearchHasResult;
-(BOOL)shouldInsetResultsForSearchController:(id)arg0 ;
-(CGFloat)containerWidthForController:(id)arg0 ;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(Class)_searchResultsHeaderClass;
-(NSInteger)rowIndexFindNextForIndex:(NSInteger)arg0 numberOfTotalItems:(NSInteger)arg1 ;
-(NSInteger)rowIndexFindPreviousForIndex:(NSInteger)arg0 numberOfTotalItems:(NSInteger)arg1 ;
-(id)_identifiersToAppendForResults:(id)arg0 ;
-(id)_layoutSectionForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)_newSnapshotForCurrentControllerState;
-(id)cellForItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 withIdentifier:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 forSupplementryViewKind:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)containerTraitCollectionForController:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)footerBoundryItemsForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)globalLayoutConfiguration;
-(id)headerBoundryItemsForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg0 ;
-(id)layoutSectionForController:(id)arg0 withEnvironment:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 withEnvironment:(id)arg1 ;
-(id)scrollView;
-(id)searchController:(id)arg0 cellForResult:(id)arg1 ;
-(id)searchController:(id)arg0 conversationForChatGUID:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )parentMarginInsetsForSearchController:(id)arg0 ;
-(void)_configureIndexingCell:(id)arg0 ;
-(void)_registerCells;
-(void)_searchImmediately;
-(void)_searchResultHeaderButtonTapped:(id)arg0 ;
-(void)_selectItemForFindAtIndexPath:(id)arg0 ;
-(void)cancelCurrentQuery;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)deleteMessageItem:(id)arg0 ;
-(void)deleteTransferGUID:(id)arg0 ;
-(void)findNext;
-(void)findPrevious;
-(void)loadView;
-(void)reloadData;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchController:(id)arg0 requestsItemDeletionAtIndexPath:(id)arg1 ;
-(void)searchController:(id)arg0 requestsPresentationOfAlertController:(id)arg1 atRect:(struct CGRect )arg2 ;
-(void)searchController:(id)arg0 requestsPresentationOfShareController:(id)arg1 atRect:(struct CGRect )arg2 ;
-(void)searchControllerContentsDidChange:(id)arg0 ;
-(void)searchEnded;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg0 ;
-(void)searchWithText:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif