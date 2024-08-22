// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCOREANALYTICSTIMEDMETRICEVENT_H
#define HMCOREANALYTICSTIMEDMETRICEVENT_H

@class NSNumber, NSDate;


#import "HMCoreAnalyticsMetricEvent.h"

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (readonly) NSNumber *duration;
@property (copy) NSDate *finishedDate; // ivar: _finishedDate
@property (copy) NSDate *startedDate; // ivar: _startedDate


-(id)eventPayload;
-(void)finish;
-(void)start;


@end


#endif