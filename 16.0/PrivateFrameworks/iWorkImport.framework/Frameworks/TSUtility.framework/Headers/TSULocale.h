// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSULOCALE_H
#define TSULOCALE_H

@class NSString, NSMutableArray, NSLock, NSMutableDictionary, NSCache, NSRecursiveLock, NSLocale, NSArray, NSTimeZone;

#import <Foundation/Foundation.h>

#import "TSUDecimalFormatter.h"
#import "TSUDateParserLibrary.h"
#import "TSUFormattingSymbols.h"

@interface TSULocale : NSObject {
    NSString *_cacheKey;
    TSUNumberOrDateLexer _numberOrDateLexer;
    _opaque_pthread_mutex_t _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    TSUDecimalFormatter *_plainFormatter;
    TSUDecimalFormatter *_noMinusSignPlainFormatter;
    TSUDecimalFormatter *_currencyFormatter;
    TSUDecimalFormatter *_noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
    NSCache *_cachedLocalizedStrings;
    NSRecursiveLock *_icuDateBlockUsingLock;
}


@property (readonly) NSString *amString;
@property (readonly) NSString *cacheKey;
@property (readonly) *__CFLocale cfGregorianCalendarLocale;
@property (readonly) *__CFLocale cfLocale;
@property (readonly) NSString *currencyCode;
@property (readonly) BOOL currencyUsesRightToLeftWritingDirection;
@property (readonly) NSInteger dateComponentOrdering; // ivar: _dateComponentOrdering
@property (readonly) TSUDateParserLibrary *dateParserLibrary; // ivar: _dateParserLibrary
@property (readonly) NSString *decimalSeparator;
@property (readonly) NSString *documentLanguageIdentifier; // ivar: _documentLanguageIdentifier
@property (readonly) NSString *falseString; // ivar: _falseString
@property (readonly, nonatomic) TSUFormattingSymbols *formattingSymbols; // ivar: _formattingSymbols
@property (readonly) NSLocale *gregorianCalendarLocale; // ivar: _gregorianCalendarLocale
@property (readonly) NSString *groupingSeparator;
@property (readonly) NSUInteger groupingSize;
@property (readonly) BOOL isAutoUpdating; // ivar: _isAutoUpdating
@property (readonly) NSString *languageCode; // ivar: _languageCode
@property (readonly) NSString *listSeparator;
@property (readonly) NSLocale *locale; // ivar: _locale
@property (readonly) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) NSString *minusSign;
@property (readonly, nonatomic) *void numberOrDateLexer;
@property (readonly) NSString *numberingSystem;
@property (readonly) NSString *percentSymbol;
@property (readonly) NSString *pmString;
@property (readonly) NSArray *shortStandaloneMonthSymbols;
@property (readonly) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly) NSArray *standaloneMonthSymbols;
@property (readonly) NSArray *standaloneWeekdaySymbols;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) NSString *trueString; // ivar: _trueString
@property (readonly) BOOL uses24HourTimeCycle; // ivar: _uses24HourTimeCycle


+(BOOL)isValidCurrencyCode:(id)arg0 ;
+(BOOL)localeIsAutoUpdating:(id)arg0 ;
+(NSUInteger)autoupdatingCurrentLocaleChangeCount;
+(id)allSupportedTemplatePickerLanguages;
+(id)allSupportedTier1Languages;
+(id)allSupportedTier3Languages;
+(id)applicationLocale;
+(id)availableCurrencyCodes;
+(id)canonicalizeLocaleIdentifier:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)arg0 ;
+(id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg0 ;
+(id)currencySymbolForCurrencyCode:(id)arg0 ;
+(id)currentLocale;
+(id)currentLocaleCurrencyCode;
+(id)deducedScriptForLocale:(id)arg0 ;
+(id)displayNameForCode:(id)arg0 ofType:(id)arg1 displayStandalone:(BOOL)arg2 ;
+(id)displayNameForCurrencyCode:(id)arg0 ;
+(id)formattedForDollarFunction:(struct TSUDecimal *)arg0 precision:(int)arg1 forLocale:(id)arg2 ;
+(id)localeForLocaleIdentifier:(id)arg0 documentLanguageIdentifier:(id)arg1 formattingSymbolsVersion:(id)arg2 ;
+(id)localeIDWithDefaultRegionCode:(id)arg0 ;
+(id)localeIDWithoutDefaultRegionCode:(id)arg0 avoidAmbiguousCases:(BOOL)arg1 ;
+(id)preferredLanguages;
+(id)preferredLocale;
+(id)sanitizedLocaleIdentifierForIdentifier:(id)arg0 ;
+(id)simplifiedDisplayNameForLocaleID:(id)arg0 displayStandalone:(BOOL)arg1 ;
+(id)usEnglishLocale;
+(id)userVisibleCurrencyCodes;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg0 ;
+(void)initialize;
+(void)saveLocaleForReuse:(id)arg0 ;
+(void)setLocalizedStringBundle:(struct __CFBundle *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualViaFormattingAsDouble:(CGFloat)arg0 ;
-(BOOL)isLanguageCharacterDirectionRightToLeft;
-(BOOL)isLanguageFormulasDirectionRightToLeft;
-(BOOL)localizedCaseInsensitiveIsEqual:(id)arg0 toString:(id)arg1 ;
-(NSInteger)localizedCaseInsensitiveCompare:(id)arg0 toString:(id)arg1 ;
-(NSInteger)localizedCompare:(id)arg0 toString:(id)arg1 ;
-(NSUInteger)autoupdatingCurrentLocaleChangeCount;
-(NSUInteger)hash;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 inBundle:(struct __CFBundle *)arg3 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
-(id)checkoutNumberFormatter;
-(id)checkoutScientificNumberFormatter;
-(id)copyWithDocumentLanguageIdentifier:(id)arg0 ;
-(id)copyWithGregorianCalendar;
-(id)createHarmonizedDecimalFormatterOfStyle:(NSInteger)arg0 ;
-(id)currencyCodeForCurrencySymbol:(id)arg0 ;
-(id)currencySymbolForCurrencyCode:(id)arg0 ;
-(id)description;
-(id)displayLanguageNameWithStandalone:(BOOL)arg0 ;
-(id)displayNameForCurrencyCode:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 documentLanguageIdentifier:(id)arg1 ;
-(id)initWithLocale:(id)arg0 documentLanguageIdentifier:(id)arg1 formattingSymbols:(id)arg2 ;
-(id)initWithLocale:(id)arg0 documentLanguageIdentifier:(id)arg1 useAutoupdating:(BOOL)arg2 formattingSymbols:(id)arg3 ;
-(id)initWithLocale:(id)arg0 formattingSymbols:(id)arg1 ;
-(id)languageIdentifierWithLanguageAndRegionOnly;
-(id)localeSpecificStorageForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)localizedStringWithFormat:(id)arg0 ;
-(id)numberFormatterStringFromDouble:(CGFloat)arg0 withFormat:(id)arg1 useDecimalPlaces:(BOOL)arg2 minDecimalPlaces:(unsigned short)arg3 decimalPlaces:(unsigned short)arg4 showThousandsSeparator:(BOOL)arg5 currencyCode:(id)arg6 suppressMinusSign:(BOOL)arg7 ;
-(id)simplifiedDisplayNameWithStandalone:(BOOL)arg0 ;
-(void)_initializeNumberFormatterStringFromDoubleCache;
-(void)dealloc;
-(void)performICUDateUsingBlock:(id)arg0 ;
-(void)returnNumberFormatter:(id)arg0 ;
-(void)returnScientificNumberFormatter:(id)arg0 ;


@end


#endif