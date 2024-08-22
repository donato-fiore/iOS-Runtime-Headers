// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTIMELINESCHEDULEROPTIONS_H
#define PXTIMELINESCHEDULEROPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXTimelineSchedulerOptions : NSObject

@property (nonatomic) CGFloat bestContentEntryDuration; // ivar: _bestContentEntryDuration
@property (retain, nonatomic) NSArray *bestContentStartTimeHours; // ivar: _bestContentStartTimeHours
@property (nonatomic) NSUInteger numberOfTimelines; // ivar: _numberOfTimelines
@property (nonatomic) CGFloat timelineEntryDuration; // ivar: _timelineEntryDuration
@property (nonatomic) NSUInteger timelineForSize; // ivar: _timelineForSize
@property (nonatomic) NSUInteger timelineIndex; // ivar: _timelineIndex


+(id)_sortTimelineSizesFromSet:(id)arg0 ;
-(id)init;
-(void)updateOptionsForTimelineSize:(NSUInteger)arg0 withTimelineSizes:(id)arg1 ;


@end


#endif