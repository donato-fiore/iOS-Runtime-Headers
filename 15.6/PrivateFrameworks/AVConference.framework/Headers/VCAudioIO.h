// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOIO_H
#define VCAUDIOIO_H

@class NSString;
@protocol VCAudioIOControllerDelegate, VCAudioIOControllerControl;

#import <Foundation/Foundation.h>

#import "VCAudioIOControllerClient.h"

@interface VCAudioIO : NSObject <VCAudioIOControllerDelegate>

 {
    id<VCAudioIOControllerControl> *_audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id *_delegate;
    id *_sourceDelegate;
    id *_sinkDelegate;
    tagVCAudioFrameFormat _clientFormat;
    tagVCAudioFrameFormat _controllerFormat;
    BOOL _isControllerAudioFormatValid;
    BOOL _isControllerReset;
    _opaque_pthread_mutex_t _stateMutex;
    id *_startCompletionBlock;
    id *_stopCompletionBlock;
    _VCAudioEndpointData _sourceData;
    _VCAudioEndpointData _sinkData;
    unsigned int _audioType;
}


@property (readonly, nonatomic) *tagVCAudioFrameFormat clientFormat;
@property (readonly, nonatomic) *tagVCAudioFrameFormat controllerFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char direction;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic) BOOL isGKVoiceChat; // ivar: _isGKVoiceChat
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _isMuted
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (readonly, nonatomic) unsigned int pullAudioSamplesCount;
@property (nonatomic) BOOL spatialAudioDisabled;
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;


+(id)newControllerForDeviceRole:(int)arg0 forAudioType:(unsigned int)arg1 forDirection:(unsigned char)arg2 ;
-(BOOL)createConverterForSource:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)reconfigureWithOperatingMode:(int)arg0 deviceRole:(int)arg1 direction:(unsigned char)arg2 allowAudioRecording:(BOOL)arg3 ;
-(id)delegate;
-(id)initWithConfiguration:(struct _VCAudioIOInitConfiguration *)arg0 ;
-(id)start;
-(id)stop;
-(id)stopWithCompletionHandlerInternal:(id)arg0 ;
-(void)controllerFormatChanged:(struct tagVCAudioFrameFormat *)arg0 ;
-(void)dealloc;
-(void)destroyBuffers;
-(void)didResume;
-(void)didStart:(BOOL)arg0 error:(id)arg1 ;
-(void)didStop:(BOOL)arg0 error:(id)arg1 ;
-(void)didSuspend;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)forceCleanup;
-(void)releaseConverters;
-(void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg0 ;
-(void)setRemoteCodecType:(unsigned int)arg0 sampleRate:(CGFloat)arg1 ;
-(void)setupClientFormatWithConfiguration:(struct _VCAudioIOInitConfiguration *)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopWithCompletionHandler:(id)arg0 ;


@end


#endif