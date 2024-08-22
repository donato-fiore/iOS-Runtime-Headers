// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWDRAGANDDROPCONTROLLER_H
#define _UICOLLECTIONVIEWDRAGANDDROPCONTROLLER_H

@class UICollectionViewShadowUpdatesController, NSMutableArray, NSMapTable, NSMutableDictionary, NSUUID, NSString, NSIndexPath, NSArray, NSMutableSet;
@protocol _UICollectionViewPlaceholderContextDelegate, _UICollectionViewDragSourceControllerDelegate, _UICollectionViewDragDestinationControllerDelegate, _UICollectionViewDropCoordinator, UICollectionViewDropCoordinator, UIDropSession;


#import "_UICollectionViewPlaceholderContext.h"
#import "_UIDropAnimationHandlers.h"
#import "_UICollectionViewDragDestinationController.h"
#import "UICollectionViewDropProposal.h"
#import "_UICollectionViewDragSourceController.h"

@interface _UICollectionViewDragAndDropController : UICollectionViewShadowUpdatesController <_UICollectionViewPlaceholderContextDelegate, _UICollectionViewDragSourceControllerDelegate, _UICollectionViewDragDestinationControllerDelegate, _UICollectionViewDropCoordinator, UICollectionViewDropCoordinator>



@property (retain, nonatomic) NSMutableArray *_reorderedItems; // ivar: __reorderedItems
@property (retain, nonatomic) NSMapTable *cellAppearanceStatesByCellPointers; // ivar: _cellAppearanceStatesByCellPointers
@property (retain, nonatomic) NSMutableDictionary *cellAppearanceStatesByIndexPaths; // ivar: _cellAppearanceStatesByIndexPaths
@property (retain, nonatomic) NSMutableArray *cellsDeferredForReuse; // ivar: _cellsDeferredForReuse
@property (retain, nonatomic) NSUUID *currentDropInsertionShadowUpdateIdentifier; // ivar: _currentDropInsertionShadowUpdateIdentifier
@property (retain, nonatomic) _UICollectionViewPlaceholderContext *currentlyInsertingPlaceholderContext; // ivar: _currentlyInsertingPlaceholderContext
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIDropAnimationHandlers *defaultAnimationHandlers; // ivar: _defaultAnimationHandlers
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UICollectionViewDragDestinationController *destinationController; // ivar: _destinationController
@property (readonly, nonatomic) NSIndexPath *destinationIndexPath;
@property (retain, nonatomic) NSMutableArray *dropCoordinatorItems; // ivar: _dropCoordinatorItems
@property (retain, nonatomic) NSMapTable *dropCoordinatorItemsMap; // ivar: _dropCoordinatorItemsMap
@property (readonly, nonatomic) UICollectionViewDropProposal *dropProposal;
@property (readonly, nonatomic) NSObject<UIDropSession> *dropSession;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableSet *placeholderContexts; // ivar: _placeholderContexts
@property (retain, nonatomic) NSMutableDictionary *placeholderContextsByIndexPath; // ivar: _placeholderContextsByIndexPath
@property (readonly, nonatomic) UICollectionViewDropProposal *proposal;
@property (readonly, nonatomic) NSUInteger reorderedItemCount;
@property (readonly, nonatomic) NSArray *reorderedItems;
@property (readonly, nonatomic) NSUInteger reorderingCapabilities;
@property (readonly, nonatomic) NSObject<UIDropSession> *session;
@property (nonatomic) int sessionKind; // ivar: _sessionKind
@property (nonatomic) NSInteger sessionRefCount; // ivar: _sessionRefCount
@property (retain, nonatomic) _UICollectionViewDragSourceController *sourceController; // ivar: _sourceController
@property (readonly) Class superclass;


