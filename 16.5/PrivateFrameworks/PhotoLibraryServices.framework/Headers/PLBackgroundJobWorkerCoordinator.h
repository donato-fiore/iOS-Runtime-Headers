// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBWORKERCOORDINATOR_H
#define PLBACKGROUNDJOBWORKERCOORDINATOR_H

@class NSArray, NSMutableArray;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PLBackgroundJobStatusCenter.h"
#import "PLBackgroundJobWorkerCriteriaTuple.h"

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerCriteriaTuple *_currentWorker;
    os_unfair_lock_s _lock;
    uint8_t _shouldDeferActivity;
}


@property (weak, nonatomic) NSObject<PLBackgroundJobWorkerCoordinatorDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldDeferActivity;
-(id)_workersForBundle:(id)arg0 ;
-(id)initWithWorkerClassesAsStrings:(id)arg0 ;
-(id)initWithWorkerClassesAsStrings:(id)arg0 workerMode:(short)arg1 statusCenter:(id)arg2 ;
-(id)initWithWorkerCoordinatorWorkerMode:(short)arg0 statusCenter:(id)arg1 ;
-(id)pendingJobsForBundle:(id)arg0 ;
-(void)_handleAllWorkersCompleted;
-(void)_processNextWorkerInLibraryBundle:(id)arg0 ;
-(void)stopAllBackgorundJobs;
-(void)submitBundleForProcessing:(id)arg0 withCriteria:(id)arg1 ;


@end


#endif