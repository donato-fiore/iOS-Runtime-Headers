// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSTREAMGROUPCOMMON_H
#define VCAUDIOSTREAMGROUPCOMMON_H

@class NSString;
@protocol VCAudioStreamGroup, VCMediaCaptureController, VCAudioPowerSpectrumSourceDelegate, VCAudioIODelegate;


#import "VCObject.h"
#import "VCAudioPowerSpectrumSource.h"
#import "VCAudioIO.h"

@interface VCAudioStreamGroupCommon : VCObject <VCAudioStreamGroup, VCMediaCaptureController, VCAudioPowerSpectrumSourceDelegate, VCAudioIODelegate>

 {
    *tagVCAudioStreamGroupStream _audioStreams;
    *opaqueVCAudioBufferList _sampleBuffer;
    VCAudioStreamGroupSyncDestinationList _syncDestinationList;
    int _processID;
    BOOL _isGKVoiceChat;
    unsigned int _preferredIOSampleRate;
    unsigned int _preferredIOSamplesPerFrame;
    unsigned int _audioSessionID;
    int _operatingMode;
    unsigned int _audioType;
    NSUInteger _spatialAudioSourceID;
    NSInteger _powerSpectrumStreamToken;
    unsigned int _streamGroupID;
    NSString *_participantUUID;
    unsigned char _direction;
    unsigned int _maxChannelCount;
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;
    BOOL _isPowerSpectrumEnabled;
    unsigned int _processedFramesCount;
    *opaqueCMSimpleQueue _syncDestinationChangeEventQueue;
    *tagVCMemoryPool _syncDestinationChangeEventPool;
}


@property unsigned int audioChannelIndex; // ivar: _audioChannelIndex
@property (readonly) VCAudioIO *audioIO; // ivar: _audioIO
@property (readonly) *tagVCAudioStreamGroupStream audioStreams;
@property (nonatomic) *unk callback; // ivar: _callback
@property (nonatomic) *void context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceRole; // ivar: _deviceRole
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setMuted:) BOOL isMuted; // ivar: _isMuted
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (readonly) Class superclass;


+(BOOL)isSupportedDirection:(unsigned char)arg0 ;
-(BOOL)addSyncDestination:(id)arg0 shouldSchedule:(BOOL)arg1 ;
-(BOOL)configureAudioIOWithDeviceRole:(int)arg0 operatingMode:(int)arg1 ;
-(BOOL)configurePowerSpectrumSource;
-(BOOL)configureStreams:(id)arg0 withRateControlConfig:(id)arg1 ;
-(BOOL)enqueueSyncDestinationChangeEvent:(id)arg0 eventType:(int)arg1 ;
-(BOOL)reconfigureAudioIOIfNeededWithDeviceRole:(int)arg0 operatingMode:(int)arg1 ;
-(BOOL)removeSyncDestination:(id)arg0 shouldSchedule:(BOOL)arg1 ;
-(id)getAudioDumpName;
-(id)initWithConfig:(id)arg0 audioCallback:(*unk)arg1 context:(*void)arg2 audioDirection:(unsigned char)arg3 ;
-(id)startCapture;
-(id)stopCapture;
-(unsigned int)audioTypeForCaptureSource:(int)arg0 ;
-(void)audioPowerSpectrumSinkDidRegister;
-(void)audioPowerSpectrumSinkDidUnregister;
-(void)cleanupPowerSpectrumSource;
-(void)cleanupStreams;
-(void)cleanupSyncDestinations;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 averagePower:(float)arg1 ;
-(void)dealloc;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didServerDie;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)flushSyncDestinationUpdatesEventQueue;
-(void)sendAudioPowerSpectrumSourceRegistration:(BOOL)arg0 ;
-(void)setupStreamsWithStreamInfos:(id)arg0 ;
-(void)startAudioDump;
-(void)stopAudioDump;


@end


#endif