// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBSERVICE_H
#define PLBACKGROUNDJOBSERVICE_H

@class NSMutableSet, PFCoalescer, PFCameraViewfinderSessionWatcher, NSDictionary, NSNumber, NSString, NSPointerArray;
@protocol PFCameraViewfinderSessionWatcherDelegate, PLBackgroundJobLibraryCoordinatorDelegate, OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLBackgroundJobStatusCenter.h"
#import "PLBackgroundJobLibraryCoordinator.h"
#import "PLBackgroundJobCriteria.h"

@interface PLBackgroundJobService : NSObject <PFCameraViewfinderSessionWatcherDelegate, PLBackgroundJobLibraryCoordinatorDelegate>

 {
    NSMutableSet *_registeredXPCActivities;
    NSObject<OS_xpc_object> *_runningXPCActivity;
    NSUInteger _state;
    PLBackgroundJobStatusCenter *_statusCenter;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PLBackgroundJobCriteria *_runningCriteria;
    PLBackgroundJobCriteria *_pausedCriteria;
    PFCoalescer *_registrationCoalescer;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    CGFloat _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByCriteriaShortCode;
    os_unfair_lock_s _bundlesToProcessByCriteriaShortCodeLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_runningXPCActivityDeferTimer;
    BOOL _deferringService;
    NSNumber *_simulateXpcActivityDeferring;
    BOOL _cameraForeground;
    BOOL _needsActivityUnregistrationOnFirstLaunch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPointerArray *observers; // ivar: _observers
@property (readonly) NSDictionary *statusCenterDump;
@property (readonly) Class superclass;


+(BOOL)_stateIsReadyForRegistration:(NSUInteger)arg0 ;
+(BOOL)_stateIsReadyToRun:(NSUInteger)arg0 ;
+(BOOL)_verifyActivityHandlerInvokedWithCorrectIdentifier:(id)arg0 forCriteria:(id)arg1 ;
+(BOOL)verifyStateTransitionFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
+(void)_removeAllBundlesFromUserDefaultsWithoutLocking;
-(BOOL)_activityIsRegisteredForCriteria:(id)arg0 ;
-(NSUInteger)_getServiceStateOnQueue;
-(NSUInteger)getServiceState;
-(id)_bundlesToProcessByCriteriaShortCodesAsPathStrings;
-(id)_bundlesToProcessByCriteriaShortCodesAsPathStringsAlreadyLocked;
-(id)_getBundleRecordsFromProcessingSetForAllCriterias;
-(id)_getBundleRecordsFromProcessingSetForCriteriaShortCode:(id)arg0 ;
-(id)init;
-(id)initWithLibraryCoordinator:(id)arg0 ;
-(id)initWithLibraryCoordinator:(id)arg0 statusCenter:(id)arg1 ;
-(void)_appendBundleRecordsToProcessingSet:(id)arg0 criteriaShortCode:(id)arg1 ;
-(void)_loadBundleRecordsDictionaryFromUserDefaults;
-(void)_persistBundleRecordsDictionaryToUserDefaults;
-(void)_registerActivityIfNecessaryOnBundles:(id)arg0 ;
-(void)_registerActivityWithCriteria:(id)arg0 ;
-(void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)arg0 ;
-(void)_removeAllBundlesFromProcessingSet;
-(void)_removeAllBundlesFromProcessingSetForCriteriaShortCode:(id)arg0 ;
-(void)_removeBundleRecordFromProcessingSet:(id)arg0 criteriaShortCode:(id)arg1 ;
-(void)_removeRegisteredActivityForCriteria:(id)arg0 ;
-(void)_setRegisteredActivityForCriteria:(id)arg0 ;
-(void)_setRunningCriteria:(id)arg0 ;
-(void)_setServiceState:(NSUInteger)arg0 ;
-(void)_setServiceStateOnQueue:(NSUInteger)arg0 ;
-(void)_shutdown;
-(void)_simulateXPCShouldDefer:(BOOL)arg0 ;
-(void)_startPollingForActivityStatus;
-(void)_startPollingForActivityStatusOnQueue;
-(void)_startRunningBackgroundJobsWithCriteria:(id)arg0 ;
-(void)_startRunningBackgroundJobsWithCriteriaOnQueue:(id)arg0 ;
-(void)_stopPollingForActivityStatus;
-(void)_stopRunningBackgroundJobs;
-(void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)arg0 ;
-(void)_unregisterActivityIfNeededShouldConsiderDeferring_enqueue:(BOOL)arg0 ;
-(void)_updateCameraForegroundState:(BOOL)arg0 ;
-(void)cameraWatcherDidChangeState:(id)arg0 ;
-(void)invalidateLibraryBundle:(id)arg0 completion:(id)arg1 ;
-(void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
-(void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)arg0 withCriteria:(id)arg1 ;
-(void)signalBackgroundProcessingNeededOnBundle:(id)arg0 ;
-(void)signalBackgroundProcessingNeededOnLibrary:(id)arg0 ;


@end


#endif