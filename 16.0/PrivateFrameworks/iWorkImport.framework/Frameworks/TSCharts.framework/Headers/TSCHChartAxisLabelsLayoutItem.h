// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTAXISLABELSLAYOUTITEM_H
#define TSCHCHARTAXISLABELSLAYOUTITEM_H



#import "TSCHChartLayoutItem.h"

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem {
    NSUInteger _stride;
    float _angleInDegrees;
    float _angleInRadians;
}


@property (nonatomic) CGFloat distanceFromAxis; // ivar: _distanceFromAxis
@property CGSize maxLabelSizeInPoints; // ivar: _maxLabelSizeInPoints
@property (readonly, nonatomic) NSUInteger stride;


-(BOOL)p_circularStridingLabelAtIndex:(NSUInteger)arg0 inLayoutSize:(struct CGSize )arg1 intersectsLabelAtIndex:(NSUInteger)arg2 extraTransform:(struct CGAffineTransform )arg3 ;
-(BOOL)showLabelsForAxis:(id)arg0 ;
-(CGFloat)unitSpaceValueForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(NSInteger)p_labelBaselineDirectionRelativeToSpoke;
-(NSInteger)p_smallestSecondValueLabelIndex:(NSInteger)arg0 start:(NSInteger)arg1 end:(NSInteger)arg2 inLayoutSize:(struct CGSize )arg3 paragraphStyle:(id)arg4 ;
-(NSInteger)p_smallestSecondValueLabelIndex:(NSInteger)arg0 start:(NSInteger)arg1 end:(NSInteger)arg2 inLayoutSize:(struct CGSize )arg3 paragraphStyle:(id)arg4 isTop:(BOOL)arg5 ;
-(NSUInteger)numberOfLabelsForAxis:(id)arg0 ;
-(NSUInteger)p_computeAutoStrideInLayoutSize:(struct CGSize )arg0 ;
-(NSUInteger)p_computeCircularAutoStrideForInvariantAngleLabelsInLayoutSize:(struct CGSize )arg0 ;
-(NSUInteger)p_computeCircularAutoStrideForLabelDimensionPerpendicularOnSpoke:(CGFloat)arg0 inLayoutSize:(struct CGSize )arg1 ;
-(NSUInteger)p_computeCircularAutoStrideInLayoutSize:(struct CGSize )arg0 ;
-(NSUInteger)p_computeLinearAutoStrideInLayoutSize:(struct CGSize )arg0 ;
-(NSUInteger)p_numberOfAxisLabels;
-(NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg0 axis:(id)arg1 ;
-(NSUInteger)strideInLayoutSize:(struct CGSize )arg0 ;
-(id)axisLayoutItem;
-(id)labelStringForAxis:(id)arg0 index:(NSUInteger)arg1 ;
-(id)labelsLayoutItem;
-(id)layoutSpaceHalosForAllLabels;
-(id)layoutSpaceKnobsForAllLabels;
-(id)p_axis;
-(id)p_axisFromLayoutItem;
-(id)p_chartInfoFromLayoutItem;
-(id)p_chartModelFromLayoutItem;
-(id)p_overrideLabelStringForHitTestingEmptyLabel;
-(id)selectionPathLabelType;
-(struct CGAffineTransform )p_localTransformForAxisLabelWithInfo:(id)arg0 ;
-(struct CGAffineTransform )p_localTransformForCartesianAxisLabelWithInfo:(id)arg0 ;
-(struct CGAffineTransform )p_localTransformForLabel:(NSUInteger)arg0 range:(struct _NSRange *)arg1 inLayoutSize:(struct CGSize )arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 usingString:(id)arg5 stride:(*NSUInteger)arg6 useAngle:(BOOL)arg7 ;
-(struct CGAffineTransform )p_localTransformForLabel:(NSUInteger)arg0 range:(struct _NSRange *)arg1 inLayoutSize:(struct CGSize )arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 usingString:(id)arg5 useAngle:(BOOL)arg6 ;
-(struct CGAffineTransform )p_localTransformForPolarAngleAxisLabelWithInfo:(id)arg0 ;
-(struct CGAffineTransform )p_localTransformForPolarAxisLabelWithInfo:(id)arg0 ;
-(struct CGAffineTransform )p_localTransformForPolarRadiusAxisLabelWithInfo:(id)arg0 ;
-(struct CGAffineTransform )p_rootedTransformFromLocalTransform:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )p_transformForLabelWithPaddingPerSide:(CGFloat)arg0 outwardOrigin:(struct CGPoint )arg1 outwardDirection:(struct CGPoint )arg2 boundaryPosition:(struct CGPoint )arg3 boundaryNormal:(struct CGPoint )arg4 alignWithMaxSizeAtClosestMidpoint:(BOOL)arg5 anchorMaxSizeAtClosestMidpoint:(BOOL)arg6 info:(id)arg7 ;
-(struct CGAffineTransform )p_transformWithOrigin:(struct CGPoint )arg0 verticalDirection:(struct CGPoint )arg1 ;
-(struct CGAffineTransform )transformForRenderingLabel:(NSUInteger)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 ;
-(struct CGAffineTransform )transformForRenderingLabel:(NSUInteger)arg0 range:(struct _NSRange )arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 ;
-(struct CGAffineTransform )transformForRenderingLabel:(NSUInteger)arg0 usingString:(id)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 useAngle:(BOOL)arg4 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGPoint )axisAnchorForPosition:(int)arg0 degrees:(float)arg1 inLayoutSize:(struct CGSize )arg2 unrotatedSize:(struct CGSize )arg3 unitSpaceValue:(CGFloat)arg4 ;
-(struct CGPoint )labelAnchorForPosition:(int)arg0 degrees:(float)arg1 ;
-(struct CGPoint )p_pointWithLowerYOfPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 whenTransformedBy:(struct CGAffineTransform )arg2 ;
-(struct CGPoint )p_relativeAnchorMidpointForLabelGeometry:(id)arg0 ;
-(struct CGPoint )p_relativeAnchorPointForLabelGeometry:(id)arg0 useMidpoints:(BOOL)arg1 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )calcOverhangRect;
-(struct CGRect )layoutSpaceRectForAllLabels;
-(struct CGRect )p_rectOfCircularStridingLabelAtIndex:(NSUInteger)arg0 inLayoutSize:(struct CGSize )arg1 extraTransform:(struct CGAffineTransform )arg2 ;
-(struct CGSize )calcMinSize;
-(void)clearAll;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(void)p_calcMaxLabelSize;
-(void)p_enumerateAxisLabelRectsWithBlock:(id)arg0 ;
-(void)p_rect:(struct CGRect *)arg0 andTransform:(struct CGAffineTransform *)arg1 inLayoutSize:(struct CGSize )arg2 forIndex:(NSUInteger)arg3 paragraphStyle:(id)arg4 ;
-(void)setLayoutSize:(struct CGSize )arg0 ;


@end


#endif