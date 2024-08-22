// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGECACHENODE_H
#define NUIMAGECACHENODE_H



#import "NUCacheNode.h"

@interface NUImageCacheNode : NUCacheNode



-(BOOL)tryLoadPersistentURL:(id)arg0 error:(*id)arg1 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg0 error:(*id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)persistentURL;


@end


#endif