// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRECOMBINEDTIMELINE_H
#define PXSTORYRECOMBINEDTIMELINE_H

@protocol PXStoryTimeline;


#import "PXStoryBaseTimeline.h"
#import "PXCArrayStore.h"

@interface PXStoryRecombinedTimeline : PXStoryBaseTimeline

@property (readonly, nonatomic) NSInteger firstTargetSegmentIndex; // ivar: _firstTargetSegmentIndex
@property (readonly, nonatomic) NSInteger lastSourceSegmentIndex; // ivar: _lastSourceSegmentIndex
@property (readonly, nonatomic) PXCArrayStore *shiftedTimeRangesStore; // ivar: _shiftedTimeRangesStore
@property (readonly, nonatomic) ? sourceTimeRange; // ivar: _sourceTimeRange
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *sourceTimeline; // ivar: _sourceTimeline
@property (readonly, nonatomic) ? targetTimeOffset; // ivar: _targetTimeOffset
@property (readonly, nonatomic) ? targetTimeRange; // ivar: _targetTimeRange
@property (readonly, nonatomic) ? targetTimeRangeInSourceTime; // ivar: _targetTimeRangeInSourceTime
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *targetTimeline; // ivar: _targetTimeline


+(BOOL)_isSegmentIndex:(NSInteger)arg0 inTimeline:(id)arg1 visuallyEqualToSegmentIndex:(NSInteger)arg2 inTimeline:(id)arg3 ;
+(id)timelineByRecombiningSourceTimeline:(id)arg0 withTargetTimeline:(id)arg1 visibleSegmentIdentifiers:(id)arg2 ;
-(NSInteger)dataSourceIdentifier;
-(NSInteger)identifierForSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)identifierOfFirstClipContainingResourceAtIndex:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)indexOfResourceForClipWithIdentifier:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)indexOfSegmentWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)numberOfSegments;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)indexesOfResourcesWithKind:(NSInteger)arg0 inResourcesDataSource:(id)arg1 forClipsInSegmentWithIdentifier:(NSInteger)arg2 ;
-(id)init;
-(id)initWithSourceTimeline:(id)arg0 upToSegmentIndex:(NSInteger)arg1 targetTimeline:(id)arg2 fromSegmentIndex:(NSInteger)arg3 ;
-(struct ? )timeRange;
-(struct ? )timeRangeForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGRect )frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGSize )size;
-(void)_shiftTimeRanges:(struct ? *)arg0 count:(NSInteger)arg1 byTime:(struct ? )arg2 resultHandler:(id)arg3 ;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif