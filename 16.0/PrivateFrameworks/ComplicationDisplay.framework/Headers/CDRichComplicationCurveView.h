// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDRICHCOMPLICATIONCURVEVIEW_H
#define CDRICHCOMPLICATIONCURVEVIEW_H



#import "CDRichComplicationShapeView.h"

@interface CDRichComplicationCurveView : CDRichComplicationShapeView {
    CGFloat _curveWidth;
    CGFloat _padding;
    CGFloat _drawingBeginAngle;
    CGFloat _drawingEndAngle;
}


@property (nonatomic) CGFloat beginAngle; // ivar: _beginAngle
@property (nonatomic) BOOL clockwise; // ivar: _clockwise
@property (nonatomic) CGFloat endAngle; // ivar: _endAngle


-(BOOL)_shouldReverseGradient;
-(CGFloat)_angleAtProgress:(float)arg0 ;
-(CGFloat)_outerRadius;
-(CGFloat)_shapeLineWidth;
-(CGFloat)_totalDrawableAngle;
-(id)_normalizeGradientLocations:(id)arg0 ;
-(id)initWithCurveWidth:(CGFloat)arg0 padding:(CGFloat)arg1 beginAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 forDevice:(id)arg4 withFilterStyle:(NSInteger)arg5 ;
-(struct CGPath *)_generatePath;
-(struct CGPoint )_centerPoint;
-(struct CGPoint )_pointAtProgress:(float)arg0 ;
-(void)_setupGradientLayer:(id)arg0 ;
-(void)_updatePath;
-(void)layoutSubviews;


@end


#endif