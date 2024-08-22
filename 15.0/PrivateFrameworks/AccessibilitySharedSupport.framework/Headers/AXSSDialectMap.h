// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSDIALECTMAP_H
#define AXSSDIALECTMAP_H

@class NSLocale, NSString, NSCharacterSet;

#import <Foundation/Foundation.h>

#import "AXSSLanguageMap.h"

@interface AXSSDialectMap : NSObject

@property (readonly, weak, nonatomic) AXSSLanguageMap *languageMap; // ivar: _languageMap
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSString *regionID;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange; // ivar: _secondaryLanguageRange
@property (copy, nonatomic) NSCharacterSet *speakableCharacters; // ivar: _speakableCharacters
@property (copy, nonatomic) NSString *specificLanguageID; // ivar: _specificLanguageID
@property (copy, nonatomic) NSString *voiceIdentifier; // ivar: _voiceIdentifier
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName


-(BOOL)canSpeakCharacter:(unsigned short)arg0 ;
-(BOOL)canSpeakString:(id)arg0 ;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithLocale:(id)arg0 voiceName:(id)arg1 specificLanguageID:(id)arg2 voiceIdentifier:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5 ;


@end


#endif