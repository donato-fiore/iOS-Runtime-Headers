// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIQUADCURVEPOINTFIFO_H
#define UIQUADCURVEPOINTFIFO_H

@class UIView;


#import "UIPointFIFO.h"
#import "_UIPointVector.h"

@interface UIQuadCurvePointFIFO : UIPointFIFO {
    ? _lastPoint;
}


@property (retain, nonatomic) _UIPointVector *controlPoints; // ivar: _controlPoints
@property (copy) id *emissionHandler; // ivar: _emissionHandler
@property (nonatomic) BOOL emitInterpolatedPoints; // ivar: _emitInterpolatedPoints
@property ? lastPoint;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) *CGPath path; // ivar: _path
@property (retain, nonatomic) _UIPointVector *points; // ivar: _points
@property (retain, nonatomic) _UIPointVector *prevPoints; // ivar: _prevPoints
@property (nonatomic) float unitScale; // ivar: _unitScale
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)interpolateFromPointtoPointcontrolPointtime;
-(id)initWithFIFO:(id)arg0 ;
-(id)initWithFIFO:(id)arg0 strokeView:(id)arg1 ;
-(void)addPoint;
// -(void)enumerateInterpolationFromPoint:(id)arg0 toPoint:(unk)arg1 controlPointusingBlock ;


@end


#endif