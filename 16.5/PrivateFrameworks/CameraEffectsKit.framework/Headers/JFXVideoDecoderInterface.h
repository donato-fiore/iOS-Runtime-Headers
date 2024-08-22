// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXVIDEODECODERINTERFACE_H
#define JFXVIDEODECODERINTERFACE_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface JFXVideoDecoderInterface : NSObject {
    *OpaqueVTDecompressionSession _session;
    CGFloat m_expectedFrameRate;
}


@property (retain) NSObject<OS_dispatch_semaphore> *frameSemaphore; // ivar: _frameSemaphore
@property *__CVBuffer imageBuffer; // ivar: _imageBuffer


-(id)init;
-(id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(struct __CVBuffer *)decodeFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif