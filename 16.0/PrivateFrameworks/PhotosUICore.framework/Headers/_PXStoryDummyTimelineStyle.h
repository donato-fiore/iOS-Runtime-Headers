// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYDUMMYTIMELINESTYLE_H
#define _PXSTORYDUMMYTIMELINESTYLE_H

@class NSArray;
@protocol PXStoryTimelineStyle, PXStoryTimelineSpec;

#import <Foundation/Foundation.h>

#import "PXStoryDummyStyle.h"
#import "PXStoryMultipartPanoramaParameters.h"

@interface _PXStoryDummyTimelineStyle : NSObject <PXStoryTimelineStyle>

 {
    PXStoryDummyStyle *_style;
    id<PXStoryTimelineSpec> *_spec;
    NSArray *_allowedClipCompositions;
}


@property (readonly, nonatomic) BOOL allowsIncompleteTimelines;
@property (readonly, nonatomic) ? defaultDisplayAssetPresentationDuration;
@property (readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultHorizontalMultipartPanoramaParameters;
@property (readonly, nonatomic) PXStoryMultipartPanoramaParameters *defaultVerticalMultipartPanoramaParameters;


-(BOOL)allowsMultipartPanoramaForDisplayAsset:(id)arg0 startTime:(struct ? )arg1 ;
-(BOOL)isOriginalPlaybackStyleAllowedInNUp:(NSInteger)arg0 ;
-(CGFloat)composabilityScoreForSegmentWithDisplayAssets:(id)arg0 ;
-(NSInteger)finalNUpPlaybackStyleForOriginalPlaybackStyle:(NSInteger)arg0 ;
-(NSInteger)finalOneUpPlaybackStyleForDisplayAsset:(id)arg0 originalPlaybackStyle:(NSInteger)arg1 ;
-(id)allowedClipCompositionsWithStartTime:(struct ? )arg0 nextDisplayAssets:(id)arg1 ;
-(id)clipCompositionForKeyAsset:(id)arg0 contentInfo:(struct ? *)arg1 finalPlaybackStyle:(NSInteger)arg2 ;
-(id)initWithStyle:(id)arg0 spec:(id)arg1 allowedClipCompositions:(id)arg2 ;
-(id)sortedCropContentsRectsForMultipartPanoramaWithDisplayAsset:(id)arg0 startTime:(struct ? )arg1 proposedCropContentsRects:(id)arg2 axis:(NSInteger)arg3 normalizedKenBurnsEffectParameters:(struct ? *)arg4 durationInfos:(struct ? *)arg5 transitionInfos:(struct ? *)arg6 ;
-(struct ? )audioInfoForDisplayAsset:(id)arg0 ;
-(struct ? )contentInfoForDisplayAsset:(id)arg0 ;
-(struct ? )durationInfoForSegmentWithDisplayAssets:(id)arg0 startTime:(struct ? )arg1 ;
-(struct ? )transitionInfoForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 ;
-(void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 assetContentInfos:(struct ? *)arg2 finalPlaybackStyles:(*NSInteger)arg3 startTime:(struct ? )arg4 durationInfo:(struct ? )arg5 separatorEffectParameters:(struct ? *)arg6 separatorEffectContext:(NSInteger)arg7 buffer:(struct ? *)arg8 usingBlock:(id)arg9 ;
-(void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 finalPlaybackStyles:(*NSInteger)arg2 startTime:(struct ? )arg3 durationInfo:(struct ? )arg4 buffer:(struct ? *)arg5 usingBlock:(id)arg6 ;


@end


#endif