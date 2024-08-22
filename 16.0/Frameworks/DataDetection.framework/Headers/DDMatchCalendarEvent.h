// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDMATCHCALENDAREVENT_H
#define DDMATCHCALENDAREVENT_H

@class NSDate, NSTimeZone;


#import "DDMatch.h"

@interface DDMatchCalendarEvent : DDMatch

@property (readonly, nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSTimeZone *endTimeZone; // ivar: _endTimeZone
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSTimeZone *startTimeZone; // ivar: _startTimeZone


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif