// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSSUBSCRIPTIONLABELER_H
#define TPSSUBSCRIPTIONLABELER_H

@class NSString, NSArray, NSMutableDictionary, NSLocale, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSSubscriptionLabeler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSString *applicableLanguage; // ivar: _applicableLanguage
@property (retain, nonatomic) NSArray *applicableUnlocalizedLabels; // ivar: _applicableUnlocalizedLabels
@property (retain, nonatomic) NSArray *cachedResult; // ivar: _cachedResult
@property (retain, nonatomic) NSMutableDictionary *labelDictionary; // ivar: _labelDictionary
@property (retain, nonatomic) NSLocale *updatingLocale; // ivar: _updatingLocale
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)_dictionary:(id)arg0 containsCollationEquivalentKey:(id)arg1 ;
+(BOOL)isExclusivelyCJKString:(id)arg0 characterSets:(id)arg1 ;
+(BOOL)isString:(id)arg0 exclusivelyInCharacterSet:(struct USet *)arg1 ;
+(CGFloat)widthOfString:(id)arg0 attributes:(id)arg1 ;
+(id)_groupStringsByCollationEquivalency:(id)arg0 ;
// +(id)_resultWithAllCharacters:(id)arg0 string:(unk)arg1  ;
+(id)displayShortLabelStringsForLongFormShortLabels:(id)arg0 ;
+(id)fontAttributeDictionary;
+(id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg0 ;
+(id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg0 languageIdentifiers:(id)arg1 ;
+(id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg0 languageStringOverrides:(id)arg1 ;
+(id)localizedLabelForLabel:(id)arg0 ;
+(id)localizedLabelForLabel:(id)arg0 longForm:(BOOL)arg1 languageStringOverrides:(id)arg2 ;
+(id)localizedLabelsForLabels:(id)arg0 languageIdentifiers:(id)arg1 ;
+(id)localizedLabelsForLabels:(id)arg0 languageStringOverrides:(id)arg1 ;
+(id)localizedStringDictionaryForLanguageIdentifiers:(id)arg0 selectedLanguage:(*id)arg1 ;
+(id)standardLabelIdentifiers;
+(id)stringByShorteningString:(id)arg0 maximumWidth:(CGFloat)arg1 attributes:(id)arg2 ;
+(id)stringsByAbbreviatingToPrefixesOfStrings:(id)arg0 ;
+(id)stringsByClippingStrings:(id)arg0 toWidthOfString:(id)arg1 ;
+(id)stringsByNumericallyDisambiguatingStrings:(id)arg0 ;
-(id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg0 ;
-(id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg0 languageIdentifiers:(id)arg1 ;
-(id)initWithLabelStorage:(id)arg0 ;
-(void)_validateLabelsForInstalledUnlocalizedLabels:(id)arg0 languageIdentifiers:(id)arg1 ;


@end


#endif