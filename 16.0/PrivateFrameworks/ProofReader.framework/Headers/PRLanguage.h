// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRLANGUAGE_H
#define PRLANGUAGE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRLanguage : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_identifier;
    NSString *_localization;
    NSString *_fallbackLocalization;
    NSUInteger _orthoIndex;
    unsigned int _encoding;
    unsigned char _languageCode;
    unsigned char _languageDialect;
    unsigned char _languageMode;
}




+(BOOL)supportsSecureCoding;
+(NSUInteger)orthographyIndexForLanguageCode:(unsigned char)arg0 ;
+(NSUInteger)orthographyIndexForOtherLanguage:(id)arg0 ;
+(id)dataBundle;
+(id)englishLocalizationAdditionForLanguage:(id)arg0 ;
+(id)fallbackLocalizationForLanguage:(id)arg0 ;
+(id)languageModelFallbackLocalizationForLanguage:(id)arg0 ;
+(id)languageModelLocalizationForLanguage:(id)arg0 ;
+(id)languageObjectWithIdentifier:(id)arg0 ;
+(id)languagesUsingOrdinalPeriod;
+(id)localizationForLanguage:(id)arg0 ;
+(id)localizationsForLanguage:(id)arg0 ;
+(id)supportedAssetLanguages;
+(id)supportedAssetLexiconLanguages;
+(id)supportedCyrillicLanguages;
+(id)supportedEnglishLocalizationAdditions;
+(id)supportedLanguages;
+(id)supportedLatinLanguages;
+(id)supportedLocalizations;
+(id)supportedNonLatinLanguages;
+(id)supportedTransliterationLanguages;
+(id)textInputModeForLanguage:(id)arg0 ;
+(id)transliterationLocalizationForLanguage:(id)arg0 ;
+(unsigned int)encodingForOrthographyIndex:(NSUInteger)arg0 ;
+(void)getCodesForLanguage:(id)arg0 languageCode:(char *)arg1 languageDialect:(char *)arg2 languageMode:(char *)arg3 orthographyIndex:(*NSUInteger)arg4 encoding:(*unsigned int)arg5 ;
-(BOOL)isArabic;
-(BOOL)isBicameral;
-(BOOL)isBulgarian;
-(BOOL)isCzech;
-(BOOL)isDanish;
-(BOOL)isDutch;
-(BOOL)isEnglish;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFinnish;
-(BOOL)isFrench;
-(BOOL)isGerman;
-(BOOL)isGreek;
-(BOOL)isHebrew;
-(BOOL)isHindi;
-(BOOL)isHungarian;
-(BOOL)isIndonesian;
-(BOOL)isIrishGaelic;
-(BOOL)isItalian;
-(BOOL)isKazakh;
-(BOOL)isKorean;
-(BOOL)isMarathi;
-(BOOL)isNorwegian;
-(BOOL)isNynorsk;
-(BOOL)isPersian;
-(BOOL)isPolish;
-(BOOL)isPortuguese;
-(BOOL)isPunjabi;
-(BOOL)isRomanian;
-(BOOL)isRussian;
-(BOOL)isSpanish;
-(BOOL)isSupportedAssetLexiconLanguage;
-(BOOL)isSwedish;
-(BOOL)isTelugu;
-(BOOL)isThai;
-(BOOL)isTurkish;
-(BOOL)isUkrainian;
-(BOOL)isVietnamese;
-(BOOL)usesOrdinalPeriod;
-(BOOL)usesSentencePieceModel;
-(NSUInteger)hash;
-(NSUInteger)orthographyIndex;
-(char *)accents;
-(char *)oneLetterWords;
-(char *)twoLetterWords;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fallbackLocalization;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)languageModelFallbackLocalization;
-(id)languageModelLocalization;
-(id)localization;
-(id)transliterationLocalization;
-(unsigned char)languageCode;
-(unsigned char)languageDialect;
-(unsigned char)languageMode;
-(unsigned int)encoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif