// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBSERVICE_H
#define PLBACKGROUNDJOBSERVICE_H

@class PFCoalescer, PFCameraViewfinderSessionWatcher, NSDictionary, NSString, NSPointerArray;
@protocol PFCameraViewfinderSessionWatcherDelegate, PLBackgroundJobLibraryCoordinatorDelegate, OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLBackgroundJobStatusCenter.h"
#import "PLBackgroundJobLibraryCoordinator.h"

@interface PLBackgroundJobService : NSObject <PFCameraViewfinderSessionWatcherDelegate, PLBackgroundJobLibraryCoordinatorDelegate>

 {
    NSObject<OS_xpc_object> *_xpcActivity;
    NSUInteger _state;
    PLBackgroundJobStatusCenter *_statusCenter;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PFCoalescer *_registrationCoalescer;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    CGFloat _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByPriority;
    os_unfair_lock_s _stateLock;
    os_unfair_lock_s _bundlesToProcessByPriorityLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_xpcActivityDeferTimer;
    BOOL _deferringService;
    BOOL _simulateXpcActivityDeferring;
    BOOL _cameraForeground;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPointerArray *observers; // ivar: _observers
@property (readonly) NSDictionary *statusCenterDump;
@property (readonly) Class superclass;


+(BOOL)_activityIdentifier:(id)arg0 matchesPriority:(NSInteger)arg1 ;
+(BOOL)_stateIsInPausedState:(NSUInteger)arg0 ;
+(BOOL)_stateIsInRunningState:(NSUInteger)arg0 ;
+(BOOL)_stateIsReadyForRegistration:(NSUInteger)arg0 ;
+(BOOL)_stateIsReadyToRun:(NSUInteger)arg0 ;
+(BOOL)verifyStateTransitionFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
+(id)_activityIdentifierForPriority:(NSInteger)arg0 ;
+(id)_criteriaForActivityPriority:(NSInteger)arg0 ;
+(void)_removeAllBundlesFromUserDefaultsWithoutLocking;
-(NSUInteger)_getServiceState;
-(NSUInteger)_getServiceStateAlreadyLocked;
-(id)_bundlesToProcessByPriorityAsPathStrings;
-(id)_getBundlePathsToProcess;
-(id)_getBundleRecordsFromProcessingSetForAllPriorites;
-(id)_getBundleRecordsFromProcessingSetForPriority:(NSInteger)arg0 ;
-(id)init;
-(id)initWithLibraryCoordinator:(id)arg0 ;
-(id)initWithLibraryCoordinator:(id)arg0 statusCenter:(id)arg1 ;
-(void)_appendBundleRecordsToProcessingSet:(id)arg0 priority:(NSInteger)arg1 ;
-(void)_loadBundleRecordsDictionaryFromUserDefaults;
-(void)_persistBundleRecordsDictionaryToUserDefaults;
-(void)_registerActivityIfNecessaryOnBundles:(id)arg0 ;
-(void)_registerActivityWithPriority:(NSInteger)arg0 ;
-(void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)arg0 ;
-(void)_removeAllBundlesFromProcessingSet;
-(void)_removeBundleRecordFromProcessingSet:(id)arg0 priority:(NSInteger)arg1 ;
-(void)_setServiceState:(NSUInteger)arg0 ;
-(void)_setServiceStateAlreadyLocked:(NSUInteger)arg0 ;
-(void)_shutdown;
-(void)_simulateXPCShouldDefer;
-(void)_startPollingForActivityStatus;
-(void)_startRunningBackgroundJobsWithPriority:(NSInteger)arg0 ;
-(void)_startRunningBackgroundJobsWithPriorityAlreadyLocked:(NSInteger)arg0 ;
-(void)_stopPollingForActivityStatus;
-(void)_stopRunningBackgroundJobs;
-(void)_stopRunningBackgroundJobsAndTearDownXPCDeferTimers;
-(void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)arg0 ;
-(void)_unregisterActivityIfNeededShouldConsiderDeferring_enqueue:(BOOL)arg0 ;
-(void)_updateCameraForegroundState:(BOOL)arg0 ;
-(void)cameraWatcherDidChangeState:(id)arg0 ;
-(void)invalidateLibraryBundle:(id)arg0 completion:(id)arg1 ;
-(void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
-(void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)arg0 priority:(NSInteger)arg1 ;
-(void)signalBackgroundProcessingNeededOnBundle:(id)arg0 ;
-(void)signalBackgroundProcessingNeededOnLibrary:(id)arg0 ;


@end


#endif