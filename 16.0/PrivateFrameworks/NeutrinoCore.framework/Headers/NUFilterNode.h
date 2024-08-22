// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUFILTERNODE_H
#define NUFILTERNODE_H

@class NSString;


#import "NURenderNode.h"

@interface NUFilterNode : NURenderNode

@property (readonly) NSString *filterName; // ivar: _filterName


-(BOOL)isEqualToRenderNode:(id)arg0 ;
-(BOOL)isGeometryNode;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(NSUInteger)hash;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)debugQuickLookObject;
-(id)descriptionSubClassHook;
-(id)initWithFilter:(id)arg0 settings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithFilterName:(id)arg0 settings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(void)nu_updateDigest:(id)arg0 ;


@end


#endif