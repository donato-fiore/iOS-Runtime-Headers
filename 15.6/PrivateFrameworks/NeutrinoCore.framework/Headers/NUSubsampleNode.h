// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUSUBSAMPLENODE_H
#define NUSUBSAMPLENODE_H

@class NSDictionary;


#import "NUAbstractScaleNode.h"
#import "NUSourceContainerNode.h"

@interface NUSubsampleNode : NUAbstractScaleNode

@property NSInteger appliedSubsampleFactor; // ivar: _appliedSubsampleFactor
@property (readonly) NSDictionary *pipelineSettings; // ivar: _pipelineSettings
@property (readonly) NUSourceContainerNode *sourceContainer; // ivar: _sourceContainer
@property (readonly) NSDictionary *sourceOptions; // ivar: _sourceOptions
@property (readonly) NSInteger subsampleFactor; // ivar: _subsampleFactor


+(NSInteger)subsampleFactorForScale:(struct ? )arg0 additionalScale:(struct ? *)arg1 ;
-(NSInteger)resolveSubsampleFactorForPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)resolveSubsampleFactorForPipelineState:(id)arg0 sourceScale:(struct ? )arg1 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateImageProperties:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_sourceNode;
-(id)debugQuickLookObject;
-(id)initWithInput:(id)arg0 settings:(id)arg1 ;
-(id)initWithPreparedSource:(id)arg0 container:(id)arg1 pipelineSettings:(id)arg2 sourceOptions:(id)arg3 ;
-(id)initWithSubsampleFactor:(NSInteger)arg0 source:(id)arg1 container:(id)arg2 pipelineSettings:(id)arg3 sourceOptions:(id)arg4 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;


@end


#endif