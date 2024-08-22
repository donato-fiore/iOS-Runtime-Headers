// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMNUMBERFORMATTER_H
#define EMNUMBERFORMATTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EMNumberFormatter : NSObject {
    *__CFNumberFormatter _genericFormatter;
    *__CFNumberFormatter _doubleFormatter;
    *__CFNumberFormatter _percentFormatter;
    *__CFNumberFormatter _bigNumberFormatter;
    *__CFNumberFormatter _currencyFormatter;
    *__CFDateFormatter _dateFormatter;
    NSString *_excelFormatString;
    NSString *_baseICUFormatString;
    BOOL _isNegativeRed;
    BOOL _hasLocales;
    int _formatType;
}




+(id)formatterForFormat:(id)arg0 ;
-(BOOL)isNegativeRed;
-(BOOL)useBigNumberFormatterForValue:(CGFloat)arg0 ;
-(NSUInteger)optimalNumberOfDigitsForValue:(CGFloat)arg0 ;
-(id)_icuFormatStringForCurrencyFormat;
-(id)_icuFormatStringForDateFormat;
-(id)convertedGenericNumberFormatWithFormat:(id)arg0 ;
-(id)formatCurrency:(CGFloat)arg0 ;
-(id)formatDate:(id)arg0 ;
-(id)formatDefault:(CGFloat)arg0 ;
-(id)formatDefault:(CGFloat)arg0 showingNumberOfDigits:(NSUInteger)arg1 ;
-(id)formatDoubleValue:(CGFloat)arg0 ;
-(id)formatFraction:(CGFloat)arg0 ;
-(id)formatPercent:(CGFloat)arg0 ;
-(id)formatPhoneNumber:(CGFloat)arg0 ;
-(id)formatValue:(CGFloat)arg0 inWorkbook:(id)arg1 ;
-(id)initForGeneralFormatting;
-(id)initWithExcelFormatString:(id)arg0 ;
-(int)formatType;
-(struct __CFDateFormatter *)_dateFormatter;
-(struct __CFNumberFormatter *)_bigNumberFormatter;
-(struct __CFNumberFormatter *)_currencyFormatter;
-(struct __CFNumberFormatter *)_doubleFormatter;
-(struct __CFNumberFormatter *)_genericFormatterForNumberOfSignificantDigits:(NSUInteger)arg0 ;
-(struct __CFNumberFormatter *)_percentFormatter;
-(void)_parseExcelFormatString:(id)arg0 ;
-(void)convertGenericNumberFormat:(id)arg0 ;
-(void)dealloc;


@end


#endif