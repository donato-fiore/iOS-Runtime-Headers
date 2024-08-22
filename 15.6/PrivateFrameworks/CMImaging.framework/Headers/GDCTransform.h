// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GDCTRANSFORM_H
#define GDCTRANSFORM_H


#import <Foundation/Foundation.h>

#import "FigMetalContext.h"

@interface GDCTransform : NSObject {
    id<MTLComputePipelineState>" _pipelineStates;
    id<MTLSamplerState>" _samplers;
    FigMetalContext *_metalContext;
}




-(id)initWithOptionalCommandQueue:(id)arg0 ;
-(int)_compileShaders;
-(int)_setSamplersWithNormalizedCoordinates:(BOOL)arg0 ;
-(int)transformFrom:(id)arg0 to:(id)arg1 withParameters:(struct ? *)arg2 withScale:(float)arg3 withMode:(int)arg4 andCommandBuffer:(id)arg5 ;
-(struct ? )_legacyParametersToUniforms:(struct ? *)arg0 withScale:(float)arg1 andMode:(int)arg2 ;


@end


#endif