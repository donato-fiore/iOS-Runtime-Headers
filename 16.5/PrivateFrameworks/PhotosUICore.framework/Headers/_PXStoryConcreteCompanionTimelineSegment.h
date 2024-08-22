// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYCONCRETECOMPANIONTIMELINESEGMENT_H
#define _PXSTORYCONCRETECOMPANIONTIMELINESEGMENT_H

@class NSArray;
@protocol PXStoryCompanionTimelineSegment, PXStoryCompanionTimelineSegmentTransition, PXStoryTimeline;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteCompanionTimelineSegment : NSObject <PXStoryCompanionTimelineSegment>



@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSObject<PXStoryCompanionTimelineSegmentTransition> *orderOutTransition;
@property (readonly, nonatomic) ? preferredDuration;
@property (readonly, nonatomic) ? segmentInfo; // ivar: _segmentInfo
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline


-(id)initWithTimeline:(id)arg0 segmentIndex:(NSInteger)arg1 ;


@end


#endif