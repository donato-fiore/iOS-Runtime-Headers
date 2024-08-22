// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDNANOSYNCMANAGER_H
#define HDNANOSYNCMANAGER_H

@class HKNanoSyncPairedDevicesSnapshot, HKObserverSet, NSMutableArray, NSMutableDictionary, NSArray, NSDate, NSString;
@protocol HDDiagnosticObject, HDProfileReadyObserver, HDNanoSyncStoreDelegate, HDSyncSessionDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDForegroundClientProcessObserver, _CDLocalContext, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDIDSMessageCenter.h"
#import "HDKeyValueDomain.h"
#import "HDNanoSyncStore.h"
#import "HDPairedSyncManager.h"

@interface HDNanoSyncManager : NSObject <HDDiagnosticObject, HDProfileReadyObserver, HDNanoSyncStoreDelegate, HDSyncSessionDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDForegroundClientProcessObserver>

 {
    BOOL _isMaster;
    uint8_t _invalidated;
    id<_CDLocalContext> *_context;
    BOOL _waitingForFirstUnlock;
    int _tinkerOptInAcceptedToken;
    int _tinkerOptInDeclinedToken;
    HKNanoSyncPairedDevicesSnapshot *_pairedDevicesSnapshot;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDIDSMessageCenter *_messageCenter;
    HKObserverSet *_observers;
    HDKeyValueDomain *_nanoSyncDomain;
    HDNanoSyncStore *_activeSyncStore;
    HDNanoSyncStore *_activeTinkerSyncStore;
    NSMutableArray *_tinkerOptInResponseBlocks;
    NSMutableDictionary *_syncStoresByDeviceIdentifier;
    NSArray *_pairedDevices;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSDate *_lastPeriodicSyncDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL enablePeriodicSyncTimer; // ivar: _enablePeriodicSyncTimer
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isMaster;
@property (readonly) HKNanoSyncPairedDevicesSnapshot *pairedDevicesSnapshot;
@property (readonly, nonatomic) HDPairedSyncManager *pairedSyncManager; // ivar: _pairedSyncManager
@property CGFloat restoreTimeout; // ivar: _restoreTimeout
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 isMaster:(BOOL)arg1 ;
-(void)_deviceDidBecomeActive:(id)arg0 ;
-(void)_deviceDidPair:(id)arg0 ;
-(void)_deviceDidUnpair:(id)arg0 ;
-(void)_scheduleResetReceivedNanoSyncAnchorsForHFD;
-(void)_userCharacteristicsDidChange:(id)arg0 ;
-(void)_userPreferencesDidChange:(id)arg0 ;
-(void)_watchOffWristNotification:(id)arg0 ;
-(void)_workoutSamplesWereAssociated:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)foregroundClientProcessesDidChange:(id)arg0 previouslyForegroundBundleIdentifiers:(id)arg1 ;
-(void)initializeMessageCenterIfNeeded;
-(void)invalidateAndWait;
-(void)messageCenter:(id)arg0 activeDeviceDidChange:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifierForRequest:(id)arg1 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifierForResponse:(id)arg1 ;
-(void)messageCenterChangesError:(id)arg0 ;
-(void)messageCenterDidReceiveAuthorizationCompleteRequest:(id)arg0 ;
-(void)messageCenterDidReceiveAuthorizationError:(id)arg0 ;
-(void)messageCenterDidReceiveAuthorizationRequest:(id)arg0 ;
-(void)messageCenterDidReceiveAuthorizationResponse:(id)arg0 ;
-(void)messageCenterDidReceiveChangesRequest:(id)arg0 ;
-(void)messageCenterDidReceiveChangesResponse:(id)arg0 ;
-(void)messageCenterDidReceiveCompanionUserNotificationError:(id)arg0 ;
-(void)messageCenterDidReceiveCompanionUserNotificationRequest:(id)arg0 ;
-(void)messageCenterDidReceiveCompanionUserNotificationResponse:(id)arg0 ;
-(void)messageCenterDidReceiveRestoreRequest:(id)arg0 ;
-(void)messageCenterDidReceiveRestoreResponse:(id)arg0 ;
-(void)messageCenterDidReceiveRoutineRequest:(id)arg0 ;
-(void)messageCenterDidReceiveStartWorkoutAppError:(id)arg0 ;
-(void)messageCenterDidReceiveStartWorkoutAppRequest:(id)arg0 ;
-(void)messageCenterDidReceiveStartWorkoutAppResponse:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerEndToEndCloudSyncError:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerEndToEndCloudSyncRequest:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerEndToEndCloudSyncResponse:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerOptInError:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerOptInRequest:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerOptInResponse:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerPairingError:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerPairingRequest:(id)arg0 ;
-(void)messageCenterDidReceiveTinkerPairingResponse:(id)arg0 ;
-(void)messageCenterRestoreError:(id)arg0 ;
-(void)nanoSyncStore:(id)arg0 deviceNameDidChange:(id)arg1 ;
-(void)nanoSyncStore:(id)arg0 remoteSystemBuildVersionDidChange:(id)arg1 ;
-(void)nanoSyncStore:(id)arg0 restoreStateDidChange:(NSInteger)arg1 ;
-(void)obliterateWithOptions:(NSUInteger)arg0 reason:(id)arg1 ;
// -(void)pairedSyncDidBeginForDevice:(id)arg0 messagesSentHandler:(id)arg1 completion:(unk)arg2  ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
// -(void)requestAuthorizationForRequestRecord:(id)arg0 requestSentHandler:(id)arg1 completion:(unk)arg2  ;
-(void)resetSyncWithCompletion:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)sendCompanionUserNotificationRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendStartWorkoutAppRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendTinkerEndToEndCloudSyncRequestForNRDeviceUUID:(id)arg0 completion:(id)arg1 ;
-(void)sendTinkerSharingOptInRequest:(id)arg0 forNRDeviceUUID:(id)arg1 completion:(id)arg2 ;
-(void)sendTinkerWatchPairingRequest:(id)arg0 forNRDeviceUUID:(id)arg1 completion:(id)arg2 ;
-(void)syncHealthDataWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)syncHealthDataWithOptions:(NSUInteger)arg0 reason:(id)arg1 accessibilityAssertion:(id)arg2 completion:(id)arg3 ;
-(void)syncHealthDataWithOptions:(NSUInteger)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didFinishSuccessfully:(BOOL)arg1 error:(id)arg2 ;
-(void)syncSession:(id)arg0 sendChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSessionWillBegin:(id)arg0 ;
-(void)unitTest_performWithActiveSyncStore:(id)arg0 ;
-(void)updatePairedDevicesWithCompletion:(id)arg0 ;
-(void)waitForLastChanceSyncWithDevicePairingID:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif