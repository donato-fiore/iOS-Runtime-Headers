// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDUMMYTIMELINE_H
#define PXSTORYDUMMYTIMELINE_H

@class NSMutableDictionary, NSCountedSet;
@protocol NSCopying, NSMutableCopying;


#import "PXStoryBaseTimeline.h"

@interface PXStoryDummyTimeline : PXStoryBaseTimeline <NSCopying, NSMutableCopying>

 {
    ? _timeRange;
    NSInteger _clipCapacity;
    *? _clipTimeRanges;
    *CGRect _clipFrames;
    *? _clipInfos;
    NSInteger _segmentCapacity;
    *? _segmentTimeRanges;
    *? _segmentInfos;
    NSMutableDictionary *_clipsByIdentifier;
    NSCountedSet *_resourceOccurrenceCounts;
    NSInteger _numberOfSegments;
    CGSize _size;
}


@property (nonatomic) NSInteger numberOfClips; // ivar: _numberOfClips


-(NSInteger)numberOfSegments;
-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithTimeline:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )timeRange;
-(struct CGSize )size;
-(void)dealloc;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;
-(void)enumerateSegmentsInTimeRange:(struct ? )arg0 usingBlock:(id)arg1 ;
-(void)setNumberOfSegments:(NSInteger)arg0 ;


@end


#endif