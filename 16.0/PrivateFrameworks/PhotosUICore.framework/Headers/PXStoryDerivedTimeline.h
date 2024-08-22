// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDERIVEDTIMELINE_H
#define PXSTORYDERIVEDTIMELINE_H

@protocol PXStoryTimeline;


#import "PXStoryBaseTimeline.h"

@interface PXStoryDerivedTimeline : PXStoryBaseTimeline

@property (readonly, nonatomic) NSObject<PXStoryTimeline> *originalTimeline; // ivar: _originalTimeline


-(NSInteger)identifierOfFirstClipContainingResourceAtIndex:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)indexOfResourceForClipWithIdentifier:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)indexOfSegmentWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)numberOfSegments;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)indexesOfResourcesWithKind:(NSInteger)arg0 inResourcesDataSource:(id)arg1 forClipsInSegmentWithIdentifier:(NSInteger)arg2 ;
-(id)init;
-(id)initWithOriginalTimeline:(id)arg0 ;
-(struct ? )timeRange;
-(struct ? )timeRangeForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGRect )frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGSize )originalSize;
-(struct CGSize )size;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif