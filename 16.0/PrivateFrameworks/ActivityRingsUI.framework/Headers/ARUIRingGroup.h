// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIRINGGROUP_H
#define ARUIRINGGROUP_H

@class NSMutableDictionary, NSString, NSArray;
@protocol ARUIAnimationObserver, NSCopying, ARUIAnimationSequencing, ARUIRingGroupDelegate;

#import <Foundation/Foundation.h>

#import "ARUIRingGroup.h"
#import "ARUISpriteSheet.h"

@interface ARUIRingGroup : NSObject <ARUIAnimationObserver, NSCopying>

 {
    NSMutableDictionary *_animations;
    BOOL _observingSequencing;
    id<ARUIAnimationSequencing> *_animationSequencer;
    ? _translation;
}


@property (readonly, nonatomic) BOOL animating;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARUIRingGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) float emptyOpacity; // ivar: _emptyOpacity
@property (readonly, nonatomic) ARUIRingGroup *forCompanion;
@property (readonly, nonatomic) ARUIRingGroup *forWatch;
@property (nonatomic) float groupDiameter; // ivar: _groupDiameter
@property (readonly) NSUInteger hash;
@property (nonatomic) float interspacing; // ivar: _interspacing
@property (nonatomic) float opacity; // ivar: _opacity
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger ringType; // ivar: _ringType
@property (readonly, nonatomic) NSArray *rings; // ivar: _rings
@property (nonatomic) float scale; // ivar: _scale
@property (readonly, nonatomic) ARUISpriteSheet *spriteSheet; // ivar: _spriteSheet
@property (readonly) Class superclass;
@property (nonatomic) float thickness; // ivar: _thickness
@property (nonatomic) float trackOpacity; // ivar: _trackOpacity
@property ? translation;
@property (readonly, nonatomic) ARUIRingGroup *withSpriteSheet;
@property (readonly, nonatomic) ARUIRingGroup *withWheelchairSpriteSheet;
@property (nonatomic) float zRotation; // ivar: _zRotation


+(NSUInteger)_numberOfRingsForRingType:(NSInteger)arg0 ;
+(id)_timingFunctionForCurve:(NSUInteger)arg0 ;
+(id)activityRingGroupForRingType:(NSInteger)arg0 ;
+(void)animateUsingSpringWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 animations:(id)arg2 ;
// +(void)animateUsingSpringWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 animations:(id)arg2 completion:(unk)arg3  ;
+(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1 ;
// +(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// +(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1 curve:(unk)arg2 completion:(NSUInteger)arg3  ;
-(CGFloat)_adjustedDurationForRingWithIndex:(NSInteger)arg0 startPercentage:(float)arg1 targetPercentage:(float)arg2 defaultDuration:(CGFloat)arg3 ;
-(float)_ringPercentageAdjustedForProximityToFull:(float)arg0 withRingDiameter:(float)arg1 thickness:(float)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNumberOfRings:(NSInteger)arg0 ;
-(id)initWithNumberOfRings:(NSInteger)arg0 animationSequencer:(id)arg1 ;
-(id)initWithRings:(id)arg0 animationSequencer:(id)arg1 ;
-(void)_removeAnimationForKey:(id)arg0 ;
-(void)animationSequencer:(id)arg0 updatedWithTime:(CGFloat)arg1 ;
-(void)playCelebration:(id)arg0 onRingAtIndex:(NSUInteger)arg1 ;
-(void)playCelebration:(id)arg0 onRingAtIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)playSpriteAnimationWithCompletion:(id)arg0 ;


@end


#endif