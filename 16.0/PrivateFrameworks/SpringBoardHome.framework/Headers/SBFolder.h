// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFOLDER_H
#define SBFOLDER_H

@class NSHashTable, NSMutableSet, NSCountedSet, NSString, NSArray;
@protocol SBFolderObserver, SBTreeNode, SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver, SBIconListModelDelegate, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIconIndexMutableList.h"
#import "SBIconListModel.h"
#import "SBFolderIcon.h"
#import "SBFolder.h"

@interface SBFolder : NSObject <SBFolderObserver, SBTreeNode, SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver, SBIconListModelDelegate, NSCopying, BSDescriptionProviding>

 {
    NSHashTable *_nodeObservers;
    NSHashTable *_folderObservers;
    SBIconIndexMutableList *_lists;
    BOOL _iconStateDirty;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSCountedSet *_coalesceChangesRequests;
    NSString *_nodeIdentifier;
    NSUInteger _visibleListCount;
}


@property (copy, nonatomic) NSString *badge; // ivar: _badge
@property (readonly, nonatomic) BOOL canEditDisplayName;
@property (readonly, nonatomic) BOOL canRemoveIcons;
@property (nonatomic, getter=isCancelable) BOOL cancelable; // ivar: _cancelable
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL containsNonDefaultSizedIcon; // ivar: _containsNonDefaultSizedIcon
@property (readonly, nonatomic) BOOL containsVisibleNonDefaultSizedIcon; // ivar: _containsVisibleNonDefaultSizedIcon
@property (readonly, nonatomic) BOOL containsVisibleWidgetIcon;
@property (readonly, nonatomic) BOOL containsWidgetIcon;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultDisplayName; // ivar: _defaultDisplayName
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) SBIconListModel *firstList;
@property (readonly, nonatomic) NSUInteger firstVisibleListIndex;
@property (readonly, nonatomic, getter=isFull) BOOL full;
@property (readonly, nonatomic) BOOL hasHiddenLists;
@property (readonly, nonatomic) BOOL hasMultipleVisibleLists;
@property (readonly, nonatomic) BOOL hasMultipleVisibleNonTrailingEmptyLists;
@property (readonly, nonatomic) BOOL hasVisibleLists;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger hiddenListCount;
@property (weak, nonatomic) SBFolderIcon *icon; // ivar: _icon
@property (readonly, nonatomic) NSUInteger iconCount;
@property (readonly, nonatomic) SBHIconGridSizeClassSizes iconGridSizeClassSizes; // ivar: _iconGridSizeClassSizes
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSArray *iconsInLists;
@property (readonly, nonatomic) SBIconListModel *lastList;
@property (readonly, nonatomic) NSUInteger lastVisibleListIndex;
@property (readonly, nonatomic) SBIconListModel *leastRecentlyHiddenList;
@property (nonatomic) NSUInteger listAllowedGridSizeClasses; // ivar: _listAllowedGridSizeClasses
@property (readonly, nonatomic) NSUInteger listCount;
@property (readonly, nonatomic) SBHIconGridSize listGridSize; // ivar: _listGridSize
@property (readonly, nonatomic) Class listModelClass;
@property (nonatomic) NSUInteger listRotatedLayoutClusterGridSizeClass; // ivar: _listRotatedLayoutClusterGridSizeClass
@property (nonatomic) SBHIconGridSize listWithNonDefaultSizedIconsGridSize; // ivar: _listWithNonDefaultSizedIconsGridSize
@property (readonly, copy, nonatomic) NSArray *lists;
@property (nonatomic) BOOL listsAllowRotatedLayout; // ivar: _listsAllowRotatedLayout
@property (readonly, nonatomic) NSUInteger maxListCount; // ivar: _maxListCount
@property (readonly, nonatomic) SBIconListModel *mostRecentlyHiddenList;
@property (weak, nonatomic) NSObject<SBTreeNode> *parent; // ivar: _parent
@property (readonly, nonatomic) SBFolder *parentFolder;
@property (readonly, copy, nonatomic) NSString *recursiveDescription;
@property (nonatomic) NSUInteger requiredTrailingEmptyListCount; // ivar: _requiredTrailingEmptyListCount
@property (readonly, weak, nonatomic) SBFolder *rootFolder;
@property (readonly, nonatomic) BOOL shouldRemoveWhenEmpty;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger trailingEmptyListCount;
@property (readonly, copy, nonatomic) NSArray *trailingEmptyLists;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUInteger visibleIconCount;
@property (readonly, nonatomic) NSUInteger visibleListCount;
@property (readonly, copy, nonatomic) NSArray *visibleLists;
@property (readonly, nonatomic) NSUInteger visibleWidgetIconCount; // ivar: _visibleWidgetIconCount


