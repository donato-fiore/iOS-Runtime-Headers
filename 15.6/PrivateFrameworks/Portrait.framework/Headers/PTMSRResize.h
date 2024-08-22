// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTMSRRESIZE_H
#define PTMSRRESIZE_H

@protocol MTLTexture, MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PTColor.h"
#import "PTUtil.h"

@interface PTMSRResize : NSObject {
    id<MTLTexture> *_resultTexture;
    ? output;
    ? outputIOSurface;
    int _allocatedIOSurfaces;
    *__CFDictionary _runOptions;
    id<MTLTexture> *_quarterSizeLuma;
    id<MTLTexture> *_quarterSizeChroma;
    *CGColorSpace _csRGBLinear;
    *CGColorSpace _csSRGB;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    PTColor *_colorUtil;
    PTUtil *_util;
    BOOL _hasMSR;
    BOOL _rotateTargetPixelBuffer;
    *__IOSurfaceAccelerator _accelRef;
    ? _cap;
}




-(id)downsampleQuarterSizeToTargetSize:(struct __CVBuffer *)arg0 ;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 inputSize:(struct ? )arg2 target:(id)arg3 rotateTargetPixelBuffer:(BOOL)arg4 ;
-(id)quarterSizeChroma;
-(id)quarterSizeLuma;
-(id)targetRGBA;
-(int)_downsample:(struct __IOSurface *)arg0 toDest:(struct __IOSurface *)arg1 useCustomFilter:(BOOL)arg2 centerAlignment:(BOOL)arg3 ;
-(int)_rotate:(struct __IOSurface *)arg0 toDest:(struct __IOSurface *)arg1 ;
-(int)queryCapabilities;
-(int)setCustomFilter:(int)arg0 alignment:(int)arg1 sourceWidth:(NSUInteger)arg2 sourceHeight:(NSUInteger)arg3 destinationWidth:(NSUInteger)arg4 destinationHeight:(NSUInteger)arg5 luma_param:(float)arg6 chroma_param:(float)arg7 ;
-(struct __CVBuffer *)targetRGBACVPixelBuffer;
-(unsigned int)downsampleToQuarterSize:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif