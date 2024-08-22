// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXALTERNATIVEVOICES_H
#define AXALTERNATIVEVOICES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AXAlternativeVoices : NSObject

@property (retain, nonatomic) NSMutableDictionary *voiceClassesMap; // ivar: _voiceClassesMap
@property (retain, nonatomic) NSMutableDictionary *voiceNameMap; // ivar: _voiceNameMap


+(BOOL)inUnitTestMode;
+(BOOL)supportsAlex;
+(BOOL)supportsSiri;
+(id)sharedInstance;
+(void)setInUnitTestMode:(BOOL)arg0 ;
-(BOOL)isAlexAvailableForLanguage:(id)arg0 ;
-(BOOL)isAlternativeVoice:(id)arg0 ;
-(BOOL)isCombinedVocalizerVoiceIdentifier:(id)arg0 ;
-(BOOL)isCompactVocalizerVoiceIdentifier:(id)arg0 ;
-(BOOL)isNeuralSiriVoiceIdentifier:(id)arg0 ;
-(BOOL)isOldSiriVoiceIdentifier:(id)arg0 ;
-(BOOL)isSiriVoiceIdentifier:(id)arg0 ;
-(BOOL)isVocalizerVoiceIdentifier:(id)arg0 ;
-(id)_siriBaseIdentifierFromIdentifier:(id)arg0 ;
-(id)_siriIdentifierFromBaseIdentifier:(id)arg0 language:(id)arg1 quality:(NSInteger)arg2 ;
-(id)nameForVoiceIdentifier:(id)arg0 ;
-(id)voiceForVoiceIdentifier:(id)arg0 forLanguage:(id)arg1 ;


@end


#endif