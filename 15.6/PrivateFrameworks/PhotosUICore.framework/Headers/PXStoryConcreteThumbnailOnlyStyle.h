// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETETHUMBNAILONLYSTYLE_H
#define PXSTORYCONCRETETHUMBNAILONLYSTYLE_H

@class NSArray, NSString;
@protocol PXStoryTimelineStyle, PXStoryStyle, PXAudioCueSource, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteThumbnailOnlyStyle : NSObject <PXStoryTimelineStyle, PXStoryStyle>

 {
    NSArray *_allowedClipCompositions;
}


@property (readonly, nonatomic) BOOL allowsIncompleteTimelines;
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *cueSource;
@property (readonly, nonatomic) NSInteger customColorGradeKind; // ivar: _customColorGradeKind
@property (readonly, nonatomic) ? defaultDisplayAssetPresentationDuration; // ivar: _defaultDisplayAssetPresentationDuration
@property (readonly, nonatomic) BOOL isCustomized;
@property (readonly, nonatomic) NSString *originalColorGradeCategory; // ivar: _originalColorGradeCategory
@property (readonly, nonatomic) ? outroDuration; // ivar: _outroDuration
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource;


-(BOOL)isOriginalPlaybackStyleAllowedInNUp:(NSInteger)arg0 ;
-(CGFloat)composabilityScoreForSegmentWithDisplayAssets:(id)arg0 ;
-(NSInteger)finalNUpPlaybackStyleForOriginalPlaybackStyle:(NSInteger)arg0 ;
-(NSInteger)finalOneUpPlaybackStyleForDisplayAsset:(id)arg0 originalPlaybackStyle:(NSInteger)arg1 ;
-(id)allowedClipCompositionsWithStartTime:(struct ? )arg0 nextDisplayAssets:(id)arg1 ;
-(id)clipCompositionForKeyAsset:(id)arg0 contentInfo:(struct ? *)arg1 finalPlaybackStyle:(NSInteger)arg2 ;
-(id)createRandomNumberGenerators;
-(id)init;
-(id)initWithCustomColorGradeKind:(NSInteger)arg0 originalColorGradeCategory:(id)arg1 ;
-(id)timelineStyleWithSpec:(id)arg0 resourcesDataSource:(id)arg1 randomNumberGenerators:(id)arg2 errorReporter:(id)arg3 ;
-(struct ? )audioInfoForDisplayAsset:(id)arg0 ;
-(struct ? )contentInfoForDisplayAsset:(id)arg0 ;
-(struct ? )durationInfoForSegmentWithDisplayAssets:(id)arg0 startTime:(struct ? )arg1 ;
-(struct ? )transitionInfoForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 ;
-(void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 assetContentInfos:(struct ? *)arg2 finalPlaybackStyles:(*NSInteger)arg3 startTime:(struct ? )arg4 durationInfo:(struct ? )arg5 separatorEffectParameters:(struct ? *)arg6 separatorEffectContext:(NSInteger)arg7 buffer:(struct ? *)arg8 usingBlock:(id)arg9 ;
-(void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)arg0 displayAssets:(id)arg1 finalPlaybackStyles:(*NSInteger)arg2 startTime:(struct ? )arg3 durationInfo:(struct ? )arg4 buffer:(struct ? *)arg5 usingBlock:(id)arg6 ;


@end


#endif