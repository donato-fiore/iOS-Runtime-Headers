// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTPIEWEDGEELEMENT_H
#define TSCHCHARTPIEWEDGEELEMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHChartSeries.h"

@interface TSCHChartPieWedgeElement : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat angleAtWedgeTip;
@property (readonly, nonatomic) CGPoint centerPoint;
@property (nonatomic) CGFloat endAngle; // ivar: _endAngle
@property (nonatomic) CGFloat labelExplosion; // ivar: _labelExplosion
@property (nonatomic) TSCHChartPieWedgeElementLayoutSystem layoutSystem; // ivar: _layoutSystem
@property (nonatomic) CGFloat midAngle; // ivar: _midAngle
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (weak, nonatomic) TSCHChartSeries *series; // ivar: _series
@property (nonatomic) CGFloat startAngle; // ivar: _startAngle
@property (nonatomic) CGFloat wedgeExplosion; // ivar: _wedgeExplosion


-(BOOL)angleInRange:(CGFloat)arg0 startAngle:(CGFloat)arg1 endAngle:(CGFloat)arg2 ;
-(BOOL)calloutLineIntersectsWedgeWithStartPoint:(struct CGPoint )arg0 midPoint:(struct CGPoint )arg1 ;
-(BOOL)isInUpperHalfOfChartWithStartPoint:(struct CGPoint )arg0 ;
-(BOOL)isOnLeftSideOfChart;
-(BOOL)lineIntersectsLineWithStartPoint:(struct CGPoint )arg0 firstLineEndPoint:(struct CGPoint )arg1 secondLineStartPoint:(struct CGPoint )arg2 secondLineEndPoint:(struct CGPoint )arg3 outIntersectionPoint:(struct CGPoint *)arg4 ;
-(BOOL)lineIntersectsWedgeWithLineStartPoint:(struct CGPoint )arg0 lineEndPoint:(struct CGPoint )arg1 ;
-(BOOL)pointWithinWedgeSpread:(struct CGPoint )arg0 ;
-(BOOL)pointWithinWedgeSpread:(struct CGPoint )arg0 percentage:(CGFloat)arg1 ;
-(BOOL)shouldUsePerpendicularBendedLineWithStartPoint:(struct CGPoint )arg0 ;
-(BOOL)wedgeBisectionIntersectsRect:(struct CGRect )arg0 outIntersectionPointClosestToWedgeTip:(struct CGPoint *)arg1 ;
-(CGFloat)p_xShiftAmountWithEndpoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRadius:(CGFloat)arg0 startAngle:(CGFloat)arg1 midAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 labelExplosion:(CGFloat)arg4 wedgeExplosion:(CGFloat)arg5 series:(id)arg6 ;
-(struct CGPoint )arcEndPoint;
-(struct CGPoint )arcStartPoint;
-(struct CGPoint )bendedLineMidpointWithStartPoint:(struct CGPoint )arg0 length:(CGFloat)arg1 shouldBeUpwards:(BOOL)arg2 ;
-(struct CGPoint )defaultBendedLineEndpointWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )defaultBendedLineMidpointWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )defaultLabelCenterPoint;
-(struct CGPoint )defaultLabelCenterPointForLabelWithSize:(struct CGSize )arg0 bended:(BOOL)arg1 ;
-(struct CGPoint )defaultLabelEndpointForBendedLineLabels;
-(struct CGPoint )firstHalfOfBendedLineVectorNormalizedShouldBeUpwards:(BOOL)arg0 ;
-(struct CGPoint )midpointOnClosestEdgeToWedgeTip:(struct CGRect )arg0 ;
-(struct CGPoint )normalizedWedgeBisectionVector;
-(struct CGPoint )pointAlongWedgeBisectionInChartCoordinateSpaceWithFloatDistanceFromWedgeTip:(CGFloat)arg0 ;
-(struct CGPoint )pointAlongWedgeBisectionInChartCoordinateSpaceWithPercentDistanceFromWedgeTip:(CGFloat)arg0 ;
-(struct CGPoint )pointAtWedgeCircumferenceMiddleInChartCoordinateSpace;
-(struct CGPoint )pointAtWedgeTipInChartCoordinateSpace;
-(struct CGRect )defaultLabelRectForLabelWithSize:(struct CGSize )arg0 bended:(BOOL)arg1 ;
-(struct TSCHChartPieLabelRects )labelRectsForFirstLabelWithSize:(struct CGSize )arg0 secondLabelSize:(struct CGSize )arg1 stacked:(BOOL)arg2 stackedLabelCenterAlign:(BOOL)arg3 placeToTheSideOfPieChart:(BOOL)arg4 ;
-(void)setToChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint )arg0 ;
-(void)setToLocalCoordinateSpace;


@end


#endif