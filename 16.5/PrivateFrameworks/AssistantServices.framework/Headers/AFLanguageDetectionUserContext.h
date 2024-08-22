// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFLANGUAGEDETECTIONUSERCONTEXT_H
#define AFLANGUAGEDETECTIONUSERCONTEXT_H

@class NSMutableDictionary, NSArray, NSString, NSNumber, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AFLanguageDetectionUserContext : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_lidUserContext;
    unsigned int _userContextChangeBit;
    BOOL _simulateLanguageDetectorAssetsAvailability;
    NSArray *_simulatingLanguageCodes;
    NSArray *_finalDictationLanguages;
    NSMutableDictionary *_dictationLanguageMappingCache;
}


@property (copy, nonatomic) NSString *currentKeyboard; // ivar: _currentKeyboard
@property (copy, nonatomic) NSNumber *dictationInputOrigin; // ivar: _dictationInputOrigin
@property (copy, nonatomic) NSArray *dictationLanguages; // ivar: _dictationLanguages
@property (copy, nonatomic) NSString *globalLastUsedKeyboard; // ivar: _globalLastUsedKeyboard
@property (copy, nonatomic) NSDictionary *keyboardConversationLanguagePriors; // ivar: _keyboardConversationLanguagePriors
@property (copy, nonatomic) NSArray *keyboardConvoRecentMessages; // ivar: _keyboardConvoRecentMessages
@property (copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // ivar: _keyboardGlobalLanguagePriors
@property (copy, nonatomic) NSDictionary *languageCodeOverrides; // ivar: _languageCodeOverrides
@property (nonatomic, getter=wasLanguageToggled, setter=setWasLanguageToggled:) BOOL languageToggled; // ivar: _languageToggled
@property (copy, nonatomic) NSArray *multiLingualKeyboardLanguages; // ivar: _multiLingualKeyboardLanguages
@property (copy, nonatomic) NSString *prevMessageLanguage; // ivar: _prevMessageLanguage
@property (copy, nonatomic) NSString *primaryLanguageCode; // ivar: _primaryLanguageCode


+(BOOL)supportsSecureCoding;
+(id)defaultContextWithPrimaryLanguage:(id)arg0 ;
-(BOOL)isUpdateAvailableForLanguageDetectorContext;
-(BOOL)shouldSimulateLanguageDetectorAssetsAvailability;
-(id)context;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)finalFilteredDictationLanguages;
-(id)getContextForAnalytics;
-(id)getDictationLanguagesForSupportedLocales:(id)arg0 error:(*id)arg1 ;
-(id)getSiriDictationLanguagesFromLanguages:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)languageDetectorUserContext;
-(id)priorsByReplacingKeyboardLanguage:(id)arg0 ;
-(id)simulatingLanguageCodes;
-(id)siriDictationLanguageForLanguage:(id)arg0 ;
-(id)userContextLanguageCodeForKeyboardLangauge:(id)arg0 overrideLanguageCode:(id)arg1 ;
-(unsigned int)languageDetectorContextChangeBits;
-(void)_removeContextValueForKey:(id)arg0 context:(id)arg1 ;
-(void)_setContextValue:(id)arg0 forKey:(id)arg1 context:(id)arg2 ;
-(void)_setDictationLanguageCodeMappingCache:(id)arg0 ;
-(void)_setFinalFilteredDictationLanguages:(id)arg0 ;
-(void)_setLanguageDetectorContext:(id)arg0 ;
-(void)_setUserContextChangeBit:(unsigned int)arg0 ;
-(void)_updateContextValue:(id)arg0 forKey:(id)arg1 context:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setShouldSimulateLanguageDetectorAssetsAvailability:(BOOL)arg0 ;
-(void)setSimulatingLanguageCodes:(id)arg0 ;


@end


#endif