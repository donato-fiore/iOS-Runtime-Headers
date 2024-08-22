// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOMANAGER_H
#define VCAUDIOMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSArray, ATSpatialStreamDescriptions, NSString, NSDictionary;
@protocol VCAudioIOControllerControl, VCAudioSessionDelegate, OS_dispatch_queue;


#import "VCObject.h"
#import "VCAudioRelay.h"
#import "VCAudioRelayIO.h"
#import "VCAudioSession.h"
#import "VCAudioUnitSpatialContext.h"
#import "VCAudioSessionMediaProperties.h"
#import "VCAudioUnitProperties.h"
#import "AVAudioDevice.h"

@interface VCAudioManager : VCObject <VCAudioIOControllerControl, VCAudioSessionDelegate>

 {
    *tagHANDLE _hAUIO;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _state;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    BOOL _isInputMeteringEnabled;
    BOOL _isOutputMeteringEnabled;
    BOOL _isSuspended;
    BOOL _followSystemInput;
    BOOL _followSystemOutput;
    ? _sinkData;
    ? _sourceData;
    int _interruptThreadState;
    VCAudioRelay *_interruptThread;
    VCAudioRelayIO *_interruptThreadClient;
    BOOL _isInterrupting;
    _opaque_pthread_mutex_t _interruptingMutex;
    _opaque_pthread_mutex_t _inputDeviceMutex;
    _opaque_pthread_mutex_t _outputDeviceMutex;
    BOOL _spatialAudioDisabled;
    VCAudioSession *_audioSession;
    int _playbackMode;
    NSMutableDictionary *_spatialContexts;
    NSMutableDictionary *_audioSessionSinkMuted;
    VCAudioUnitSpatialContext *_currentSpatialContext;
    id *_mutedTalkerNotificationHandler;
    NSArray *_stateStrings;
    ATSpatialStreamDescriptions *_spatialStreamDescriptions;
    BOOL _isMediaPlaybackOnExternalDevice;
}


@property (retain, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties; // ivar: _currentAudioSessionMediaProperties
@property (retain, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties; // ivar: _currentAudioUnitProperties
@property (retain) AVAudioDevice *currentInputDevice; // ivar: _inputDevice
@property (retain) AVAudioDevice *currentOutputDevice; // ivar: _outputDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isGKVoiceChat; // ivar: _isGKVoiceChat
@property (nonatomic) BOOL isInDaemon; // ivar: _isInDaemon
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted; // ivar: _isMicrophoneMuted
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) BOOL mixingVoiceWithMediaEnabled; // ivar: _isMixingVoiceWithMediaEnabled
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly, nonatomic) *_VCAudioIOControllerIOState sinkIO;
@property (readonly, nonatomic) *_VCAudioIOControllerIOState sourceIO;
@property (nonatomic, getter=isSpeakerPhoneEnabled) BOOL speakerPhoneEnabled; // ivar: _isSpeakerPhoneEnabled
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping; // ivar: _vpOperatingModeToAudioSessionMediaFormatMapping


