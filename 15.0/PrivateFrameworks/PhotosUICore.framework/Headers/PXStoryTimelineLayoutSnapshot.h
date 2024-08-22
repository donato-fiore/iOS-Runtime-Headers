// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTIMELINELAYOUTSNAPSHOT_H
#define PXSTORYTIMELINELAYOUTSNAPSHOT_H

@protocol PXStoryTimeline;

#import <Foundation/Foundation.h>


@interface PXStoryTimelineLayoutSnapshot : NSObject

@property (readonly, nonatomic) ? clipCornerRadius; // ivar: _clipCornerRadius
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline
@property (readonly, nonatomic) CGRect timelineRect; // ivar: _timelineRect


-(id)init;
-(id)initWithTimeline:(id)arg0 timelineRect:(struct CGRect )arg1 timeRange:(struct ? )arg2 clipCornerRadius:(struct ? )arg3 ;


@end


#endif