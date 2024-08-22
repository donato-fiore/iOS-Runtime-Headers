// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XFOCALPLANE_H
#define XFOCALPLANE_H

@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLBuffer;

#import <Foundation/Foundation.h>


@interface XFocalPlane : NSObject {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLComputePipelineState> *_disparityRefinementPreprocessingKernel;
    id<MTLComputePipelineState> *_minMax0_kernel;
    id<MTLComputePipelineState> *_minMax1_kernel;
    id<MTLComputePipelineState> *_minMax2_kernel;
    id<MTLComputePipelineState> *_calc_kernel;
}


@property ? config; // ivar: _config
@property (readonly) NSObject<MTLBuffer> *minMaxAtomic_buf; // ivar: _minMaxAtomic_buf
@property (readonly) NSObject<MTLBuffer> *minMaxResult_buf; // ivar: _minMaxResult_buf
@property (readonly) NSObject<MTLBuffer> *zeroShiftResult_buf; // ivar: _zeroShiftResult_buf


-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(int)_compileShadersWithLibrary:(id)arg0 ;
-(int)allocateResources;
-(int)encodeDisparityRefinementPreprocessingOn:(id)arg0 alphaTexture:(id)arg1 inputDisparityTexture:(id)arg2 outputDisparityTexture:(id)arg3 configuration:(struct ? )arg4 ;
-(int)encodeFocalPlaneCalcOn:(id)arg0 disparityTexture:(id)arg1 ;
-(int)encodeMinMaxOn:(id)arg0 inputTexture:(id)arg1 ;
-(void)dealloc;
-(void)releaseResources;


@end


#endif