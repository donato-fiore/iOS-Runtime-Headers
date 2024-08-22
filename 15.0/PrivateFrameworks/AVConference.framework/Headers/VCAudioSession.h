// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIOSESSION_H
#define VCAUDIOSESSION_H

@class NSMutableDictionary, NSMutableArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCAudioSessionClient.h"

@interface VCAudioSession : NSObject {
    int _sessionPid;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_requestedAudioSessionProperties;
    NSMutableDictionary *_currentAudioSessionProperties;
    VCAudioSessionClient *_activeClient;
    NSMutableArray *_clients;
    NSDictionary *_micSourceBack;
    NSDictionary *_micSourceFront;
    unsigned int _selectedMicrophone;
    BOOL _isTetheredDisplayMode;
    CGFloat _hardwareSampleRate;
    BOOL _isInterrupted;
    int _playbackMode;
}


@property (readonly, nonatomic) unsigned int audioSessionId; // ivar: _audioSessionId
@property (readonly, nonatomic) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid; // ivar: _currentClientPid
@property (readonly, nonatomic) *opaqueCMSession cmSession; // ivar: _cmSession


+(BOOL)convertAudioSessionProperties:(id)arg0 operatingMode:(*int)arg1 deviceRole:(*int)arg2 enableAudioPreWarming:(*BOOL)arg3 ;
+(id)sharedSystemAudioInstance;
+(id)sharedVoiceChatInstance;
+(id)stringFromFormat:(struct AudioStreamBasicDescription *)arg0 ;
-(BOOL)applyAudioSessionMediaProperties:(id)arg0 ;
-(BOOL)applyRequestedProperty:(id)arg0 defaultValue:(*void)arg1 ;
-(BOOL)didRequestArrayPropertyChange:(id)arg0 ;
-(BOOL)didRequestBoolPropertyChange:(id)arg0 ;
-(BOOL)didRequestedStringPropertyChange:(id)arg0 ;
-(BOOL)forceBufferFrames:(*int)arg0 ;
-(BOOL)isAnswerOnHoldUpdateParameters:(id)arg0 ;
-(BOOL)resetClient:(id)arg0 mediaSetting:(id)arg1 interruptSuccessful:(*BOOL)arg2 ;
-(BOOL)setSampleRate:(CGFloat)arg0 ;
-(BOOL)shouldResetAudioSession;
-(BOOL)startClient:(id)arg0 clientType:(unsigned char)arg1 mediaProperties:(id)arg2 sessionRef:(*unsigned int)arg3 ;
-(BOOL)startInternal;
-(BOOL)stopClient:(id)arg0 ;
-(id)initWithMode:(int)arg0 ;
-(void)applyAudioSessionMediaPropertiesForSystemAudio;
-(void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)arg0 ;
-(void)applyClientPid;
-(void)applyDynamicSessionProperties;
-(void)cleanupMicSources;
-(void)dealloc;
-(void)didAvailableSampleRateChange;
-(void)didBeginQuietTime;
-(void)didEndQuietTime;
-(void)didInterruptionEnded;
-(void)didPause;
-(void)didResume;
-(void)didStop;
-(void)dispatchedSetAudioSessionProperties:(id)arg0 ;
-(void)handleAudioInterruption:(struct opaqueCMSession *)arg0 interruptionInfo:(struct __CFDictionary *)arg1 ;
-(void)handleSecureMicNotificationWithInterruptionInfo:(struct __CFDictionary *)arg0 ;
-(void)invalidateCache;
-(void)refreshAudioSessionProperties;
-(void)resetOverrideRoute;
-(void)resumeActiveClient;
-(void)selectMicrophone:(unsigned int)arg0 ;
-(void)selectMicrophoneWithType:(unsigned int)arg0 ;
-(void)selectNewActiveClient;
-(void)setAudioSessionMode:(id)arg0 ;
-(void)setBlockSize:(CGFloat)arg0 sampleRate:(CGFloat)arg1 force:(BOOL)arg2 ;
-(void)setBlockSizeOnSampleRateChange;
-(void)setupInputBeamforming;
-(void)setupSharePlayWithVPOperatingMode:(unsigned int)arg0 ;
-(void)setupVPBlockFormatWithProperties:(id)arg0 ;
-(void)updateAudioSessionPropertiesWithProperties:(id)arg0 ;
-(void)upgradeAudioSessionProperties;


@end


#endif