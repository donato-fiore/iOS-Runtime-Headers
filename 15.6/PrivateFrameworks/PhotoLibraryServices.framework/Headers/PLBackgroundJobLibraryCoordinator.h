// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBLIBRARYCOORDINATOR_H
#define PLBACKGROUNDJOBLIBRARYCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol PLBackgroundJobWorkerCoordinatorDelegate, PLBackgroundJobLibraryCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PLBackgroundJobStatusCenter.h"
#import "PLPhotoLibraryBundlePriorityTuple.h"
#import "PLBackgroundJobWorkerCoordinator.h"

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate>

 {
    PLBackgroundJobStatusCenter *_statusCenter;
    NSMutableArray *_pendingPhotoLibraryBundles;
    PLPhotoLibraryBundlePriorityTuple *_currentPhotoLibraryBundle;
    PLBackgroundJobWorkerCoordinator *_workerCoordinator;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PLBackgroundJobLibraryCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasPendingJobsOnBundles:(id)arg0 priority:(NSInteger)arg1 ;
-(id)initWithStatusCenter:(id)arg0 ;
-(id)initWithWorkerCoordinator:(id)arg0 ;
-(id)initWithWorkerCoordinator:(id)arg0 statusCenter:(id)arg1 ;
-(void)_handleAllBundlesCompleted;
-(void)_handleBundleComplete:(id)arg0 ;
-(void)_submitNextQueuedBundle;
-(void)startBackgroundJobsOnBundles:(id)arg0 priority:(NSInteger)arg1 ;
-(void)stopBackgroundJobsOnAllBundles;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg0 ;


@end


#endif