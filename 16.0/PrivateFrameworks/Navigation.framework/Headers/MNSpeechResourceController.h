// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNSPEECHRESOURCECONTROLLER_H
#define MNSPEECHRESOURCECONTROLLER_H

@class VSSpeechSynthesizer, NSString, NSTimer, NSCache;
@protocol VSSpeechSynthesizerDelegate, MNSpeechControllerDelegate;

#import <Foundation/Foundation.h>


@interface MNSpeechResourceController : NSObject <VSSpeechSynthesizerDelegate>

 {
    VSSpeechSynthesizer *_synthesizer;
    NSString *_cachedVoiceLanguage;
    NSString *_cachedVoiceName;
    NSInteger _cachedVoiceGender;
    unsigned int _sessionID;
    NSString *_utterance;
    NSTimer *_timer;
    NSCache *_durations;
    NSUInteger _charactersSpokenCount;
    CGFloat _charactersSpokenDuration;
    BOOL _currentlySpeaking;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNSpeechControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL speaking;
@property (readonly) Class superclass;


-(BOOL)_createDurationCacheIfNecessary;
-(BOOL)cache:(id)arg0 withDisclosure:(NSUInteger)arg1 andReport:(*id)arg2 ;
-(BOOL)speak:(id)arg0 withDisclosure:(NSUInteger)arg1 andReport:(*id)arg2 ;
-(BOOL)stopSpeakingAndReport:(*id)arg0 ;
-(CGFloat)_clampVolume:(CGFloat)arg0 ;
-(CGFloat)_estimateDurationForUtterance:(id)arg0 ;
-(CGFloat)durationOf:(id)arg0 ;
-(id)_requestForUtterance:(id)arg0 withLanguage:(id)arg1 andVoiceName:(id)arg2 andGender:(NSInteger)arg3 andAudioSessionID:(unsigned int)arg4 andCanUseServerTTS:(BOOL)arg5 ;
-(id)initWithLanguage:(id)arg0 ;
-(void)_addDurationToCache:(CGFloat)arg0 forUtterance:(id)arg1 ;
-(void)_audioSessionInterruption:(id)arg0 ;
-(void)_cachingTimeoutOccurred:(id)arg0 ;
-(void)_cancelTimer;
-(void)_createTimerForUtterance:(id)arg0 andIsCaching:(BOOL)arg1 ;
-(void)_markVoiceForDownloadingWithLanguage:(id)arg0 andVoiceName:(id)arg1 andGender:(NSInteger)arg2 ;
-(void)_mediaSessionServicesWereReset:(id)arg0 ;
-(void)_prepareSynthesizerWithLanguage:(id)arg0 andVoiceName:(id)arg1 andGender:(NSInteger)arg2 andAudioSessionID:(unsigned int)arg3 ;
-(void)_registerForObservation;
-(void)_speakingTimeoutOccurred:(id)arg0 ;
-(void)_updateEstimatorWithDuration:(CGFloat)arg0 andUtterance:(id)arg1 ;
-(void)_warmUpTTSForLanguage:(id)arg0 andVoiceName:(id)arg1 andGender:(NSInteger)arg2 andAudioSessionID:(unsigned int)arg3 ;
-(void)dealloc;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;


@end


#endif