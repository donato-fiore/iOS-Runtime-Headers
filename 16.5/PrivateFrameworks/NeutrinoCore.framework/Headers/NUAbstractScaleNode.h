// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUABSTRACTSCALENODE_H
#define NUABSTRACTSCALENODE_H



#import "NURenderNode.h"

@interface NUAbstractScaleNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *inputNode;


-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_scaleImage:(id)arg0 by:(struct ? )arg1 sampleMode:(NSInteger)arg2 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;


@end


#endif