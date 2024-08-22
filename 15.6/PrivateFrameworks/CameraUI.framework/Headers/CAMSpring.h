// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSPRING_H
#define CAMSPRING_H


#import <Foundation/Foundation.h>


@interface CAMSpring : NSObject

@property (nonatomic, setter=_setCurrent:) CGFloat _current; // ivar: __current
@property (nonatomic, setter=_setLastTimestamp:) CGFloat _lastTimestamp; // ivar: __lastTimestamp
@property (readonly, nonatomic) CGFloat _lowerBound; // ivar: __lowerBound
@property (readonly, nonatomic) CGFloat _upperBound; // ivar: __upperBound
@property (nonatomic, getter=isConverged, setter=_setConverged:) BOOL converged; // ivar: _converged
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat maximumTimeDelta; // ivar: _maximumTimeDelta
@property (nonatomic) CGFloat target; // ivar: _target
@property (nonatomic) CGFloat tension; // ivar: _tension
@property (readonly, nonatomic) CGFloat unboundedValue;
@property (readonly, nonatomic) CGFloat value;
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(id)initWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 epsilon:(CGFloat)arg2 ;
-(id)initWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 epsilon:(CGFloat)arg2 boundedBetween:(CGFloat)arg3 and:(CGFloat)arg4 ;
-(void)_updateConverged;
-(void)_updateWithForce:(CGFloat)arg0 timestamp:(CGFloat)arg1 ;
-(void)converge;
-(void)resetToValue:(CGFloat)arg0 ;
-(void)updateForTimestamp:(CGFloat)arg0 ;


@end


#endif