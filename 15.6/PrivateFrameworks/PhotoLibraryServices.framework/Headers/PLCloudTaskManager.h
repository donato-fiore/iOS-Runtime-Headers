// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDTASKMANAGER_H
#define PLCLOUDTASKMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLCloudTaskManager : NSObject {
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}




// -(BOOL)addProgressBlock:(id)arg0 completionHandler:(unk)arg1 forResourceIdentifier:(id)arg2 highPriority:(unk)arg3 withTaskIdentifier:(id)arg4  ;
-(id)_taskForResourceIdentifier:(id)arg0 highPriority:(BOOL)arg1 ;
-(id)_taskIdentifiersForResourceIdentifier:(id)arg0 highPriority:(BOOL)arg1 ;
-(id)getPendingTaskForTaskIdentifier:(id)arg0 ;
-(id)init;
-(void)_removeTaskIdentifiersForResourceIdentifier:(id)arg0 highPriority:(BOOL)arg1 ;
-(void)_setTaskIdentifiers:(id)arg0 forResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)cancelTaskWithTaskIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)reportCompletionForResourceIdentifier:(id)arg0 highPriority:(BOOL)arg1 withError:(id)arg2 ;
-(void)reportProgress:(float)arg0 forResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)reset;
-(void)setPendingTaskWithTransferTask:(id)arg0 withTaskIdentifier:(id)arg1 ;


@end


#endif