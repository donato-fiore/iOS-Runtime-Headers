// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHEDULEINTERVALFORMATTER_H
#define SCLSCHEDULEINTERVALFORMATTER_H

@class NSFormatter, NSDateIntervalFormatter, NSBundle, NSLocale, NSCalendar, NSTimeZone, NSDateFormatter, NSString;



@interface SCLScheduleIntervalFormatter : NSFormatter

@property (retain, nonatomic) NSDateIntervalFormatter *briefFormatter; // ivar: _briefFormatter
@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (nonatomic) BOOL coalescesAMPMSymbols; // ivar: _coalescesAMPMSymbols
@property (nonatomic) NSUInteger formattingStyle; // ivar: _formattingStyle
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) BOOL prefersHoursOnly; // ivar: _prefersHoursOnly
@property (retain, nonatomic) NSCalendar *referenceCalendar; // ivar: _referenceCalendar
@property (retain, nonatomic) NSTimeZone *referenceTimeZone; // ivar: _referenceTimeZone
@property (retain, nonatomic) NSDateFormatter *shortFormatter; // ivar: _shortFormatter
@property (retain, nonatomic) NSString *table; // ivar: _table


-(id)_shortIntervalFormat;
-(id)_stringForCoalescedAMPMSymbolsWithDateInterval:(id)arg0 locale:(id)arg1 startTimeComponents:(id)arg2 endTimeComponents:(id)arg3 ;
-(id)_stringForDateInterval:(id)arg0 startComponents:(id)arg1 endComponents:(id)arg2 ;
-(id)init;
-(id)newDateFormatterWithLocale:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromTime:(id)arg0 toTime:(id)arg1 ;
-(id)stringFromTimeInterval:(id)arg0 ;


@end


#endif