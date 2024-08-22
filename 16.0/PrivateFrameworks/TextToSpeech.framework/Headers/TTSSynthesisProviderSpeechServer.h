// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSYNTHESISPROVIDERSPEECHSERVER_H
#define TTSSYNTHESISPROVIDERSPEECHSERVER_H

@class NSString, NSMutableDictionary;
@protocol TTSSynthesisProviderAudioEngineProtocol, TTSSpeechService, TTSSpeechSynthesizerDelegate, TTSSpeechServiceUnitTesting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderSpeechServer : NSObject <TTSSynthesisProviderAudioEngineProtocol, TTSSpeechService, TTSSpeechSynthesizerDelegate, TTSSpeechServiceUnitTesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *requestMapping; // ivar: _requestMapping
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // ivar: _serviceQueue
@property (retain, nonatomic) NSMutableDictionary *speechEngines; // ivar: _speechEngines
@property (readonly) Class superclass;


+(id)regexRules;
-(BOOL)canInitializeSpeech:(id)arg0 ;
-(BOOL)employSpeechMarkupForType:(NSInteger)arg0 language:(id)arg1 ;
-(BOOL)isNashvilleService;
-(BOOL)isSiriService;
-(BOOL)isVoiceValid:(id)arg0 ;
-(id)_escapeSSML:(id)arg0 ;
-(id)_speechEngineForSynthesizerInstance:(NSUInteger)arg0 ;
-(id)_unescapeDelimeterBoundedSSMLInString:(id)arg0 ;
-(id)audioFileSettingsForVoice:(id)arg0 ;
-(id)combinedProsodyMarkupForVoice:(id)arg0 string:(id)arg1 rate:(id)arg2 pitch:(id)arg3 volume:(id)arg4 ;
-(id)init;
-(id)speechMarkupStringForType:(NSInteger)arg0 voice:(id)arg1 string:(id)arg2 ;
-(id)supportedIPAPhonemeLanguages;
-(struct _NSRange )_nonSSMLSubstringRangeForRange:(struct _NSRange )arg0 fromSSML:(id)arg1 ;
-(struct __CFArray *)loadedVoiceResources;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)getSpeechIsActiveForRequest:(id)arg0 reply:(id)arg1 ;
-(void)getVoicesForLanguage:(id)arg0 queryingMobileAssets:(BOOL)arg1 reply:(id)arg2 ;
-(void)getVoicesForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)initializeSpeechServerInstance:(NSUInteger)arg0 ;
-(void)pauseSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)startSpeechRequest:(id)arg0 ;
-(void)stopSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)synthesisProviderDidFinishSpeakingRequest:(id)arg0 successfully:(BOOL)arg1 withError:(id)arg2 ;
-(void)synthesisProviderDidStartSpeakingMarker:(id)arg0 forRequest:(id)arg1 ;
-(void)synthesizerInstanceDestroyed:(NSUInteger)arg0 ;


@end


#endif