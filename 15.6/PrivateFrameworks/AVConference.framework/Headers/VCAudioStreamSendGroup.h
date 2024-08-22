// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOSTREAMSENDGROUP_H
#define VCAUDIOSTREAMSENDGROUP_H

@protocol VCRedundancyControllerDelegate, VCAudioStreamGroup;


#import "VCMediaStreamSendGroup.h"
#import "VCAudioStreamGroupCommon.h"
#import "VCRedundancyControllerAudio.h"
#import "VCSystemAudioCaptureSession.h"
#import "AVCBasebandCongestionDetector.h"

@interface VCAudioStreamSendGroup : VCMediaStreamSendGroup <VCRedundancyControllerDelegate, VCAudioStreamGroup>

 {
    VCAudioStreamGroupCommon *_common;
    BOOL _lastEnqueuedStreamUpdateEventWasEmpty;
    *opaqueCMSimpleQueue _audioStreamUpdateEventQueue;
    *opaqueCMSimpleQueue _audioRedundancyChangeEventQueue;
    *tagVCMemoryPool _audioStreamUpdatePool;
    *tagVCMemoryPool _audioRedundancyEventPool;
    *tagVCMediaQueue _mediaQueue;
    unsigned char _lastAudioPriority;
    BOOL _forcedAudioPriorityEnabled;
    unsigned char _forcedAudioPriorityValue;
    CGFloat _forcedAudioPriorityLastUpdateTime;
    *opaqueVCVoiceDetector _voiceDetector;
    VCRedundancyControllerAudio *_redundancyController;
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;
    *tagVCAudioDucker _audioDucker;
    BOOL _shouldScheduleMediaQueue;
}


@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (nonatomic) unsigned int cellularUniqueTag; // ivar: _cellularUniqueTag
@property (readonly, nonatomic) int deviceRole;
@property (nonatomic, setter=setCurrentDTXEnabled:) BOOL isCurrentDTXEnabled; // ivar: _isCurrentDTXEnabled
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;
@property (nonatomic, setter=setVADFilteringEnabled:) BOOL isVADFilteringEnabled; // ivar: _isVADFilteringEnabled


-(BOOL)addSyncDestination:(id)arg0 ;
-(BOOL)configureStreams;
-(BOOL)createIOEventQueues;
-(BOOL)removeSyncDestination:(id)arg0 ;
-(id)activeStreamKeys;
-(id)checkStreamsForAudioOptIn:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)setupRedundancyController;
-(id)startCapture;
-(id)stopCapture;
-(id)willStart;
-(void)cleanupIOEventQueues;
-(void)collectAndLogChannelMetrics:(struct ? *)arg0 ;
-(void)dealloc;
-(void)didStop;
-(void)flushAudioEventQueue;
-(void)flushAudioRedundancyEventQueue;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)redundancyController:(id)arg0 redundancyVectorDidChange:(struct ? )arg1 ;
-(void)setMuteOnStreams;
-(void)setPeerSubscribedStreams:(id)arg0 ;
-(void)setReportingAgent:(struct opaqueRTCReporting *)arg0 ;
-(void)startDynamicDucker;
-(void)startVoiceActivityDetection;
-(void)stopDynamicDucker;
-(void)stopVoiceActivityDetection;
-(void)updateActiveMediaStreamIDs:(id)arg0 withTargetBitrate:(unsigned int)arg1 mediaBitrates:(id)arg2 ;
-(void)updateActiveVoiceOnly:(BOOL)arg0 ;


@end


#endif