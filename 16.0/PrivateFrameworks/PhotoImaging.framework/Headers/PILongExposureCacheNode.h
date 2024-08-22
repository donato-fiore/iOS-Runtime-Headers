// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PILONGEXPOSURECACHENODE_H
#define PILONGEXPOSURECACHENODE_H

@class NUCacheNode;



@interface PILongExposureCacheNode : NUCacheNode



-(BOOL)tryLoadPersistentURL:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)autoLoopCacheNode;
-(id)evaluateRenderDependenciesWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithAutoLoopCacheNode:(id)arg0 urlKey:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)persistentURL;
-(id)resolvedSourceNode:(*id)arg0 ;


@end


#endif