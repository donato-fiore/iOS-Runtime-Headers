// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLISTMODEL_H
#define SBICONLISTMODEL_H

@class NSHashTable, NSMutableArray, NSString, NSArray, NSSet, NSDate;
@protocol SBIconIndexMutableListObserver, SBIconListModelObserver, SBTreeNode, SBIconIndexNode, NSFastEnumeration, NSCopying, SBIconListModelDelegate;

#import <Foundation/Foundation.h>

#import "SBIconIndexMutableList.h"
#import "SBRotatedIconListModel.h"
#import "_SBIconListModelTransaction.h"
#import "SBIcon.h"
#import "SBFolder.h"

@interface SBIconListModel : NSObject <SBIconIndexMutableListObserver, SBIconListModelObserver, SBTreeNode, SBIconIndexNode, NSFastEnumeration, NSCopying>

 {
    SBIconIndexMutableList *_icons;
    SBRotatedIconListModel *_rotatedIcons;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    NSMutableArray *_recordedRotatedListObserverCallbacks;
    BOOL _iconStateIsDirty;
    unsigned short _layoutInvalidations;
    NSString *_nodeIdentifier;
}


@property (retain, nonatomic) _SBIconListModelTransaction *activeTransaction; // ivar: _activeTransaction
@property (nonatomic) NSUInteger activeTransactionCount; // ivar: _activeTransactionCount
@property (nonatomic) NSUInteger allowedGridSizeClasses; // ivar: _allowedGridSizeClasses
@property (nonatomic) BOOL allowsRotatedLayout; // ivar: _allowsRotatedLayout
@property (readonly, nonatomic) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBIconListModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBIcon *firstIcon;
@property (copy, nonatomic) NSSet *focusModeIdentifiers; // ivar: _focusModeIdentifiers
@property (readonly, weak, nonatomic) SBFolder *folder; // ivar: _folder
@property (nonatomic) SBHIconGridSize gridSize; // ivar: _gridSize
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=isHiddenByUser) BOOL hiddenByUser;
@property (copy, nonatomic) NSDate *hiddenDate; // ivar: _hiddenDate
@property (readonly, nonatomic) SBHIconGridSizeClassSizes iconGridSizeClassSizes; // ivar: _gridSizeClassSizes
@property (nonatomic) NSUInteger iconLayoutBehavior; // ivar: _iconLayoutBehavior
@property (copy, nonatomic) NSArray *icons;
@property (readonly, nonatomic) SBIcon *lastIcon;
@property (readonly, copy, nonatomic) NSString *layoutDescription;
@property (readonly, nonatomic) NSUInteger layoutInvalidations;
@property (nonatomic, getter=isLayoutReversibleWhenRotated) BOOL layoutReversibleWhenRotated; // ivar: _layoutReversibleWhenRotated
@property (readonly, nonatomic) NSUInteger maxNumberOfIcons;
@property (readonly, nonatomic) NSUInteger numberOfIcons;
@property (readonly, nonatomic) NSUInteger numberOfNonPlaceholderIcons;
@property (readonly, nonatomic) NSUInteger numberOfUsedColumns;
@property (readonly, nonatomic) NSUInteger numberOfUsedRows;
@property (readonly, nonatomic) NSUInteger numberOfUsedSlots;
@property (nonatomic) NSUInteger overflowSlotCount; // ivar: _overflowSlotCount
@property (weak, nonatomic) NSObject<SBTreeNode> *parent; // ivar: _parent
@property (nonatomic) NSUInteger rotatedLayoutClusterGridSizeClass; // ivar: _rotatedLayoutClusterGridSizeClass
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)isListModelNodeIdentifier:(id)arg0 ;
+(BOOL)supportsRotatedLayout;
+(id)iconGridCellInfoForIcons:(id)arg0 gridSize:(struct SBHIconGridSize )arg1 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg2 iconLayoutBehavior:(NSUInteger)arg3 referenceIconOrder:(id)arg4 options:(NSUInteger)arg5 ;
+(id)listModelNodeIdentifierForUniqueIdentifier:(id)arg0 ;
+(id)movedIconsWithOriginalOrder:(id)arg0 newOrder:(id)arg1 ;
+(void)applyIconLayoutFromGridCellInfo:(id)arg0 inGridRange:(struct SBHIconGridRange )arg1 iconOrder:(id)arg2 toGridCellInfo:(id)arg3 inGridRange:(struct SBHIconGridRange )arg4 iconOrder:(id)arg5 ;
+(void)layOutIcons:(id)arg0 atIndexes:(id)arg1 inGridCellInfo:(id)arg2 startingAtGridCellIndex:(NSUInteger)arg3 gridSize:(struct SBHIconGridSize )arg4 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg5 iconLayoutBehavior:(NSUInteger)arg6 referenceIconOrder:(id)arg7 options:(NSUInteger)arg8 ;
-(BOOL)_canClusterIconsUsingSizeClass:(NSUInteger)arg0 ;
-(BOOL)_moveContainedIconLargerThanQuadsIfNecessary:(id)arg0 toGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(BOOL)_moveContainedIconWithinAffectedQuadsIfNecessary:(id)arg0 toGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(BOOL)_validateIconsInArray:(id)arg0 matchArray:(id)arg1 ;
-(BOOL)addIcon:(id)arg0 ;
-(BOOL)addIcon:(id)arg0 gridCellInfoOptions:(NSUInteger)arg1 mutationOptions:(NSUInteger)arg2 ;
-(BOOL)addIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)allowsAddingIcon:(id)arg0 ;
-(BOOL)allowsAddingIcon:(id)arg0 ignoringPlaceholders:(BOOL)arg1 ;
-(BOOL)allowsAddingIconCount:(NSUInteger)arg0 ;
-(BOOL)allowsAddingIcons:(id)arg0 ;
-(BOOL)allowsAddingIcons:(id)arg0 ignoringPlaceholders:(BOOL)arg1 ;
-(BOOL)canBounceIcon:(id)arg0 ;
-(BOOL)containsNodeIdentifier:(id)arg0 ;
-(BOOL)containsWidgetIconWithExtensionBundleIdentifier:(id)arg0 ;
-(BOOL)directlyContainsIcon:(id)arg0 ;
-(BOOL)directlyContainsIconOfClass:(Class)arg0 ;
-(BOOL)directlyContainsIconWithIdentifier:(id)arg0 ;
-(BOOL)directlyContainsIconsPassingTest:(id)arg0 ;
-(BOOL)directlyContainsLeafIconWithIdentifier:(id)arg0 ;
-(BOOL)directlyContainsNonDefaultSizeClassIcon;
-(BOOL)getIconGridRange:(struct SBHIconGridRange *)arg0 forGridCellIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(BOOL)isAllowedToContainIcon:(id)arg0 ;
-(BOOL)isAllowedToContainIcons:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEmptyIgnoringPlaceholders;
-(BOOL)isFull;
-(BOOL)isFullIncludingPlaceholders;
-(BOOL)isGridLayoutValid;
-(BOOL)isGridLayoutValid:(id)arg0 ;
-(BOOL)isGridLayoutValidWithOptions:(NSUInteger)arg0 ;
-(BOOL)isIconStateDirty;
-(BOOL)isValidGridCellIndex:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(BOOL)isValidGridCellIndex:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isValidGridRange:(struct SBHIconGridRange )arg0 gridCellInfo:(id)arg1 ;
-(BOOL)isValidGridRange:(struct SBHIconGridRange )arg0 options:(NSUInteger)arg1 ;
-(NSInteger)_moveIcon:(id)arg0 byClusteringForSizeClass:(NSUInteger)arg1 toGridCellIndex:(NSUInteger)arg2 gridCellInfoOptions:(NSUInteger)arg3 ;
-(NSUInteger)_iconIndexForMovingIcon:(id)arg0 toGridCellIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 aboveIconAtGridCellIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 aboveIconAtGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 afterIconAtGridCellIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 afterIconAtGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 atGridCellIndex:(NSUInteger)arg1 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 atGridCellIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 atGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 belowIconAtGridCellIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 belowIconAtGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 gridCellInfo:(id)arg1 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countOfDirectlyContainedIconsPassingTest:(id)arg0 ;
-(NSUInteger)firstFreeGridCellIndexOfRangeOfSize:(struct SBHIconGridSize )arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(NSUInteger)firstFreeGridCellIndexOfRangeOfSizeClass:(NSUInteger)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(NSUInteger)firstFreeGridCellIndexWithOptions:(NSUInteger)arg0 ;
-(NSUInteger)firstFreeSlotIndex;
-(NSUInteger)gridCellIndexAboveIconAtIndex:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(NSUInteger)gridCellIndexAboveIconAtIndex:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)gridCellIndexBelowIconAtIndex:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(NSUInteger)gridCellIndexBelowIconAtIndex:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)gridCellIndexForCoordinate:(struct SBIconCoordinate )arg0 gridCellInfo:(id)arg1 ;
-(NSUInteger)gridCellIndexForCoordinate:(struct SBIconCoordinate )arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(NSUInteger)gridCellIndexForIcon:(id)arg0 gridCellInfo:(id)arg1 ;
-(NSUInteger)gridCellIndexForIcon:(id)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(NSUInteger)gridCellIndexForIconIndex:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(NSUInteger)gridCellIndexForIconIndex:(NSUInteger)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(NSUInteger)indexForIcon:(id)arg0 ;
-(NSUInteger)indexForIconWithIdentifier:(id)arg0 ;
-(NSUInteger)indexOfDirectlyContainedIconPassingTest:(id)arg0 ;
-(NSUInteger)largestClusteringSizeClassWithOptions:(NSUInteger)arg0 ;
-(NSUInteger)numberOfFreeSlots;
-(NSUInteger)removeIconFromOtherPositionsInHierarchy:(id)arg0 forInsertingAtIndex:(NSUInteger)arg1 removeIfAlreadyContained:(BOOL)arg2 ;
-(NSUInteger)rotatedGridCellInfoOptions:(NSUInteger)arg0 ;
-(NSUInteger)willAddIcon:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_checkAndRemoveBouncedIconsAfterChangeToIcons:(id)arg0 ignoringTrailingIconCheck:(BOOL)arg1 options:(NSUInteger)arg2 ;
-(id)_clusterIconsForSizeClass:(NSUInteger)arg0 behavior:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(id)_clusterIconsForSizeClass:(NSUInteger)arg0 behavior:(NSUInteger)arg1 gridCellInfoProvider:(id)arg2 ;
-(id)_iconAtIndex:(NSUInteger)arg0 ;
-(id)_reorderedIconsWithClusterSizeClass:(NSUInteger)arg0 forRotationWithReorderingInfo:(struct SBIconListModelRotationReorderingInfo )arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(id)_rotatedIconListModel;
-(id)_rotatedIcons;
-(id)_rotatedIconsFromList:(id)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(id)_rotatedIconsIfApplicable;
-(id)_targetListForGridCellInfoOptions:(NSUInteger)arg0 ;
-(id)_updateModelByRepairingGapsIfNecessary;
-(id)_updateModelByRepairingGapsIfNecessaryAvoidingIcons:(id)arg0 ;
-(id)addIcons:(id)arg0 ;
-(id)addIcons:(id)arg0 options:(NSUInteger)arg1 ;
-(id)allowedGapsLayoutDescription;
-(id)allowedIconsForByReplacingContentsWithIcons:(id)arg0 ;
-(id)allowedIconsForIcons:(id)arg0 ;
-(id)allowedIconsForIcons:(id)arg0 ignoringPlaceholders:(BOOL)arg1 ;
-(id)changeGridSize:(struct SBHIconGridSize )arg0 options:(NSUInteger)arg1 ;
-(id)changeGridSizeClassOfContainedIcon:(id)arg0 toGridSizeClass:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(id)containedNodeIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)directlyContainedIconPassingTest:(id)arg0 ;
-(id)directlyContainedIconWithIdentifier:(id)arg0 ;
-(id)directlyContainedIconsPassingTest:(id)arg0 ;
-(id)gridCellInfoForGridSize:(struct SBHIconGridSize )arg0 options:(NSUInteger)arg1 ;
-(id)gridCellInfoWithOptions:(NSUInteger)arg0 ;
-(id)iconAtCoordinate:(struct SBIconCoordinate )arg0 gridCellInfo:(id)arg1 ;
-(id)iconAtCoordinate:(struct SBIconCoordinate )arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(id)iconAtGridCellIndex:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(id)iconAtGridCellIndex:(NSUInteger)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(id)iconAtIndex:(NSUInteger)arg0 ;
-(id)iconGridCellInfoBySimulatingInsertionOfIcons:(id)arg0 ignoringPlaceholders:(BOOL)arg1 gridCellInfoOptions:(NSUInteger)arg2 iconOrder:(*id)arg3 ;
-(id)iconsAtGridCellIndexes:(id)arg0 gridCellInfo:(id)arg1 ;
-(id)iconsAtIndexes:(id)arg0 ;
-(id)iconsForGridRange:(struct SBHIconGridRange )arg0 gridCellInfo:(id)arg1 ;
-(id)iconsForGridRange:(struct SBHIconGridRange )arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(id)iconsInGridColumn:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(id)iconsInGridColumnRange:(struct _NSRange )arg0 gridCellInfo:(id)arg1 ;
-(id)iconsInGridRow:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(id)iconsInRange:(struct _NSRange )arg0 ;
-(id)iconsOfClass:(Class)arg0 ;
-(id)iconsThatAreAllowedToBeContainedInIcons:(id)arg0 ;
-(id)iconsWithGridCellInfoOptions:(NSUInteger)arg0 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg0 prefixPath:(id)arg1 ;
-(id)indexesOfDirectlyContainedIconsPassingTest:(id)arg0 ;
-(id)init;
-(id)initWithFolder:(id)arg0 gridSize:(struct SBHIconGridSize )arg1 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg2 ;
-(id)initWithFolder:(id)arg0 maxIconCount:(NSUInteger)arg1 ;
-(id)initWithIconListModel:(id)arg0 copyLeafIcons:(BOOL)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 folder:(id)arg1 gridSize:(struct SBHIconGridSize )arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg3 ;
-(id)insertIcon:(id)arg0 afterIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(id)insertIcon:(id)arg0 atCoordinate:(struct SBIconCoordinate )arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(id)insertIcon:(id)arg0 atGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(id)insertIcon:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)insertIcon:(id)arg0 atIndex:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)insertIcon:(id)arg0 beforeIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(id)insertIcon:(id)arg0 relativeToIcon:(id)arg1 positionDelta:(NSInteger)arg2 gridCellInfoOptions:(NSUInteger)arg3 mutationOptions:(NSUInteger)arg4 ;
-(id)insertIconWhilePreservingQuads:(id)arg0 toGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(id)insertIcons:(id)arg0 atIndex:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)lastDirectlyContainedLeafIconWithApplicationBundleIdentifier:(id)arg0 ;
-(id)layoutDescriptionWithOptions:(NSUInteger)arg0 ;
-(id)nodeDescriptionWithPrefix:(id)arg0 ;
-(id)nodeIdentifier;
-(id)nodesAlongIndexPath:(id)arg0 consumedIndexes:(NSUInteger)arg1 ;
-(id)objectWithUniqueIdentifier:(id)arg0 ;
-(id)prependIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)repairModelByEliminatingGapsInIcons:(id)arg0 avoidingIcons:(id)arg1 ;
-(id)replaceIcon:(id)arg0 withIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(id)replaceIcon:(id)arg0 withIcon:(id)arg1 options:(NSUInteger)arg2 ;
-(id)replaceIcon:(id)arg0 withIcons:(id)arg1 options:(NSUInteger)arg2 ;
-(id)replaceIconAtIndex:(NSUInteger)arg0 withIcon:(id)arg1 options:(NSUInteger)arg2 ;
-(id)reversedOrderLayoutDescription;
-(id)rotatedLayoutDescription;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct SBHIconGridRange )gridRangeForIcon:(id)arg0 gridCellInfo:(id)arg1 ;
-(struct SBHIconGridRange )gridRangeForIcon:(id)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(struct SBHIconGridSize )gridSizeForGridSizeClass:(NSUInteger)arg0 ;
-(struct SBHIconGridSize )gridSizeWithOptions:(NSUInteger)arg0 ;
-(struct SBHIconGridSize )rotatedGridSizeWithOptions:(NSUInteger)arg0 ;
-(struct SBIconCoordinate )coordinateForGridCellIndex:(NSUInteger)arg0 gridCellInfo:(id)arg1 ;
-(struct SBIconCoordinate )coordinateForGridCellIndex:(NSUInteger)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(struct SBIconListModelRotationReorderingInfo )_rotationReorderingInfoWithClusterSizeClass:(NSUInteger)arg0 gridCellInfoOptions:(NSUInteger)arg1 ;
-(struct _NSRange )rangeOfDirectlyContainedIconsInRange:(struct _NSRange )arg0 passingTest:(id)arg1 ;
-(void)_beginDelayingForwardingObserverCallbacksFromRotatedListWithOptions:(NSUInteger)arg0 ;
-(void)_changeFolderDuringCopy:(id)arg0 ;
-(void)_coalesceChangesWithRequestID:(id)arg0 changeBlock:(id)arg1 ;
-(void)_endDelayingForwardingObserverCallbacksFromRotatedList;
-(void)_ensureRotatedIcons;
-(void)_invalidateLayoutWithGridCellInfoOptions:(NSUInteger)arg0 mutationOptions:(NSUInteger)arg1 ;
-(void)_makeRotatedIconsListModelWithIcons:(id)arg0 ;
-(void)_moveAllNonDefaultSizedIconsToBeginning;
-(void)_moveDefaultSizedIconsOfCountIntoContiguousLeadingNonDefaultSizedIcons:(NSUInteger)arg0 ;
-(void)_notifyListObserver:(id)arg0 didAddIcons:(id)arg1 didRemoveIcons:(id)arg2 movedIcons:(id)arg3 didReplaceIcon:(id)arg4 withIcon:(id)arg5 ;
-(void)_notifyListObservers:(id)arg0 ;
-(void)_notifyListObserversDidAddIcon:(id)arg0 ;
-(void)_notifyListObserversDidAddIcons:(id)arg0 didRemoveIcons:(id)arg1 movedIcons:(id)arg2 ;
-(void)_notifyListObserversDidAddIcons:(id)arg0 didRemoveIcons:(id)arg1 movedIcons:(id)arg2 didReplaceIcon:(id)arg3 withIcon:(id)arg4 ;
-(void)_notifyListObserversDidMoveIcon:(id)arg0 ;
-(void)_notifyListObserversDidRemoveIcon:(id)arg0 ;
-(void)_notifyListObserversDidReplaceIcon:(id)arg0 withIcon:(id)arg1 ;
-(void)_notifyListObserversUsingRecordedCallback:(id)arg0 ;
-(void)_notifyListObserversWillAddIcon:(id)arg0 ;
-(void)_reorderIconsAfterUnclusteringWithClusterSizeClass:(NSUInteger)arg0 forRotationWithReorderingInfo:(struct SBIconListModelRotationReorderingInfo )arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(void)_reorderIconsWithClusterSizeClass:(NSUInteger)arg0 forRotationWithReorderingInfo:(struct SBIconListModelRotationReorderingInfo )arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(void)_rotatedList:(id)arg0 didRecordObserverCallback:(id)arg1 ;
-(void)_setRotatedIcons:(id)arg0 ;
-(void)_unclusterIcons:(id)arg0 ofSizeClass:(NSUInteger)arg1 baseGridCellInfoOptions:(NSUInteger)arg2 gridCellInfoProvider:(id)arg3 ;
-(void)_unclusterIcons:(id)arg0 ofSizeClass:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 ;
-(void)_updateRotatedIconsUsingBlock:(id)arg0 ;
-(void)_updateRotatedIconsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)addIconsOfClass:(Class)arg0 toSet:(id)arg1 ;
// -(void)addIconsPassingTest:(id)arg0 toSet:(unk)arg1  ;
-(void)addListObserver:(id)arg0 ;
-(void)addNodeObserver:(id)arg0 ;
-(void)ancestryDidChange;
-(void)clearParentNodeForIconIfNecessary:(id)arg0 ;
-(void)didAddIcon:(id)arg0 ;
-(void)didRemoveIcon:(id)arg0 ;
-(void)enumerateFolderIconsUsingBlock:(id)arg0 ;
-(void)enumerateIconsUsingBlock:(id)arg0 ;
-(void)enumerateIconsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)iconList:(id)arg0 willAddIcon:(id)arg1 ;
-(void)iconListIconStateDidDirty:(id)arg0 ;
-(void)list:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)list:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)listDidMoveNodes:(id)arg0 ;
-(void)markIconStateClean;
-(void)markIconStateDirty;
-(void)markIconStateDirtyWithOptions:(NSUInteger)arg0 ;
-(void)moveContainedIcon:(id)arg0 aboveIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(void)moveContainedIcon:(id)arg0 afterIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(void)moveContainedIcon:(id)arg0 beforeIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(void)moveContainedIcon:(id)arg0 belowIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(void)moveContainedIcon:(id)arg0 toGridCellIndex:(NSUInteger)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(void)moveContainedIcon:(id)arg0 toIndex:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(void)performChangesByClusteringForSizeClass:(NSUInteger)arg0 behavior:(NSUInteger)arg1 withGridCellInfoOptions:(NSUInteger)arg2 block:(id)arg3 ;
-(void)performChangesByPreservingOrderOfDefaultSizedIcons:(id)arg0 ;
-(void)performChangesByPreservingPositionsOfIconsLargerThanSizeClass:(NSUInteger)arg0 block:(id)arg1 ;
-(void)removeAllIcons;
-(void)removeIcon:(id)arg0 ;
-(void)removeIcon:(id)arg0 gridCellInfoOptions:(NSUInteger)arg1 mutationOptions:(NSUInteger)arg2 ;
-(void)removeIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(void)removeIconAtIndex:(NSUInteger)arg0 ;
-(void)removeIconAtIndex:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(void)removeIconFromOtherPositionsInHierarchy:(id)arg0 ;
-(void)removeIcons:(id)arg0 ;
-(void)removeIcons:(id)arg0 options:(NSUInteger)arg1 ;
-(void)removeLastIcon;
-(void)removeListObserver:(id)arg0 ;
-(void)removeNodeObserver:(id)arg0 ;
-(void)setIconOrderFromGridCellInfo:(id)arg0 ;
-(void)setIconOrderFromGridCellInfo:(id)arg0 referenceIconOrder:(id)arg1 ;
-(void)sortUsingComparator:(id)arg0 ;
-(void)sortUsingSelector:(SEL)arg0 ;
-(void)swapContainedIcon:(id)arg0 withContainedIcon:(id)arg1 gridCellInfoOptions:(NSUInteger)arg2 mutationOptions:(NSUInteger)arg3 ;
-(void)updateForFocusModeActivated:(BOOL)arg0 wantsListVisible:(BOOL)arg1 ;
-(void)updateParentNodeForIconIfNecessary:(id)arg0 ;


@end


#endif