// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDATEINTERVALFORMATTER_H
#define PLDATEINTERVALFORMATTER_H

@class NSDateIntervalFormatter, NSCalendar, NSLocale;

#import <Foundation/Foundation.h>


@interface PLDateIntervalFormatter : NSObject

@property (nonatomic) BOOL alwaysShowYear; // ivar: _alwaysShowYear
@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // ivar: _dateIntervalFormatter
@property (readonly, nonatomic) NSCalendar *gmtCalendar; // ivar: _gmtCalendar
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


+(id)_currentLocalDate;
+(id)_dateFormatForDateFormatterType:(NSUInteger)arg0 displayYear:(BOOL)arg1 displayLongMonth:(BOOL)arg2 ;
+(id)stringFromStartDate:(id)arg0 endDate:(id)arg1 type:(NSUInteger)arg2 ;
+(id)stringFromStartDate:(id)arg0 endDate:(id)arg1 type:(NSUInteger)arg2 showLongMonthFormatIfNeeded:(BOOL)arg3 ;
-(BOOL)_yearIsNeededForDisplayingDate:(id)arg0 ;
-(id)init;
-(id)stringFromStartDate:(id)arg0 endDate:(id)arg1 type:(NSUInteger)arg2 ;
-(id)stringFromStartDate:(id)arg0 endDate:(id)arg1 type:(NSUInteger)arg2 showLongMonthFormatIfNeeded:(BOOL)arg3 ;


@end


#endif