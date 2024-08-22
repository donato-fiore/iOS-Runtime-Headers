// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPSCHEDULERANGE_H
#define HKSPSLEEPSCHEDULERANGE_H

@class NSDateComponents;

#import <Foundation/Foundation.h>


@interface HKSPSleepScheduleRange : NSObject

@property (readonly, copy, nonatomic) NSDateComponents *earliestBedtimeComponents; // ivar: _earliestBedtimeComponents
@property (readonly, nonatomic) BOOL earliestBedtimeIsOnPreviousDay; // ivar: _earliestBedtimeIsOnPreviousDay
@property (readonly, copy, nonatomic) NSDateComponents *earliestWakeUpComponents; // ivar: _earliestWakeUpComponents
@property (readonly, copy, nonatomic) NSDateComponents *latestBedtimeComponents; // ivar: _latestBedtimeComponents
@property (readonly, copy, nonatomic) NSDateComponents *latestWakeUpComponents; // ivar: _latestWakeUpComponents


-(id)description;
-(id)initWithLatestWakeUpComponents:(id)arg0 latestBedtimeComponents:(id)arg1 earliestWakeUpComponents:(id)arg2 earliestBedtimeComponents:(id)arg3 earliestBedtimeIsOnPreviousDay:(BOOL)arg4 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif