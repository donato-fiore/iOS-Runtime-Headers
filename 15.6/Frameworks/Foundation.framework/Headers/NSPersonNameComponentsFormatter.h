// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSONNAMECOMPONENTSFORMATTER_H
#define NSPERSONNAMECOMPONENTSFORMATTER_H

@class NSLocale;
@protocol NSObservable, NSObserver, NSSecureCoding, NSCopying;


#import "NSFormatter.h"
#import "NSString.h"

@interface NSPersonNameComponentsFormatter : NSFormatter <NSObservable, NSObserver, NSSecureCoding, NSCopying>

 {
    id *_private;
}


@property BOOL _forceFamilyNameFirst;
@property BOOL _forceGivenNameFirst;
@property BOOL _ignoresFallbacks;
@property NSLocale *_locale;
@property (readonly, copy) NSString *_preferredLocalizationForExplicitlySetLocale; // ivar: __preferredLocalizationForExplicitlySetLocale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSLocale *locale;
@property (getter=isPhonetic) BOOL phonetic;
@property NSInteger style;
@property (readonly) Class superclass;


+(BOOL)__contents:(id)arg0 exclusivelyInCharacterSet:(struct USet *)arg1 ;
+(BOOL)__shortStyle:(NSInteger)arg0 isRestrictedForLocalization:(id)arg1 ;
+(BOOL)__shortStyle:(NSInteger)arg0 isRestrictedForScript:(NSUInteger)arg1 ;
+(BOOL)__shortStyleRestrictionExistsForComponents:(id)arg0 shortStyle:(NSInteger)arg1 ;
+(BOOL)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+(BOOL)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+(BOOL)__style:(NSInteger)arg0 isRestrictedForLocalization:(id)arg1 ;
+(BOOL)__style:(NSInteger)arg0 isRestrictedForScript:(NSUInteger)arg1 ;
+(BOOL)_currentLocaleIsCJK;
+(BOOL)_isCJKScript:(id)arg0 ;
+(BOOL)_isMixedScript:(id)arg0 ;
+(BOOL)_shortNameIsEnabled;
+(BOOL)_shouldPreferNicknames;
+(BOOL)isKatakana:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)__abbreviatedNameFormatForPersonNameComponents:(id)arg0 ;
+(NSInteger)__abbreviatedNameFormatForString:(id)arg0 ;
+(NSInteger)__nameOrderForLocalization:(id)arg0 usingNativeOrdering:(BOOL)arg1 ;
+(NSInteger)__shortNameFormatForLocalization:(id)arg0 ;
+(NSInteger)_defaultDisplayNameOrder;
+(NSInteger)_defaultShortNameFormat;
+(NSInteger)_nameOrderWithOverridesForComponents:(id)arg0 options:(NSUInteger)arg1 ;
+(NSUInteger)__inferredScriptIndexForComponents:(id)arg0 ;
+(NSUInteger)__inferredScriptIndexForComponents:(id)arg0 ignoreUndeterminedComponents:(BOOL)arg1 ;
+(NSUInteger)__inferredScriptIndexFromString:(id)arg0 ;
+(SEL)__initialsCreatorForScript:(NSUInteger)arg0 ;
+(id)__characterSetWithPattern:(id)arg0 ;
+(id)__currentLocale;
+(id)__familyNameFirstOrdering;
+(id)__givenNameFirstOrdering;
+(id)__initialsForString:(id)arg0 ;
+(id)__longestComponentFromComponents:(id)arg0 ;
+(id)__naiveDelimiterForCombinedNameString:(id)arg0 ;
+(id)__preferredLanguages;
+(id)__scriptIdentifierFromIndex:(NSUInteger)arg0 ;
+(id)__stringByStrippingNonInitialPunctuationFromString:(id)arg0 ;
+(id)__stringValueForShortStyle:(NSInteger)arg0 ;
+(id)__stringValueForStyle:(NSInteger)arg0 ;
+(id)__supportedNameDefaultsFromLocalization:(id)arg0 ;
+(id)__supportedScriptDefaultsFromScriptName:(id)arg0 ;
+(id)__thaiConsonantSet;
+(id)_cjkLanguagesSet;
+(id)_cjkLocaleIdentifiers;
+(id)_fallbackDescriptorForStyle:(NSInteger)arg0 options:(NSUInteger)arg1 ;
+(id)_formatterWithStyle:(NSInteger)arg0 options:(NSUInteger)arg1 ;
+(id)_localizedDelimiterForComponents:(id)arg0 options:(NSUInteger)arg1 ;
+(id)_localizedShortNameForComponents:(id)arg0 withStyle:(NSInteger)arg1 options:(NSUInteger)arg2 ;
+(id)_preferredLocalizationForCurrentLocale;
+(id)_preferredLocalizationFromLocale:(id)arg0 ;
+(id)_relevantKeyPathsForStyle:(NSInteger)arg0 options:(NSUInteger)arg1 ;
+(id)_styleFormatterForStyle:(NSInteger)arg0 masterFormatter:(id)arg1 ;
+(id)arabicInitialsCreator:(SEL)arg0 ;
+(id)localizedStringFromPersonNameComponents:(id)arg0 style:(NSInteger)arg1 options:(NSUInteger)arg2 ;
+(id)thaiInitialsCreator:(SEL)arg0 ;
+(id)tibetanInitialsCreator:(SEL)arg0 ;
+(id)westernInitialsCreator:(SEL)arg0 ;
+(struct USet *)__getCharacterSetWithPattern:(id)arg0 ;
+(void)__registerDefaults;
+(void)forEachExistingComponentWithComponents:(id)arg0 performBlock:(id)arg1 ;
-(BOOL)__localizedRestrictionExistsForComponents:(id)arg0 ignoreUndeterminedComponents:(BOOL)arg1 ;
-(BOOL)__localizedRestrictionExistsForShortStyle:(NSInteger)arg0 ;
-(BOOL)__localizedRestrictionExistsForStyle:(NSInteger)arg0 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFormatter:(id)arg0 ;
-(NSInteger)__computedNameOrderForComponents:(id)arg0 ;
-(NSInteger)__computedShortNameFormat;
-(NSInteger)__localizedNameOrderUsingNativeOrdering:(BOOL)arg0 ;
-(NSInteger)__localizedShortNameFormat;
-(NSInteger)_nameOrderWithOverridesForComponents:(id)arg0 ;
-(id)annotatedStringFromPersonNameComponents:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)personNameComponentsFromString:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromPersonNameComponents:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif