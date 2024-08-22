// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTMSRRESIZE_H
#define PTMSRRESIZE_H

@protocol MTLTexture, MTLDevice;

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
    PTColor *_colorUtil;
    PTUtil *_util;
    BOOL _hasMSR;
    *__IOSurfaceAccelerator _accelRef;
    ? _cap;
}




-(id)downsampleoQuarterSizeToTargetSize:(id)arg0 inputPixelbuffer:(struct __CVBuffer *)arg1 ;
-(id)initWithDevice:(id)arg0 inputSize:(struct ? )arg1 target:(id)arg2 ;
-(id)quarterSizeChroma;
-(id)quarterSizeLuma;
-(id)targetRGBA;
-(int)_downsample:(struct __IOSurface *)arg0 toDest:(struct __IOSurface *)arg1 useCustomFilter:(BOOL)arg2 centerAlignment:(BOOL)arg3 ;
-(int)queryCapabilities;
-(int)setCustomFilter:(int)arg0 alignment:(int)arg1 sourceWidth:(NSUInteger)arg2 sourceHeight:(NSUInteger)arg3 destinationWidth:(NSUInteger)arg4 destinationHeight:(NSUInteger)arg5 luma_param:(float)arg6 chroma_param:(float)arg7 ;
-(unsigned int)downsampleToQuarterSize:(id)arg0 inputPixelbuffer:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif