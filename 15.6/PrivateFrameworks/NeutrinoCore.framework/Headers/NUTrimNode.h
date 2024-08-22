// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUTRIMNODE_H
#define NUTRIMNODE_H



#import "NUTransformNode.h"

@interface NUTrimNode : NUTransformNode

@property (readonly) ? range; // ivar: _range


-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoAttributes:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)initWithTimeRange:(struct ? )arg0 input:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif