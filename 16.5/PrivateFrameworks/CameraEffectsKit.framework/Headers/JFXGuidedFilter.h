// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXGUIDEDFILTER_H
#define JFXGUIDEDFILTER_H

@class MPSImageGuidedFilter;
@protocol MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface JFXGuidedFilter : NSObject {
    MPSImageGuidedFilter *_osGuidedFilter;
    BOOL _useCPU;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    *__CVPixelBufferPool _coeffPool;
    *__CVMetalTextureCache _textureCache;
    NSUInteger _guideImageWidth;
    NSUInteger _guideImageHeight;
}




-(id)initWithDiameter:(int)arg0 ;
-(void)dealloc;
-(void)scaleImage:(struct __CVBuffer *)arg0 guidanceImage:(struct __CVBuffer *)arg1 destinationImage:(struct __CVBuffer *)arg2 ;


@end


#endif