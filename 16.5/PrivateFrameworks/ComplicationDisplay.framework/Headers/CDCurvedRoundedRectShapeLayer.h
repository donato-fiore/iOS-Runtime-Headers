// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDCURVEDROUNDEDRECTSHAPELAYER_H
#define CDCURVEDROUNDEDRECTSHAPELAYER_H

@class CAShapeLayer;



@interface CDCurvedRoundedRectShapeLayer : CAShapeLayer



-(CGFloat)_findNewOffsetOfParalelLineWithSlope:(CGFloat)arg0 offset:(CGFloat)arg1 distanceFrom:(CGFloat)arg2 ;
-(CGFloat)_findPointOfIntersectionBetweenCircleOfRadius:(CGFloat)arg0 slope:(CGFloat)arg1 offset:(CGFloat)arg2 ;
-(id)initWithAngularWidth:(CGFloat)arg0 innerRadius:(CGFloat)arg1 outerRadius:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 ;
-(id)initWithAngularWidth:(CGFloat)arg0 innerRadius:(CGFloat)arg1 outerRadius:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 style:(NSInteger)arg4 ;
-(id)initWithAngularWidth:(CGFloat)arg0 innerRadius:(CGFloat)arg1 outerRadius:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 style:(NSInteger)arg4 gapAngle:(CGFloat)arg5 ;
-(struct CGPoint )_findCircleLineIntersectionWithOffset:(CGFloat)arg0 cornerRadiusOffset:(CGFloat)arg1 radius:(CGFloat)arg2 slope:(CGFloat)arg3 ;
-(struct CGPoint )_findIntersectionOfCircle:(struct CGPoint )arg0 cornerRadius:(CGFloat)arg1 offset:(CGFloat)arg2 ;
-(struct CGPoint )_findPointThatIsDistance:(CGFloat)arg0 fromPoint:(struct CGPoint )arg1 onSlope:(CGFloat)arg2 offset:(CGFloat)arg3 ;
-(struct CGPoint )_getMirroredPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_midPointOfPoint1:(struct CGPoint )arg0 point2:(struct CGPoint )arg1 ;
-(struct CGPoint )_pointAtAngle:(CGFloat)arg0 radius:(CGFloat)arg1 ;


@end


#endif