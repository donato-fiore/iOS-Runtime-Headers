// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DATEPROVIDER_H
#define DATEPROVIDER_H

@class NSArray, NSDate, NSString, NSDateFormatter;


#import "BaseDateProvider.h"

@interface DateProvider : BaseDateProvider {
    NSArray *_templateSeries;
}


@property (nonatomic) NSUInteger calendarUnits; // ivar: _calendarUnits
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *dateFormat; // ivar: _dateFormat
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (nonatomic) BOOL uppercase; // ivar: _uppercase


-(id)_completeDateTemplateSeries;
-(id)_partialDateTemplateSeriesForUnits:(NSUInteger)arg0 ;
-(id)_sessionTextForIndex:(NSInteger)arg0 ;
-(id)initWithDate:(id)arg0 units:(NSUInteger)arg1 ;
-(id)initWithDate:(id)arg0 units:(NSUInteger)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 ;
-(id)initWithDateFormat:(id)arg0 calendar:(id)arg1 locale:(id)arg2 timeZone:(id)arg3 ;


@end


#endif