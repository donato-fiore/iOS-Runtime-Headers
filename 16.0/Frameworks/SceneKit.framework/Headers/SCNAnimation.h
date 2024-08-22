// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNANIMATION_H
#define SCNANIMATION_H

@class NSString, NSArray, NSMutableDictionary;
@protocol SCNAnimation, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNTimingFunction.h"

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding>

 {
    *__C3DAnimation _animationRef;
    NSString *_keyPath;
    CGFloat _duration;
    CGFloat _repeatCount;
    CGFloat _timeOffset;
    CGFloat _beginTime;
    BOOL _autoreverses;
    BOOL _removedOnCompletion;
    BOOL _applyOnCompletion;
    BOOL _additive;
    BOOL _cumulative;
    BOOL _usesSceneTimeBase;
    BOOL _fillForward;
    BOOL _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    CGFloat _fadeInDuration;
    CGFloat _fadeOutDuration;
    id *_animationDidStart;
    id *_animationDidStop;
    NSMutableDictionary *_userInfo;
    id *_caAnimationCache;
    id *_userAnimation;
    BOOL _didMutate;
}


@property (nonatomic, getter=isAdditive) BOOL additive;
@property (copy, nonatomic) id *animationDidStart;
@property (copy, nonatomic) id *animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAppliedOnCompletion) BOOL appliedOnCompletion;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) CGFloat blendInDuration;
@property (nonatomic) CGFloat blendOutDuration;
@property (nonatomic, getter=isCumulative) BOOL cumulative;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (nonatomic) BOOL fillsBackward;
@property (nonatomic) BOOL fillsForward;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic) CGFloat repeatCount;
@property (nonatomic) CGFloat startDelay;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeOffset;
@property (retain, nonatomic) SCNTimingFunction *timingFunction;
@property (nonatomic) BOOL usesSceneTimeBase;


+(BOOL)supportsSecureCoding;
+(id)animationFromScene:(id)arg0 ;
+(id)animationNamed:(id)arg0 ;
+(id)animationWithC3DAnimation:(struct __C3DAnimation *)arg0 ;
+(id)animationWithCAAnimation:(id)arg0 ;
+(id)animationWithContentsOfURL:(id)arg0 ;
+(id)animationWithMDLTransform:(id)arg0 ;
-(*void)__CFObject;
-(CGFloat)fadeInDuration;
-(CGFloat)fadeOutDuration;
-(CGFloat)repeatDuration;
-(id)caAnimation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithC3DAnimation:(struct __C3DAnimation *)arg0 ;
-(id)initWithCAAnimation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)subAnimations;
-(id)userAnimation;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct __C3DAnimation *)animationRef;
-(void)_didMutate;
-(void)_optimizeKeyframesWithTarget:(id)arg0 ;
-(void)_setAnimationRef:(struct __C3DAnimation *)arg0 ;
-(void)_syncObjCModel;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareWithTarget:(id)arg0 implicitDuration:(CGFloat)arg1 ;
-(void)setFadeInDuration:(CGFloat)arg0 ;
-(void)setFadeOutDuration:(CGFloat)arg0 ;
-(void)setRepeatDuration:(CGFloat)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif