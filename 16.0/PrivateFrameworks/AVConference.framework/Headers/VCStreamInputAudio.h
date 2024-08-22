// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSTREAMINPUTAUDIO_H
#define VCSTREAMINPUTAUDIO_H

@class NSString;
@protocol VCStreamInputCaptureSourceDelegate;


#import "VCStreamInput.h"

@interface VCStreamInputAudio : VCStreamInput <VCStreamInputCaptureSourceDelegate>

 {
    *unk _sampleBufferDelegateCallback;
    *void _sampleBufferDelegateCallbackContext;
    os_unfair_lock_s _sampleBufferDelegateCallbackLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStreamInputID:(id)arg0 format:(struct opaqueCMFormatDescription *)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 remoteQueue:(id)arg4 ;
-(void)dealloc;
-(void)registerSampleBufferCallback:(*unk)arg0 context:(*void)arg1 ;


@end


#endif