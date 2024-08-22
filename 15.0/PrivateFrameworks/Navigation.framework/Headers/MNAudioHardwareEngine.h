// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNAUDIOHARDWAREENGINE_H
#define MNAUDIOHARDWAREENGINE_H

@class NSString;
@protocol MNAudioEventQueueDelegate, MNAudioSessionAccessDelegate, MNHapticControllerDelegate, MNSoundEffectControllerDelegate, MNSpeechControllerDelegate;

#import <Foundation/Foundation.h>

#import "MNAudioSystemOptions.h"
#import "MNObserverHashTable.h"
#import "MNAudioSystemEventQueue.h"
#import "MNAudioSystemEvent.h"
#import "MNHapticResourceController.h"
#import "MNAudioPathwayResourceAccess.h"
#import "MNAudioSessionResourceAccess.h"
#import "MNSoundEffectResourceController.h"
#import "MNSpeechResourceController.h"

@interface MNAudioHardwareEngine : NSObject <MNAudioEventQueueDelegate, MNAudioSessionAccessDelegate, MNHapticControllerDelegate, MNSoundEffectControllerDelegate, MNSpeechControllerDelegate>

 {
    int _transportType;
    MNAudioSystemOptions *_options;
    NSString *_voiceLanguage;
    MNObserverHashTable *_observers;
    MNAudioSystemEventQueue *_queue;
    MNAudioSystemEvent *_pendingEvent;
    NSUInteger _currentUtteranceGuidanceLevel;
    NSUInteger _deactivate_retry_count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MNHapticResourceController *hapticController; // ivar: _hapticController
@property (readonly) NSUInteger hash;
@property (readonly) MNAudioSystemOptions *options;
@property (retain, nonatomic) MNAudioPathwayResourceAccess *pathwayAccess; // ivar: _pathwayAccess
@property (retain, nonatomic) MNAudioSessionResourceAccess *sessionAccess; // ivar: _sessionAccess
@property (retain, nonatomic) MNSoundEffectResourceController *sfxController; // ivar: _sfxController
@property (readonly, nonatomic) BOOL speaking;
@property (retain, nonatomic) MNSpeechResourceController *speechController; // ivar: _speechController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger voiceGuidanceLevel;


+(BOOL)deviceSpeakerIsInUse;
+(BOOL)headphonesAreInUse;
-(BOOL)_hardwareIsBusy;
-(BOOL)_speechMuted;
-(BOOL)_stopCurrentEvent;
-(BOOL)vibrateForShortPrompt:(NSUInteger)arg0 ;
-(CGFloat)durationOf:(id)arg0 ;
-(id)initWithAudioSystemOptions:(id)arg0 andVoiceLanguage:(id)arg1 andTransportType:(int)arg2 ;
-(void)_finishedProcessingEventWithStatus:(NSUInteger)arg0 ;
-(void)_mediaSessionServicesWereLost:(id)arg0 ;
-(void)_mediaSessionServicesWereReset:(id)arg0 ;
-(void)_playSoundEffectWithShortPrompt:(NSUInteger)arg0 andUtterance:(id)arg1 ;
-(void)_process:(id)arg0 ;
-(void)_processNextEventIfNecessary;
-(void)_registerForObservation;
-(void)_retryDeactivation;
-(void)addObserver:(id)arg0 ;
-(void)audioSessionResourceAccess:(id)arg0 didActivateSession:(BOOL)arg1 ;
-(void)audioSessionResourceAccess:(id)arg0 didDeactivateSession:(BOOL)arg1 ;
-(void)audioSessionResourceAccess:(id)arg0 didFailWhileActivatingSession:(id)arg1 ;
-(void)audioSessionResourceAccess:(id)arg0 didFailWhileDeactivatingSession:(id)arg1 ;
-(void)audioSessionResourceAccess:(id)arg0 didTimeoutWithError:(id)arg1 ;
-(void)audioSystemEventQueue:(id)arg0 eventWillInterrupt:(id)arg1 ;
-(void)cache:(id)arg0 ;
-(void)changeOptions:(id)arg0 forTransportType:(int)arg1 ;
-(void)changeTransportType:(int)arg0 ;
-(void)clearAlEvents;
-(void)removeObserver:(id)arg0 ;
-(void)soundEffectResourceController:(id)arg0 didFailWhilePlayingIndicator:(NSUInteger)arg1 withError:(id)arg2 ;
-(void)soundEffectResourceController:(id)arg0 didFinishPlayingIndicator:(NSUInteger)arg1 ;
-(void)soundEffectResourceController:(id)arg0 wasInterruptedWhilePlayingIndicator:(NSUInteger)arg1 withError:(id)arg2 ;
-(void)speak:(id)arg0 withShortPrompt:(NSUInteger)arg1 andVoiceGuidanceLevel:(NSUInteger)arg2 thenCallCompletion:(id)arg3 ;
-(void)speechResourceController:(id)arg0 didFailWhileSpeakingUtterance:(id)arg1 withError:(id)arg2 ;
-(void)speechResourceController:(id)arg0 didFinishSpeakingUtterance:(id)arg1 withDuration:(CGFloat)arg2 ;
-(void)speechResourceController:(id)arg0 didTimeoutWhileSpeakingUtterance:(id)arg1 withError:(id)arg2 ;
-(void)speechResourceController:(id)arg0 wasInterruptedWhileSpeakingUtterance:(id)arg1 withError:(id)arg2 ;
-(void)speechResourceController:(id)arg0 willStartSpeakingUtterance:(id)arg1 ;
-(void)stop;


@end


#endif