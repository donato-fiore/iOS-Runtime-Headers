// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIAUTOLOOPCACHENODE_H
#define PIAUTOLOOPCACHENODE_H

@class NUVideoCacheNode;



@interface PIAutoLoopCacheNode : NUVideoCacheNode



+(id)nodeWithInput:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(NSInteger)subsampleFactorForScale:(struct ? )arg0 ;
-(id)descriptionSubClassHook;
-(id)newRenderRequestWithOriginalRequest:(id)arg0 error:(*id)arg1 ;
-(id)outputSettings:(*id)arg0 ;
-(id)persistentLongExposureURL;
-(id)persistentMaskURL;
-(id)persistentURL;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif