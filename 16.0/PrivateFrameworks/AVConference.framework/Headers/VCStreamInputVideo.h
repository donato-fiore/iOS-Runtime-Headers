// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSTREAMINPUTVIDEO_H
#define VCSTREAMINPUTVIDEO_H



#import "VCStreamInput.h"
#import "VCVideoCapture.h"

@interface VCStreamInputVideo : VCStreamInput {
    VCVideoCapture *_videoCapture;
}




-(id)initWithStreamInputID:(id)arg0 format:(struct opaqueCMFormatDescription *)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 remoteQueue:(id)arg4 ;
-(unsigned int)addSink:(id)arg0 ;
-(unsigned int)removeSink:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif