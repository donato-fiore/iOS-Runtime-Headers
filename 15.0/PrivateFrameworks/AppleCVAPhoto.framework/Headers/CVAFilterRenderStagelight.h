// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAFILTERRENDERSTAGELIGHT_H
#define CVAFILTERRENDERSTAGELIGHT_H

@class NSString;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface CVAFilterRenderStagelight : NSObject {
    id<MTLComputePipelineState> *_renderingStageLightKernel_bothCubes;
    id<MTLComputePipelineState> *_renderingStageLightKernel_proxyCube;
    id<MTLComputePipelineState> *_renderingStageLightKernel_cube;
    id<MTLComputePipelineState> *_renderingStageLightKernel_noCube;
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 srcColorTex:(id)arg1 srcAlphaTex:(id)arg2 dstYTex:(id)arg3 dstUVTex:(id)arg4 stageLightProxyLut:(id)arg5 stageLightLut:(id)arg6 blackBackgroundIntensity:(float)arg7 vignetteIntensity:(float)arg8 ;


@end


#endif