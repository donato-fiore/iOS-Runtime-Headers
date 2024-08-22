// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APRKSTREAMRENDERER_H
#define APRKSTREAMRENDERER_H

@class AVSampleBufferRenderSynchronizer, AVSampleBufferAudioRenderer, CALayer, NSURL, NSData, NSDictionary, NSString, NSUUID;
@protocol APRKMediaPlayerMessagingDelegate, OS_dispatch_queue, OS_dispatch_source, AirPlayReceiverUIDelegate, APRKStreamRendererSampleBufferDelegate, APRKStreamRendererDelegate;

#import <Foundation/Foundation.h>

#import "APRKStreamRecorder.h"
#import "APRKMediaPlayer.h"

@interface APRKStreamRenderer : NSObject <APRKMediaPlayerMessagingDelegate>

 {
    *OpaqueFigCFWeakReferenceHolder _backingUIControllerWeakRef;
    BOOL _isStopping;
    BOOL _isWiredLink;
    BOOL _isP2PWiFiSession;
    BOOL _canRecord;
    BOOL _useCALayerForMirroring;
    BOOL _deferLayerRendering;
    BOOL _shouldRecordFrames;
    BOOL _isAudioActive;
    BOOL _mirroringNeedsKeyFrame;
    BOOL _isMirroringVideoStreamPaused;
    unsigned int _screenSessionCount;
    unsigned int _videoSessionCount;
    unsigned int _audioSessionCount;
    unsigned int _currentVideoSessionID;
    ? _startTime;
    AVSampleBufferRenderSynchronizer *_synchronizer;
    AVSampleBufferAudioRenderer *_audioRenderer;
    CALayer *_mirroringLayer;
    CALayer *_debugLayer;
    APRKStreamRecorder *_recorder;
    APRKMediaPlayer *_player;
    *OpaqueFigVideoQueue _figVideoQueue;
    NSObject<OS_dispatch_queue> *_rendererVideoBufferQueue;
    NSObject<OS_dispatch_queue> *_rendererAudioBufferQueue;
    NSObject<OS_dispatch_queue> *_rendererStateUpdateQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CGSize _presentationVideoSize;
    ? _lastVideoSampleBufferSize;
    CGRect _sourceRect;
    *opaqueCMFormatDescription _formatDesc;
    ? _lastPTS;
    unsigned int _transform;
    *OpaqueAPSNetworkAddress _sessionReceiverAddr;
    *OpaqueAPSNetworkClock _receiverNetworkClock;
    NSObject<OS_dispatch_source> *_recorderKeyFrameTimer;
    BOOL _recorderNeedsKeyFrame;
    NSURL *_currentRecordingURL;
    NSUInteger _currentVideoPlaybackVersion;
    id<AirPlayReceiverUIDelegate> *_airPlayReceiverUIDelegate;
    id<APRKStreamRendererSampleBufferDelegate> *_sampleBufferDelegate;
    NSData *_ensembleInfo;
    NSDictionary *_demoDeviceInfo;
}


@property (nonatomic) BOOL autoRotateLayerFollowingClientRotation; // ivar: _autoRotateLayerFollowingClientRotation
@property (readonly, nonatomic) BOOL canRecord;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APRKStreamRendererDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMirroringAudioStreamPaused; // ivar: _isMirroringAudioStreamPaused
@property (nonatomic) BOOL isMirroringVideoStreamPaused;
@property (nonatomic) BOOL isPaused;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, copy, nonatomic) NSString *managedClientName; // ivar: _managedClientName
@property (readonly, nonatomic) NSUInteger streamRendererMode; // ivar: _streamRendererMode
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) CGSize videoFrameSize;


-(BOOL)_isRotatedTransform:(NSUInteger)arg0 ;
-(BOOL)_performStartRecordingWithOutputURL:(id)arg0 ;
-(BOOL)_performStopRecording;
-(BOOL)_receiverSupportsMirroring;
-(BOOL)_sampleBufferRepresentsKeyFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)_shouldFlip:(unsigned int)arg0 ;
-(BOOL)isActive;
-(BOOL)isP2PWiFi;
-(BOOL)isWiredLink;
-(BOOL)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)startRecordingWithOutputURL:(id)arg0 ;
-(BOOL)stopRecording;
-(NSUInteger)currentVideoPlaybackVersion;
-(float)mirroringVolume;
-(id)HUDLayer;
-(id)backingMediaPlayer;
-(id)demoDeviceInfo;
-(id)ensembleInfo;
-(id)initWithUniqueID:(id)arg0 clientName:(id)arg1 UIController:(struct OpaqueAPReceiverUIController *)arg2 useCALayerForMirroring:(BOOL)arg3 ;
-(id)mediaPlayer;
-(id)mirroringLayer;
-(id)player;
-(id)sampleBufferDelegate;
-(id)videoQueuePerformanceDictionary;
-(int)_enqueueSampleBufferForRecording:(struct opaqueCMSampleBuffer *)arg0 isAudioSBuf:(BOOL)arg1 ;
-(int)_enqueueVideoFrameForRendering:(struct opaqueCMSampleBuffer *)arg0 ;
-(short)_ensureFigVideoQueue;
-(unsigned int)audioSessionCount;
-(unsigned int)currentVideoSessionID;
-(unsigned int)screenSessionCount;
-(unsigned int)videoSessionCount;
-(void)_cleanupInternalPlayer;
-(void)_cleanupPreviousRecordingIfExisting;
-(void)_ensureInternalPlayer;
-(void)_performUIControllerActionWithBlock:(id)arg0 ;
-(void)_updateStreamingMode;
-(void)dealloc;
-(void)makeNowPlayingRenderer;
-(void)mediaPlayer:(id)arg0 didGenerateFPSSecureStopRecordPayload:(id)arg1 ;
-(void)mediaPlayer:(id)arg0 wantsToSendUpstreamMessageWithDictionary:(id)arg1 ;
-(void)mediaPlayerNeedsTLSInfo:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postVideoV1EventWithType:(char *)arg0 params:(struct __CFDictionary *)arg1 ;
-(void)processHidePasscodePromptRequest;
-(void)processShowPasscodePromptRequest:(id)arg0 ;
-(void)processStartAudioSessionRequestWithSessionID:(unsigned int)arg0 isScreenAudio:(BOOL)arg1 ;
-(void)processStartScreenPresentationWithSessionID:(unsigned int)arg0 ;
-(void)processStartVideoPlaybackRequestWithWithSessionID:(unsigned int)arg0 version:(NSUInteger)arg1 ;
-(void)processStopAudioSessionRequestWithSessionID:(unsigned int)arg0 ;
-(void)processStopScreenPresentationWithSessionID:(unsigned int)arg0 ;
-(void)processStopVideoPlaybackRequestWithSessionID:(unsigned int)arg0 ;
-(void)setDeferLayerRendering:(BOOL)arg0 ;
-(void)setDemoDeviceInfo:(id)arg0 ;
-(void)setEnsembleInfo:(id)arg0 ;
-(void)setIsP2PWiFi:(BOOL)arg0 ;
-(void)setIsWiredLink:(BOOL)arg0 ;
-(void)setMirroringVolume:(float)arg0 ;
-(void)setReceiverNetworkClock:(struct OpaqueAPSNetworkClock *)arg0 ;
-(void)setSampleBufferDelegate:(id)arg0 ;
-(void)setSessionReceiverAddress:(struct OpaqueAPSNetworkAddress *)arg0 ;
-(void)setVideoV1Delegate:(id)arg0 withDelegateQueue:(id)arg1 ;
-(void)stop;
-(void)updateDisplayInfo;


@end


#endif