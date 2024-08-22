// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTGLOBALREDUCTION_H
#define PTGLOBALREDUCTION_H

@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PTGlobalReduction : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLTexture> *_texPing;
    id<MTLTexture> *_texPong;
    id<MTLComputePipelineState> *_parallelReductionAverage;
    id<MTLComputePipelineState> *_parallelReductionMax;
    id<MTLComputePipelineState> *_parallelReductionMin;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 textureSize:(struct CGSize )arg3 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 textureSize:(struct CGSize )arg3 pixelFormat:(NSUInteger)arg4 ;
-(void)parallelReduction:(id)arg0 inTexture:(id)arg1 globalBuffer:(id)arg2 offset:(int)arg3 pipelineState:(id)arg4 ;
-(void)parallelReductionAverage:(id)arg0 inTexture:(id)arg1 outGlobalAverage:(id)arg2 ;
-(void)parallelReductionMax:(id)arg0 inTexture:(id)arg1 globalMaxBuffer:(id)arg2 ;
-(void)parallelReductionMin:(id)arg0 inTexture:(id)arg1 globalMinBuffer:(id)arg2 ;
-(void)parallelReductionMinMax:(id)arg0 inTexture:(id)arg1 globalMinMaxBuffer:(id)arg2 ;


@end


#endif