-(BOOL)_deleteShadowUpdateWithIdentifier:(id)arg0 ;
-(BOOL)_hasReorderingMoved;
-(BOOL)_isReordering;
-(BOOL)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg0 ;
-(BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
-(BOOL)beginReorderingForItemAtIndexPath:(id)arg0 cell:(id)arg1 ;
-(BOOL)cancelReorderingShouldRevertOrdering;
-(BOOL)cellShouldRemainInHierarchy:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)hasShadowUpdates;
-(BOOL)isCellPerformingLegacyReorderingAtIndexPath:(id)arg0 ;
-(BOOL)isDragDestinationInteractivelyReordering;
-(BOOL)placeholderContext:(id)arg0 didCommitInsertionWithDataSourceUpdates:(id)arg1 ;
-(BOOL)updateWillCauseInternalInconsistency:(id)arg0 ;
-(NSInteger)_determineAppearanceForItemAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_cellAppearanceStateForCell:(id)arg0 addIfNotFound:(BOOL)arg1 ;
-(id)_cellAppearanceStateForIndexPath:(id)arg0 ;
-(id)_cellForDropCoordinatorItem:(id)arg0 ;
-(id)_dropCoordinatorItemForDragItem:(id)arg0 ;
-(id)_dropCoordinatorItemForIndexPath:(id)arg0 ;
-(id)_indexPathForCellAppearanceState:(id)arg0 ;
-(id)_presentationIndexPathForIndexPath:(id)arg0 allowingAppendingInserts:(BOOL)arg1 ;
-(id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg0 ;
-(id)cancelReordering:(SEL)arg0 ;
-(id)dataSourceIndexPathForPresentationIndexPath:(id)arg0 ;
-(id)dropItem:(id)arg0 intoItemAtIndexPath:(id)arg1 rect:(struct CGRect )arg2 ;
-(id)dropItem:(id)arg0 toItemAtIndexPath:(id)arg1 ;
-(id)dropItem:(id)arg0 toPlaceholder:(id)arg1 ;
-(id)dropItem:(id)arg0 toPlaceholderInsertedAtIndexPath:(id)arg1 withReuseIdentifier:(id)arg2 cellUpdateHandler:(id)arg3 ;
-(id)dropItem:(id)arg0 toTarget:(id)arg1 ;
-(id)dropToPlaceholderCellAtIndexPath:(id)arg0 reuseIdentifier:(id)arg1 forDragItem:(id)arg2 cellUpdateHandler:(id)arg3 ;
-(id)dropToPlaceholderInsertedAtIndexPath:(id)arg0 reuseIdentifier:(id)arg1 forDragItem:(id)arg2 cellUpdateHandler:(id)arg3 ;
-(id)endReordering:(SEL)arg0 ;
-(id)indexPathForCurrentReorderedItem;
-(id)indexPathForDragAndDropInsertion;
-(id)indexPathForOriginalReorderedItem;
-(id)initWithCollectionView:(id)arg0 ;
-(id)insertPlaceholderForItemAtIndexPath:(id)arg0 forDragItem:(id)arg1 reuseIdentifier:(id)arg2 cellUpdateHandler:(id)arg3 ;
-(id)placeholderContextDidDismiss:(id)arg0 ;
-(id)placeholderContextForDragItem:(id)arg0 ;
-(id)presentationIndexPathForDataSourceIndexPath:(id)arg0 ;
-(id)sourceIndexPaths;
-(int)_determineSessionKind;
-(void)_addAnimationHandlers:(id)arg0 toAnimator:(id)arg1 ;
-(void)_addDropCoordinatorItem:(id)arg0 ;
-(void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg0 ;
-(void)_beginReorderingForItemAtIndexPath:(id)arg0 cell:(id)arg1 ;
-(void)_cleanupAfterOutstandingSessionCompletion;
-(void)_decrementSessionRefCount;
-(void)_incrementSessionRefCount;
-(void)_invokeAllCompletionHandlers;
-(void)_performCancelDropToIndexPath:(id)arg0 forDragItem:(id)arg1 ;
-(void)_removeAnyDeferredReuseCells;
-(void)_resetAllAnimationHandlers;
-(void)_resetAnyDragStateModifiedVisibleCells;
-(void)_rollbackCurrentDropInsertion;
-(void)_shadowUpdatesWereReverted;
-(void)_updateAppearanceForCell:(id)arg0 atIndexPath:(id)arg1 appearance:(NSInteger)arg2 ;
-(void)_updateCellAppearanceForCell:(id)arg0 appearance:(NSInteger)arg1 ;
-(void)_updateCellAppearancesForItemsAtIndexPaths:(id)arg0 ;
-(void)_updateCellIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updateReorderedCellStatesRemovingFromViewHierarchyIfRequired;
-(void)didRebaseWithNewBaseUpdateMap:(id)arg0 ;
-(void)dragDestinationController:(id)arg0 didCompleteDropAnimationForDragItem:(id)arg1 ;
-(void)dragDestinationController:(id)arg0 didPerformDropAtIndexPath:(id)arg1 ;
-(void)dragDestinationController:(id)arg0 willBeginDropAnimationForDragItem:(id)arg1 animator:(id)arg2 ;
-(void)dragDestinationController:(id)arg0 willPerformDropAtIndexPath:(id)arg1 ;
-(void)dragDestinationControllerDidConcludeDrop:(id)arg0 ;
-(void)dragDestinationControllerSessionDidEnd:(id)arg0 ;
-(void)dragDestinationControllerSessionWillBegin:(id)arg0 ;
-(void)dragSourceController:(id)arg0 didCancelLiftForItemsAtIndexPaths:(id)arg1 ;
-(void)dragSourceController:(id)arg0 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg1 ;
-(void)dragSourceController:(id)arg0 didCompleteLiftForItemsAtIndexPaths:(id)arg1 ;
-(void)dragSourceController:(id)arg0 didEndForItemsAtIndexPaths:(id)arg1 ;
-(void)dragSourceController:(id)arg0 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg1 ;
-(void)dragSourceController:(id)arg0 didUpdateItemCountOfSelectedItems:(NSInteger)arg1 ;
-(void)dragSourceController:(id)arg0 didUpdateItemsAtIndexPaths:(id)arg1 ;
-(void)dragSourceController:(id)arg0 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg1 withAnimator:(id)arg2 ;
-(void)dragSourceController:(id)arg0 willBeginLiftForItemsAtIndexPaths:(id)arg1 ;
-(void)dragSourceController:(id)arg0 willEndForItemsAtIndexPaths:(id)arg1 withDropOperation:(NSUInteger)arg2 ;
-(void)dragSourceControllerSessionWillBegin:(id)arg0 ;
-(void)dropToItemAtIndexPath:(id)arg0 forDragItem:(id)arg1 ;
-(void)dropToLocation:(struct CGPoint )arg0 inContainerView:(id)arg1 withTransform:(struct CGAffineTransform )arg2 forDragItem:(id)arg3 ;
-(void)dropToTarget:(id)arg0 forDragItem:(id)arg1 ;
-(void)placeholderContextNeedsCellUpdate:(id)arg0 ;
-(void)rebaseCellAppearanceStatesWithUpdateMap:(id)arg0 ;
-(void)reset;
-(void)transferOwnershipOfCellForDeferredReuseAfterDropAnimations:(id)arg0 ;
-(void)updateAppearanceForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)updateReorderingTargetIndexPath:(id)arg0 ;


@end


#endif