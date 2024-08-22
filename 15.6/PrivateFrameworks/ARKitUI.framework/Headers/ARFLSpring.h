// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARFLSPRING_H
#define ARFLSPRING_H


#import <Foundation/Foundation.h>


@interface ARFLSpring : NSObject {
    ARFLCompoundSpring _s;
    CGFloat _targetVelocity;
    CGFloat _previousTarget;
    BOOL _transitioningFromTracking;
}


@property (nonatomic) CGFloat maximumTarget; // ivar: _maximumTarget
@property (nonatomic) CGFloat minimumTarget; // ivar: _minimumTarget
@property (nonatomic) ARFLSpringParameters parameters; // ivar: _parameters
@property (readonly, nonatomic) CGFloat projectedTarget;
@property (nonatomic) CGFloat projectionDeceleration; // ivar: _projectionDeceleration
@property (nonatomic) CGFloat retargetResponseFraction; // ivar: _retargetResponseFraction
@property (nonatomic) CGFloat rubberbandFactor; // ivar: _rubberbandFactor
@property (nonatomic) CGFloat rubberbandRange; // ivar: _rubberbandRange
@property (nonatomic) CGFloat target;
@property (nonatomic, getter=isTracking) BOOL tracking; // ivar: _tracking
@property (nonatomic) ARFLSpringParameters trackingParameters; // ivar: _trackingParameters
@property (nonatomic) CGFloat value;
@property (nonatomic) CGFloat velocity;


+(id)springWithValue:(CGFloat)arg0 ;
-(BOOL)usesDampingRatioResponseForSmoothing;
-(CGFloat)_projectedTargetForVelocity:(CGFloat)arg0 ;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 ;
-(struct ARFLSpringParameters )_effectiveParameters;
-(void)_updateForEffectiveParameters;
-(void)resetImmediatelyToValue:(CGFloat)arg0 ;
-(void)setUsesDampingRatioResponseForSmoothing:(BOOL)arg0 ;
-(void)step:(CGFloat)arg0 ;


@end


#endif