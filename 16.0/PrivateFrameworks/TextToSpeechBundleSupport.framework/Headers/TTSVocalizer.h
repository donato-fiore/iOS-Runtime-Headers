// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSVOCALIZER_H
#define TTSVOCALIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TTSVocalizer : NSObject

@property (nonatomic) NSInteger speechGender; // ivar: _speechGender
@property (retain, nonatomic) NSString *ttsVocalizerCurrentLanguageCode; // ivar: _ttsVocalizerCurrentLanguageCode
@property (nonatomic) *? ttsVocalizerDataClass; // ivar: _ttsVocalizerDataClass
@property (retain, nonatomic) *__CFArray ttsVocalizerResourceDataPtrs; // ivar: _ttsVocalizerResourceDataPtrs
@property (retain, nonatomic) *__CFData ttsVocalizerRulesetData; // ivar: _ttsVocalizerRulesetData


-(?)_ttsVocalizerCopyAvailableVoiceInfo;
-(BOOL)_ttsVocalizerIsInitialized;
-(BOOL)readyForSynthesis;
-(CGFloat)_ttsVocalizerGetSampleRate;
-(NSInteger)_ttsVocalizerSpeechGender;
-(id)_ttsVocalizerAppendPhonemeToString:(unsigned short)arg0 phonemeString:(id)arg1 ;
-(id)_ttsVocalizerAssetPath:(NSInteger)arg0 ;
-(id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(id)arg0 desiredFootprint:(NSInteger)arg1 languageCode:(id)arg2 voiceType:(NSInteger)arg3 ;
-(id)_ttsVocalizerSetParameters:(float)arg0 pitch:(float)arg1 volume:(float)arg2 footprintID:(NSInteger)arg3 ;
-(id)initWithLanguage:(id)arg0 defaultLanguage:(id)arg1 reinitIfNecessary:(BOOL)arg2 forceReinit:(BOOL)arg3 voiceType:(NSInteger)arg4 gender:(NSInteger)arg5 footprint:(NSInteger)arg6 voiceName:(id)arg7 voiceIdentifier:(id)arg8 error:(*id)arg9 ;
-(struct __CFArray *)_ttsVocalizerLoadedResources;
-(unsigned char)_ttsVocalizerDefaultVoiceIsFallback;
-(unsigned int)_ttsVocalizerReallyLoadResource:(char *)arg0 rules:(id)arg1 resource:(struct _VE_HSAFE *)arg2 supportsAccurateWordCallbacks:(BOOL)arg3 resourceIdentifier:(id)arg4 ;
-(void)_ttsVocalizerDestroy;
-(void)_ttsVocalizerDestroyInstance;
-(void)_ttsVocalizerLoadProgrammaticRules:(BOOL)arg0 forTests:(BOOL)arg1 ;
-(void)dealloc;
-(void)loadResource:(id)arg0 resourceURL:(id)arg1 supportsAccurateWordCallbacks:(BOOL)arg2 ;
-(void)stopSynthesis;


@end


#endif