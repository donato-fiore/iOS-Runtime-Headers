// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUSOURCECONTAINERNODE_H
#define NUSOURCECONTAINERNODE_H



#import "NURenderNode.h"
#import "NUSourceNode.h"

@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode *primarySourceNode;


+(id)sourceContainerNodeFromSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqualToRenderNode:(id)arg0 ;
-(NSUInteger)_hash;
-(id)initWithAssetIdentifier:(id)arg0 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)preparedSourceNodeForPipelineState:(id)arg0 pipelineSettings:(id)arg1 sourceSettings:(id)arg2 error:(*id)arg3 ;
-(id)resolveSourceNodeForPipelineState:(id)arg0 foundScale:(struct ? *)arg1 error:(*id)arg2 ;
-(id)sourceNodeForPipelineState:(id)arg0 error:(*id)arg1 ;


@end


#endif