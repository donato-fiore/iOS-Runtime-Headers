// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEDIAANALYSISMOVIEHIGHLIGHT_H
#define PXSTORYMEDIAANALYSISMOVIEHIGHLIGHT_H

@class NSDictionary, NSData;
@protocol PXStoryMovieHighlight;

#import <Foundation/Foundation.h>


@interface PXStoryMediaAnalysisMovieHighlight : NSObject <PXStoryMovieHighlight>

 {
    NSDictionary *_analysis;
    NSInteger _highlightIndex;
}


@property (readonly, nonatomic) float audioQualityScore;
@property (readonly, nonatomic) CGRect bestPlaybackRect;
@property (readonly, nonatomic) BOOL hasFace;
@property (readonly, nonatomic) BOOL hasMusic;
@property (readonly, nonatomic) BOOL hasVoice;
@property (readonly, nonatomic) float loudness;
@property (readonly, nonatomic) NSData *normalizationData;
@property (readonly, nonatomic) float peakVolume;
@property (readonly, nonatomic) float qualityScore;
@property (readonly, nonatomic) ? timeRange;


+(float)fractionOfResults:(id)arg0 inRange:(struct ? )arg1 ;
+(id)defaultHighlightFromMediaAnalysis:(id)arg0 ;
+(id)fullMovieFromMediaAnalysis:(id)arg0 ;
+(id)livePhotoFromMediaAnalysis:(id)arg0 ;
+(id)movieHighlightsFromMediaAnalysis:(id)arg0 ;
+(id)movieSummaryFromMediaAnalysis:(id)arg0 ;
-(BOOL)hasFaceInRange:(struct ? )arg0 ;
-(BOOL)hasMusicInRange:(struct ? )arg0 ;
-(BOOL)hasVoiceInRange:(struct ? )arg0 ;
-(float)audioLoudnessForTimeRange:(struct ? )arg0 ;
-(float)audioPeakForTimeRange:(struct ? )arg0 ;
-(id)analysisResults;
-(id)description;
-(id)faceResults;
-(id)init;
-(id)initWithMediaAnalysis:(id)arg0 movieHighlightIndex:(NSInteger)arg1 ;
-(id)irisRecommendedResults;
-(id)movieHighlightResults;
-(id)movieHighlightScoreResults;
-(id)movieSummaryResults;
-(id)musicResults;
-(id)voiceResults;
-(struct ? )_bestTimeRangeForMinDuration:(CGFloat)arg0 maxDuration:(CGFloat)arg1 ;
-(struct ? )_bestTimeRangeForRange:(struct ? )arg0 targetDuration:(struct ? )arg1 ;
-(struct ? )_bestTimeRangeForTargetDuration:(CGFloat)arg0 tolerance:(CGFloat)arg1 ;
-(struct ? )bestTimeRangeForPreferredDuration:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(struct ? )bestTimeRangeForTargetDuration:(CGFloat)arg0 ;


@end


#endif