// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCONCRETETIMELINESCORER_H
#define PXSTORYCONCRETETIMELINESCORER_H

@protocol PXStoryTimelineScorer, PXStoryTimelineStyle;

#import <Foundation/Foundation.h>

#import "_PXStoryConcreteScorerDisplayAssetsFetchResult.h"
#import "_PXStoryConcreteScorerDisplayAsset.h"

@interface PXStoryConcreteTimelineScorer : NSObject <PXStoryTimelineScorer>

 {
    _PXStoryConcreteScorerDisplayAssetsFetchResult *_segmentDisplayAssets;
    _PXStoryConcreteScorerDisplayAsset *_splitAsset;
    CGFloat _videoMaximumAspectFillScale;
    CGFloat _livePhotoSameOrientationMaximumScales;
    CGFloat _livePhotoOppositeOrientationMaximumScales;
    CGFloat _scoreForAspectFillOneUpWithPoorCrop;
}


@property (nonatomic) NSInteger saliencyFallbackBehavior; // ivar: _saliencyFallbackBehavior
@property (readonly, nonatomic) NSObject<PXStoryTimelineStyle> *timelineStyle; // ivar: _timelineStyle
@property (readonly, nonatomic) CGFloat verySignificantScore;


-(CGFloat)_scoreForClipInfo:(struct ? *)arg0 inClipFrame:(struct CGRect )arg1 timelineBounds:(struct CGRect )arg2 nUpBonus:(*CGFloat)arg3 ;
-(CGFloat)_scoreForSplitAsset:(id)arg0 inTimeline:(id)arg1 segmentTimeRange:(struct ? )arg2 ;
-(CGFloat)scoreForTimeline:(id)arg0 ;
-(id)init;
-(id)initWithTimelineStyle:(id)arg0 ;


@end


#endif