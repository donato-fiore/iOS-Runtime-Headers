// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWLAYOUTINVALIDATIONCONTEXT_H
#define UICOLLECTIONVIEWLAYOUTINVALIDATIONCONTEXT_H

@class NSMutableSet, NSMutableDictionary, NSArray, NSMutableIndexSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface UICollectionViewLayoutInvalidationContext : NSObject {
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSArray *_updateItems;
    NSArray *_previousIndexPathsForReorderedItems;
    NSArray *_targetIndexPathsForReorderedItems;
    CGPoint _reorderingTarget;
    CGPoint _contentOffsetAdjustment;
    CGSize _contentSizeAdjustment;
    NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
    ? _invalidationContextFlags;
}


@property (readonly, nonatomic) NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
@property (nonatomic, setter=_setShouldInvalidateCollectionViewContentSize:) BOOL _shouldInvalidateCollectionViewContentSize;
@property (readonly, nonatomic) BOOL _shouldInvalidatePreferredAttributes;
@property (nonatomic) CGPoint contentOffsetAdjustment;
@property (nonatomic) CGSize contentSizeAdjustment;
@property (nonatomic, getter=_intent, setter=_setIntent:) NSInteger intent; // ivar: _intent
@property (nonatomic, setter=_setInteractiveMovementTarget:) CGPoint interactiveMovementTarget;
@property (nonatomic, setter=_setInvalidateDataSourceCounts:) BOOL invalidateDataSourceCounts;
@property (nonatomic, setter=_setInvalidateEverything:) BOOL invalidateEverything;
@property (readonly, nonatomic) NSDictionary *invalidatedDecorationIndexPaths;
@property (readonly, nonatomic) NSArray *invalidatedItemIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (copy, nonatomic, setter=_setPreviousIndexPathsForInteractivelyMovingItems:) NSArray *previousIndexPathsForInteractivelyMovingItems;
@property (nonatomic, getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:) BOOL retainExistingSizingInfoForEstimates; // ivar: _retainExistingSizingInfoForEstimates
@property (copy, nonatomic, setter=_setTargetIndexPathsForInteractivelyMovingItems:) NSArray *targetIndexPathsForInteractivelyMovingItems;
@property (retain, nonatomic, getter=_updateItems, setter=_setUpdateItems:) NSArray *updateItems;


-(id)_invalidatedSupplementaryViews;
-(void)_invalidateSupplementaryElementsOfKind:(id)arg0 atIndexPaths:(id)arg1 ;
-(void)_removeInvalidatedDecorationOfKind:(id)arg0 indexPath:(id)arg1 ;
-(void)_removeInvalidatedItemIndexPath:(id)arg0 ;
-(void)_removeInvalidatedSupplementaryOfKind:(id)arg0 indexPath:(id)arg1 ;
-(void)_setInvalidatedSupplementaryViews:(id)arg0 ;
-(void)invalidateDecorationElementsOfKind:(id)arg0 atIndexPaths:(id)arg1 ;
-(void)invalidateItemsAtIndexPaths:(id)arg0 ;
-(void)invalidateSupplementaryElementsOfKind:(id)arg0 atIndexPaths:(id)arg1 ;


@end


#endif