// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLOCALE_H
#define NSLOCALE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSLocale : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(NSUInteger)characterDirectionForLanguage:(id)arg0 ;
+(NSUInteger)lineDirectionForLanguage:(id)arg0 ;
+(id)ISOCountryCodes;
+(id)ISOCurrencyCodes;
+(id)ISOLanguageCodes;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)availableLocaleIdentifiers;
+(id)canonicalLanguageIdentifierFromString:(id)arg0 ;
+(id)canonicalLocaleIdentifierFromString:(id)arg0 ;
+(id)commonISOCurrencyCodes;
+(id)componentsFromLocaleIdentifier:(id)arg0 ;
+(id)currentLocale;
+(id)internetServicesRegion;
+(id)localeIdentifierFromComponents:(id)arg0 ;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg0 ;
+(id)localeWithLocaleIdentifier:(id)arg0 ;
+(id)preferredLanguages;
+(id)systemLocale;
+(unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesMetricSystem;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(id)_copyDisplayNameForKey:(id)arg0 value:(id)arg1 ;
-(id)_prefs;
-(id)alternateQuotationBeginDelimiter;
-(id)alternateQuotationEndDelimiter;
-(id)calendarIdentifier;
-(id)collationIdentifier;
-(id)collatorIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countryCode;
-(id)currencyCode;
-(id)currencySymbol;
-(id)decimalSeparator;
-(id)displayNameForKey:(id)arg0 value:(id)arg1 ;
-(id)exemplarCharacterSet;
-(id)groupingSeparator;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)languageCode;
-(id)localeIdentifier;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg0 ;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg0 ;
-(id)localizedStringForCalendarIdentifier:(id)arg0 ;
-(id)localizedStringForCollationIdentifier:(id)arg0 ;
-(id)localizedStringForCollatorIdentifier:(id)arg0 ;
-(id)localizedStringForCountryCode:(id)arg0 ;
-(id)localizedStringForCurrencyCode:(id)arg0 ;
-(id)localizedStringForCurrencySymbol:(id)arg0 ;
-(id)localizedStringForDecimalSeparator:(id)arg0 ;
-(id)localizedStringForGroupingSeparator:(id)arg0 ;
-(id)localizedStringForLanguageCode:(id)arg0 ;
-(id)localizedStringForLocaleIdentifier:(id)arg0 ;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg0 ;
-(id)localizedStringForQuotationEndDelimiter:(id)arg0 ;
-(id)localizedStringForScriptCode:(id)arg0 ;
-(id)localizedStringForVariantCode:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)quotationBeginDelimiter;
-(id)quotationEndDelimiter;
-(id)scriptCode;
-(id)variantCode;
-(unsigned char)_doesNotRequireSpecialCaseHandling;
-(void)_setDoesNotRequireSpecialCaseHandling;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif