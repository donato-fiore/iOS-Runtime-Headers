// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTELEMETRYCOMPUTEPIPELINESTATE_H
#define MTLTELEMETRYCOMPUTEPIPELINESTATE_H



#import "MTLToolsComputePipelineState.h"
#import "MTLTelemetryDevice.h"

@interface MTLTelemetryComputePipelineState : MTLToolsComputePipelineState {
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
}




+(unsigned int)generateUniqueID;
-(id)initWithComputePipelineState:(id)arg0 reflection:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(void)accumulateUsage;


@end


#endif