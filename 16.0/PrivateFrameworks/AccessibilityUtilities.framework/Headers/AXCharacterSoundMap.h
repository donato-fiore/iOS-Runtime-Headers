// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXCHARACTERSOUNDMAP_H
#define AXCHARACTERSOUNDMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AXCharacterSoundMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *phDictionaries; // ivar: _phDictionaries


-(id)_linguisticStringForCharacter:(id)arg0 language:(id)arg1 linguisticType:(NSInteger)arg2 andVoiceIdentifier:(id)arg3 ;
-(id)init;
-(id)phonemeStringForCharacter:(id)arg0 forLanguage:(id)arg1 andVoiceIdentifier:(id)arg2 ;
-(id)phoneticStringForCharacter:(id)arg0 forLanguage:(id)arg1 andVoiceIdentifier:(id)arg2 ;


@end


#endif