// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOCLIENT_H
#define VCAUDIOCLIENT_H

@class NSString;
@protocol VCAudioSessionDelegate;

#import <Foundation/Foundation.h>

#import "VCAudioSession.h"
#import "VCAudioManager.h"
#import "VCAudioIO.h"
#import "AVAudioDevice.h"

@interface VCAudioClient : NSObject <VCAudioSessionDelegate>

 {
    unsigned int _state;
    _opaque_pthread_mutex_t _stateMutex;
    CGFloat _lastAudioSessionStart;
    BOOL _isOnHold;
    VCAudioClientSettings _selectedSettings;
    VCAudioClientSettings _requestedSettings;
    unsigned int _audioSessionId;
    unsigned int _spatialAudioRegistered;
    VCAudioSession *_audioSession;
    VCAudioManager *_audioManager;
    BOOL _isMixingVoiceWithMediaEnabled;
}


@property (retain, nonatomic) VCAudioIO *audioIO; // ivar: _audioIO
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFollowSystemInputEnabled) BOOL followSystemInput; // ivar: _followSystemInput
@property (nonatomic, getter=isFollowSystemOutputEnabled) BOOL followSystemOutput; // ivar: _followSystemOutput
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAudioDevice *inputDevice;
@property (readonly, nonatomic) BOOL isMuted; // ivar: _muted
@property (nonatomic) BOOL isMutedTalkerNotificationRegistered; // ivar: _isMutedTalkerNotificationRegistered
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) BOOL mixingVoiceWithMediaEnabled; // ivar: _mixingVoiceWithMediaEnabled
@property (retain, nonatomic) AVAudioDevice *outputDevice;
@property (readonly, nonatomic) int processId; // ivar: _processId
@property (readonly) Class superclass;


-(BOOL)muteWithError:(*id)arg0 ;
-(BOOL)resetAudioSessionOutputPortOverride:(*id)arg0 ;
-(BOOL)setCurrentAudioDevice:(id)arg0 type:(BOOL)arg1 ;
-(BOOL)setupAudioIO;
-(BOOL)startAudioSessionWithError:(*id)arg0 ;
-(BOOL)startWithError:(*id)arg0 ;
-(BOOL)stopAudioSessionWithError:(*id)arg0 ;
-(BOOL)stopWithError:(*id)arg0 ;
-(BOOL)unmuteWithError:(*id)arg0 ;
-(id)getCurrentAudioDeviceWithType:(BOOL)arg0 ;
-(id)initWithProcessId:(int)arg0 ;
-(void)cleanupAudioIO;
-(void)cleanupSpatialAudio;
-(void)dealloc;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didServerDie;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)lock;
-(void)setAudioSessionProperties:(id)arg0 ;
-(void)setupSpatialAudio;
-(void)startAudioIOWithCompletionHandler:(id)arg0 ;
-(void)stopAudioIOWithCompletionHandler:(id)arg0 ;
-(void)unlock;


@end


#endif