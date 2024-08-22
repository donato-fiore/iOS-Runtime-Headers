// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSYSTEMAUDIOCAPTURE_H
#define VCSYSTEMAUDIOCAPTURE_H



#import "VCObject.h"
#import "CannedAudioInjector.h"

@interface VCSystemAudioCapture : VCObject {
    _opaque_pthread_mutex_t _stateLock;
    *? _audioRecorderQueue;
    ? _tapSettings;
    AudioStreamBasicDescription _audioBasicDescriptionAudioQueue;
    AudioStreamBasicDescription _audioBasicDescriptionAudioCapture;
    unsigned int _samplesPerFrame;
    *void _sinkContext;
    *unk _sinkProc;
    BOOL _firstAudioBufferReceived;
    *opaqueVCAudioBufferList _audioBufferAppendList;
    *opaqueVCAudioBufferList _audioBufferOutputList;
    CGFloat _conversionRatio;
    unsigned int _timestamp;
    CGFloat _hostTime;
    CGFloat _startHostTime;
    CannedAudioInjector *_cannedAudioInjector;
    BOOL _useSineWave;
}




+(BOOL)isValidConfiguration:(struct ? *)arg0 ;
+(id)newAudioTapWithCaptureContext:(struct __CFString *)arg0 audioFormat:(id)arg1 ;
+(id)newAudioTapWithProcessID:(int)arg0 audioFormat:(id)arg1 ;
+(id)newAudioTapWithSessionType:(unsigned int)arg0 audioFormat:(id)arg1 ;
+(unsigned int)audioTapSessionTypeForInternalSessionType:(unsigned int)arg0 ;
-(BOOL)start;
-(BOOL)stop;
-(id)initWithConfiguration:(struct ? *)arg0 ;
-(id)newAudioTapWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 ;
-(void)dealloc;
-(void)setupCannedAudioInjection;


@end


#endif