// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLGPUDEBUGFUNCTIONHANDLE_H
#define MTLGPUDEBUGFUNCTIONHANDLE_H



#import "MTLToolsFunctionHandle.h"

@interface MTLGPUDebugFunctionHandle : MTLToolsFunctionHandle



-(id)initWithFunctionHandle:(id)arg0 computePiplineState:(id)arg1 function:(id)arg2 ;
-(id)initWithFunctionHandle:(id)arg0 renderPipelineState:(id)arg1 stage:(NSUInteger)arg2 function:(id)arg3 ;


@end


#endif