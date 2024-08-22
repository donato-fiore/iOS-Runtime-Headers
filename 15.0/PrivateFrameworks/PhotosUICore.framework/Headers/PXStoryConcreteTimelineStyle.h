// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCONCRETETIMELINESTYLE_H
#define PXSTORYCONCRETETIMELINESTYLE_H

@class NSArray, PFStoryAutoEditConfiguration;
@protocol PXStoryTimelineStyle, PXStoryTimelineSpec, PXAudioAsset, PXStoryAutoEditDecisionList, PFRandomNumberGenerator, PXStoryErrorReporter, PXAudioCueSource;

#import <Foundation/Foundation.h>

#import "PXStoryRecipeClipTransitionProvider.h"
#import "PXStoryRecipeClipMotionStyleProvider.h"

@interface PXStoryConcreteTimelineStyle : NSObject <PXStoryTimelineStyle>

 {
    id<PXStoryTimelineSpec> *_spec;
    BOOL _isRTL;
    id<PXAudioAsset> *_audioAsset;
    ? _styleOptions;
    NSUInteger _keyAssetCroppingOptions;
    NSUInteger _otherAssetsCroppingOptions;
    BOOL _allowsDefaultTransitions;
    BOOL _allowsRandomTransitionFallback;
    NSArray *_possibleFallbackTransitionKinds;
    BOOL _allowsDefaultSeparatorEffects;
    BOOL _allowsRandomSeparatorEffectsFallback;
    BOOL _allowsDefaultKenBurns;
    BOOL _allowsRandomKenBurnsFallback;
    ? _overallDurationInfo;
    id<PXStoryAutoEditDecisionList> *_autoEditDecisionList;
    NSArray *_allowedKeyAssetClipCompositions;
    NSArray *_allowedClipCompositions;
    id<PFRandomNumberGenerator> *_randomNumberGenerator;
    id<PXStoryErrorReporter> *_errorReporter;
    id<PXAudioCueSource> *_cueSource;
    CGFloat _effectiveMovementDurationFactor;
    CGFloat _scaleSpeedFactor;
    CGFloat _rotationSpeedFactor;
    PXStoryRecipeClipTransitionProvider *_fallbackTransitionProvider;
    PXStoryRecipeClipMotionStyleProvider *_fallbackMotionStyleProvider;
    PFStoryAutoEditConfiguration *_autoEditConfiguration;
}


@property (readonly, nonatomic) BOOL allowsIncompleteTimelines; // ivar: _allowsIncompleteTimelines
@property (readonly, nonatomic) BOOL allowsKenBurnsAnimations;
@property (readonly, nonatomic) ? defaultDisplayAssetPresentationDuration;


-(BOOL)isOriginalPlaybackStyleAllowedInNUp:(NSInteger)arg0 ;
-(CGFloat)composabilityScoreForSegmentWithDisplayAssets:(id)arg0 ;
-(CGFloat)effectiveMovementDurationForDurationInfo:(struct ? )arg0 ;
-(NSInteger)finalNUpPlaybackStyleForOriginalPlaybackStyle:(NSInteger)arg0 ;
-(NSInteger)finalOneUpPlaybackStyleForDisplayAsset:(id)arg0 originalPlaybackStyle:(NSInteger)arg1 ;
-(id)_clipForDisplayAsset:(id)arg0 ;
-(id)_clipForDisplayAssets:(id)arg0 ;
-(id)allowedClipCompositionsWithStartTime:(struct ? )arg0 nextDisplayAssets:(id)arg1 ;
-(id)clipCompositionForKeyAsset:(id)arg0 contentInfo:(struct ? *)arg1 finalPlaybackStyle:(NSInteger)arg2 ;
-(id)init;
-(id)initWithSpec:(id)arg0 audioAsset:(id)arg1 cueSource:(id)arg2 overallDurationInfo:(struct ? )arg3 autoEditDecisionList:(id)arg4 autoEditConfiguration:(id)arg5 allowedKeyAssetClipCompositions:(id)arg6 allowedClipCompositions:(id)arg7 randomNumberGenerators:(id)arg8 errorReporter:(id)arg9 allowsIncompleteTimelines:(BOOL)arg10 styleOptions:(struct ? )arg11 ;
-(struct ? )audioInfoForDisplayAsset:(id)arg0 ;
-(struct ? )contentInfoForDisplayAsset:(id)arg0 ;
-(struct ? )durationInfoForSegmentWithDisplayAssets:(id)arg0 startTime:(struct ? )arg1 ;
-(struct ? )transitionInfoForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 ;
-(void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 assetContentInfos:(struct ? *)arg2 finalPlaybackStyles:(*NSInteger)arg3 startTime:(struct ? )arg4 durationInfo:(struct ? )arg5 separatorEffectParameters:(struct ? *)arg6 separatorEffectContext:(NSInteger)arg7 buffer:(struct ? *)arg8 usingBlock:(id)arg9 ;
-(void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 finalPlaybackStyles:(*NSInteger)arg2 startTime:(struct ? )arg3 durationInfo:(struct ? )arg4 buffer:(struct ? *)arg5 usingBlock:(id)arg6 ;


@end


#endif