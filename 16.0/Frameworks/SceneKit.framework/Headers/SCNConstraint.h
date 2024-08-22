// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNCONSTRAINT_H
#define SCNCONSTRAINT_H

@class NSMutableDictionary, NSArray, NSString;
@protocol NSCopying, NSSecureCoding, SCNAnimatable;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>

 {
    ? _constraintRef;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    BOOL _enabled;
    BOOL _incremental;
    CGFloat _influenceFactor;
}


@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncremental) BOOL incremental;
@property (nonatomic) CGFloat influenceFactor;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(*void)__CFObject;
-(?)setConstraintRef;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(id)scene;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DConstraint *)constraintRef;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_syncObjCAnimations;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)commonInit;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeDecodeConstraint:(id)arg0 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif