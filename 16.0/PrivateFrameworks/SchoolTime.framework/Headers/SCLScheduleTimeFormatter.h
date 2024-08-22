// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHEDULETIMEFORMATTER_H
#define SCLSCHEDULETIMEFORMATTER_H

@class NSFormatter, NSDateFormatter, NSCalendar;



@interface SCLScheduleTimeFormatter : NSFormatter {
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
}




-(id)init;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForScheduleTime:(id)arg0 ;


@end


#endif