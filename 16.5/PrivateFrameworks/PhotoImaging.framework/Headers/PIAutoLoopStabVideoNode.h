// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIAUTOLOOPSTABVIDEONODE_H
#define PIAUTOLOOPSTABVIDEONODE_H

@class NURenderNode, NSDictionary;



@interface PIAutoLoopStabVideoNode : NURenderNode

@property (readonly, nonatomic) NSDictionary *bakedRecipe; // ivar: _bakedRecipe


+(id)nodeWithInput:(id)arg0 recipe:(id)arg1 error:(*id)arg2 ;
-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 bakedRecipe:(id)arg2 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif