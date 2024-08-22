// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUFORMATTINGSYMBOLS_H
#define TSUFORMATTINGSYMBOLS_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface TSUFormattingSymbols : NSObject

@property (readonly, nonatomic) NSString *amSymbol; // ivar: _amSymbol
@property (readonly, nonatomic) NSString *arrayRowSeparator; // ivar: _arrayRowSeparator
@property (readonly, nonatomic) NSString *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSDictionary *currencyCodesToHalfwidthSymbols; // ivar: _currencyCodesToHalfwidthSymbols
@property (readonly, nonatomic) NSString *currencyDecimalSeparator; // ivar: _currencyDecimalSeparator
@property (readonly, nonatomic) NSString *currencyGroupingSeparator; // ivar: _currencyGroupingSeparator
@property (readonly, nonatomic) NSString *currencyPattern; // ivar: _currencyPattern
@property (readonly, nonatomic) NSDictionary *currencySymbols; // ivar: _currencySymbols
@property (retain, nonatomic) NSDictionary *currencySymbolsToCodes; // ivar: _currencySymbolsToCodes
@property (readonly, nonatomic) NSString *decimalPattern; // ivar: _decimalPattern
@property (readonly, nonatomic) NSString *decimalSeparator; // ivar: _decimalSeparator
@property (readonly, nonatomic) NSArray *eras; // ivar: _eras
@property (readonly, nonatomic) NSString *exponentialSymbol; // ivar: _exponentialSymbol
@property (readonly, nonatomic) NSString *fullDatePattern; // ivar: _fullDatePattern
@property (readonly, nonatomic) NSString *fullTimePattern; // ivar: _fullTimePattern
@property (readonly, nonatomic) NSString *groupingSeparator; // ivar: _groupingSeparator
@property (readonly, nonatomic) NSUInteger groupingSize; // ivar: _groupingSize
@property (readonly, nonatomic) NSString *infinitySymbol; // ivar: _infinitySymbol
@property (readonly, nonatomic) NSString *listSeparator; // ivar: _listSeparator
@property (readonly, nonatomic) NSString *longDatePattern; // ivar: _longDatePattern
@property (readonly, nonatomic) NSArray *longEras; // ivar: _longEras
@property (readonly, nonatomic) NSString *longTimePattern; // ivar: _longTimePattern
@property (readonly, nonatomic) NSString *mediumDatePattern; // ivar: _mediumDatePattern
@property (readonly, nonatomic) NSString *mediumTimePattern; // ivar: _mediumTimePattern
@property (readonly, nonatomic) NSString *minusSign; // ivar: _minusSign
@property (readonly, nonatomic) NSArray *months; // ivar: _months
@property (readonly, nonatomic) NSString *nanSymbol; // ivar: _nanSymbol
@property (retain, nonatomic) NSDictionary *negativeNumberPatterns; // ivar: _negativeNumberPatterns
@property (readonly, nonatomic) NSString *numberingSystem; // ivar: _numberingSystem
@property (readonly, nonatomic) NSString *perMilleSymbol; // ivar: _perMilleSymbol
@property (readonly, nonatomic) NSString *percentPattern; // ivar: _percentPattern
@property (readonly, nonatomic) NSString *percentSymbol; // ivar: _percentSymbol
@property (readonly, nonatomic) NSString *plusSign; // ivar: _plusSign
@property (readonly, nonatomic) NSString *pmSymbol; // ivar: _pmSymbol
@property (readonly, nonatomic) NSArray *quarters; // ivar: _quarters
@property (readonly, nonatomic) NSString *scientificPattern; // ivar: _scientificPattern
@property (readonly, nonatomic) NSUInteger secondaryGroupingSize; // ivar: _secondaryGroupingSize
@property (readonly, nonatomic) NSString *shortDatePattern; // ivar: _shortDatePattern
@property (readonly, nonatomic) NSArray *shortMonths; // ivar: _shortMonths
@property (readonly, nonatomic) NSArray *shortQuarters; // ivar: _shortQuarters
@property (readonly, nonatomic) NSString *shortTimePattern; // ivar: _shortTimePattern
@property (readonly, nonatomic) NSArray *shortWeekdays; // ivar: _shortWeekdays
@property (readonly, nonatomic) NSArray *standaloneMonths; // ivar: _standaloneMonths
@property (readonly, nonatomic) NSArray *standaloneQuarters; // ivar: _standaloneQuarters
@property (readonly, nonatomic) NSArray *standaloneShortMonths; // ivar: _standaloneShortMonths
@property (readonly, nonatomic) NSArray *standaloneShortQuarters; // ivar: _standaloneShortQuarters
@property (readonly, nonatomic) NSArray *standaloneShortWeekdays; // ivar: _standaloneShortWeekdays
@property (readonly, nonatomic) NSArray *standaloneTinyMonths; // ivar: _standaloneTinyMonths
@property (readonly, nonatomic) NSArray *standaloneTinyWeekdays; // ivar: _standaloneTinyWeekdays
@property (readonly, nonatomic) NSArray *standaloneWeekdays; // ivar: _standaloneWeekdays
@property (readonly, nonatomic) NSArray *tinyMonths; // ivar: _tinyMonths
@property (readonly, nonatomic) NSArray *tinyWeekdays; // ivar: _tinyWeekdays
@property (readonly, nonatomic) NSString *version; // ivar: _version
@property (readonly, nonatomic) NSArray *weekdays; // ivar: _weekdays


