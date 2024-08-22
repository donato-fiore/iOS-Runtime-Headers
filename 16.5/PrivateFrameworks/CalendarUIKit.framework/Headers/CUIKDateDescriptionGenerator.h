// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKDATEDESCRIPTIONGENERATOR_H
#define CUIKDATEDESCRIPTIONGENERATOR_H

@class NSDateFormatter, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "CUIKDescriptionGenerator.h"

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {
    NSObject<OS_dispatch_queue> *_serialFormatterEditQueue;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_abbrevDayFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_standardTimeFormatter;
    NSDateFormatter *_customFormatter;
    NSDateFormatter *_fullStyleDateFormatter;
    NSDateFormatter *_dayOfWeekFormatter;
    NSMutableDictionary *_longFormatters;
}




+(id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(NSInteger)arg0 generateLowercaseString:(BOOL)arg1 ;
+(id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(NSInteger)arg0 generateLowercaseString:(BOOL)arg1 ;
+(id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(NSInteger)arg0 generateLowercaseString:(BOOL)arg1 ;
+(id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(NSInteger)arg0 generateLowercaseString:(BOOL)arg1 ;
+(id)sharedGenerator;
-(id)_customFormatter;
-(id)_dateFormatterWithLongFormat:(id)arg0 ;
-(id)_dateStringForDate:(id)arg0 relativeToReferenceDate:(id)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 lowercase:(BOOL)arg4 ;
-(id)_stringForDate:(id)arg0 relativeToReferenceDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(BOOL)arg3 lowerCase:(BOOL)arg4 ;
-(id)_timeStringForDate:(id)arg0 ;
-(id)abbreviatedDayFormatter;
-(id)dateStringForDate:(id)arg0 allDay:(BOOL)arg1 shortFormat:(BOOL)arg2 ;
-(id)dateStringForDate:(id)arg0 allDay:(BOOL)arg1 standalone:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)dateStringForDate:(id)arg0 relativeToReferenceDate:(id)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
-(id)dayFormatter;
-(id)dayOfWeekFormatter;
-(id)formatterForLongFormat:(id)arg0 ;
-(id)fullStyleDateFormatter;
-(id)init;
-(id)standardTimeFormatter;
-(id)stringForDate:(id)arg0 withLongFormatString:(id)arg1 useAbbreviatedFormats:(BOOL)arg2 lowerCase:(BOOL)arg3 ;
-(id)timeFormatter;
-(id)timeStringForDate:(id)arg0 inTimeZone:(id)arg1 ;
-(void)_initializeFormatters;


@end


#endif