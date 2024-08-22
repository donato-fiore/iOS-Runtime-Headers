// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTMSRRESIZE_H
#define PTMSRRESIZE_H

@class NSArray;
@protocol MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PTColor.h"
#import "PTUtil.h"

@interface PTMSRResize : NSObject {
    ? _outputPixelbuffer;
    ? _outputIOSurface;
    NSArray *_pyramidRGBA;
    int _allocatedIOSurfaces;
    *__CFDictionary _runOptions;
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




-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 inputSize:(struct ? )arg2 target:(id)arg3 rotateTargetPixelBuffer:(BOOL)arg4 sharedResources:(id)arg5 ;
-(id)pyramidRGBA;
-(id)targetRGBA;
-(int)_downsample:(struct __IOSurface *)arg0 toDest:(struct __IOSurface *)arg1 useCustomFilter:(BOOL)arg2 centerAlignment:(BOOL)arg3 synchronous:(BOOL)arg4 ;
-(int)_rotate:(struct __IOSurface *)arg0 toDest:(struct __IOSurface *)arg1 synchronous:(BOOL)arg2 ;
-(int)downsampleToLayer:(int)arg0 ;
-(int)queryCapabilities;
-(int)setCustomFilter:(int)arg0 alignment:(int)arg1 sourceWidth:(NSUInteger)arg2 sourceHeight:(NSUInteger)arg3 destinationWidth:(NSUInteger)arg4 destinationHeight:(NSUInteger)arg5 luma_param:(float)arg6 chroma_param:(float)arg7 ;
-(struct __CVBuffer *)targetRGBAPixelBuffer;
-(unsigned int)downsampleQuarterSizeToTargetSize:(struct __CVBuffer *)arg0 ;
-(unsigned int)downsampleToQuarterSize:(struct __CVBuffer *)arg0 ;
-(unsigned int)rotate:(struct __IOSurface *)arg0 crop:(int)arg1 rotationDegree:(struct __IOSurface *)arg2 toDest:(BOOL)arg3 synchronous;
-(void)dealloc;


@end


#endif