+(BOOL)isFolderNodeIdentifier:(id)arg0 ;
+(BOOL)isRootFolderClass;
+(NSUInteger)listModelMutationOptionsForFolderMutationOptions:(NSUInteger)arg0 ;
+(id)folderNodeIdentifierForUniqueIdentifier:(id)arg0 ;
-(BOOL)_compactLists;
-(BOOL)_compactsFirstList;
-(BOOL)_isCoalescingContentChanges;
-(BOOL)canAddIcon;
-(BOOL)canAddIcon:(id)arg0 ;
-(BOOL)canAddIconCount:(NSUInteger)arg0 ;
-(BOOL)canAddIconCount:(NSUInteger)arg0 startingAtList:(id)arg1 ;
-(BOOL)canAddIcons:(id)arg0 ;
-(BOOL)canAddIcons:(id)arg0 startingAtList:(id)arg1 ;
-(BOOL)canBounceIcon:(id)arg0 ;
-(BOOL)compactLists;
-(BOOL)containsIcon:(id)arg0 ;
-(BOOL)containsNodeIdentifier:(id)arg0 ;
-(BOOL)containsWidgetWithExtensionBundleIdentifier:(id)arg0 ;
-(BOOL)extraListContainsNodeIdentifier:(id)arg0 ;
-(BOOL)iconListModel:(id)arg0 isAllowedToContainIcon:(id)arg1 ;
-(BOOL)iconListModel:(id)arg0 isGridLayoutValid:(id)arg1 ;
-(BOOL)isAllowedToContainIcon:(id)arg0 ;
-(BOOL)isAllowedToContainIcons:(id)arg0 ;
-(BOOL)isExtraList:(id)arg0 ;
-(BOOL)isExtraListIndex:(NSUInteger)arg0 ;
-(BOOL)isIconStateDirty;
-(BOOL)isLibraryCategoryFolder;
-(BOOL)isRootFolder;
-(BOOL)isTrailingEmptyList:(id)arg0 ;
-(BOOL)isTrailingEmptyListIndex:(NSUInteger)arg0 ;
-(BOOL)isValidIndexPath:(id)arg0 ;
-(BOOL)isValidIndexPath:(id)arg0 forInsertion:(BOOL)arg1 ;
-(BOOL)isValidListIndex:(NSUInteger)arg0 ;
-(BOOL)isVisibleListIndex:(NSUInteger)arg0 ;
-(BOOL)replaceIcon:(id)arg0 withIcon:(id)arg1 ;
-(BOOL)replaceIcon:(id)arg0 withIcon:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)replaceIconAtIndexPath:(id)arg0 withIcon:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)hiddenIndexOfList:(id)arg0 ;
-(NSUInteger)iconCountWithOptions:(NSUInteger)arg0 ;
-(NSUInteger)indexForVisibleIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfList:(id)arg0 ;
-(NSUInteger)indexOfListContainingIcon:(id)arg0 ;
-(NSUInteger)indexOfListWithIdentifier:(id)arg0 ;
-(NSUInteger)lastVisibleNonEmptyListIndex;
-(NSUInteger)nextListIndexAfterIndex:(NSUInteger)arg0 ;
-(NSUInteger)nextVisibleListIndexAfterIndex:(NSUInteger)arg0 ;
-(NSUInteger)precedingListIndexBeforeIndex:(NSUInteger)arg0 ;
-(NSUInteger)precedingVisibleListIndexBeforeIndex:(NSUInteger)arg0 ;
-(NSUInteger)trailingVisibleEmptyListCount;
-(NSUInteger)visibleIndexForIndex:(NSUInteger)arg0 ;
-(NSUInteger)visibleIndexOfList:(id)arg0 ;
-(id)_createNewList;
-(id)_createNewListWithIcon:(id)arg0 ;
-(id)_createNewListWithIcons:(id)arg0 ;
-(id)_createNewListWithIdentifier:(id)arg0 ;
-(id)_handleBumpedIcons:(id)arg0 afterInsertingIconIntoListAtIndex:(NSUInteger)arg1 options:(NSUInteger)arg2 didBump:(*BOOL)arg3 ;
-(id)_indexPathToRevealForJiggleMode;
-(id)addEmptyList;
-(id)addEmptyListRemovingLeastRecentlyHiddenListIfNecessary;
-(id)addEmptyListWithIdentifier:(id)arg0 ;
-(id)addIcon:(id)arg0 ;
-(id)addIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)addIcon:(id)arg0 options:(NSUInteger)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(id)addIcon:(id)arg0 toListAtIndex:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)addIcons:(id)arg0 ;
-(id)addIcons:(id)arg0 options:(NSUInteger)arg1 ;
-(id)addListWithIcon:(id)arg0 ;
-(id)addListWithIcons:(id)arg0 ;
-(id)addListWithIcons:(id)arg0 removingHiddenListsIfNecessary:(BOOL)arg1 ;
-(id)allIcons;
-(id)changeGridSizeClassOfIconAtIndexPath:(id)arg0 toGridSizeClass:(NSUInteger)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(id)changeGridSizeOfList:(id)arg0 toGridSize:(struct SBHIconGridSize )arg1 options:(NSUInteger)arg2 ;
-(id)changeGridSizeOfListAtIndex:(NSUInteger)arg0 toGridSize:(struct SBHIconGridSize )arg1 options:(NSUInteger)arg2 ;
-(id)containedNodeIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)firstFolderWithDefaultDisplayName:(id)arg0 ;
-(id)firstFolderWithDisplayName:(id)arg0 ;
-(id)firstFolderWithUniqueIdentifier:(id)arg0 ;
-(id)firstFolderWithUniqueIdentifier:(id)arg0 displayName:(id)arg1 defaultDisplayName:(id)arg2 ;
-(id)folderContainingIndexPath:(id)arg0 relativeIndexPath:(*id)arg1 ;
-(id)folderIcons;
-(id)folderWithIdentifier:(id)arg0 ;
-(id)folderWithUniqueIdentifier:(id)arg0 ;
-(id)gridPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(id)gridPathForFirstFreeSlotOfRangeOfSizeClass:(NSUInteger)arg0 avoidingFirstList:(BOOL)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(id)gridPathForFirstFreeSlotOfRangeOfSizeClass:(NSUInteger)arg0 startingAtList:(id)arg1 avoidingFirstList:(BOOL)arg2 searchForwards:(BOOL)arg3 listGridCellInfoOptions:(NSUInteger)arg4 ;
-(id)gridPathForFirstFreeSlotStartingAtList:(id)arg0 avoidingFirstList:(BOOL)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(id)gridPathForIcon:(id)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(id)gridPathForIndexPath:(id)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(id)gridPathForLastFreeSlotAvoidingFirstList:(BOOL)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(id)gridPathForLastFreeSlotStartingAtList:(id)arg0 avoidingFirstList:(BOOL)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(id)gridPathForRelativePath:(id)arg0 ;
-(id)gridPathWithListAtIndex:(NSUInteger)arg0 gridCellIndex:(NSUInteger)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(id)gridPathWithListAtIndexPath:(id)arg0 gridCellIndex:(NSUInteger)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(id)gridPathsForIndexPaths:(id)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(id)iconAtGridPath:(id)arg0 ;
-(id)iconAtIndexPath:(id)arg0 ;
-(id)iconListModel:(id)arg0 shouldBounceIcon:(id)arg1 afterInsertingIcons:(id)arg2 ;
-(id)iconWithIdentifier:(id)arg0 ;
-(id)iconsOfClass:(Class)arg0 ;
-(id)iconsPassingTest:(id)arg0 ;
-(id)indexPathForApplicationIconWithBundleIdentifier:(id)arg0 ;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg0 ;
-(id)indexPathForFirstFreeSlotStartingAtList:(id)arg0 avoidingFirstList:(BOOL)arg1 ;
-(id)indexPathForFirstFreeSlotStartingAtList:(id)arg0 avoidingFirstList:(BOOL)arg1 searchForwards:(BOOL)arg2 ;
-(id)indexPathForFolder:(id)arg0 ;
-(id)indexPathForGridPath:(id)arg0 ;
-(id)indexPathForIcon:(id)arg0 ;
-(id)indexPathForIcon:(id)arg0 includingPlaceholders:(BOOL)arg1 ;
-(id)indexPathForIconPassingTest:(id)arg0 ;
-(id)indexPathForIconWithIdentifier:(id)arg0 ;
-(id)indexPathForIconWithIdentifier:(id)arg0 includingPlaceholders:(BOOL)arg1 ;
-(id)indexPathForIconWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)indexPathForLastFreeSlotAvoidingFirstList:(BOOL)arg0 ;
-(id)indexPathForLastFreeSlotStartingAtList:(id)arg0 avoidingFirstList:(BOOL)arg1 ;
-(id)indexPathForList:(id)arg0 ;
-(id)indexPathForNodeIdentifier:(id)arg0 ;
-(id)indexPathForRelativePath:(id)arg0 ;
-(id)indexPathsForApplicationIconsWithBundleIdentifier:(id)arg0 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg0 prefixPath:(id)arg1 ;
-(id)indexPathsForIcon:(id)arg0 ;
-(id)indexPathsForIconWithIdentifier:(id)arg0 ;
-(id)indexPathsForIconsPassingTest:(id)arg0 ;
-(id)indexPathsForIconsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)indexesOfListsPassingTest:(id)arg0 ;
-(id)init;
-(id)initWithDisplayName:(id)arg0 maxListCount:(NSUInteger)arg1 listGridSize:(struct SBHIconGridSize )arg2 ;
-(id)initWithDisplayName:(id)arg0 maxListCount:(NSUInteger)arg1 listGridSize:(struct SBHIconGridSize )arg2 iconGridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg3 ;
-(id)initWithDisplayName:(id)arg0 maxListCount:(NSUInteger)arg1 maxIconCountInLists:(NSUInteger)arg2 ;
-(id)initWithFolder:(id)arg0 copyLeafIcons:(BOOL)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 displayName:(id)arg1 maxListCount:(NSUInteger)arg2 listGridSize:(struct SBHIconGridSize )arg3 iconGridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg4 ;
-(id)insertEmptyListAtIndex:(NSUInteger)arg0 ;
-(id)insertEmptyListRemovingLeastRecentlyHiddenListIfNecessaryAtIndex:(NSUInteger)arg0 ;
-(id)insertIcon:(id)arg0 afterIcon:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(id)insertIcon:(id)arg0 atGridPath:(id)arg1 options:(NSUInteger)arg2 ;
-(id)insertIcon:(id)arg0 atIndexPath:(*id)arg1 options:(NSUInteger)arg2 ;
-(id)insertIcon:(id)arg0 beforeIcon:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(id)insertIcons:(id)arg0 atGridPath:(id)arg1 options:(NSUInteger)arg2 ;
-(id)insertIcons:(id)arg0 atIndexPath:(id)arg1 options:(NSUInteger)arg2 ;
-(id)layoutDescription;
-(id)leafIcons;
-(id)listAtGridPath:(id)arg0 ;
-(id)listAtIndex:(NSUInteger)arg0 ;
-(id)listAtIndexPath:(id)arg0 ;
-(id)listAtRelativePath:(id)arg0 ;
-(id)listAtVisibleIndex:(NSUInteger)arg0 ;
-(id)listContainingIndexPath:(id)arg0 relativeIndex:(*NSUInteger)arg1 ;
-(id)listWithGreatestHiddenDateMatchingOrdering:(NSInteger)arg0 ;
-(id)listWithIdentifier:(id)arg0 ;
-(id)listWithIdentifier:(id)arg0 inFolderWithIdentifier:(id)arg1 ;
-(id)listsContainingIcon:(id)arg0 ;
-(id)listsContainingLeafIconWithIdentifier:(id)arg0 ;
-(id)nextListAfterIndex:(NSUInteger)arg0 ;
-(id)nextVisibleListAfterIndex:(NSUInteger)arg0 ;
-(id)nodeDescriptionWithPrefix:(id)arg0 ;
-(id)nodeIdentifier;
-(id)nodesAlongIndexPath:(id)arg0 consumedIndexes:(NSUInteger)arg1 ;
-(id)objectWithUniqueIdentifier:(id)arg0 ;
-(id)precedingListBeforeIndex:(NSUInteger)arg0 ;
-(id)relativePathForIcon:(id)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(id)replaceIcon:(id)arg0 withIcons:(id)arg1 options:(NSUInteger)arg2 ;
-(id)replaceIcon:(id)arg0 withIcons:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(id)resolvedComponentsForIndexPath:(id)arg0 ;
-(id)resolvedComponentsForUniqueIdentifierPath:(id)arg0 ;
-(id)sortedAndBucketedGridPaths:(id)arg0 ;
-(id)sortedGridPaths:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)uniqueIdentifiersForIndexPath:(id)arg0 ;
-(id)validatedGridPathForInsertionGridPath:(id)arg0 avoidingFirstList:(BOOL)arg1 ;
-(id)validatedIndexPathForInsertionIndexPath:(id)arg0 avoidingFirstList:(BOOL)arg1 ;
-(id)visibleListIndexes;
-(void)_addList:(id)arg0 ;
// -(void)_compactContiguousOverflowListsStartingAtListIndex:(NSUInteger)arg0 withoutMovingIconsPassingTest:(id)arg1 removeEmptyLists:(unk)arg2  ;
-(void)_didAddList:(id)arg0 informObservers:(BOOL)arg1 ;
-(void)_didExplicitlyRemoveHiddenLists:(id)arg0 ;
-(void)_didRemoveList:(id)arg0 atIndex:(NSUInteger)arg1 informObservers:(BOOL)arg2 ;
-(void)_informObserversOfAddedIcons:(id)arg0 removedIcons:(id)arg1 ;
-(void)_informObserversOfMovedIcon:(id)arg0 ;
-(void)_informObserversOfToBeAddedIcon:(id)arg0 ;
-(void)_insertList:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_removeLists:(id)arg0 ;
-(void)_swapInsertIcons:(id)arg0 atIndexPaths:(id)arg1 ;
-(void)_swapRestoreIconCount:(NSUInteger)arg0 toLocation:(id)arg1 ;
-(void)_updateOverflowCountInList:(id)arg0 forInsertingIcon:(id)arg1 removingIcon:(id)arg2 options:(NSUInteger)arg3 ;
-(void)_willAddList:(id)arg0 ;
-(void)_willRemoveList:(id)arg0 atIndex:(NSUInteger)arg1 informObservers:(BOOL)arg2 ;
-(void)addFolderObserver:(id)arg0 ;
-(void)addIconsOfClass:(Class)arg0 toSet:(id)arg1 ;
// -(void)addIconsPassingTest:(id)arg0 toSet:(unk)arg1  ;
-(void)addNodeObserver:(id)arg0 ;
-(void)ancestryDidChange;
-(void)appendRecursiveDescriptionToString:(id)arg0 prefixPath:(id)arg1 ;
-(void)compactOverflowLists;
-(void)compactOverflowListsAndRemoveEmptyLists:(BOOL)arg0 ;
-(void)compactOverflowListsWithoutMovingIconsPassingTest:(id)arg0 ;
// -(void)compactOverflowListsWithoutMovingIconsPassingTest:(id)arg0 removeEmptyLists:(unk)arg1  ;
-(void)didAddFolder:(id)arg0 ;
-(void)didExplicitlyRemoveIcon:(id)arg0 fromList:(id)arg1 inFolder:(id)arg2 options:(NSUInteger)arg3 ;
-(void)didRemoveFolder:(id)arg0 ;
-(void)ensureTrailingEmptyLists;
-(void)enumerateAllIconsUsingBlock:(id)arg0 ;
-(void)enumerateAllIconsWithBaseIndexPath:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAllIconsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateExtraListsUsingBlock:(id)arg0 ;
-(void)enumerateListsForSearchingForFirstFreeSlotStartingAtList:(id)arg0 avoidingFirstList:(BOOL)arg1 searchForwards:(BOOL)arg2 block:(id)arg3 ;
-(void)enumerateListsUsingBlock:(id)arg0 ;
-(void)enumerateListsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateVisibleListsUsingBlock:(id)arg0 ;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)folder:(id)arg0 willAddIcon:(id)arg1 ;
-(void)folderIconStateDidDirty:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didInvalidateLayoutWithGridCellInfoOptions:(NSUInteger)arg1 ;
-(void)iconList:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)iconList:(id)arg0 willAddIcon:(id)arg1 ;
-(void)iconListHiddenDidChange:(id)arg0 ;
-(void)iconListHiddenWillChange:(id)arg0 ;
-(void)iconListIconStateDidDirty:(id)arg0 ;
-(void)list:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)list:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)listDidMoveNodes:(id)arg0 ;
-(void)markIconStateClean;
-(void)markIconStateDirty;
-(void)moveListAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)pruneEmptyFolders;
-(void)removeAllLists;
-(void)removeFolderObserver:(id)arg0 ;
-(void)removeHiddenLists;
-(void)removeIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(void)removeIcon:(id)arg0 options:(NSUInteger)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(void)removeIconAtIndexPath:(id)arg0 options:(NSUInteger)arg1 ;
-(void)removeIcons:(id)arg0 options:(NSUInteger)arg1 ;
-(void)removeIcons:(id)arg0 options:(NSUInteger)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(void)removeLeastRecentlyHiddenList;
-(void)removeList:(id)arg0 ;
-(void)removeListAtIndex:(NSUInteger)arg0 ;
-(void)removeListsAtIndexes:(id)arg0 ;
-(void)removeNodeObserver:(id)arg0 ;
-(void)replaceIconAtGridPath:(id)arg0 withIcon:(id)arg1 options:(NSUInteger)arg2 ;
-(void)sort;
-(void)startCoalescingContentChangesWithRequestID:(id)arg0 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg0 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg0 forceReload:(BOOL)arg1 ;
-(void)swapIconAtIndexPath:(id)arg0 withIconAtIndexPath:(id)arg1 options:(NSUInteger)arg2 ;
-(void)updateGridSizeForNonDefaultSizedIconsForList:(id)arg0 includingToBeAddedIcon:(id)arg1 ;


@end


#endif