+(id)audioSessionForMode:(int)arg0 ;
+(id)sharedSystemAudioInstance;
+(id)sharedVoiceChatInstance;
+(struct AudioStreamBasicDescription )sessionFormatForSampleRate:(CGFloat)arg0 ;
-(?)registerClientIOcontrollerIO;
-(?)removeAllClientsForIO;
-(?)unregisterClientIOcontrollerIO;
-(BOOL)addClient:(id)arg0 ;
-(BOOL)computeAllowAudioRecordingWithPreferredClient:(id)arg0 ;
-(BOOL)getAudioSessionMediaProperties:(id)arg0 forVPOperatingMode:(unsigned int)arg1 ;
-(BOOL)removeClient:(id)arg0 ;
-(BOOL)setupInterruptThread;
-(BOOL)shouldResetAudioSessionWithProperties:(id)arg0 ;
-(BOOL)shouldResetAudioUnitWithProperties:(id)arg0 ;
-(BOOL)startAUIOWithProperties:(id)arg0 ;
-(BOOL)startAudioSessionWithProperties:(id)arg0 ;
-(BOOL)stateIdleWithAudioUnitProperties:(id)arg0 sessionProperties:(id)arg1 client:(id)arg2 newState:(*unsigned int)arg3 ;
-(BOOL)stateInterruptedShouldGoToRunning:(id)arg0 ;
-(BOOL)stateInterruptedShouldGoToStarted:(id)arg0 ;
-(BOOL)stateInterruptedWithAudioUnitProperties:(id)arg0 sessionProperties:(id)arg1 client:(id)arg2 newState:(*unsigned int)arg3 ;
-(BOOL)stateRunningShouldTransitionToInterrupted:(id)arg0 ;
-(BOOL)stateRunningShouldTransitionToStarted:(id)arg0 ;
-(BOOL)stateRunningWithAudioUnitProperties:(id)arg0 sessionProperties:(id)arg1 client:(id)arg2 newState:(*unsigned int)arg3 ;
-(BOOL)stateSessionStartedWithAudioUnitProperties:(id)arg0 sessionProperties:(id)arg1 client:(id)arg2 newState:(*unsigned int)arg3 ;
-(BOOL)updateStateWithAudioIOClient:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAudioSessionMode:(int)arg0 ;
-(id)newAudioSessionMediaPropertiesForSystemAudioWithPreferredClient:(id)arg0 audioUnitProperties:(id)arg1 ;
-(id)newAudioSessionMediaPropertiesWithPreferredClient:(id)arg0 audioUnitProperties:(id)arg1 ;
-(id)newAudioUnitPropertiesForSystemAudioWithPreferredClient:(id)arg0 ;
-(id)newAudioUnitPropertiesWithPreferredClient:(id)arg0 ;
-(id)preferredClientWithNewClient:(id)arg0 ;
-(id)retain;
-(int)prewarmingClientOperatingMode;
-(int)registerAudioSessionId:(unsigned int)arg0 maxChannelCountMic:(unsigned int)arg1 maxChannelCountSpeaker:(unsigned int)arg2 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg3 ;
-(int)registerForMutedTalkerNotification:(id)arg0 ;
-(int)registerForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg0 ;
-(int)setVolume:(float)arg0 withRampTime:(float)arg1 ;
-(int)unregisterForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg0 ;
-(int)unregisterFromMutedTalkerNotification;
-(unsigned int)computeSamplePerFrameWithPreferredClient:(id)arg0 sampleRate:(unsigned int)arg1 ;
-(unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg0 deviceRole:(int)arg1 ;
-(void)_cleanupDeadClients;
-(void)activateSpatialContext:(id)arg0 shouldApplySpatialMetadata:(BOOL)arg1 ;
-(void)activateStartingClient:(id)arg0 applyControllerFormat:(BOOL)arg1 ;
-(void)applyAudioSessionMute;
-(void)applyControllerFormatToClients:(id)arg0 ;
-(void)applySessionContextToAudioUnitProperties:(id)arg0 preferredClient:(id)arg1 ;
-(void)applySpatialMetadata:(struct OpaqueCMBlockBuffer *)arg0 ;
-(void)cleanupInterruptThread;
-(void)completeStartForAllStartingClients;
-(void)computeFormatDescription:(struct AudioStreamBasicDescription *)arg0 withPreferredClient:(id)arg1 ;
-(void)computeHardwarePreferences;
-(void)dealloc;
-(void)didServerDie;
-(void)didSessionEnd;
-(void)didSessionPause;
-(void)didSessionResume;
-(void)didSessionStop;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)enterStateStarted;
-(void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg0 ;
-(void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg0 blockSize:(*CGFloat)arg1 vpOperatingMode:(*unsigned int)arg2 forOperatingMode:(int)arg3 deviceRole:(int)arg4 suggestedFormat:(struct AudioStreamBasicDescription *)arg5 ;
-(void)refreshInputMetering;
-(void)refreshOutputMetering;
-(void)refreshRemoteCodecType:(unsigned int)arg0 sampleRate:(CGFloat)arg1 ;
-(void)release;
-(void)resetAUIOWithProperties:(id)arg0 ;
-(void)resetAudioLimiterWithProperties:(id)arg0 ;
-(void)resetAudioSessionWithProperties:(id)arg0 interruptSuccessful:(*BOOL)arg1 ;
-(void)resetAudioTimestamps;
-(void)resetChannelMask;
-(void)setInputMetering;
-(void)setMediaPlaybackOnExternalDevice:(BOOL)arg0 ;
-(void)setMute:(BOOL)arg0 forClient:(id)arg1 ;
-(void)setOutputMetering;
-(void)setSpatialMetadata:(struct OpaqueCMBlockBuffer *)arg0 audioSessionId:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)setupDynamicDuckingVolumeHandlerForAUIO:(struct tagHANDLE *)arg0 ;
-(void)setupIODevicesForAUIO:(struct tagHANDLE *)arg0 ;
-(void)startClient:(id)arg0 ;
-(void)startInterruptThread;
-(void)stateRunningToSessionStarted;
-(void)stateTransitionInterruptedToRunning;
-(void)stateTransitionInterruptedToStarted;
-(void)stateTransitionRunningToInterrupted;
-(void)stopAUIO;
-(void)stopAudioSession;
-(void)stopClient:(id)arg0 ;
-(void)stopInterruptThread;
-(void)unregisterAudioSessionId:(unsigned int)arg0 ;
-(void)updateClient:(id)arg0 direction:(unsigned char)arg1 ;
-(void)updateCurrentInputDevice:(id)arg0 ;
-(void)updateCurrentOutputDevice:(id)arg0 ;
-(void)waitIdleForClient:(id)arg0 ;


@end


#endif