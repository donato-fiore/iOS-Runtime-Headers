// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    ? _position;
    ? _target;
    ? _up;
}


@property (readonly, nonatomic) int acceptableFrameInterval;
@property (nonatomic) NSUInteger backgroundType; // ivar: _backgroundType
@property (nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (copy, nonatomic) id *currentDateBlock; // ivar: _currentDateBlock
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NUNISpheroid *focus; // ivar: _focus
@property (readonly) NSUInteger hash;
@property (nonatomic) int minFrameInterval; // ivar: _minFrameInterval
@property (nonatomic) float orbit; // ivar: _orbit
@property ? position;
@property (nonatomic) NSUInteger projectionType; // ivar: _projectionType
@property (nonatomic) float roll; // ivar: _roll
@property (readonly, nonatomic) NSUInteger sceneStyle; // ivar: _sceneStyle
@property (nonatomic) NSUInteger snap;
@property (readonly, copy, nonatomic) NSArray *spheroids; // ivar: _spheroids
@property (readonly) Class superclass;
@property ? target;
@property ? up;
@property (nonatomic, getter=isUpdatable) BOOL updatable; // ivar: _isUpdatable
@property (readonly, nonatomic) float yearsSince1970; // ivar: _yearsSince1970


-(BOOL)isAnimating:(id)arg0 forKeys:(NSUInteger)arg1 ;
-(id)animatedFloatForKey;
-(id)initWithSphereoids:(NSUInteger)arg0 currentDateBlock:(id)arg1 ;
-(id)initWithSphereoids:(NSUInteger)arg0 style:(NSUInteger)arg1 currentDateBlock:(id)arg2 ;
-(id)spheroidOfType:(NSUInteger)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)removeAllAnimationsFor:(id)arg0 withKeys:(NSUInteger)arg1 ;
-(void)removeAnimation:(id)arg0 ;
-(void)update:(float)arg0 ;
-(void)updateSunLocationAnimated:(BOOL)arg0 ;
-(void)updateSunLocationForDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif