// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYBASETIMELINE_H
#define PXSTORYBASETIMELINE_H

@class NSString;
@protocol PXStoryTimeline;

#import <Foundation/Foundation.h>


@interface PXStoryBaseTimeline : NSObject <PXStoryTimeline>



@property (readonly, nonatomic) NSInteger dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSInteger firstSegmentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lastSegmentIdentifier;
@property (readonly, nonatomic) NSInteger numberOfSegments;
@property (readonly, nonatomic) NSString *objectiveCCode;
@property (readonly, nonatomic) CGSize originalSize;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? timeRange;


-(BOOL)containsAllSegmentsWithIdentifiers:(id)arg0 ;
-(BOOL)containsSegmentWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)identifierForSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)identifierForSegmentWithOffset:(struct ? )arg0 fromEndOfSegmentWithIdentifier:(NSInteger)arg1 timeIntoSegment:(struct ? *)arg2 ;
-(NSInteger)identifierOfFirstClipContainingResourceAtIndex:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)identifierOfSegmentClosestToSegmentWithIdentifier:(NSInteger)arg0 inTimeline:(id)arg1 ;
-(NSInteger)indexOfResourceForClipWithIdentifier:(NSInteger)arg0 inResourcesDataSource:(id)arg1 resourceKind:(NSInteger)arg2 ;
-(NSInteger)indexOfSegmentWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)numberOfClipsWithResourceKind:(NSInteger)arg0 ;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)clipWithResourceKind:(NSInteger)arg0 afterClipIdentifier:(NSInteger)arg1 ;
-(id)identifiersOfSegmentsMatchingSegmentWithIdentifier:(NSInteger)arg0 inTimeline:(id)arg1 ;
-(id)indexesOfResourcesWithKind:(NSInteger)arg0 inResourcesDataSource:(id)arg1 forClipsInSegmentWithIdentifier:(NSInteger)arg2 ;
-(id)segmentIdentifiersInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 ;
-(struct ? )infoForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct ? )timeRangeForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGRect )frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(void)_findSegmentMatchingIdentifier:(NSInteger)arg0 timeRange:(struct ? *)arg1 info:(struct ? *)arg2 ;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;


@end


#endif