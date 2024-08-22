// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMPSIMAGEFILTER_H
#define ARMPSIMAGEFILTER_H

@class MPSUnaryImageKernel;
@protocol MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface ARMPSImageFilter : NSObject {
    *__CVPixelBufferPool _pixelBufferPool;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    MPSUnaryImageKernel *_kernel;
}




-(id)initWithImageKernel:(id)arg0 device:(id)arg1 ;
-(struct __CVBuffer *)processPixelBuffer:(struct __CVBuffer *)arg0 format:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif