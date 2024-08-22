// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GPUSYNTHESIS_H
#define GPUSYNTHESIS_H

@protocol MTLComputePipelineState;


#import "FRCMetalBase.h"

@interface GPUSynthesis : FRCMetalBase {
    id<MTLComputePipelineState> *_combine2Textures;
    id<MTLComputePipelineState> *_postSmoothFilter;
    id<MTLComputePipelineState> *_averageErrorMap;
    id<MTLComputePipelineState> *_generateAlphaMap;
}




-(BOOL)setupMetal;
-(id)initWithDevice:(id)arg0 commmandQueue:(id)arg1 ;
-(void)dealloc;
-(void)encodeAlphaCmdToCommandBuffer:(id)arg0 fromBuffer0:(id)arg1 buffer1:(id)arg2 toAlpha:(id)arg3 timeScale:(float)arg4 toNormalized0:(id)arg5 toNormalized1:(id)arg6 ;
-(void)encodeAverageErrorCmdToCommandBuffer:(id)arg0 minErrorMap0:(id)arg1 minErrorMap1:(id)arg2 avgErrorMap0:(id)arg3 avgErrorMap1:(id)arg4 width:(int)arg5 height:(int)arg6 ;
-(void)encodeCombineCmdToCommandBuffer:(id)arg0 fromBuffer0:(id)arg1 buffer1:(id)arg2 best0:(id)arg3 best1:(id)arg4 map:(id)arg5 normalized0:(id)arg6 normalized1:(id)arg7 alpha:(id)arg8 flowStats0:(struct ? *)arg9 flowStats1:(struct ? *)arg10 toTexture:(id)arg11 ;
-(void)encodePostSmoothFilterCmdToCommandBuffer:(id)arg0 map:(id)arg1 fromTexture:(id)arg2 toTexture:(id)arg3 ;


@end


#endif