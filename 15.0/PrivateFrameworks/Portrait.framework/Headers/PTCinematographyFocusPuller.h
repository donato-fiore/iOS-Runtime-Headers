// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYFOCUSPULLER_H
#define PTCINEMATOGRAPHYFOCUSPULLER_H


#import <Foundation/Foundation.h>


@interface PTCinematographyFocusPuller : NSObject

@property float alpha; // ivar: _alpha
@property float focusDistance; // ivar: _focusDistance
@property (readonly) float maximumAcceleration; // ivar: _maximumAcceleration
@property (readonly) float maximumVelocity; // ivar: _maximumVelocity
@property (readonly) float resistance; // ivar: _resistance
@property NSUInteger sampleCount; // ivar: _sampleCount
@property (readonly) NSUInteger strategy; // ivar: _strategy
@property float targetDistance; // ivar: _targetDistance
@property ? time; // ivar: _time
@property float velocity; // ivar: _velocity


+(NSUInteger)defaultStrategy;
+(float)defaultEMASampleCount;
+(float)defaultMaximumVelocity;
+(float)defaultResistance;
-(float)_emaDelta:(float)arg0 ;
-(float)_minimumTimestepsToMoveBy:(float)arg0 maxddx:(float)arg1 ;
-(float)_weightedDialDelta:(float)arg0 timeDelta:(float)arg1 ;
-(float)pullTowardFocusDistance:(float)arg0 time:(struct ? )arg1 ;
-(float)pullTowardFocusDistance:(float)arg0 time:(struct ? )arg1 missing:(BOOL)arg2 ;
-(id)_asCinematographyDictionary;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)init;
-(id)initWithExponentialMovingAverageAlpha:(float)arg0 ;
-(id)initWithExponentialMovingAverageSampleCount:(NSUInteger)arg0 ;
-(id)initWithMaximumVelocity:(float)arg0 resistance:(float)arg1 ;
-(void)reset;


@end


#endif