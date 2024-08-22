// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDATECOMPONENTSFORMATTER_H
#define CNDATECOMPONENTSFORMATTER_H

@class NSFormatter, NSArray, NSString, NSLocale;



@interface CNDateComponentsFormatter : NSFormatter {
    NSArray *_lazyFormatterFutures;
    NSString *_dateFormatPlaceholderString;
}


@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


+(BOOL)shouldUseChinaSpecificFormattersForLocale:(id)arg0 ;
+(BOOL)shouldUseIslamicSpecificFormattersForLocale:(id)arg0 ;
+(id)chineseCyclicYearMonthDayFormatter;
+(id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+(id)chineseMonthDayFormatter;
+(id)chineseMonthDayHanidayFormatter;
+(id)chineseRelatedGregorianYearMonthDayFormatter;
+(id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+(id)dateFormatterWithYearFormat:(id)arg0 hasLongFormat:(BOOL)arg1 locale:(id)arg2 ;
+(id)formatterFuturesWithLocale:(id)arg0 ;
+(id)longDayMonthYearDateFormatterWithLocale:(id)arg0 ;
+(id)longDayMonthYearlessDateFormatterWithLocale:(id)arg0 ;
+(id)os_log;
+(id)shortDayMonthYearDateFormatterWithLocale:(id)arg0 ;
+(id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg0 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg0 ;
-(BOOL)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg0 ;
-(BOOL)shouldUseChinesePlaceholderString;
-(NSUInteger)componentsToExtract;
-(id)arabicGregorianPlaceholderString;
-(id)arabicIslamicPlaceholderString;
-(id)chinesePlaceholderStringWithDay:(id)arg0 month:(id)arg1 year:(id)arg2 ;
-(id)dateComponentsFromString:(id)arg0 ;
-(id)dateFormatPlaceholderString;
-(id)dateFormatPlaceholderStringForLanguage:(id)arg0 ;
-(id)displayFormatterForComponents:(id)arg0 ;
-(id)dmyFormatString;
-(id)init;
-(id)normalizedComponentsFromDate:(id)arg0 calendar:(id)arg1 timeZone:(id)arg2 ;
-(id)placeholderStringWithLocalizedDay:(id)arg0 month:(id)arg1 year:(id)arg2 ;
-(id)placeholderSubstitutionStringWithDay:(NSUInteger)arg0 month:(NSUInteger)arg1 year:(NSUInteger)arg2 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromDateComponents:(id)arg0 ;
-(void)regenerateFormatterFutures;


@end


#endif