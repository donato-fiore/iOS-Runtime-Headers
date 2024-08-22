// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTELEMETRYRENDERPIPELINESTATE_H
#define MTLTELEMETRYRENDERPIPELINESTATE_H

@class NSSet;


#import "MTLToolsRenderPipelineState.h"
#import "MTLTelemetryDevice.h"

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
    BOOL hasAnisoConstantSampler;
    NSSet *activeFragmentSamplers;
    NSSet *activeFragmentTextures;
}




+(unsigned int)generateUniqueID;
-(id)initWithPipelineState:(id)arg0 reflection:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(void)accumulateUsage;
-(void)dealloc;


@end


#endif