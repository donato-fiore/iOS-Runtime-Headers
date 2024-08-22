// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYASPECTFITTINGTIMELINE_H
#define PXSTORYASPECTFITTINGTIMELINE_H

@class NSArray;


#import "PXStoryDerivedTimeline.h"

@interface PXStoryAspectFittingTimeline : PXStoryDerivedTimeline

@property (readonly, nonatomic) NSArray *keySegmentDisplayAssetClips; // ivar: _keySegmentDisplayAssetClips
@property (readonly, nonatomic) NSInteger keySegmentIdentifier; // ivar: _keySegmentIdentifier


-(id)initWithOriginalTimeline:(id)arg0 keySegmentMix:(struct ? )arg1 ;
-(void)_enumerateClipsKeySegmentWithTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)_setupKeySegmentDisplayAssetClips;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;


@end


#endif