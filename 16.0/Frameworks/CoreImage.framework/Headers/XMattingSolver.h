// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XMATTINGSOLVER_H
#define XMATTINGSOLVER_H

@class MPSImageThresholdBinary, MPSImageThresholdBinaryInverse, MPSImageAreaMin;
@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture, MattingFilter;

#import <Foundation/Foundation.h>


@interface XMattingSolver : NSObject {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLComputePipelineState> *_applySolverConstraintsKernel;
    id<MTLComputePipelineState> *_solverConstraintsKernel;
    id<MTLTexture> *_tmpSegmentation;
    id<MTLTexture> *_fgErodedSegmentation;
    id<MTLTexture> *_bgErodedSegmentation;
    id<MattingFilter> *_mattingFilter;
    MPSImageThresholdBinary *_fgThresholdFilter;
    MPSImageThresholdBinaryInverse *_bgThresholdFilter;
    MPSImageAreaMin *_erosionFilter;
}


@property ? config; // ivar: _config


-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(int)_compileShadersWithLibrary:(id)arg0 ;
-(int)allocateResources:(struct ? )arg0 ;
-(int)encodeApplySolverConstraintsOn:(id)arg0 constraints:(id)arg1 filteredSegmentation:(id)arg2 segmentation:(id)arg3 ;
-(int)encodeConstraintsOn:(id)arg0 segmentation:(id)arg1 constraints:(id)arg2 ;
-(int)enqueueSolveOn:(id)arg0 constraints:(id)arg1 colorGuide:(id)arg2 extraGuide:(id)arg3 inputTexture:(id)arg4 outputTexture:(id)arg5 ;
-(void)releaseResources;


@end


#endif