+(BOOL)dateFormatIsPureLiteral:(id)arg0 ;
+(BOOL)isADummyDataSetVersion:(id)arg0 ;
+(BOOL)p_localeIsCustomized:(id)arg0 ;
+(BOOL)p_patternsDifferForDF:(id)arg0 uncustomizedDF:(id)arg1 dateStyle:(NSUInteger)arg2 timeStyle:(NSUInteger)arg3 ;
+(BOOL)versionIsForACustomizedLocale:(id)arg0 ;
+(NSUInteger)locationOfFirstDateFormatCharacter:(id)arg0 ;
+(id)defaultFormattingSymbolsForLocale:(id)arg0 ;
+(id)defaultFormattingSymbolsVersionForLocale:(id)arg0 ;
+(id)dummyFormattingSymbolsForTesting:(NSInteger)arg0 ;
+(id)numberingSystemForLocale:(id)arg0 ;
+(void)p_setAllSpaceVariantsOfString:(id)arg0 toCode:(id)arg1 inSymbolToCodeDictionary:(id)arg2 ;
-(BOOL)hasUserCustomizations;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)currencyCodeForCurrencySymbol:(id)arg0 ;
-(id)currencySymbolForCurrencyCode:(id)arg0 ;
-(id)halfwidthCurrencySymbolForCurrencyCode:(id)arg0 ;
-(id)initWithDummyDataSet:(NSInteger)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithVersion:(id)arg0 calendar:(id)arg1 numberingSystem:(id)arg2 months:(id)arg3 standaloneMonths:(id)arg4 shortMonths:(id)arg5 standaloneShortMonths:(id)arg6 tinyMonths:(id)arg7 standaloneTinyMonths:(id)arg8 weekdays:(id)arg9 standaloneWeekdays:(id)arg10 shortWeekdays:(id)arg11 standaloneShortWeekdays:(id)arg12 tinyWeekdays:(id)arg13 standaloneTinyWeekdays:(id)arg14 quarters:(id)arg15 standaloneQuarters:(id)arg16 shortQuarters:(id)arg17 standaloneShortQuarters:(id)arg18 eras:(id)arg19 longEras:(id)arg20 amSymbol:(id)arg21 pmSymbol:(id)arg22 shortDatePattern:(id)arg23 mediumDatePattern:(id)arg24 longDatePattern:(id)arg25 fullDatePattern:(id)arg26 shortTimePattern:(id)arg27 mediumTimePattern:(id)arg28 longTimePattern:(id)arg29 fullTimePattern:(id)arg30 decimalSeparator:(id)arg31 groupingSeparator:(id)arg32 currencyDecimalSeparator:(id)arg33 currencyGroupingSeparator:(id)arg34 plusSign:(id)arg35 minusSign:(id)arg36 exponentialSymbol:(id)arg37 percentSymbol:(id)arg38 perMilleSymbol:(id)arg39 infinitySymbol:(id)arg40 nanSymbol:(id)arg41 decimalPattern:(id)arg42 scientificPattern:(id)arg43 percentPattern:(id)arg44 currencyPattern:(id)arg45 currencyCode:(id)arg46 currencySymbols:(id)arg47 ;
-(id)p_negativeNumberKeyForNumberStyle:(unsigned int)arg0 negativeStyle:(int)arg1 ;
-(id)patternStringForDateStyle:(NSUInteger)arg0 timeStyle:(NSUInteger)arg1 ;
-(id)patternStringForNumberStyle:(unsigned int)arg0 negativeStyle:(int)arg1 ;
-(void)p_deriveCalculatedPropertyValues;
-(void)setForTestingShortDatePattern:(id)arg0 mediumDatePattern:(id)arg1 longDatePattern:(id)arg2 fullDatePattern:(id)arg3 shortTimePattern:(id)arg4 mediumTimePattern:(id)arg5 longTimePattern:(id)arg6 fullTimePattern:(id)arg7 ;
-(void)upgradeIfNecessary:(id)arg0 ;


@end


#endif