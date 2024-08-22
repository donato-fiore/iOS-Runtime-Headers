// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONSEGMENTEDVIEW_H
#define CDRICHCOMPLICATIONSEGMENTEDVIEW_H

@class NSMutableArray;


#import "CDRichComplicationCurveView.h"

@interface CDRichComplicationSegmentedView : CDRichComplicationCurveView

@property (retain, nonatomic) NSMutableArray *segments; // ivar: _segments


+(BOOL)isXL;
-(CGFloat)_arcAngleWithOuterRadius:(CGFloat)arg0 segmentGapAngle:(CGFloat)arg1 numberOfSegments:(NSUInteger)arg2 ;
-(NSInteger)_segmentShapeStyleForIndex:(NSUInteger)arg0 angle:(CGFloat)arg1 ;
-(id)_colorForSegment:(id)arg0 ;
-(id)_shapeStrokeColor;
-(void)_addSegmentsToLayer:(id)arg0 ;
-(void)_setupShapeLayer:(id)arg0 ;
-(void)_updateSegmentsWithColors:(id)arg0 ;
-(void)setGradientColors:(id)arg0 ;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif