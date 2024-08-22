// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNANIMATIONPLAYER_H
#define SCNANIMATIONPLAYER_H

@class NSMutableDictionary, NSArray, NSString;
@protocol SCNAnimatable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"
#import "SCNAnimation.h"

@interface SCNAnimationPlayer : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>

 {
    *__C3DAnimationPlayer _playerRef;
    float _weight;
    float _speed;
    BOOL _paused;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}


@property (readonly, nonatomic) SCNAnimation *animation; // ivar: _animation
@property (readonly) NSArray *animationKeys;
@property (nonatomic) CGFloat blendFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL paused;
@property (nonatomic) CGFloat speed;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)animationPlayerWithAnimation:(id)arg0 ;
+(id)animationPlayerWithAnimationPlayerRef:(struct __C3DAnimationPlayer *)arg0 ;
+(id)animationPlayerWithSCNAnimation:(id)arg0 ;
-(*void)__CFObject;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(float)weight;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnimationPlayerRef:(struct __C3DAnimationPlayer *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSCNAnimation:(id)arg0 ;
-(id)scene;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_syncObjCAnimations;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)play;
-(void)prepareWithTarget:(id)arg0 implicitDuration:(CGFloat)arg1 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setWeight:(float)arg0 ;
-(void)stop;
-(void)stopWithBlendOutDuration:(CGFloat)arg0 ;
-(void)stopWithFadeOutDuration:(CGFloat)arg0 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif