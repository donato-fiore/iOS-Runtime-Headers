// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNISCENE_H
#define NUNISCENE_H

@class NSMutableArray, NSDate, NSString, NSArray;
@protocol NUNIAnimatable;

#import <Foundation/Foundation.h>

#import "NUNISpheroid.h"

@interface NUNIScene : NSObject <NUNIAnimatable>

 {
    NSUInteger _snap;
    NSMutableArray *_animations;
    NSDate *_date;
    BOOL _isUpdateNeeded;
    ? _cameraOffset;
    ? _cameraPosition;
    ? _cameraTarget;
    ? _cameraUp;
}


@property (readonly, nonatomic) int acceptableFrameInterval;
@property (nonatomic) NSUInteger backgroundType; // ivar: _backgroundType
@property ? cameraOffset;
@property (nonatomic) float cameraOrbit; // ivar: _cameraOrbit
@property ? cameraPosition;
@property (readonly, nonatomic) float cameraRoll; // ivar: _cameraRoll
@property ? cameraTarget;
@property ? cameraUp;
@property (nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (copy, nonatomic) id *currentDateBlock; // ivar: _currentDateBlock
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUNISpheroid *focus; // ivar: _focus
@property (readonly) NSUInteger hash;
@property (nonatomic) float locationDotAlpha; // ivar: _locationDotAlpha
@property (nonatomic) float locationDotMaximumRadius; // ivar: _locationDotMaximumRadius
@property (nonatomic) float locationDotPulse; // ivar: _locationDotPulse
@property (nonatomic) float locationDotPulseOverrideAlpha; // ivar: _locationDotPulseOverrideAlpha
@property (nonatomic) int minFrameInterval; // ivar: _minFrameInterval
@property (nonatomic) CLLocationCoordinate2D offsetCoordinate; // ivar: _offsetCoordinate
@property (readonly, nonatomic) NSUInteger projectionType; // ivar: _projectionType
@property (readonly, nonatomic) float restingCameraRoll;
@property (nonatomic) NSUInteger snap;
@property (readonly, copy, nonatomic) NSArray *spheroids; // ivar: _spheroids
@property (readonly) Class superclass;
@property (nonatomic, getter=isUpdatable) BOOL updatable; // ivar: _isUpdatable
@property (readonly, nonatomic) float yearsSince1970; // ivar: _yearsSince1970


-(BOOL)isAnimating:(id)arg0 forKeys:(NSUInteger)arg1 ;
-(id)animatedFloatForKey;
-(id)initWithSphereoids:(NSUInteger)arg0 currentDateBlock:(id)arg1 ;
-(id)initWithSphereoids:(NSUInteger)arg0 projectionType:(NSUInteger)arg1 currentDateBlock:(id)arg2 ;
-(id)spheroidOfType:(NSUInteger)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)removeAllAnimationsFor:(id)arg0 withKeys:(NSUInteger)arg1 ;
-(void)removeAnimation:(id)arg0 ;
-(void)update:(float)arg0 ;
-(void)updateSunLocationAnimated:(BOOL)arg0 ;
-(void)updateSunLocationForDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif