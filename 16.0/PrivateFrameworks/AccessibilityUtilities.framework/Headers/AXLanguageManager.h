// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLANGUAGEMANAGER_H
#define AXLANGUAGEMANAGER_H

@class NSCharacterSet, NSArray, NSSet, NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "AXDialectMap.h"

@interface AXLanguageManager : NSObject {
    AXDialectMap *_dialectForSystemLanguage;
    AXDialectMap *_dialectForCurrentLocale;
    AXDialectMap *_dialectForCurrentRegion;
}


@property (nonatomic) BOOL _unitTest_didUpdateForLocaleChange; // ivar: __unitTest_didUpdateForLocaleChange
@property (retain, nonatomic) NSCharacterSet *commonCharacters; // ivar: _commonCharacters
@property (weak, nonatomic) AXDialectMap *dialectForCurrentLocale;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentRegion;
@property (weak, nonatomic) AXDialectMap *dialectForSystemLanguage;
@property (readonly, weak, nonatomic) AXDialectMap *dialectForUserLocale;
@property (retain, nonatomic) NSArray *langMaps; // ivar: _langMaps
@property (readonly, nonatomic) NSSet *preferredLanguageIDsFromUserSelectedKeyboards;
@property (readonly, nonatomic) NSString *systemLanguageID;
@property (copy, nonatomic) NSLocale *userLocale; // ivar: _userLocale


+(BOOL)voiceOverSupportedInCurrentLanguage;
+(id)commonPunctuationCharacters;
+(id)dialectForAlternativeVoiceIdentifier:(id)arg0 ;
+(id)doNotTranslateWords;
+(id)nameForAlternativeVoiceIdentifier:(id)arg0 ;
+(id)nonlocalizedNameForLanguage:(id)arg0 ;
+(id)sharedInstance;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg0 ;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg0 ;
-(BOOL)didUpdateForLocaleChange;
-(BOOL)isCharacterCommon:(unsigned short)arg0 ;
-(BOOL)isStringComposedByCommonCharacters:(id)arg0 ;
// -(id)_dialectsThatCanSpeak:(id)arg0 dialectIsSecondary:(unk)arg1 overridePreferredLanguages:(id)arg2 preferOverrides:(unk)arg3  ;
-(id)_exemplarCharacterSetFromLanguages:(id)arg0 ;
-(id)_loadLangMaps;
// -(id)_preferredOverrideDialectsThatCanSpeak:(id)arg0 dialectIsSecondary:(unk)arg1 overridePreferredLanguages:(id)arg2 preferOverrides:(unk)arg3  ;
-(id)_synthesisProviderDialectMapPerLanguage;
-(id)_systemPreferredDialectThatCanSpeak:(id)arg0 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(id)basicDescription;
-(id)characterSetForRanges:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionOfWord:(id)arg0 forLanguage:(id)arg1 ;
-(id)dialectForLanguageID:(id)arg0 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg0 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg0 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg0 overridePreferredLanguages:(id)arg1 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg0 overridePreferredLanguages:(id)arg1 allowTransliteration:(BOOL)arg2 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg0 overridePreferredLanguages:(id)arg1 allowTransliteration:(BOOL)arg2 preferOverrides:(BOOL)arg3 ;
-(id)dialectsThatCanSpeakString:(id)arg0 ;
-(id)dialectsThatCanSpeakString:(id)arg0 overridePreferredLanguages:(id)arg1 ;
-(id)init;
-(id)outputLanguageIdentifierForLanguage:(id)arg0 ;
-(void)_addDialectMapsForLanguageCodes:(id)arg0 toResults:(id)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg0 ;
-(void)dealloc;
-(void)updateCachedDialects;


@end


#endif