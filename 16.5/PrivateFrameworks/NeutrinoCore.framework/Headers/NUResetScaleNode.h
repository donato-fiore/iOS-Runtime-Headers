// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NURESETSCALENODE_H
#define NURESETSCALENODE_H



#import "NUAbstractScaleNode.h"

@interface NUResetScaleNode : NUAbstractScaleNode

@property (readonly, nonatomic) ? scale; // ivar: _scale


-(id)initWithInput:(id)arg0 scale:(struct ? )arg1 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;


@end


#endif