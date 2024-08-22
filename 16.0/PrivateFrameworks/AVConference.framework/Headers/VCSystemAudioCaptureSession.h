// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSYSTEMAUDIOCAPTURESESSION_H
#define VCSYSTEMAUDIOCAPTURESESSION_H


#import <Foundation/Foundation.h>

#import "VCAudioIO.h"

@interface VCSystemAudioCaptureSession : NSObject {
    _opaque_pthread_mutex_t _stateLock;
    AudioStreamBasicDescription _audioBasicDescription;
    unsigned int _samplesPerFrame;
    *opaqueCMSimpleQueue _poolQueue;
    *opaqueCMSimpleQueue _outputQueue;
    VCAudioIO *_audioIO;
}




-(?)cleanupQueue;
-(BOOL)createAudioBufferPool;
-(BOOL)setupAudioIOWithConfig:(struct ? *)arg0 ;
-(BOOL)start;
-(BOOL)stop;
-(id)initWithConfiguration:(struct ? *)arg0 ;
-(void)dealloc;
-(void)resetAudioBufferPool;


@end


#endif