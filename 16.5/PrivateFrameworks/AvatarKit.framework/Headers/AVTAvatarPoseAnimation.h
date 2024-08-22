// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARPOSEANIMATION_H
#define AVTAVATARPOSEANIMATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AVTAvatarPose.h"

@interface AVTAvatarPoseAnimation : NSObject {
    NSDictionary *_staticPhysicsStates;
    NSDictionary *_blendshapeAnimations;
    NSDictionary *_perNodeAnimations;
    NSString *_animationBaseKey;
}


@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) AVTAvatarPose *staticPose; // ivar: _staticPose


+(id)animationFromDataRepresentation:(id)arg0 keyPath:(id)arg1 ;
+(id)animationFromDictionaryRepresentation:(id)arg0 keyPath:(id)arg1 ;
+(id)optimizeAnimation:(id)arg0 target:(id)arg1 ;
+(void)dataRepresentationForAnimation:(id)arg0 completionHandler:(id)arg1 ;
+(void)dictionaryRepresentationForAnimation:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeAllAnimationsFromAvatar:(id)arg0 ;
-(id)_addAnimationToAvatar:(id)arg0 options:(NSUInteger)arg1 transitionInDuration:(CGFloat)arg2 transitionOutDuration:(CGFloat)arg3 isTransient:(BOOL)arg4 completionQueue:(id)arg5 completionHandler:(id)arg6 ;
-(id)_initWithScene:(id)arg0 usdaMetadata:(struct ? )arg1 identifier:(id)arg2 ;
-(id)_initWithStaticPoseRepresentation:(id)arg0 animatedPoseRepresentation:(id)arg1 staticPhysicsStatesRepresentation:(id)arg2 identifier:(id)arg3 ;
-(id)addToAvatar:(id)arg0 options:(NSUInteger)arg1 ;
-(id)addToAvatar:(id)arg0 options:(NSUInteger)arg1 transitionDuration:(CGFloat)arg2 ;
-(id)addToAvatar:(id)arg0 useStaticPhysicsState:(BOOL)arg1 ;
-(id)addToAvatar:(id)arg0 useStaticPhysicsState:(BOOL)arg1 transitionDuration:(CGFloat)arg2 ;
-(id)animatedPoseRepresentationWithAnimationRepresentationBuilder:(id)arg0 ;
-(id)animatedPoseRepresentationWithDataAnimationRepresentation;
-(id)animatedPoseRepresentationWithDictionaryAnimationRepresentation;
-(id)animationsForAvatar:(id)arg0 ;
-(id)initWithAnimatedPoseRepresentationAtURL:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 usdaMetadata:(struct ? )arg1 ;
-(id)initWithSceneAtURL:(id)arg0 ;
-(id)initWithSceneAtURL:(id)arg0 usdaMetadata:(struct ? )arg1 ;
-(id)initWithStaticPose:(id)arg0 staticPhysicsStates:(id)arg1 ;
-(id)initWithStaticPoseRepresentation:(id)arg0 animatedPoseRepresentation:(id)arg1 staticPhysicsStatesRepresentation:(id)arg2 ;
-(id)physicalizedPose;
-(void)commonInitWithIdentifier:(id)arg0 ;
-(void)playOnceOnAvatar:(id)arg0 options:(NSUInteger)arg1 transitionInDuration:(CGFloat)arg2 transitionOutDuration:(CGFloat)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif