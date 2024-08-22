// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUPIPELINESTATENODE_H
#define NUPIPELINESTATENODE_H



#import "NURenderNode.h"

@interface NUPipelineStateNode : NURenderNode



-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)debugQuickLookObject;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif