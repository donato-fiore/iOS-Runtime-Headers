// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPATIALRESAMPLER_H
#define SPATIALRESAMPLER_H

@protocol MTLDeviceSPI, MTLLibrary;

#import <Foundation/Foundation.h>

#import "ResamplerShader.h"

@interface SpatialResampler : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    ResamplerShader *_verticalResampleKernel;
    ResamplerShader *_verticalResampleChromaKernel;
    ResamplerShader *_horizontalResampleKernel;
}




-(id)getComputePipeLineStateForShader:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)createKernels;
-(void)encodeSpatialResampleHorizontal:(id)arg0 Input:(id)arg1 Output:(id)arg2 ;
-(void)encodeSpatialResampleVertical:(id)arg0 Input:(id)arg1 Output:(id)arg2 isChroma:(BOOL)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 input:(struct __IOSurface *)arg1 output:(struct __IOSurface *)arg2 ;
-(void)setupTextures:(id)arg0 input:(struct __IOSurface *)arg1 output:(struct __IOSurface *)arg2 ;


@end


#endif