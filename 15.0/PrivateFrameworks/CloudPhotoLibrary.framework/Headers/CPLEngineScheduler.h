// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINESCHEDULER_H
#define CPLENGINESCHEDULER_H

@class NSDate, NSString, NSCountedSet, NSMutableDictionary, NSMutableSet;
@protocol CPLAbstractObject, CPLEngineComponent, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPLSyncSession.h"
#import "CPLEngineLibrary.h"
#import "CPLPlatformObject.h"

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent>

 {
    NSDate *_preparingFirstSessionStartDate;
    NSUInteger _requiredFirstState;
    NSUInteger _lastRequestGeneration;
    NSUInteger _currentRequestGeneration;
    BOOL _needsToUpdateLastSyncDate;
    CPLSyncSession *_nextSession;
    CGFloat _intervalForRetry;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _currentSyncState;
    NSUInteger _pendingRequiredFirstState;
    BOOL _shouldNoteServerHasChanges;
    CPLSyncSession *_currentSession;
    BOOL _opened;
    NSDate *_unavailabilityLimitDate;
    NSString *_unavailabilityReason;
    NSUInteger _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSCountedSet *_blockingElements;
    NSMutableDictionary *_blockedElements;
    NSMutableSet *_blockWaiters;
    NSCountedSet *_unblockOnceElements;
    NSObject<OS_dispatch_queue> *_blockingLock;
    NSUInteger _significantWorkCalls;
    NSUInteger _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    NSDate *_deferDate;
    BOOL _protectAgainstFastRelaunch;
    BOOL _didWriteFirstSyncMarker;
    BOOL _delayedFirstSyncBecauseOfRapidLaunch;
    BOOL _isOverridingForeground;
    NSDate *_lastSuccessfulSyncSessionDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) NSUInteger requiredState;
@property (copy, nonatomic) id *requiredStateObserverBlock; // ivar: _requiredStateObserverBlock
@property (copy, nonatomic) id *shouldBackOffOnErrorBlock; // ivar: _shouldBackOffOnErrorBlock
@property (readonly) Class superclass;


+(id)platformImplementationProtocol;
+(id)validElements;
-(BOOL)_syncSessionIsPossible;
-(BOOL)isClientInForeground;
-(BOOL)isMinglingEnabled;
-(BOOL)isSynchronizationDisabledWithReasonError:(*id)arg0 ;
-(BOOL)waitForEngineElementToBeBlocked:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)_minimalDateForFirstSync;
-(id)_pathToFirstSynchronizationMarker;
-(id)componentName;
-(id)initWithEngineLibrary:(id)arg0 ;
-(void)_backOff;
-(void)_disableFastRelaunchProtection;
-(void)_disableRetryAfterLocked;
-(void)_disableSynchronizationBecauseContainerHasBeenWipedLocked;
-(void)_disableSynchronizationWithReasonLocked:(id)arg0 ;
-(void)_enableSynchronizationWithReasonLocked:(id)arg0 ;
-(void)_handleResetAnchorWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleResetClientCacheWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleResetCloudCacheWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleResetGlobalAnchorWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_noteServerIsUnavailableWithErrorLocked:(id)arg0 reason:(id)arg1 ;
-(void)_noteSyncSessionNeededFromState:(NSUInteger)arg0 ;
-(void)_noteSyncSessionNeededFromStateDontRewindImmediately:(NSUInteger)arg0 ;
-(void)_prepareFirstSession;
-(void)_reallyNoteServerHasChangesLocked;
-(void)_reallyStartSyncSession:(id)arg0 ;
-(void)_reallyUnscheduleSession;
-(void)_resetFirstSynchronizationMarker;
-(void)_scheduleNextSyncSession;
-(void)_setRequiredFirstState:(NSUInteger)arg0 ;
-(void)_startRequiredSyncSession:(id)arg0 ;
-(void)_startSyncSession:(id)arg0 withMinimalPhase:(NSUInteger)arg1 rewind:(BOOL)arg2 ;
-(void)_stopPreparingFirstSession;
-(void)_unscheduleNextSyncSession;
-(void)_updateLastSyncDateIfNecessaryLocked;
-(void)_updateOverridingForeground;
-(void)_writeFirstSynchronizationMarker;
-(void)blockEngineElement:(id)arg0 ;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)disableMingling;
-(void)disableSynchronizationWithReason:(id)arg0 ;
-(void)enableMingling;
-(void)enableSynchronizationWithReason:(id)arg0 ;
-(void)forceStartSyncSession:(id)arg0 withMinimalPhase:(NSUInteger)arg1 ;
-(void)getCurrentRequiredStateWithCompletionHandler:(id)arg0 ;
-(void)getStatusDictionaryWithCompletionHandler:(id)arg0 ;
-(void)getStatusWithCompletionHandler:(id)arg0 ;
-(void)kickOffSyncSession;
-(void)noteClientIsBeginningSignificantWork;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)noteClientIsInSyncWithClientCache;
-(void)noteClientIsNotInSyncWithClientCache;
-(void)noteClientNeedsToPull;
-(void)noteContainerHasBeenWiped;
-(void)noteNetworkStateDidChange;
-(void)noteResourceDownloadQueueIsFull;
-(void)noteScopeListNeedsUpdate;
-(void)noteScopeNeedsToPullFromTransport;
-(void)noteScopeNeedsToPushHighPriorityToTransport;
-(void)noteScopeNeedsToPushToTransport;
-(void)noteScopeNeedsUpdate;
-(void)noteServerHasChanges;
-(void)noteServerIsUnavailableWithError:(id)arg0 ;
-(void)noteServerMightBeAvailableNow;
-(void)noteStoreNeedsCleanup;
-(void)noteStoreNeedsSetup;
-(void)noteStoreNeedsToUpdateDisabledFeatures;
-(void)noteSyncSession:(id)arg0 failedDuringPhase:(NSUInteger)arg1 withError:(id)arg2 ;
-(void)noteSyncSession:(id)arg0 stateWillBeAttempted:(NSUInteger)arg1 ;
-(void)noteSyncSessionSucceeded:(id)arg0 ;
-(void)noteTransportNeedsUpdate;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)resetBackoffInterval;
-(void)startRequiredSyncSessionNow:(id)arg0 ;
-(void)testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)unblockEngineElement:(id)arg0 ;
-(void)unblockEngineElementOnce:(id)arg0 ;
-(void)willRunEngineElement:(id)arg0 ;


@end


#endif