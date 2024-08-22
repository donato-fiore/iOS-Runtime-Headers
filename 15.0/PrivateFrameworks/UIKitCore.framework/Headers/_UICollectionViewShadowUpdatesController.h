// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWSHADOWUPDATESCONTROLLER_H
#define _UICOLLECTIONVIEWSHADOWUPDATESCONTROLLER_H

@class NSMutableArray, NSString, NSPointerArray;
@protocol UICollectionViewDragDestination_Internal;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "_UIDataSourceSnapshotter.h"
#import "_UIDataSourceUpdateMap.h"

@interface _UICollectionViewShadowUpdatesController : NSObject <UICollectionViewDragDestination_Internal>



@property (retain, nonatomic) NSMutableArray *_shadowUpdates; // ivar: __shadowUpdates
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // ivar: _initialSnapshot
@property (retain, nonatomic) NSPointerArray *rebaseObservers; // ivar: _rebaseObservers
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // ivar: _updateMap


-(BOOL)_collectionView:(id)arg0 canEditItemAtIndexPath:(id)arg1 ;
-(BOOL)_collectionView:(id)arg0 canHandleDropSesson:(id)arg1 ;
-(BOOL)_collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)_collectionView:(id)arg0 dragSessionSupportsSystemDrag:(id)arg1 ;
-(BOOL)_collectionView:(id)arg0 prefersFullSizePreviewsForDragSession:(id)arg1 ;
-(BOOL)_collectionView:(id)arg0 shouldApplyTransitionContentOffset:(struct CGPoint )arg1 contentSize:(struct CGSize )arg2 ;
-(BOOL)_collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg0 ;
-(BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
-(BOOL)collectionView:(id)arg0 canEditItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSesson:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canPerformAction:(SEL)arg1 forItemAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)collectionView:(id)arg0 dragSessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 dragSessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 selectionFollowsFocusForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldShowMenuForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)collectionView:(id)arg0 shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 tableLayout:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldRebaseForUpdates;
-(CGFloat)collectionView:(id)arg0 heightForFooterViewInTableLayout:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 heightForHeaderViewInTableLayout:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 tableLayout:(id)arg1 estimatedHeightForFooterInSection:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 tableLayout:(id)arg1 estimatedHeightForHeaderInSection:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 tableLayout:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(CGFloat)collectionView:(id)arg0 tableLayout:(id)arg1 heightForFooterInSection:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 tableLayout:(id)arg1 heightForHeaderInSection:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 tableLayout:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)collectionView:(id)arg0 tableLayout:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 tableLayout:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)sectionIndexAfterShadowUpdates:(NSInteger)arg0 ;
-(NSInteger)sectionIndexAfterShadowUpdates:(NSInteger)arg0 allowingAppendingInserts:(BOOL)arg1 ;
-(NSInteger)sectionIndexBeforeShadowUpdates:(NSInteger)arg0 ;
-(id)_coalesceUpdatesIfPossible:(id)arg0 ;
-(id)_collectionView:(id)arg0 accessoriesForContextMenuWithConfiguration:(id)arg1 layoutAnchor:(struct ? )arg2 ;
-(id)_collectionView:(id)arg0 dragDestinationTargetIndexPathForProposedIndexPath:(id)arg1 currentIndexPath:(id)arg2 dropSession:(id)arg3 ;
-(id)_collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg0 flowLayoutRowAlignmentOptionsForSection:(NSInteger)arg1 ;
-(id)_collectionView:(id)arg0 indexPathForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)_collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg0 layout:(id)arg1 flowLayoutRowAlignmentOptionsForSection:(NSInteger)arg2 ;
-(id)_collectionView:(id)arg0 layout:(id)arg1 sizesForItemsInSection:(NSInteger)arg2 ;
-(id)_collectionView:(id)arg0 liftingPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)_collectionView:(id)arg0 sceneActivationConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)_collectionView:(id)arg0 sectionIndexTitlesTrimmedToCount:(NSUInteger)arg1 ;
-(id)_collectionView:(id)arg0 styleForContextMenuWithConfiguration:(id)arg1 ;
-(id)_collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg0 templateLayoutCellForCellsWithReuseIdentifier:(id)arg1 ;
-(id)_findInsertShadowUpdateForFinalIndexPath:(id)arg0 ;
-(id)_findShadowUpdateForIdentifier:(id)arg0 inShadowUpdates:(id)arg1 ;
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg0 ;
-(id)_indexPathsBeforeShadowUpdates:(id)arg0 ;
-(id)_rebasedShadowUpdatesForUpdate:(id)arg0 initialSnapshot:(id)arg1 shadowUpdates:(id)arg2 ;
-(id)_rebasedUpdateMapForUpdate:(id)arg0 ;
-(id)_sectionIndexTitlesForCollectionView:(id)arg0 ;
-(id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg0 ;
-(id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg0 shadowUpdates:(id)arg1 ;
-(id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dragPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 indexPathForIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 sceneActivationConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 tableLayout:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 tableLayout:(id)arg1 leadingSwipeActionsForRowAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 tableLayout:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 tableLayout:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg1 atCurrentIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg0 transitionLayoutForOldLayout:(id)arg1 newLayout:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)computeRevertShadowUpdates;
-(id)indexPathAfterShadowUpdates:(id)arg0 ;
-(id)indexPathAfterShadowUpdates:(id)arg0 allowingAppendingInserts:(BOOL)arg1 ;
-(id)indexPathBeforeShadowUpdates:(id)arg0 ;
-(id)indexPathForElementWithModelIdentifier:(id)arg0 inView:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)indexTitlesForCollectionView:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 ;
-(id)modelIdentifierForElementAtIndexPath:(id)arg0 inView:(id)arg1 ;
-(id)shadowUpdates;
-(struct CGPoint )_collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_collectionView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)_collectionView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)_collectionView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)_collectionView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)_collectionView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)_collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)_collectionView:(id)arg0 orthogonalScrollViewDidScroll:(id)arg1 section:(NSInteger)arg2 ;
-(void)_collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)_collectionView:(id)arg0 willLayoutCell:(id)arg1 usingTemplateLayoutCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)_collectionView:(id)arg0 willPerformUpdates:(id)arg1 ;
-(void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg0 ;
-(void)_regenerateUpdateMap;
-(void)_updateCellIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;
-(void)addRebaseObserver:(id)arg0 ;
-(void)appendShadowUpdate:(id)arg0 ;
-(void)collectionView:(id)arg0 cancelPrefetchingForItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 performAction:(SEL)arg1 forItemAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 tableLayout:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 tableLayout:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 tableLayout:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 tableLayout:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didRebaseWithNewBaseUpdateMap:(id)arg0 ;
-(void)rebaseForUpdates:(id)arg0 notifyRebaseObservers:(BOOL)arg1 ;
-(void)reset;


@end


#endif