// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSYSTEMAUDIOCAPTURESESSION_H
#define VCSYSTEMAUDIOCAPTURESESSION_H


#import <Foundation/Foundation.h>

#import "VCSystemAudioCapture.h"

@interface VCSystemAudioCaptureSession : NSObject {
    _opaque_pthread_mutex_t _stateLock;
    AudioStreamBasicDescription _audioBasicDescription;
    unsigned int _samplesPerFrame;
    VCSystemAudioCapture *_systemAudioCapture;
    *opaqueCMSimpleQueue _poolQueue;
    *opaqueCMSimpleQueue _outputQueue;
}




-(?)cleanupQueue;
-(BOOL)createAudioBufferPool;
-(BOOL)start;
-(BOOL)stop;
-(id)initWithConfiguration:(struct ? *)arg0 ;
-(void)dealloc;
-(void)resetAudioBufferPool;


@end


#endif