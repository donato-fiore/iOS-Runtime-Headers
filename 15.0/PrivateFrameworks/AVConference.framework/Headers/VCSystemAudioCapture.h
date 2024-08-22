// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSYSTEMAUDIOCAPTURE_H
#define VCSYSTEMAUDIOCAPTURE_H


#import <Foundation/Foundation.h>


@interface VCSystemAudioCapture : NSObject {
    _opaque_pthread_mutex_t _stateLock;
    *? _audioRecorderQueue;
    int _audioProcessIdToTap;
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
}




+(id)newAudioTapDescriptionForProcess:(int)arg0 audioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 ;
-(BOOL)start;
-(BOOL)stop;
-(id)initWithConfiguration:(struct ? *)arg0 ;
-(void)dealloc;


@end


#endif