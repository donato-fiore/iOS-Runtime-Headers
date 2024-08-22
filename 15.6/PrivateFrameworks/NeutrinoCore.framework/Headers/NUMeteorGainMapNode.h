// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMETEORGAINMAPNODE_H
#define NUMETEORGAINMAPNODE_H



#import "NUFilterNode.h"

@interface NUMeteorGainMapNode : NUFilterNode



-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)initWithFilter:(id)arg0 settings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithFilterName:(id)arg0 settings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithInput:(id)arg0 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif