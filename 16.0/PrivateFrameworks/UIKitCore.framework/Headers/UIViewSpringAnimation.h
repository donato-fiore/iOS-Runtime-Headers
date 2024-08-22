// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWSPRINGANIMATION_H
#define UIVIEWSPRINGANIMATION_H

@class NSString;
@protocol UIIntervalAnimating, UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIViewSpringAnimation : NSObject <UIIntervalAnimating>

 {
    id<UIVectorOperatable> *_current;
    id<UIVectorOperatable> *_velocity;
    id<UIVectorOperatable> *_zero;
    ? _state;
    ? _parameters;
    id<UIVectorOperatable> *_distance;
    id<UIVectorOperatable> *_scaledVelocity;
    id<UIVectorOperatable> *_epsilon;
    float _velocityScalingFactor;
    BOOL _parametersInitialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UIVectorOperatable> *intermediate; // ivar: _intermediate
@property (retain, nonatomic) NSObject<UIVectorOperatable> *intermediateVelocity; // ivar: _intermediateVelocity
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIVectorOperatable> *targetValue; // ivar: _targetValue
@property (retain, nonatomic) NSObject<UIVectorOperatable> *value; // ivar: _value
@property (retain, nonatomic) NSObject<UIVectorOperatable> *velocity;


-(BOOL)isStable;
-(id)initWithCurrent:(id)arg0 targetValue:(id)arg1 ;
-(id)initWithDescription:(id)arg0 current:(id)arg1 targetValue:(id)arg2 ;
-(id)stepWithDelta:(CGFloat)arg0 ;
-(void)updateWithDescription:(id)arg0 ;
-(void)updateWithDescription:(id)arg0 initial:(BOOL)arg1 ;


@end


#endif