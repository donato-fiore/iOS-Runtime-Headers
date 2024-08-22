// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDIALECTMAP_H
#define AXDIALECTMAP_H

@class NSString, NSLocale, NSCharacterSet;

#import <Foundation/Foundation.h>

#import "AXLanguageManager.h"
#import "AXLangMap.h"

@interface AXDialectMap : NSObject

@property (readonly, nonatomic) AXLanguageManager *langManager;
@property (weak, nonatomic) AXLangMap *langMap; // ivar: _langMap
@property (readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;
@property (readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameInNativeLocale;
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *localeNameInCurrentLocale;
@property (readonly, nonatomic) NSString *regionID;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange; // ivar: _secondaryLanguageRange
@property (retain, nonatomic) NSCharacterSet *speakableCharacters; // ivar: _speakableCharacters
@property (copy, nonatomic) NSString *specificLanguageID; // ivar: _specificLanguageID
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName


+(id)_hanjaCharacterSet;
+(id)_hanjaToHangulMap;
-(BOOL)_languageIsKorean;
-(BOOL)canSpeakCharacter:(unsigned short)arg0 ;
-(BOOL)canSpeakCharacter:(unsigned short)arg0 allowTransliteration:(BOOL)arg1 ;
-(BOOL)canSpeakLongCharacter:(unsigned int)arg0 ;
-(BOOL)canSpeakString:(id)arg0 ;
-(BOOL)canSpeakString:(id)arg0 allowsTransliteration:(BOOL)arg1 ;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg0 ;
-(BOOL)speakingRequiresTransliteration;
-(id)_stringByTransliterationHanjaToHangul:(id)arg0 ;
-(id)_transliteratedSpeechCharacters;
-(id)basicDescription;
-(id)debugDescription;
-(id)description;
-(id)initWithLocale:(id)arg0 voiceName:(id)arg1 specificLanguageID:(id)arg2 speakableCharacters:(id)arg3 secondaryLanguageRange:(id)arg4 ;
-(id)transliteratedStringForString:(id)arg0 ;


@end


#endif