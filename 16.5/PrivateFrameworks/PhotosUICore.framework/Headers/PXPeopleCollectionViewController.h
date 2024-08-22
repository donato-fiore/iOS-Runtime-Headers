// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLECOLLECTIONVIEWCONTROLLER_H
#define PXPEOPLECOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSDictionary, NSString, UIBarButtonItem, UILongPressGestureRecognizer, UIFocusGuide, UIAction, NSMutableDictionary, NSIndexPath, UITapGestureRecognizer, NSArray;
@protocol PXPeopleDragAndDropCollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate, PXPeopleSectionedDataSourceChangeObserver, PXPeopleDragAndDropCollectionViewDelegateLayout, PXPeopleCollectionViewCellDelegate, PXChangeObserver, PXPeopleSwipeSelectionManagerDelegate, UIViewControllerAnimatedTransitioning;


#import "PXPeopleSectionedDataSource.h"
#import "PXPeopleDragAndDropCollectionViewLayout.h"
#import "PXLibraryFilterState.h"
#import "PXPeopleMeViewController.h"
#import "PXPeopleProgressFooterView.h"
#import "PXPeopleProgressManager.h"
#import "PXSharedLibraryStatusProvider.h"
#import "PXPeopleSwipeSelectionManager.h"

@interface PXPeopleCollectionViewController : UICollectionViewController <PXPeopleDragAndDropCollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate, PXPeopleSectionedDataSourceChangeObserver, PXPeopleDragAndDropCollectionViewDelegateLayout, PXPeopleCollectionViewCellDelegate, PXChangeObserver, PXPeopleSwipeSelectionManagerDelegate>



@property (retain, nonatomic) NSDictionary *contactByPersonLocalIdentifier; // ivar: _contactByPersonLocalIdentifier
@property (readonly, nonatomic) PXPeopleSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIBarButtonItem *debugMenuItem; // ivar: _debugMenuItem
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXPeopleDragAndDropCollectionViewLayout *dragAndDropCollectionViewLayout;
@property (retain, nonatomic) UILongPressGestureRecognizer *dragRecognizer; // ivar: _dragRecognizer
@property (retain, nonatomic) UIBarButtonItem *favoriteToolbarItem; // ivar: _favoriteToolbarItem
@property (retain, nonatomic) UIFocusGuide *favoritesLeadingFocusGuide; // ivar: _favoritesLeadingFocusGuide
@property (retain, nonatomic) UIFocusGuide *favoritesTrailingFocusGuide; // ivar: _favoritesTrailingFocusGuide
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property BOOL ignoreChangeUpdates; // ivar: _ignoreChangeUpdates
@property (nonatomic) BOOL isInSelectionOnlyMode; // ivar: _isInSelectionOnlyMode
@property (nonatomic) CGPoint lastDragPoint; // ivar: _lastDragPoint
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (retain, nonatomic) UIAction *manualSortAction; // ivar: _manualSortAction
@property (retain, nonatomic) PXPeopleMeViewController *meViewController; // ivar: _meViewController
@property (retain, nonatomic) UIBarButtonItem *mergeToolbarItem; // ivar: _mergeToolbarItem
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) UIAction *nameSortAction; // ivar: _nameSortAction
@property BOOL needToCheckProgress; // ivar: _needToCheckProgress
@property (nonatomic) BOOL pendingChanges; // ivar: _pendingChanges
@property (nonatomic) NSUInteger peopleHomeSortingType; // ivar: _peopleHomeSortingType
@property (copy, nonatomic) id *ppt_cellsLoadedCompletionBlock; // ivar: _ppt_cellsLoadedCompletionBlock
@property (readonly, nonatomic) NSUInteger ppt_countOfEmptyCells;
@property (nonatomic) NSInteger ppt_numCellsLeft; // ivar: _ppt_numCellsLeft
@property (nonatomic) NSUInteger ppt_sampledCountOfEmptyCells; // ivar: _ppt_sampledCountOfEmptyCells
@property (nonatomic) NSUInteger ppt_sampledCountOfFrames; // ivar: _ppt_sampledCountOfFrames
@property (readonly, nonatomic) NSDictionary *ppt_scrollingInformation;
@property (retain, nonatomic) NSMutableDictionary *ppt_seenPeople; // ivar: _ppt_seenPeople
@property (nonatomic) BOOL ppt_shouldRunPPTCode; // ivar: _ppt_shouldRunPPTCode
@property (nonatomic) CGRect ppt_visibleCollectionViewRect; // ivar: _ppt_visibleCollectionViewRect
@property (nonatomic, getter=isProgressFooterAvailable) BOOL progressFooterAvailable; // ivar: _progressFooterAvailable
@property (retain, nonatomic) PXPeopleProgressFooterView *progressFooterView; // ivar: _progressFooterView
@property (retain, nonatomic) PXPeopleProgressManager *progressManager; // ivar: _progressManager
@property (retain, nonatomic) UIBarButtonItem *removeToolbarItem; // ivar: _removeToolbarItem
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // ivar: _rightBarButtonItem
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider; // ivar: _sharedLibraryStatusProvider
@property (nonatomic) BOOL shouldShowMeHeader; // ivar: _shouldShowMeHeader
@property (nonatomic) BOOL shouldShowProgressFooter; // ivar: _shouldShowProgressFooter
@property (retain, nonatomic) NSIndexPath *sourceDragIndexPath; // ivar: _sourceDragIndexPath
@property (retain, nonatomic) UITapGestureRecognizer *statusDebugRecognizer; // ivar: _statusDebugRecognizer
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager; // ivar: _swipeSelectionManager
@property (retain, nonatomic) NSIndexPath *targetIndexPath; // ivar: _targetIndexPath
@property (retain) NSObject<UIViewControllerAnimatedTransitioning> *transitionAnimator; // ivar: _transitionAnimator
@property (copy, nonatomic) NSArray *transitionIndices; // ivar: _transitionIndices


