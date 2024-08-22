// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSESSION_H
#define VCAUDIOSESSION_H

@class NSMutableDictionary, NSMutableArray, NSDictionary, NSString;
@protocol VCServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCAudioSessionClient.h"

@interface VCAudioSession : NSObject <VCServerDelegate>

 {
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
    unsigned int _vpOperatingMode;
}


@property (readonly, nonatomic) unsigned int audioSessionId; // ivar: _audioSessionId
@property (readonly, nonatomic) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid; // ivar: _currentClientPid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStarted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)convertAudioSessionProperties:(id)arg0 operatingMode:(*int)arg1 deviceRole:(*int)arg2 enableAudioPreWarming:(*BOOL)arg3 ;
+(id)sharedSystemAudioInstance;
+(id)sharedVoiceChatInstance;
+(id)stringFromFormat:(struct AudioStreamBasicDescription *)arg0 ;
-(BOOL)applyAudioSessionMediaProperties:(id)arg0 ;
-(BOOL)applyRequestedProperty:(id)arg0 defaultValue:(*void)arg1 ;
-(BOOL)didRequestArrayPropertyChange:(id)arg0 ;
-(BOOL)didRequestBoolPropertyChange:(id)arg0 ;
-(BOOL)didRequestDataPropertyChange:(id)arg0 ;
-(BOOL)didRequestDictionaryPropertyChange:(id)arg0 ;
-(BOOL)didRequestStringPropertyChange:(id)arg0 ;
-(BOOL)didRequestedPropertyChange:(id)arg0 propertyClass:(Class)arg1 compareSelector:(SEL)arg2 ;
-(BOOL)forceBufferFrames:(*int)arg0 ;
-(BOOL)internalSelectMicrophoneWithType:(unsigned int)arg0 ;
-(BOOL)isAnswerOnHoldUpdateParameters:(id)arg0 ;
-(BOOL)resetClient:(id)arg0 mediaSetting:(id)arg1 interruptSuccessful:(*BOOL)arg2 ;
-(BOOL)setSampleRate:(CGFloat)arg0 ;
-(BOOL)shouldResetAudioSession;
-(BOOL)startClient:(id)arg0 clientType:(unsigned char)arg1 mediaProperties:(id)arg2 sessionRef:(*unsigned int)arg3 ;
-(BOOL)startInternal;
-(BOOL)startSessionWithMediaProperties:(id)arg0 sessionRef:(*unsigned int)arg1 ;
-(BOOL)stopClient:(id)arg0 ;
-(BOOL)stopSession;
-(id)initWithMode:(int)arg0 ;
-(void)applyAudioModeWithDefaultValue:(*void)arg0 ;
-(void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)arg0 ;
-(void)applyDynamicSessionProperties;
-(void)cleanupMicSources;
-(void)dealloc;
-(void)didAvailableSampleRateChange;
-(void)didInterruptionEnded;
-(void)didPause;
-(void)didResume;
-(void)didServerDie;
-(void)didStop;
-(void)dispatchedSetAudioSessionProperties:(id)arg0 ;
-(void)handleAudioSessionInterruption:(id)arg0 ;
-(void)invalidateCache;
-(void)refreshAudioSessionProperties;
-(void)resetOverrideRoute;
-(void)resumeActiveClient;
-(void)selectMicrophoneWithType:(unsigned int)arg0 ;
-(void)selectNewActiveClient;
-(void)setAudioSessionMode:(id)arg0 ;
-(void)setBlockSize:(CGFloat)arg0 sampleRate:(CGFloat)arg1 force:(BOOL)arg2 ;
-(void)setBlockSizeOnSampleRateChange;
-(void)setSpeakerProperty:(id)arg0 ;
-(void)setUpVPBlockFormatWithProperties:(id)arg0 ;
-(void)setVPBlockConfigurationProperties:(id)arg0 ;
-(void)setupInputBeamforming;
-(void)setupSharePlayWithVPOperatingMode:(unsigned int)arg0 ;
-(void)updateAudioSessionPropertiesWithProperties:(id)arg0 ;
-(void)upgradeAudioSessionProperties;


@end


#endif