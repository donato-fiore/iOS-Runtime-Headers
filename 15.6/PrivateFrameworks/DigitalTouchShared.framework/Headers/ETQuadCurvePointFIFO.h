// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETQUADCURVEPOINTFIFO_H
#define ETQUADCURVEPOINTFIFO_H



#import "ETPointFIFO.h"

@interface ETQuadCurvePointFIFO : ETPointFIFO {
    ? _lastPoint;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _prevPoints;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _points;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _controlPoints;
}


@property ? controlPoints;
@property (copy) id *emissionHandler; // ivar: _emissionHandler
@property (nonatomic) BOOL emitInterpolatedPoints; // ivar: _emitInterpolatedPoints
@property ? lastPoint;
@property ? points;
@property ? prevPoints;
@property (nonatomic) float unitSize; // ivar: _unitSize


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoints:(*NSUInteger)arg0 count;


@end


#endif