// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERCALENDARDAYSET_H
#define _UIDATEPICKERCALENDARDAYSET_H

@class NSCalendar, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIDatePickerCalendarDaySet : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_loadedDays;
}




-(id)_createDaysForMonth:(id)arg0 ;
-(id)_partialDaysForMonth:(id)arg0 atBeginningOfMonth:(BOOL)arg1 count:(NSUInteger)arg2 ;
-(id)daysForMonth:(id)arg0 includingOverlapDays:(BOOL)arg1 ;
-(id)initWithCalendar:(id)arg0 ;
-(id)loadedDays;
-(void)cleanupDaysKeepingDaysForMonths:(id)arg0 ;


@end


#endif