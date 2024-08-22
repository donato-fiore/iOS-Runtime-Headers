// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCLOUDKITEVENTNOTIFICATIONMANAGER_H
#define IMCLOUDKITEVENTNOTIFICATIONMANAGER_H

@class IMWeakReferenceCollection, NSTimer, IMEventNotificationManager;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

#import <Foundation/Foundation.h>

#import "IMCloudKitSyncState.h"
#import "IMCloudKitSyncProgress.h"

@interface IMCloudKitEventNotificationManager : NSObject

@property (weak) NSObject<IMCloudKitEventHandlerAccountInfoProvider> *accountInfoProvider; // ivar: _accountInfoProvider
@property BOOL didPromptForCloudKitSync;
@property (readonly) IMWeakReferenceCollection *eventHandlers; // ivar: _eventHandlers
@property (weak) NSTimer *fetchStatsTimer; // ivar: _fetchStatsTimer
@property (retain) IMEventNotificationManager *notificationManager; // ivar: _notificationManager
@property (retain) IMCloudKitSyncState *previousState; // ivar: _previousState
@property CGFloat progressPollingInterval; // ivar: _progressPollingInterval
@property (retain) IMCloudKitSyncProgress *progressToSend; // ivar: _progressToSend
@property (readonly) IMCloudKitSyncState *syncState;


+(id)__singleton__im;
+(id)logHandle;
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg0 ;
-(BOOL)_hasProgressEventListeners;
-(BOOL)accountHasiMessageEnabled;
-(CGFloat)progressBroadcastDelay;
-(id)cloudKitHooks;
-(id)init;
-(id)logHandle;
-(id)syncStateWithDictionary:(id)arg0 ;
-(void)_cancelStatsFetchingTimer;
-(void)_fetchSyncStateStatistics:(id)arg0 ;
-(void)_rescheduleFetchSyncProgress;
-(void)_sendHiddenProgressToEventListeners;
-(void)_sendProgressToEventListeners:(id)arg0 ;
-(void)_sendProgressToEventListenersDeferred;
-(void)_sendSyncStateChangedEventToEventListeners:(id)arg0 ;
-(void)_sendSyncStatisticsToEventHandlers:(id)arg0 error:(id)arg1 ;
-(void)_syncStateDidChange:(id)arg0 ;
-(void)_timerExpiredForSyncStatsFetching:(id)arg0 ;
-(void)_updateProgressWithState:(id)arg0 ;
-(void)addEventHandler:(id)arg0 ;
-(void)disableAllSyncEnabledCloudKitDevices;
-(void)fetchRampStateWithCompletion:(id)arg0 ;
-(void)fetchSyncDebuggingInfo:(id)arg0 ;
-(void)fetchSyncState;
-(void)fetchSyncStateAfterClearingErrors;
-(void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchSyncStateAfterFetchingAccountStatus;
-(void)fetchSyncStateStatistics;
-(void)fetchSyncStateStatisticsWithCompletion:(id)arg0 ;
-(void)fetchSyncStateWithCompletion:(id)arg0 ;
-(void)performAdditionalStorageRequiredCheck;
-(void)removeEventHandler:(id)arg0 ;
-(void)setCloudKitSyncEnabled:(BOOL)arg0 ;
-(void)setCloudKitSyncEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)startInitialSync;
-(void)startPeriodicSync;
-(void)visitEventHandlers:(id)arg0 ;


@end


#endif