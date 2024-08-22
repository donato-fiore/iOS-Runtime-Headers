// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNTRANSITIONRENDERER_H
#define KNTRANSITIONRENDERER_H

@class CALayer, NSMutableArray, NSDictionary, NSMapTable, TSDFPSCounter, NSString;
@protocol CAAnimationDelegate;


#import "KNAnimationRenderer.h"
#import "KNAnimatedSlideView.h"

@interface KNTransitionRenderer : KNAnimationRenderer <CAAnimationDelegate>

 {
    CALayer *_backgroundLayer;
    NSMutableArray *_textures;
    NSDictionary *_attributes;
    NSInteger _numberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    BOOL _shouldAnimateTransition;
    BOOL _animationsRanToCompletion;
    BOOL _hasBeenTornDown;
    id *_transitionEndCallbackTarget;
    SEL _transitionEndCallbackSelector;
    TSDFPSCounter *_FPSCounter;
    BOOL _shouldTearDownIncomingTexture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) KNAnimatedSlideView *incomingAnimatedSlideView;
@property (readonly) Class superclass;


-(BOOL)addAnimationsAtTime:(CGFloat)arg0 relativeToCurrentMediaTime:(BOOL)arg1 ;
-(BOOL)p_addAnimations:(id)arg0 atTime:(CGFloat)arg1 relativeToCurrentMediaTime:(BOOL)arg2 ;
-(id)initWithEffectClass:(Class)arg0 direction:(NSUInteger)arg1 duration:(CGFloat)arg2 session:(id)arg3 attributes:(id)arg4 animatedSlideView:(id)arg5 ;
-(id)plugin;
-(void)animate;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)forceRemoveAnimations;
-(void)generateTextures;
-(void)p_checkForNullTransitions:(Class)arg0 ;
-(void)p_removeAnimationsShouldForceRemove:(BOOL)arg0 ;
-(void)pauseAnimationsAtTime:(CGFloat)arg0 ;
-(void)registerForTransitionEndCallback:(SEL)arg0 target:(id)arg1 ;
-(void)removeAnimationsAndFinish:(BOOL)arg0 ;
-(void)renderSlideIndex:(NSUInteger)arg0 ;
-(void)renderTextures;
-(void)renderTexturesSynchronously;
-(void)resumeAnimationsIfPausedAtTime:(CGFloat)arg0 ;
-(void)setupLayerTreeForTransition;
-(void)setupPluginContext;
-(void)stopAnimations;
-(void)teardown;
-(void)updateAnimationTestingLog;
-(void)updateAnimationsForLayerTime:(CGFloat)arg0 ;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg0 ;


@end


#endif