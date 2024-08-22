// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXTAPTOSPEAKTIMEMANAGER_H
#define AXTAPTOSPEAKTIMEMANAGER_H

@class NSDateFormatter, NSString, AXTapticTimeManager, VSSpeechSynthesizer;
@protocol VSSpeechSynthesizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXTapToSpeakTimeManager : NSObject <VSSpeechSynthesizerDelegate>

 {
    int _ringerStateNotifyToken;
    BOOL _cachedRingerIsMuted;
    float _lastMediaVolume;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AXTapticTimeManager *tapticTimeManager; // ivar: _tapticTimeManager
@property (readonly, nonatomic) VSSpeechSynthesizer *vsSpeechSynthesizer; // ivar: _vsSpeechSynthesizer


+(id)sharedInstance;
-(BOOL)_canOutputPremiumVoice;
-(BOOL)_canSpeakTimeForVoice:(NSUInteger)arg0 andGesture:(NSUInteger)arg1 ;
-(BOOL)_canTapticTime;
-(BOOL)canOutputTime;
-(id)_currentLanguageCode;
-(id)_getPremiumVoiceAsset;
-(id)_init;
-(void)_denormalizeVolumeIfNecessary;
-(void)_normalizeVolumeIfNecessary;
-(void)_outputTapticTime:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_ringerStateChanged;
-(void)_setupAudioSessionForVoice:(NSUInteger)arg0 ;
-(void)_speakTime:(id)arg0 preferredVoice:(NSUInteger)arg1 ;
-(void)_speakTime:(id)arg0 withCharacterVoiceIdentifier:(id)arg1 ;
-(void)_unregisterForNotifications;
-(void)dealloc;
-(void)outputTime:(id)arg0 ;
-(void)outputTime:(id)arg0 preferredVoice:(NSUInteger)arg1 ;
-(void)outputTime:(id)arg0 preferredVoice:(NSUInteger)arg1 withGesture:(NSUInteger)arg2 ;
-(void)speechOutputDidComplete;
-(void)speechSynthesizer:(id)arg0 didContinueSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didPauseSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfSpeechString:(struct _NSRange )arg1 forRequest:(id)arg2 ;
-(void)stopOutput;


@end


#endif