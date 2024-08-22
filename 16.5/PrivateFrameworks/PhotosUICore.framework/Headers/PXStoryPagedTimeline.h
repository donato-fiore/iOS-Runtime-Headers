// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPAGEDTIMELINE_H
#define PXSTORYPAGEDTIMELINE_H



#import "PXStoryDerivedTimeline.h"
#import "PXStoryPagedTimelineSpec.h"
#import "PXCArrayStore.h"

@interface PXStoryPagedTimeline : PXStoryDerivedTimeline {
    CGSize _size;
    ? _timeRange;
}


@property (readonly, nonatomic) id *clipSizeTranformer; // ivar: _clipSizeTranformer
@property (readonly, nonatomic) ? keyPageMix; // ivar: _keyPageMix
@property (readonly, nonatomic) NSInteger numberOfPages; // ivar: _numberOfPages
@property (readonly, nonatomic) PXStoryPagedTimelineSpec *spec; // ivar: _spec
@property (readonly, nonatomic) PXCArrayStore *transformedClipInfosStore; // ivar: _transformedClipInfosStore
@property (readonly, nonatomic) PXCArrayStore *transformedRectsStore; // ivar: _transformedRectsStore


-(NSInteger)_bestClipIndexForSegmentWithClipInfos:(struct ? *)arg0 frames:(struct CGRect *)arg1 count:(NSInteger)arg2 ;
-(NSInteger)_pageIndexAtX:(CGFloat)arg0 ;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)description;
-(id)initWithOriginalTimeline:(id)arg0 ;
-(id)initWithOriginalTimeline:(id)arg0 interpageSpacing:(CGFloat)arg1 ;
-(id)initWithOriginalTimeline:(id)arg0 keyPage:(struct ? )arg1 spec:(id)arg2 ;
-(struct ? )timeRange;
-(struct CGRect )frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGSize )size;
-(void)_enumerateSegmentsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
// -(void)_transormClips:(struct ? *)arg0 frames:(struct CGRect *)arg1 count:(NSInteger)arg2 transformHandler:(id)arg3 resultHandler:(unk)arg4  ;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;


@end


#endif