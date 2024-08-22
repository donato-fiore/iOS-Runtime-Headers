// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUDEBUGFILTERNODE_H
#define NUDEBUGFILTERNODE_H



#import "NUFilterNode.h"

@interface NUDebugFilterNode : NUFilterNode



-(BOOL)requiresVideoComposition;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif