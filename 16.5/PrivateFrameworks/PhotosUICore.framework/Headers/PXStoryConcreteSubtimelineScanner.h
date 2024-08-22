// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETESUBTIMELINESCANNER_H
#define PXSTORYCONCRETESUBTIMELINESCANNER_H

@class NSIndexSet, NSMutableArray, NSArray;
@protocol PXStoryTimelineSpec, PXStoryTimelineScorer, PXStoryTimelineStyle;

#import <Foundation/Foundation.h>

#import "PXStoryMutableConcreteTimeline.h"
#import "PXStoryMultipartPanoramaParameters.h"
#import "PXStoryResourcesDataSource.h"

@interface PXStoryConcreteSubtimelineScanner : NSObject {
    ? _clipCompositionContext;
    NSUInteger _productionOptions;
    NSInteger _initialResourceIndex;
    NSInteger _nextResourceIndex;
    NSInteger _numberOfResources;
    BOOL _firstDisplayAssetIsSameAsKey;
    PXStoryMutableConcreteTimeline *_subtimelineWithClipComposition;
    PXStoryMutableConcreteTimeline *_bestSubtimeline;
    PXStoryMutableConcreteTimeline *_candidateSubtimeline;
    PXStoryMutableConcreteTimeline *_precedingSubtimeline;
    PXStoryMutableConcreteTimeline *_precedingSubtimelineWithCandidateSubtimeline;
    PXStoryMutableConcreteTimeline *_precedingSubtimelineWithCandidateAndSubsequentSubtimelines;
    PXStoryMutableConcreteTimeline *_subtimelineWithRemainingClips;
    PXStoryMutableConcreteTimeline *_emptySubtimeline;
    NSIndexSet *_originalPlaybackStylesAllowedInNUp;
    *NSInteger _nUpPlaybackStyleMapping;
    NSMutableArray *_reusableDisplayAssetInfos;
    ? _noKenBurnsEffectParameters;
    ? _defaultDurationInfo;
    NSInteger _maximumNumberOfTitleTextResourceIndexes;
    *NSInteger _titleTextResourceIndexes;
    PXStoryMultipartPanoramaParameters *_defaultHorizontalMultipartPanoramaParameters;
    PXStoryMultipartPanoramaParameters *_defaultVerticalMultipartPanoramaParameters;
    CGFloat _minimumAspectRatioForHorizontalMultipartPanorama;
    CGFloat _maximumAspectRatioForVerticalMultipartPanorama;
}


@property (readonly, nonatomic) BOOL isAtBeginning;
@property (readonly, nonatomic) BOOL isAtEnd;
@property (readonly, nonatomic) NSInteger numberOfRemainingResources;
@property (readonly, nonatomic) NSArray *randomNumberGenerators; // ivar: _randomNumberGenerators
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (nonatomic) ? scanState;
@property (readonly, nonatomic) NSObject<PXStoryTimelineSpec> *spec; // ivar: _spec
@property (readonly, nonatomic) NSObject<PXStoryTimelineScorer> *timelineScorer; // ivar: _timelineScorer
@property (readonly, nonatomic) NSObject<PXStoryTimelineStyle> *timelineStyle; // ivar: _timelineStyle


-(BOOL)_scanFastestSubtimelineWithNextDisplayAssetResultHandler:(id)arg0 ;
-(BOOL)_scanMultipartPanoramaSubtimelineAfterTime:(struct ? )arg0 axis:(NSInteger)arg1 nextDisplayAssetsInfo:(id)arg2 resultHandler:(id)arg3 ;
-(BOOL)_scanMultipartPanoramaSubtimelineAfterTime:(struct ? )arg0 nextDisplayAssetsInfo:(id)arg1 resultHandler:(id)arg2 ;
-(BOOL)_scanSubtimelineWithClipComposition:(id)arg0 displayAssets:(id)arg1 assetContentInfos:(struct ? *)arg2 playbackStyles:(*NSInteger)arg3 separatorEffectParameters:(struct ? *)arg4 kenBurnsEffectParameters:(struct ? *)arg5 transitionInfo:(struct ? )arg6 startTime:(struct ? )arg7 durationInfo:(struct ? )arg8 resultHandler:(id)arg9 ;
-(BOOL)scanBestSubtimelineFollowingTimeline:(id)arg0 resultHandler:(id)arg1 ;
-(BOOL)scanFastestSubtimelineWithDisplayAssetResourceCount:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(BOOL)scanFastestSubtimelineWithRemainingClipsResultHandler:(id)arg0 ;
-(BOOL)scanSubtimelineWithClipComposition:(id)arg0 displayAssets:(id)arg1 assetContentInfos:(struct ? *)arg2 playbackStyles:(*NSInteger)arg3 separatorEffectParameters:(struct ? *)arg4 kenBurnsEffectParameters:(struct ? *)arg5 transitionInfo:(struct ? )arg6 startTime:(struct ? )arg7 durationInfo:(struct ? )arg8 resultHandler:(id)arg9 ;
-(id)_newDisplayAssetsInfo;
-(id)_nextDisplayAssetsInfoWithMaximumCount:(NSInteger)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_addTitlesToTimeline:(id)arg0 ;
-(void)_initializeDefaultMultipartPanoramaParameters;
-(void)_recycleDisplayAssetsInfo:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePossibleNextSubtimelinesAfterTime:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif