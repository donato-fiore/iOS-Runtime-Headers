// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSSPEECHSERVER_H
#define TTSSPEECHSERVER_H

@class NSMutableDictionary, NSString;
@protocol TTSSpeechService, TTSSpeechServiceUnitTesting;

#import <Foundation/Foundation.h>

#import "TTSSpeechServerInstance.h"

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting>

 {
    NSMutableDictionary *_serverInstances;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TTSSpeechServerInstance *speechInitializationInstance; // ivar: _speechInitializationInstance
@property (readonly) Class superclass;


+(id)regexRules;
-(BOOL)canInitializeSpeech:(id)arg0 ;
-(BOOL)employSpeechMarkupForType:(NSInteger)arg0 language:(id)arg1 ;
-(BOOL)isNashvilleService;
-(BOOL)isSiriNeuralVoice:(id)arg0 ;
-(BOOL)isSiriService;
-(BOOL)isVoiceValid:(id)arg0 ;
-(BOOL)requiresLHPPhonemes;
-(id)_behavesBadlyWithSpellMarkupForVoice:(id)arg0 string:(id)arg1 markupType:(NSInteger)arg2 ;
-(id)_ttsCopyVoiceInfo:(id)arg0 type:(NSInteger)arg1 queryingMobileAssets:(BOOL)arg2 ;
-(id)audioFileSettingsForVoice:(id)arg0 ;
-(id)embeddedPitchMarkupForVoice:(id)arg0 string:(id)arg1 pitch:(CGFloat)arg2 ;
-(id)embeddedRateMarkupForVoice:(id)arg0 string:(id)arg1 rate:(CGFloat)arg2 ;
-(id)embeddedVolumeMarkupForVoice:(id)arg0 string:(id)arg1 volume:(CGFloat)arg2 ;
-(id)enclosedStringWithPhonemes:(id)arg0 ;
-(id)getNewSpeechServerInstance;
-(id)getVocalizerWithLanguage:(struct __CFString *)arg0 defaultLanguage:(struct __CFString *)arg1 reinitIfNecessary:(unsigned char)arg2 instanceToDestroy:(struct _VE_HSAFE *)arg3 forceReinit:(unsigned char)arg4 voiceType:(NSInteger)arg5 gender:(NSInteger)arg6 footprint:(NSInteger)arg7 voiceName:(struct __CFString *)arg8 error:(*unsigned int)arg9 ;
-(id)init;
-(id)lhPhonemesFromIPA:(id)arg0 language:(id)arg1 ;
-(id)nashvilleVoiceIdentifier:(id)arg0 footprint:(NSInteger)arg1 voiceType:(NSInteger)arg2 gender:(NSInteger)arg3 assetVoiceName:(id)arg4 ;
-(id)nashvilleVoiceName:(id)arg0 footprint:(NSInteger)arg1 voiceType:(NSInteger)arg2 gender:(NSInteger)arg3 assetVoiceName:(id)arg4 ;
-(id)phonemesFromIPA:(id)arg0 language:(id)arg1 ;
-(id)speechMarkupStringForType:(NSInteger)arg0 voice:(id)arg1 string:(id)arg2 ;
-(id)supportedIPAPhonemeLanguages;
-(struct __CFArray *)loadedVoiceResources;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)dealloc;
-(void)getSpeechIsActiveForRequest:(id)arg0 reply:(id)arg1 ;
-(void)getVoicesForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)initializeSpeechServerInstance:(NSUInteger)arg0 ;
-(void)nashvilleVoiceIdentifier:(id)arg0 footprint:(NSInteger)arg1 voiceType:(NSInteger)arg2 gender:(NSInteger)arg3 assetVoiceName:(id)arg4 voiceId:(*id)arg5 voiceName:(*id)arg6 ;
-(void)pauseSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)setServiceQueue:(id)arg0 forSynthesizerInstanceID:(NSUInteger)arg1 ;
-(void)startSpeechRequest:(id)arg0 ;
-(void)stopSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)synthesizerInstanceDestroyed:(NSUInteger)arg0 ;


@end


#endif