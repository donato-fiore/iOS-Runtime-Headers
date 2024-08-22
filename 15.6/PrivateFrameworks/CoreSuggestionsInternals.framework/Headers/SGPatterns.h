// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPATTERNS_H
#define SGPATTERNS_H

@class NSString, NSArray, NSCache, NSMutableSet;

#import <Foundation/Foundation.h>


@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}




+(id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)arg0 ;
+(id)calculateLangResolutionOrder;
+(id)countryCodeFromLanguageCode:(id)arg0 ;
+(id)fallbackLanguageCodeForCountryCode:(id)arg0 ;
+(id)languagePartOfLanguageCode:(id)arg0 ;
+(id)patternsForClass:(Class)arg0 ;
+(id)patternsForIdentifier:(id)arg0 ;
+(void)_reinstateDeath;
+(void)changeLanguageOrPatternData;
+(void)clearAllRegexCaches;
+(void)forceLanguagesTo:(id)arg0 ;
+(void)initialize;
+(void)pauseCacheEvictionTemporarily;
+(void)resetToDefaultPatternsForTesting;
+(void)setPatternsDictForTesting:(id)arg0 ;
+(void)useAllLanguagesAtOnce:(BOOL)arg0 ;
-(id)init;
-(id)rawValueForKey:(id)arg0 ;
-(id)rawValueOrDataForKey:(id)arg0 ;
-(id)rawValuesForKey:(id)arg0 ;
-(id)regex2ForKey:(id)arg0 ;
-(id)stringSetMatcherForKey:(id)arg0 ;
-(void)_becomeImmuneToDeath;
-(void)_clearRegexCache;
-(void)dealloc;
-(void)resetIfNeeded;


@end


#endif