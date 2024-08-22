// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCHAMOISOVERLAPPINGCONTROLLER_H
#define SBCHAMOISOVERLAPPINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SBChamoisOverlappingController : NSObject {
    BOOL _reentrancyGuard;
}




-(BOOL)_isColumnOfItems:(id)arg0 equalToColumnOfItems:(id)arg1 ;
-(CGFloat)_totalWidthOfColumns:(id)arg0 inModel:(id)arg1 chamoisLayoutAttributes:(id)arg2 ;
-(CGFloat)_widthThresholdToHideContinuousExposeStripForModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 bounds:(struct CGRect )arg2 ;
-(id)_columnsOfItemsSortedByXInModel:(id)arg0 withItemsSortedByX:(id)arg1 modelBeforeDragging:(id)arg2 chamoisLayoutAttributes:(id)arg3 draggingItem:(id)arg4 ;
-(id)_fullyOccludedItemsInModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 ;
-(id)_itemsSortedByXInModel:(id)arg0 modelBeforeDragging:(id)arg1 chamoisLayoutAttributes:(id)arg2 draggingItem:(id)arg3 ;
-(id)_modelByPerformingAutoLayoutForModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 draggingItem:(id)arg2 modelBeforeDragging:(id)arg3 floatingDockHeight:(CGFloat)arg4 bounds:(struct CGRect )arg5 screenScale:(CGFloat)arg6 prefersStripHidden:(BOOL)arg7 prefersDockHidden:(BOOL)arg8 stageInset:(struct UIEdgeInsets )arg9 ;
-(id)_overlappingScaleAnchorCentersForModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 ;
-(id)modelByPerformingAutoLayoutForModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 draggingItem:(id)arg2 modelBeforeDragging:(id)arg3 floatingDockHeight:(CGFloat)arg4 bounds:(struct CGRect )arg5 screenScale:(CGFloat)arg6 prefersStripHidden:(BOOL)arg7 prefersDockHidden:(BOOL)arg8 ;
-(struct CGRect )_boundingBoxForModel:(id)arg0 ;
-(struct CGRect )_stageAreaForModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 floatingDockHeight:(CGFloat)arg2 bounds:(struct CGRect )arg3 prefersStripHidden:(BOOL)arg4 prefersDockHidden:(BOOL)arg5 widthThresholdToHideContinuousExposeStrip:(CGFloat)arg6 ;
-(void)_compactSpacingHorizontallyForModel:(id)arg0 withColumns:(id)arg1 chamoisLayoutAttributes:(id)arg2 ;
-(void)_compactSpacingVerticallyForModel:(id)arg0 withColumns:(id)arg1 chamoisLayoutAttributes:(id)arg2 ;
-(void)_constrainModelHorizontally:(id)arg0 toStageArea:(struct CGRect )arg1 ;
-(void)_constrainModelVertically:(id)arg0 toStageArea:(struct CGRect )arg1 ;
-(void)_dodgeFullyOccludedWindowsToNearestVisibleEdgeInModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 draggingItem:(id)arg2 bounds:(struct CGRect )arg3 ;
-(void)_expandSpacingHorizontallyForModel:(id)arg0 withColumns:(id)arg1 modelBeforeDragging:(id)arg2 chamoisLayoutAttributes:(id)arg3 draggingItem:(id)arg4 stageArea:(struct CGRect )arg5 ;
-(void)_expandSpacingVerticallyForModel:(id)arg0 withColumns:(id)arg1 chamoisLayoutAttributes:(id)arg2 stageArea:(struct CGRect )arg3 ;
-(void)_flagItemsCoveredByFullyOccludedPeekingItemsInModel:(id)arg0 chamoisLayoutAttributes:(id)arg1 ;
-(void)_horizontallyCenterModel:(id)arg0 stageArea:(struct CGRect )arg1 ;
-(void)_snapPositionToNearestEdgesIfNecessary:(id)arg0 draggingItem:(id)arg1 ;
-(void)_verticallyCenterModel:(id)arg0 withColumns:(id)arg1 stageArea:(struct CGRect )arg2 ;


@end


#endif