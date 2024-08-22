// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16HEALTHEXPERIENCE25THREADSAFEHKCALENDARCACHE_H
#define _TTC16HEALTHEXPERIENCE25THREADSAFEHKCALENDARCACHE_H

@class HKCalendarCache;



@interface _TtC16HealthExperience25ThreadsafeHKCalendarCache : HKCalendarCache {
    ? lock;
}




-(id)calendarForTimeZone:(id)arg0 ;
-(id)currentCalendar;
-(id)init;


@end


#endif