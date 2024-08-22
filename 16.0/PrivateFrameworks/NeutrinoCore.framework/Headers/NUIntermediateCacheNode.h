// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUINTERMEDIATECACHENODE_H
#define NUINTERMEDIATECACHENODE_H



#import "NUCacheNode.h"

@interface NUIntermediateCacheNode : NUCacheNode



-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)evaluateRenderDependenciesWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;


@end


#endif