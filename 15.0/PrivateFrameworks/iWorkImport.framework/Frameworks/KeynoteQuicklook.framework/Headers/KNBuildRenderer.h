// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNBUILDRENDERER_H
#define KNBUILDRENDERER_H

@class NSMapTable, TSDTextureSet, TSDFPSCounter, NSMutableSet, NSArray, NSString, TSDDrawableInfo, CALayer, TSDRep, TSDTextureDescription;
@protocol CAAnimationDelegate;


#import "KNAnimationRenderer.h"
#import "KNAnimationInfo.h"
#import "KNAnimatedBuild.h"
#import "KNBuildChunk.h"

@interface KNBuildRenderer : KNAnimationRenderer <CAAnimationDelegate>

 {
    NSInteger _numberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    id *_buildEndCallbackTarget;
    SEL _buildEndCallbackSelector;
    TSDTextureSet *_endOfBuildTextureSet;
    TSDTextureSet *_textureSet;
    TSDTextureSet *_finalAttributesTextureSet;
    KNAnimationInfo *_animationInfo;
    BOOL _isPreview;
    BOOL _interrupted;
    BOOL _isAnimationForPlayback;
    BOOL _areAnimationsReadyToStart;
    BOOL _usingFinalTexture;
    BOOL _isTextureCachedAtEndOfBuild;
    BOOL _shouldUseMagicMoveTextures;
    BOOL _isNonCachedTextureValid;
    BOOL _animationWillBeginPerformed;
    TSDFPSCounter *_FPSCounter;
    NSMutableSet *_texturesToTeardown;
}


@property (readonly, nonatomic) KNAnimatedBuild *animatedBuild; // ivar: _animatedBuild
@property (readonly, nonatomic) NSArray *animatedBuildsToStartAtEnd; // ivar: _animatedBuildsToStartAtEnd
@property (readonly, nonatomic) KNBuildChunk *buildStage; // ivar: _buildStage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDDrawableInfo *info; // ivar: _info
@property (retain, nonatomic) CALayer *parentLayer; // ivar: _parentLayer
@property (readonly, nonatomic) TSDRep *rep;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger textureDeliveryStyle;
@property (retain, nonatomic) TSDTextureDescription *textureDescription; // ivar: _textureDescription
@property (readonly, nonatomic) TSDTextureSet *textureSet;
@property (readonly, nonatomic) NSInteger textureStageIndex;


-(BOOL)addAnimationsAtLayerTime:(CGFloat)arg0 ;
-(BOOL)p_isDriftAnimation;
-(BOOL)p_isMovieInfo;
-(BOOL)p_isTextDrawable;
-(BOOL)shouldPreGenerateTextures;
-(id)animationWillBegin;
-(id)initWithAnimatedBuild:(id)arg0 info:(id)arg1 buildStage:(id)arg2 animatedSlideView:(id)arg3 ;
-(id)initializeTextureSetForEndOfBuild:(BOOL)arg0 endOfSlide:(BOOL)arg1 description:(id)arg2 isRenderingToContext:(BOOL)arg3 ;
-(id)loadPluginIfNeeded;
-(id)p_filterForTextDelivery:(NSInteger)arg0 childRepTextDeliveryFilter:(*id)arg1 ;
-(id)p_initializeTextureSetForEndOfBuild:(BOOL)arg0 endOfSlide:(BOOL)arg1 description:(id)arg2 isRenderingToContext:(BOOL)arg3 ;
-(id)p_keyForAnimation;
-(id)p_textureSetForStage:(NSInteger)arg0 description:(id)arg1 isAtEndOfBuild:(BOOL)arg2 shouldForceRebuild:(BOOL)arg3 shouldRender:(BOOL)arg4 ;
-(id)setupFinalTextureGivenCurrentTextureSet:(id)arg0 isRenderingToContext:(BOOL)arg1 ;
-(id)textureDescriptionForStage:(NSInteger)arg0 isAtEndOfBuild:(BOOL)arg1 ;
-(id)textureSetForStage:(NSInteger)arg0 description:(id)arg1 isAtEndOfBuild:(BOOL)arg2 shouldForceRebuild:(BOOL)arg3 shouldRender:(BOOL)arg4 ;
-(void)addBuildToStartAtEnd:(id)arg0 ;
-(void)animate;
-(void)animationDidEnd;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)fadeOutPreviousStageOn:(id)arg0 atLayerTime:(CGFloat)arg1 ;
-(void)forceRemoveAnimations;
-(void)generateTextures;
-(void)p_removeAnimations;
-(void)p_resetAnimations;
-(void)p_updateTextureDescription:(id)arg0 forStage:(NSInteger)arg1 isAtEndOfBuild:(BOOL)arg2 ;
-(void)pauseAnimationsAtTime:(CGFloat)arg0 ;
-(void)registerForBuildEndCallback:(SEL)arg0 target:(id)arg1 ;
-(void)removeAnimationsAndFinish:(BOOL)arg0 ;
-(void)removeBuildToStartAtEnd:(id)arg0 ;
-(void)renderTextures;
-(void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg0 ;
-(void)resetPreviousStageToUnhighlightOnTextureSet:(id)arg0 ;
-(void)resumeAnimationsIfPausedAtTime:(CGFloat)arg0 ;
-(void)setEndOfBuildTextureSet:(id)arg0 ;
-(void)setGeometryAndActionAttributesOnTextureSet:(id)arg0 isAtEndOfBuild:(BOOL)arg1 isAtEndOfSlide:(BOOL)arg2 isRenderingToContext:(BOOL)arg3 ;
-(void)setLayerVisibility:(id)arg0 isAtEndOfBuild:(BOOL)arg1 ;
-(void)setupPluginContext;
-(void)stopAnimations;
-(void)teardown;
-(void)updateAnimationTestingLog;
-(void)updateAnimationsForLayerTime:(CGFloat)arg0 ;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg0 ;


@end


#endif