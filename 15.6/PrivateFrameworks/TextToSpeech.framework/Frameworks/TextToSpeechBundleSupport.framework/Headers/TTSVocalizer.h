// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSVOCALIZER_H
#define TTSVOCALIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TTSVocalizer : NSObject

@property (nonatomic) NSInteger speechGender; // ivar: _speechGender
@property (retain, nonatomic) NSString *ttsVocalizerCurrentLanguageCode; // ivar: _ttsVocalizerCurrentLanguageCode
@property (nonatomic) *void ttsVocalizerDataClass; // ivar: _ttsVocalizerDataClass
@property (retain, nonatomic) *__CFArray ttsVocalizerResourceDataPtrs; // ivar: _ttsVocalizerResourceDataPtrs
@property (retain, nonatomic) *__CFData ttsVocalizerRulesetData; // ivar: _ttsVocalizerRulesetData


-(?)_ttsVocalizerCopyAvailableVoiceInfo;
-(?)_ttsVocalizerVoiceInfoForActiveLanguage;
-(BOOL)_ttsVocalizerIsInitialized;
-(BOOL)readyForSynthesis:(struct _VE_HSAFE *)arg0 ;
-(CGFloat)_ttsVocalizerGetSampleRate:(struct _VE_HSAFE *)arg0 ;
-(NSInteger)_ttsVocalizerSpeechGender;
-(id)initWithLanguage:(struct __CFString *)arg0 defaultLanguage:(struct __CFString *)arg1 reinitIfNecessary:(unsigned char)arg2 instanceToDestroy:(struct _VE_HSAFE *)arg3 forceReinit:(unsigned char)arg4 voiceType:(NSInteger)arg5 gender:(NSInteger)arg6 footprint:(NSInteger)arg7 voiceName:(struct __CFString *)arg8 error:(*unsigned int)arg9 ;
-(struct __CFArray *)_ttsVocalizerLoadedResources;
-(unsigned char)_ttsVocalizerDefaultVoiceIsFallback;
-(unsigned int)_ttsVocalizerAppendPhonemeToString:(struct _VE_HSAFE *)arg0 phoneme:(unsigned short)arg1 phonemeString:(struct __CFString *)arg2 ;
-(unsigned int)_ttsVocalizerCreateInstance:(struct _VE_HSAFE *)arg0 desiredVoiceName:(*char *)arg1 desiredFootprint:(NSInteger)arg2 languageCode:(struct __CFString *)arg3 voiceType:(NSInteger)arg4 ;
-(unsigned int)_ttsVocalizerDestroy;
-(unsigned int)_ttsVocalizerDestroyInstance:(struct _VE_HSAFE *)arg0 ;
-(unsigned int)_ttsVocalizerProcessText:(struct __CFString *)arg0 instance:(struct _VE_HSAFE *)arg1 callback:(*unk)arg2 context:(*void)arg3 ;
-(unsigned int)_ttsVocalizerReallyLoadResource:(struct _VE_HSAFE )arg0 mimeType:(char *)arg1 rules:(struct __CFData *)arg2 resource:(struct _VE_HSAFE *)arg3 supportsAccurateWordCallbacks:(unsigned char)arg4 resourceIdentifier:(id)arg5 ;
-(unsigned int)_ttsVocalizerSetParameters:(struct _VE_HSAFE *)arg0 rate:(float)arg1 pitch:(float)arg2 volume:(float)arg3 footprintID:(NSInteger)arg4 ;
-(void)_ttsVocalizerLoadProgrammaticRules:(struct _VE_HSAFE )arg0 supportsAccurateWordCallbacks:(unsigned char)arg1 forTests:(unsigned char)arg2 ;
-(void)dealloc;
-(void)loadResource:(struct _VE_HSAFE )arg0 mimeType:(struct __CFString *)arg1 resourceURL:(struct __CFURL *)arg2 supportsAccurateWordCallbacks:(unsigned char)arg3 ;
-(void)stopSynthesis;


@end


#endif