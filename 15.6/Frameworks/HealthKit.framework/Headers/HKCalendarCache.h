// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCALENDARCACHE_H
#define HKCALENDARCACHE_H

@class NSMutableDictionary, NSCalendar;

#import <Foundation/Foundation.h>


@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}




+(id)earliestTimeZoneCalendar;
+(id)latestTimeZoneCalendar;
-(id)calendarForTimeZone:(id)arg0 ;
-(id)currentCalendar;
-(id)init;
-(void)_test_setCurrentCalendar:(id)arg0 ;


@end


#endif