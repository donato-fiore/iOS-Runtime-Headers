// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSLANGUAGEMANAGER_H
#define AXSSLANGUAGEMANAGER_H

@class NSCharacterSet, NSArray, NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "AXSSDialectMap.h"

@interface AXSSLanguageManager : NSObject

@property (retain, nonatomic) NSCharacterSet *commonCharacters; // ivar: _commonCharacters
@property (retain, nonatomic) AXSSDialectMap *dialectForCurrentLocale; // ivar: _dialectForCurrentLocale
@property (retain, nonatomic) AXSSDialectMap *dialectForCurrentRegion; // ivar: _dialectForCurrentRegion
@property (retain, nonatomic) AXSSDialectMap *dialectForSystemLanguage; // ivar: _dialectForSystemLanguage
@property (readonly, nonatomic) AXSSDialectMap *dialectForUserLocale;
@property (retain, nonatomic) NSArray *languageMaps; // ivar: _languageMaps
@property (readonly, nonatomic) NSString *systemLanguageID;
@property (copy, nonatomic) NSLocale *userLocale; // ivar: _userLocale


+(id)commonPunctuationCharacters;
+(id)shared;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg0 ;
-(BOOL)isCharacterCommon:(unsigned short)arg0 ;
-(BOOL)isStringComposedByCommonCharacters:(id)arg0 ;
-(id)_preferredLanguage;
-(id)description;
-(id)dialectForLanguageID:(id)arg0 ;
-(id)dialectForSpeechSynthesisVoiceID:(id)arg0 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg0 ;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg0 ;
-(id)dialectsThatCanSpeakString:(id)arg0 ;
-(id)init;
-(void)_handleUserLocaleDidChange:(id)arg0 ;
-(void)updateCachedDialects;


@end


#endif