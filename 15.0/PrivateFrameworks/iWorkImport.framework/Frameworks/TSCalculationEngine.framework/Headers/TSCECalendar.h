// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCECALENDAR_H
#define TSCECALENDAR_H

@class NSCalendar;

#import <Foundation/Foundation.h>


@interface TSCECalendar : NSObject {
    NSCalendar *_calendar;
}




-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 ;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)dateByAddingComponents:(id)arg0 toDate:(id)arg1 options:(NSUInteger)arg2 ;
-(id)dateFromComponents:(id)arg0 ;
-(id)dateWithIdenticalComponentsInGMTForDate:(id)arg0 ;
-(id)init;
-(id)initWithCalendarIdentifier:(id)arg0 timeZone:(id)arg1 ;
-(void)extractComponentsFromDate:(id)arg0 year:(*NSInteger)arg1 month:(*NSInteger)arg2 day:(*NSInteger)arg3 ;
-(void)extractComponentsFromDate:(id)arg0 year:(*NSInteger)arg1 month:(*NSInteger)arg2 day:(*NSInteger)arg3 hour:(*NSInteger)arg4 minute:(*NSInteger)arg5 second:(*NSInteger)arg6 ;


@end


#endif