-(BOOL)_indexPathsContainMixedSections:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)ppt_namePerson:(id)arg0 ;
-(CGFloat)_bottomInsetForSection:(NSUInteger)arg0 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)_changeTypeForIndexPaths:(id)arg0 ;
-(NSInteger)_horizontalSizeClass;
-(NSInteger)_verticalSizeClass;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)ppt_numOfCellsLoadingImages;
-(NSUInteger)_fixedColumnCountForIndexPath:(id)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_alertControllerForRemovingPersonsAtIndexPaths:(id)arg0 ;
-(id)_bestTargetIndexPathGivenMergeIndexPaths:(id)arg0 ;
-(id)_detailViewControllerAtIndexPath:(id)arg0 ;
-(id)_originalTargetIndexPathFromDragIndexPath:(id)arg0 targetIndexPath:(id)arg1 ;
-(id)_rightBarItemsForMode:(NSUInteger)arg0 ;
-(id)_toolBarItemsForMode:(NSUInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)focusedIndexPath;
-(id)init;
-(id)initWithDataSource:(id)arg0 progressManager:(id)arg1 ;
-(id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg0 ;
-(id)ppt_bestPersonForBootstrap;
-(id)ppt_indexPathOfPersonWithMostAssets;
-(id)ppt_indexPathsForPeopleThatCanChangeToType:(NSInteger)arg0 ;
-(id)ppt_randomPerson;
-(id)px_navigationDestination;
-(id)selectionModeTitle;
-(id)swipeSelectionManager:(id)arg0 indexPathSetFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)swipeSelectionManager:(id)arg0 itemIndexPathAtLocation:(struct CGPoint )arg1 ;
-(struct CGSize )_itemSizeForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_addFavoritesLeadingFocusGuideForCell:(id)arg0 ;
-(void)_addFavoritesTrailingFocusGuideForCell:(id)arg0 ;
-(void)_animateCellAtIndexPathToDefaultState:(id)arg0 ;
-(void)_applyChangeDetailsArrayOnCollectionView:(id)arg0 ;
-(void)_changePersonsAtIndexPaths:(id)arg0 toPersonType:(NSInteger)arg1 ;
-(void)_changeSelectedIndexesToPersonType:(NSInteger)arg0 ;
-(void)_formattingButtonWithBackground:(id)arg0 ;
-(void)_handleToolbarFavoriteAction:(id)arg0 ;
-(void)_handleToolbarMergeAction:(id)arg0 ;
-(void)_handleToolbarRemoveAction:(id)arg0 ;
-(void)_performMerge:(BOOL)arg0 targetPerson:(id)arg1 dragPerson:(id)arg2 ;
-(void)_progressChanged:(id)arg0 ;
-(void)_resetHomeIfNeeded;
-(void)_selectAction:(id)arg0 ;
-(void)_showPeopleViewController;
-(void)_startProgressMonitoring;
-(void)_stopProgressMonitoring;
-(void)_updateFavoritesFocusGuidesForAddedCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_updateFavoritesFocusGuidesForRemovedCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_updateMeHeaderVisibilityIfNeeded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateNavigationItem;
-(void)_updateToolbarItemsForIndexPaths:(id)arg0 ;
-(void)_updateVisibleCellsForSelectionMode:(NSUInteger)arg0 ;
-(void)collectionView:(id)arg0 didBeginMergeWithDragIndexPath:(id)arg1 targetIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didCancelMergeWithDragIndexPath:(id)arg1 targetIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didMergeDragIndexPath:(id)arg1 targetIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionViewDidEndDrag:(id)arg0 ;
-(void)collectionViewDidEndInteractiveMode:(id)arg0 ;
-(void)collectionViewDidLayout:(id)arg0 ;
-(void)commonInit;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)enterSelectionModeWithSelectionHandler:(id)arg0 ;
-(void)handleMoveFromIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)handleReorderingGesture:(id)arg0 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)peopleSectionedDataSource:(id)arg0 didApplyIncrementalChanges:(id)arg1 ;
-(void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)ppt_changeIndexPaths:(id)arg0 toType:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)removePerson:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)showDetailsForMemberAtIndexPath:(id)arg0 ;
-(void)showPerson:(id)arg0 ;
-(void)statusDebugRecognizerTapped:(id)arg0 ;
-(void)swipeSelectionManager:(id)arg0 didSelectIndexPaths:(id)arg1 ;
-(void)toggleFavorite:(id)arg0 ;
-(void)toggleFavoriteForCell:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavTitleForIndexes:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif