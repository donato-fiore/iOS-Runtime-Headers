// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNEFFECT_H
#define SCNEFFECT_H

@class NSMutableDictionary, NSString, NSArray;
@protocol SCNAnimatable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"
#import "SCNEffect.h"

@interface SCNEffect : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>

 {
    ? _vfx;
    BOOL _isPresentationInstance;
    NSMutableDictionary *_parameters;
    NSString *_vfxName;
    NSString *_name;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}


@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) SCNEffect *presentationEffect;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)effectWithName:(id)arg0 ;
+(id)effectWithVFXRef:(struct __C3DVFX *)arg0 ;
-(*void)__CFObject;
-(?)vfxRef;
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
-(id)identifier;
-(id)initPresentationEffectWithVFXRef:(struct __C3DVFX *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithVFXRef:(struct __C3DVFX *)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)parameters;
-(id)presentationInstance;
-(id)scene;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)vfxName;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_syncEntityObjCModel;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setParameters:(id)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif