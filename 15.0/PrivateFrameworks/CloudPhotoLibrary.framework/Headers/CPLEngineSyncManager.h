// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINESYNCMANAGER_H
#define CPLENGINESYNCMANAGER_H

@class NSError, NSMutableArray, NSString;
@protocol CPLAbstractObject, CPLEngineComponent, CPLEngineSyncTaskDelegate, CPLEngineForceSyncTaskDelegate, CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPLDerivativesFilter.h"
#import "CPLSyncSession.h"
#import "CPLSyncStep.h"
#import "CPLEngineForceSyncTask.h"
#import "CPLEngineLibrary.h"
#import "CPLPlatformObject.h"

@interface CPLEngineSyncManager : NSObject <CPLAbstractObject, CPLEngineComponent, CPLEngineSyncTaskDelegate, CPLEngineForceSyncTaskDelegate>

 {
    id<CPLEngineStoreUserIdentifier> *_transportUserIdentifier;
    os_unfair_lock_s _transportUserIdentifierLock;
    CPLDerivativesFilter *_derivativesFilter;
    BOOL _setupIsDone;
    BOOL _shouldUpdateDisabledFeatures;
    BOOL _closed;
    id<CPLEngineTransportSetupTask> *_setupTask;
    id *_closingCompletionHandler;
    CPLSyncSession *_session;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLSyncStep *_currentStep;
    id<CPLEngineTransportSetupTask> *_forcedSetupTask;
    CPLEngineForceSyncTask *_currentForceSyncTask;
    CPLEngineForceSyncTask *_pendingForceSyncTask;
    NSUInteger _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    BOOL _foreground;
    BOOL _boostPriority;
    BOOL _hasOverridenBudgets;
    BOOL _disabledSchedulerForForceSyncTask;
    NSMutableArray *_forcedSyncHistory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (nonatomic) BOOL shouldTryToMingleImmediately; // ivar: _shouldTryToMingleImmediately
@property (nonatomic, setter=_setState:) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)descriptionForState:(NSUInteger)arg0 ;
+(id)platformImplementationProtocol;
+(id)shortDescriptionForState:(NSUInteger)arg0 ;
+(id)stepForState:(NSUInteger)arg0 syncManager:(id)arg1 session:(id)arg2 ;
+(unsigned int)qualityOfServiceForForcedTasks;
+(unsigned int)qualityOfServiceForSyncSessions;
-(BOOL)_checkForegroundAtLaunchForForceSyncTask;
-(BOOL)_didFinishSetupTaskWithError:(id)arg0 shouldStop:(*BOOL)arg1 ;
-(BOOL)_launchNecessaryTasksForCurrentStateLocked;
-(BOOL)_launchSetupTask;
-(BOOL)prepareAndLaunchSyncTaskUnlocked:(id)arg0 ;
-(id)_dropDerivativeRulesFromUserDefaults;
-(id)_setupTaskWithCompletionHandler:(id)arg0 ;
-(id)_shortDescriptionForCurrentState;
-(id)_transportUserIdentifier;
-(id)componentName;
-(id)initWithEngineLibrary:(id)arg0 ;
-(void)_addRuleToUserDefaults:(id)arg0 ;
-(void)_advanceToNextStateLocked;
-(void)_advanceToNextStateLockedMinimalState:(NSUInteger)arg0 ;
-(void)_cancelAllTasksForSetup;
-(void)_cancelAllTasksLocked;
-(void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg0 ;
-(void)_disableSchedulerForForceSyncTaskIfNecessary;
-(void)_discardPendingForceSyncTaskWithError:(id)arg0 ;
-(void)_dispatchAfter:(CGFloat)arg0 block:(id)arg1 ;
-(void)_forceSyncTaskDidFinishWithError:(id)arg0 ;
-(void)_launchForceSetupTask;
-(void)_launchForceSyncTaskIfNecessary;
-(void)_moveAllTasksToBackgroundLocked;
-(void)_notifyEndOfSyncSession;
-(void)_overrideBudgetsIfNeeded;
-(void)_recordForcedSyncTask:(id)arg0 discarded:(BOOL)arg1 error:(id)arg2 ;
-(void)_reenableSchedulerForForceSyncTaskIfNecessary;
-(void)_resetErrorForSyncSession;
-(void)_restartSyncSessionFromStateLocked:(NSUInteger)arg0 session:(id)arg1 cancelIfNecessary:(BOOL)arg2 ;
-(void)_setTransportUserIdentifier:(id)arg0 ;
-(void)addDropDerivativesRecipe:(id)arg0 writeToUserDefaults:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)beginClientWork:(id)arg0 ;
-(void)cancelCurrentSyncSession;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)configureDirectTransportTask:(id)arg0 ;
-(void)discardTransportUserIdentifier;
-(void)dispatchForcedTaskBlock:(id)arg0 ;
-(void)dispatchSyncBlock:(id)arg0 ;
-(void)endClientWork:(id)arg0 ;
-(void)forceSyncTaskHasBeenCancelled:(id)arg0 ;
-(void)forceSyncTaskHasBeenLaunched:(id)arg0 ;
-(void)getStatusDictionaryWithCompletionHandler:(id)arg0 ;
-(void)getStatusWithCompletionHandler:(id)arg0 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)requestDisabledFeaturesUpdate;
-(void)resetTransportUserIdentifier;
-(void)setBoostPriority:(BOOL)arg0 ;
-(void)setErrorForSyncSessionUnlocked:(id)arg0 ;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg0 ;
-(void)startSyncSession:(id)arg0 withMinimalPhase:(NSUInteger)arg1 rewind:(BOOL)arg2 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)task:(id)arg0 didProgress:(float)arg1 userInfo:(id)arg2 ;


@end


#endif