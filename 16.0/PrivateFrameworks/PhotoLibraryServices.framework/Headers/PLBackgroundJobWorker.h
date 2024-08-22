// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBWORKER_H
#define PLBACKGROUNDJOBWORKER_H

@class NSMutableArray, NSString;
@protocol PLBackgroundJobWorkerProtocol;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"
#import "PLBackgroundJobStatusCenter.h"

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol>

 {
    id *_workerCompleteCompletionHandler;
    id *_currentManagedObjectCompletionHandler;
    uint8_t _workerAtomicCounter;
    uint8_t _completionHandlerAtomicCounter;
    id *_workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    NSUInteger _totalJobsCount;
    os_unfair_lock_s _lock;
    BOOL _shouldStop;
    uint8_t _shouldDeferActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLPhotoLibraryBundle *libraryBundle; // ivar: _libraryBundle
@property (weak, nonatomic) PLBackgroundJobStatusCenter *statusCenter; // ivar: _statusCenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *workerDetailedName; // ivar: _workerDetailedName
@property (readonly, nonatomic) NSString *workerName; // ivar: _workerName


+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)usesMultipleLibrariesConcurrently;
+(NSInteger)availableDiskSpaceForVolumeURL:(id)arg0 ;
-(BOOL)hasEnoughDiskSpaceToContinue:(id)arg0 ;
-(BOOL)isInterruptible;
-(BOOL)shouldDeferActivity;
-(id)init;
-(id)initWithLibraryBundle:(id)arg0 ;
-(id)pendingJobsInLibrary:(id)arg0 ;
-(id)photoLibraryWithDatabaseContext:(id)arg0 ;
-(id)redactedDescription;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)_handleAllJobsCompleteInLibrary:(id)arg0 ;
-(void)_processNextManagedObjectInLibrary:(id)arg0 continueRunning:(BOOL)arg1 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)startWorkInLibrary:(id)arg0 withWorkItemsNeedingProcessing:(id)arg1 withCompletion:(id)arg2 ;
-(void)stopAllWork;
-(void)stopWorkingOnItem:(id)arg0 ;
-(void)workerDidFinishWithDatabaseContext:(id)arg0 ;


@end


#endif