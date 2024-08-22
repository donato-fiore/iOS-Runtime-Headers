// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLOCALVIDEOKEYFRAMEJOBQUEUE_H
#define PLLOCALVIDEOKEYFRAMEJOBQUEUE_H

@class NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLLocalVideoKeyFrameJobQueue : NSObject {
    os_unfair_lock_s _lock;
    NSMutableOrderedSet *_queuedJobs;
    NSMutableDictionary *_jobsByAssetObjectID;
    NSUInteger _inflightCount;
}




-(BOOL)addJobWithAssetObjectID:(id)arg0 networkAccessAllowed:(BOOL)arg1 libraryID:(id)arg2 error:(*id)arg3 completionHandler:(id)arg4 ;
-(BOOL)removeJob:(id)arg0 ;
-(id)init;
-(id)popNextJobToRun;


@end


#endif