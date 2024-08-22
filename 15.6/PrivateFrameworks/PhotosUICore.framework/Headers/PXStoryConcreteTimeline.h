// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETETIMELINE_H
#define PXSTORYCONCRETETIMELINE_H

@protocol NSCopying, NSMutableCopying;


#import "PXStoryBaseTimeline.h"
#import "PXStoryResourcesDataSource.h"

@interface PXStoryConcreteTimeline : PXStoryBaseTimeline <NSCopying, NSMutableCopying>

 {
    ? _timeRange;
    NSInteger _clipCapacity;
    *? _clipTimeRanges;
    *NSInteger _clipIndicesSortedByTimeRangeEnd;
    *CGRect _clipFrames;
    *? _clipInfos;
    *NSInteger _clipResourceKinds;
    *NSInteger _clipResourceIndexes;
    NSInteger _segmentCapacity;
    *? _segmentTimeRanges;
    *? _segmentInfos;
    CGSize _size;
}


@property (readonly, nonatomic) NSInteger lastClipIdentifier;
@property (nonatomic) NSInteger numberOfClips; // ivar: _numberOfClips
@property (nonatomic) NSInteger numberOfSegments; // ivar: _numberOfSegments
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource


-(NSInteger)dataSourceIdentifier;
-(NSInteger)identifierForSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)identifierOfFirstClipContainingResourceAtIndex:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)identifierOfSegmentClosestToSegmentWithIdentifier:(NSInteger)arg0 inTimeline:(id)arg1 ;
-(NSInteger)indexOfResourceForClipWithIdentifier:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)indexOfSegmentWithIdentifier:(NSInteger)arg0 ;
-(id)_clipResourceIndexesOfKind:(NSInteger)arg0 inSegmentAtIndex:(NSInteger)arg1 ;
-(id)_indexesOfSegmentsContainingClipsWithResourceKind:(NSInteger)arg0 indexes:(id)arg1 ;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)identifiersOfSegmentsMatchingSegmentWithIdentifier:(NSInteger)arg0 inTimeline:(id)arg1 ;
-(id)indexesOfResourcesWithKind:(NSInteger)arg0 inResourcesDataSource:(id)arg1 forClipsInSegmentWithIdentifier:(NSInteger)arg2 ;
-(id)init;
-(id)initWithSize:(struct CGSize )arg0 resourcesDataSource:(id)arg1 ;
-(id)initWithTimeline:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )infoForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct ? )timeRange;
-(struct ? )timeRangeForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGSize )size;
-(struct _NSRange )_smallestRangeOfClipsPotentiallyIntersectingTimeRange:(struct ? )arg0 ;
-(struct _NSRange )_smallestRangeOfSegmentsPotentiallyIntersectingTimeRange:(struct ? )arg0 ;
-(void)_assertConsistency;
-(void)_enumerateClipsWithResourceKind:(NSInteger)arg0 indexes:(id)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;
-(void)dealloc;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateConcreteClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif