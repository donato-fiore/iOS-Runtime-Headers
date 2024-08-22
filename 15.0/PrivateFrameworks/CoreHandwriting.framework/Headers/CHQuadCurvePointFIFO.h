// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHQUADCURVEPOINTFIFO_H
#define CHQUADCURVEPOINTFIFO_H

@protocol CHPointFIFODrawingTarget;


#import "CHPointFIFO.h"

@interface CHQuadCurvePointFIFO : CHPointFIFO {
    ? _lastPoint;
    vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> _prevPoints;
    vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> _points;
    vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> _controlPoints;
}


@property ? controlPoints;
@property (retain, nonatomic) NSObject<CHPointFIFODrawingTarget> *drawingTarget; // ivar: _drawingTarget
@property (copy) id *emissionHandler; // ivar: _emissionHandler
@property (nonatomic) BOOL emitInterpolatedPoints; // ivar: _emitInterpolatedPoints
@property ? lastPoint;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) *CGPath path; // ivar: _path
@property ? points;
@property ? prevPoints;
@property (nonatomic) float unitScale; // ivar: _unitScale


+(id)interpolateFromPointtoPointcontrolPointtime;
-(id)initWithFIFO:(id)arg0 ;
-(id)initWithFIFO:(id)arg0 drawingTarget:(id)arg1 ;
-(void)addPoint;


@end


#endif