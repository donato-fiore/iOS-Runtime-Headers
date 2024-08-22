// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKDATETEXTPROVIDER_H
#define CLKDATETEXTPROVIDER_H

@class NSDateFormatter, NSArray, NSString, NSDate, NSTimeZone;


#import "CLKTextProvider.h"

@interface CLKDateTextProvider : CLKTextProvider {
    NSDateFormatter *_dateFormatter;
    NSArray *_templateSeries;
}


@property (nonatomic) BOOL allowsNarrowUnits; // ivar: _allowsNarrowUnits
@property (copy, nonatomic) NSString *alternateCalendarLocaleID; // ivar: _alternateCalendarLocaleID
@property (nonatomic) NSUInteger calendarUnits; // ivar: _calendarUnits
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger formattingContext; // ivar: _formattingContext
@property (nonatomic) BOOL narrowStandaloneWeekdayDay; // ivar: _narrowStandaloneWeekdayDay
@property (nonatomic) BOOL shortUnits; // ivar: _shortUnits
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (nonatomic) BOOL uppercase; // ivar: _uppercase


+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg0 units:(NSUInteger)arg1 ;
+(id)textProviderWithDate:(id)arg0 units:(NSUInteger)arg1 timeZone:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_completeDateTemplateSeries;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_partialDateTemplateSeriesForUnits:(NSUInteger)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 units:(NSUInteger)arg1 ;
-(id)initWithDate:(id)arg0 units:(NSUInteger)arg1 timeZone:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif