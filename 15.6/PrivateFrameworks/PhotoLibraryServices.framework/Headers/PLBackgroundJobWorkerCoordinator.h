// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBWORKERCOORDINATOR_H
#define PLBACKGROUNDJOBWORKERCOORDINATOR_H

@class NSArray, NSMutableArray;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PLBackgroundJobStatusCenter.h"
#import "PLBackgroundJobWorkerPriorityTuple.h"

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<PLBackgroundJobWorkerCoordinatorDelegate> *delegate; // ivar: _delegate


-(BOOL)hasPendingJobsForBundle:(id)arg0 priority:(NSInteger)arg1 ;
-(id)_workersForBundle:(id)arg0 ;
-(id)initWithWorkerClassesAsStrings:(id)arg0 ;
-(id)initWithWorkerClassesAsStrings:(id)arg0 workerMode:(short)arg1 statusCenter:(id)arg2 ;
-(id)initWithWorkerCoordinatorWorkerMode:(short)arg0 statusCenter:(id)arg1 ;
-(void)_handleAllWorkersCompleted;
-(void)_processNextWorkerInLibraryBundle:(id)arg0 ;
-(void)_submitBundleForProcessing:(id)arg0 priority:(NSInteger)arg1 ignorePriority:(BOOL)arg2 ;
-(void)stopAllBackgorundJobs;
-(void)submitBundleForProcessing:(id)arg0 priority:(NSInteger)arg1 ;
-(void)submitBundleForProcessingOnAllWorkerPriorities:(id)arg0 ;


@end


#endif