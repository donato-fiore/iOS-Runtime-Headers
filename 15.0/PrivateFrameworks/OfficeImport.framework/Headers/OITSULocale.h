// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSULOCALE_H
#define OITSULOCALE_H

@class NSMutableArray, NSLock, NSString, NSMutableDictionary, NSCache, NSLocale, NSArray, NSTimeZone;

#import <Foundation/Foundation.h>

#import "OITSUDateParserLibrary.h"

@interface OITSULocale : NSObject {
    _opaque_pthread_mutex_t _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    *__CFNumberFormatter _plainFormatter;
    *__CFNumberFormatter _noMinusSignPlainFormatter;
    *__CFNumberFormatter _currencyFormatter;
    *__CFNumberFormatter _noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
    NSCache *_cachedLocalizedStrings;
}


@property (readonly) NSString *amString; // ivar: _amString
@property (readonly) NSString *arrayRowSeparator;
@property (readonly) *__CFLocale cfGregorianCalendarLocale;
@property (readonly) *__CFLocale cfLocale;
@property (readonly) NSString *currencyCode; // ivar: _currencyCode
@property (readonly) NSString *currencyDecimalSeparator; // ivar: _currencyDecimalSeparator
@property (readonly) NSString *currencyGroupingSeparator; // ivar: _currencyGroupingSeparator
@property (readonly) NSInteger dateComponentOrdering; // ivar: _dateComponentOrdering
@property (readonly) OITSUDateParserLibrary *dateParserLibrary; // ivar: _dateParserLibrary
@property (readonly) NSString *decimalSeparator; // ivar: _decimalSeparator
@property (readonly) NSString *documentLanguageIdentifier; // ivar: _documentLanguageIdentifier
@property (readonly) NSString *falseString; // ivar: _falseString
@property (readonly) NSLocale *gregorianCalendarLocale; // ivar: _gregorianCalendarLocale
@property (readonly) NSString *groupingSeparator; // ivar: _groupingSeparator
@property (readonly) NSUInteger groupingSize; // ivar: _groupingSize
@property (readonly) BOOL isAutoUpdating; // ivar: _isAutoUpdating
@property (readonly) NSString *languageCode; // ivar: _languageCode
@property (readonly) NSString *listSeparator; // ivar: _listSeparator
@property (readonly) NSLocale *locale; // ivar: _locale
@property (readonly) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) NSArray *monthSymbols; // ivar: _monthSymbols
@property (readonly) NSString *percentSymbol; // ivar: _percentSymbol
@property (readonly) NSString *pmString; // ivar: _pmString
@property (readonly) NSArray *shortMonthSymbols; // ivar: _shortMonthSymbols
@property (readonly) NSArray *shortStandaloneMonthSymbols; // ivar: _shortStandaloneMonthSymbols
@property (readonly) NSArray *shortStandaloneWeekdaySymbols; // ivar: _shortStandaloneWeekdaySymbols
@property (readonly) NSArray *shortWeekdaySymbols; // ivar: _shortWeekdaySymbols
@property (readonly) NSArray *standaloneMonthSymbols; // ivar: _standaloneMonthSymbols
@property (readonly) NSArray *standaloneWeekdaySymbols; // ivar: _standaloneWeekdaySymbols
@property (readonly) NSTimeZone *timeZone;
@property (readonly) NSString *trueString; // ivar: _trueString
@property (readonly) NSArray *weekdaySymbols; // ivar: _weekdaySymbols


+(BOOL)localeIsAutoUpdating:(id)arg0 ;
+(NSUInteger)autoupdatingCurrentLocaleChangeCount;
+(id)allSupportedTemplatePickerLanguages;
+(id)allSupportedTier1Languages;
+(id)allSupportedTier3Languages;
+(id)applicationLocale;
+(id)cacheKeyForLocale:(id)arg0 ;
+(id)canonicalizeLocaleIdentifier:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg0 ;
+(id)currentLocale;
+(id)deducedScriptForLocale:(id)arg0 ;
+(id)displayNameForCode:(id)arg0 ofType:(id)arg1 displayStandalone:(BOOL)arg2 ;
+(id)localeForLocaleIdentifier:(id)arg0 documentLanguageIdentifier:(id)arg1 ;
+(id)localeIDWithDefaultRegionCode:(id)arg0 ;
+(id)localeIDWithoutDefaultRegionCode:(id)arg0 avoidAmbiguousCases:(BOOL)arg1 ;
+(id)preferredLanguages;
+(id)preferredLocale;
+(id)simplifiedDisplayNameForLocaleID:(id)arg0 displayStandalone:(BOOL)arg1 ;
+(void)initialize;
+(void)saveLocaleForReuse:(id)arg0 ;
+(void)setLocalizedStringBundle:(struct __CFBundle *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)localizedCaseInsensitiveIsEqual:(id)arg0 toString:(id)arg1 ;
-(NSInteger)localizedCaseInsensitiveCompare:(id)arg0 toString:(id)arg1 ;
-(NSInteger)localizedCompare:(id)arg0 toString:(id)arg1 ;
-(NSUInteger)hash;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 inBundle:(struct __CFBundle *)arg3 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
-(id)copyWithDocumentLanguageIdentifier:(id)arg0 ;
-(id)description;
-(id)displayLanguageNameWithStandalone:(BOOL)arg0 ;
-(id)initWithLocale:(id)arg0 documentLanguageIdentifier:(id)arg1 ;
-(id)initWithLocale:(id)arg0 documentLanguageIdentifier:(id)arg1 useAutoupdating:(BOOL)arg2 ;
-(id)localeSpecificStorageForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)localizedStringWithFormat:(id)arg0 ;
-(id)numberFormatterStringFromDouble:(CGFloat)arg0 withFormat:(id)arg1 useDecimalPlaces:(BOOL)arg2 minDecimalPlaces:(unsigned short)arg3 decimalPlaces:(unsigned short)arg4 showThousandsSeparator:(BOOL)arg5 currencyCode:(id)arg6 suppressMinusSign:(BOOL)arg7 ;
-(id)simplifiedDisplayNameWithStandalone:(BOOL)arg0 ;
-(struct __CFNumberFormatter *)checkoutNumberFormatter;
-(struct __CFNumberFormatter *)checkoutScientificNumberFormatter;
-(void)_initializeNumberFormatterStringFromDoubleCache;
-(void)dealloc;
-(void)returnNumberFormatter:(struct __CFNumberFormatter *)arg0 ;
-(void)returnScientificNumberFormatter:(struct __CFNumberFormatter *)arg0 ;


@end


#endif