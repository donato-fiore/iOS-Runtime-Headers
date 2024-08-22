// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSAUTOCALENDAR_H
#define _NSAUTOCALENDAR_H



#import "NSCalendar.h"
#import "NSLocale.h"
#import "NSTimeZone.h"
#import "NSDate.h"

@interface _NSAutoCalendar : NSCalendar {
    NSCalendar *cal;
    NSLocale *changedLocale;
    NSTimeZone *changedTimeZone;
    NSUInteger changedFirstWeekday;
    NSUInteger changedMinimumDaysinFirstWeek;
    NSDate *changedGregorianStartDate;
    NSUInteger combinedNoteCount;
    os_unfair_lock_s _lock;
}






@end


#endif