// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUNUMBERFORMATTER_H
#define OITSUNUMBERFORMATTER_H

@class NSLocale, NSArray, NSDictionary, NSString, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OITSULocaleStructuredDictionary.h"

@interface OITSUNumberFormatter : NSObject {
    NSLocale *_locale;
    NSArray *_decimalFormatters;
    NSDictionary *_currencyFormatters;
    NSArray *_percentageFormatters;
    NSArray *_scientificFormatters;
    *__CFNumberFormatter _fractionFormatter;
    NSString *_currencyString;
    NSString *_percentageString;
    NSString *_scientificString;
    NSString *_decimalString;
    NSString *_decimalSeparator;
    NSString *_currencyDecimalSeparator;
    NSString *_groupingSeparator;
    NSString *_currencyGroupingSeparator;
    NSString *_percentSymbol;
    NSUInteger _groupingSize;
    NSMutableArray *_transformedDecimalStrings;
    NSMutableArray *_transformedCurrencyStrings;
    NSMutableArray *_transformedPercentageStrings;
    NSMutableArray *_transformedScientificStrings;
    OITSULocaleStructuredDictionary *_harmonizedNumberFormatterSymbols;
    NSMutableDictionary *_currencyCodeToSymbolMap;
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;
    NSString *_additionalCurrencyCode;
    NSDictionary *_additionalCurrencyCodeFormatters;
}




+(NSUInteger)groupingSizeForLocale:(id)arg0 ;
+(id)availableCurrencyCodes;
+(id)currencyDecimalSeparatorForLocale:(id)arg0 ;
+(id)currencyGroupingSeparatorForLocale:(id)arg0 ;
+(id)currencySymbolForCurrencyCode:(id)arg0 ;
+(id)currencySymbolForCurrencyCode:(id)arg0 locale:(id)arg1 ;
+(id)currentLocaleCurrencyCode;
+(id)currentLocaleCurrencyDecimalSeparator;
+(id)currentLocaleDecimalSeparator;
+(id)decimalSeparatorForLocale:(id)arg0 ;
+(id)defaultCurrencyCodeForLocale:(id)arg0 ;
+(id)defaultFormatStringForValueType:(int)arg0 ;
+(id)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg0 ;
+(id)formatString:(id)arg0 transformedForNegativeStyle:(int)arg1 ;
+(id)formatterForLocale:(id)arg0 ;
+(id)groupingSeparatorForLocale:(id)arg0 ;
+(id)numberFormatStringSpecialSymbols;
+(id)percentSymbolForLocale:(id)arg0 ;
+(id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg0 ;
+(id)userVisibleCurrencyCodes;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg0 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg0 ;
+(int)positionOfSymbol:(id)arg0 inNumberFormatSubpattern:(id)arg1 ;
+(struct __CFNumberFormatter *)createHarmonizedCFNumberFormatterWithLocale:(id)arg0 style:(NSInteger)arg1 ;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg0 ;
+(void)formatString:(id)arg0 replaceOccurencesOfUnescapedString:(id)arg1 withString:(id)arg2 ;
+(void)initialize;
-(BOOL)currencyFromString:(id)arg0 additionalCurrencyCode:(id)arg1 value:(*CGFloat)arg2 formatString:(*id)arg3 currencyCode:(*id)arg4 ;
-(BOOL)decimalFromString:(id)arg0 value:(*CGFloat)arg1 formatString:(*id)arg2 ;
-(BOOL)fractionFromString:(id)arg0 value:(*CGFloat)arg1 ;
-(BOOL)p_valueFromString:(id)arg0 formatters:(id)arg1 value:(*CGFloat)arg2 formatString:(*id)arg3 ;
-(BOOL)percentageFromString:(id)arg0 value:(*CGFloat)arg1 formatString:(*id)arg2 ;
-(BOOL)scientificFromString:(id)arg0 value:(*CGFloat)arg1 formatString:(*id)arg2 ;
-(NSUInteger)groupingSize;
-(id)currencyCode;
-(id)currencyDecimalSeparator;
-(id)currencyGroupingSeparator;
-(id)currencySymbolForCurrencyCode:(id)arg0 ;
-(id)decimalSeparator;
-(id)defaultFormatStringForValueType:(int)arg0 ;
-(id)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1 ;
-(id)displayNameForCurrencyCode:(id)arg0 ;
-(id)groupingSeparator;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg0 ;
-(id)p_currencyFormatters;
-(id)p_decimalFormatters;
-(id)p_findCurrencySymbolInString:(id)arg0 additionalCurrencyCode:(id)arg1 successfullString:(*id)arg2 currencyCode:(*id)arg3 ;
-(id)p_percentageFormatters;
-(id)p_scientificFormatters;
-(id)percentSymbol;
-(struct __CFNumberFormatter *)p_createHarmonizedCFNumberFormatterOfStyle:(NSInteger)arg0 ;
-(void)dealloc;
-(void)p_loadHarmonizedNumberFormatterSymbols;
-(void)p_numberPreferencesChanged:(id)arg0 ;


@end


#endif