// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYFALLBACKMOVIEHIGHLIGHTCURATION_H
#define PXSTORYFALLBACKMOVIEHIGHLIGHTCURATION_H

@class NSData, NSString, NSArray;
@protocol PXStoryMovieHighlightCuration, PXStoryMovieHighlight;

#import <Foundation/Foundation.h>


@interface PXStoryFallbackMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration>

 {
    ? _duration;
    ? _playbackRange;
    ? _highlightRange;
    CGRect _bestPlaybackRect;
    NSData *_normalizationData;
    float _audioQualityScore;
}


@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *bestHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *defaultHighlight;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *fullMovie;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *livePhoto;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *movieSummary;
@property (readonly) Class superclass;


+(id)movieHighlightCurationForDisplayAsset:(id)arg0 ;
+(id)movieHighlightCurationForLivePhotoAsset:(id)arg0 ;
+(id)movieHighlightCurationForVideoAsset:(id)arg0 ;
+(struct ? )defaultHighlightRangeForPlaybackRange:(struct ? )arg0 ;
+(struct ? )maxHighlightDuration;
+(void)setMaxHighlightDuration:(struct ? )arg0 ;
-(id)init;
-(id)initWithAssetDuration:(struct ? )arg0 playbackRange:(struct ? )arg1 highlightRange:(struct ? )arg2 bestPlaybackRect:(struct CGRect )arg3 normalizationData:(id)arg4 audioQualityScore:(float)arg5 ;


@end


#endif