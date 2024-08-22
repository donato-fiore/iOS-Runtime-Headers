// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTRADIALBODYLAYOUTITEM_H
#define TSCHCHARTRADIALBODYLAYOUTITEM_H

@class NSArray, NSDictionary;


#import "TSCHChartBodyLayoutItem.h"
#import "TSCHRadialBodyLayoutItemPathCache.h"

@interface TSCHChartRadialBodyLayoutItem : TSCHChartBodyLayoutItem {
    NSArray *_wedgeLayoutInfosInLocalSpace;
}


@property (retain) TSCHRadialBodyLayoutItemPathCache *p_pathCache; // ivar: _pathCache
@property (readonly, nonatomic) NSDictionary *wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;


-(CGFloat)normalizedLabelDistanceFromWedgeTipForSeries:(id)arg0 ;
-(id)createAndOptimallyPlaceWedgeLayoutInfos;
-(id)createWedgeLayoutInfos;
-(id)defaultPieWedgeElementForSeriesModelCache:(id)arg0 ;
-(id)defaultPieWedgeLayoutInfoForSeriesModelCache:(id)arg0 pieLabels:(id)arg1 combinedLabelTransform:(struct CGAffineTransform )arg2 ;
-(id)knobsOfElementForSeries:(NSUInteger)arg0 withInnerRadius:(id)arg1 ;
-(id)knobsWithRadius:(CGFloat)arg0 center:(struct CGPoint )arg1 startAngle:(CGFloat)arg2 midAngle:(CGFloat)arg3 endAngle:(CGFloat)arg4 ;
-(id)labelStringForType:(NSInteger)arg0 seriesModelCache:(id)arg1 ;
-(id)newPathsForRenderingCalloutLineForSeries:(NSUInteger)arg0 outStartLineEndPath:(*id)arg1 outEndLineEndPath:(*id)arg2 stroke:(id)arg3 outStroke:(*id)arg4 context:(struct CGContext *)arg5 contextScale:(float)arg6 ;
-(id)optimizedWedgeLayoutInfoPlacementForWedgeLayoutInfos:(id)arg0 ;
-(id)pathCacheForSeries:(NSUInteger)arg0 withInnerRadius:(id)arg1 ;
-(id)renderersWithRep:(id)arg0 ;
-(id)seriesIndexToWedgeLayoutInfoMapWithWedgeLayoutInfos:(id)arg0 ;
-(id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
-(id)wedgeLayoutInfosInChartCoordinateSpace;
-(id)wedgeLayoutInfosInLocalSpaceForSeriesIndex;
-(struct CGAffineTransform )transformForRenderingElementForSeries:(NSUInteger)arg0 outElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2 withInnerRadius:(id)arg3 ;
-(struct CGAffineTransform )transformToMaintainLabelSameDistanceAwayFromWedge:(struct CGRect )arg0 wedgeElement:(id)arg1 ;
-(struct CGAffineTransform )transformToShiftStraightLineLabelRectOutForEnableCalloutLineONSetting:(struct CGRect )arg0 wedgeElement:(id)arg1 ;
-(struct CGPath *)newElementPathWithPercentage:(CGFloat)arg0 radius:(CGFloat)arg1 center:(struct CGPoint )arg2 startAngle:(CGFloat)arg3 midAngle:(CGFloat)arg4 endAngle:(CGFloat)arg5 withInnerRadius:(id)arg6 ;
-(struct CGPath *)pathOfElementForSeries:(NSUInteger)arg0 outWedgeCenterPoint:(struct CGPoint *)arg1 withInnerRadius:(id)arg2 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )calcOverhangRect;
-(struct CGRect )calloutLineBoundingBoxForSeries:(NSUInteger)arg0 ;
-(struct CGSize )bodySizeForOverhangSize:(struct CGSize )arg0 ;
-(struct CGSize )overhangSizeForBodySize:(struct CGSize )arg0 ;
-(struct CGSize )titleSizeToUseForOverlapPreventionWithLabels;
-(struct TSCHChartPieLabelGeometries )labelGeometriesForRenderingLabelsForSeriesModelCache:(id)arg0 topLabelType:(NSInteger)arg1 bottomLabelType:(NSInteger)arg2 ;
-(struct TSCHChartPieLabelGeometry )labelGeometryForRenderingLabelForSeriesModelCache:(id)arg0 labelType:(NSInteger)arg1 ;
-(void)p_collectMaxRatio:(*CGFloat)arg0 maxLabelOverhang:(*CGFloat)arg1 maxWedgeExplosion:(*float)arg2 maxComboExplosion:(*float)arg3 ;
-(void)setLayoutSize:(struct CGSize )arg0 ;


@end


#endif