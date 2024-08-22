// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCLOUDDATASYNCSTATEFILTER_H
#define HMDCLOUDDATASYNCSTATEFILTER_H

@class HMFTimer, NSDate, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, HMFTimerDelegate, OS_dispatch_source, OS_dispatch_queue;


#import "HMDMessageFilter.h"
#import "HMDHomeManager.h"

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMFMessageReceiver, HMFTimerDelegate>



@property (nonatomic) BOOL cloudDataSyncCompleted; // ivar: _cloudDataSyncCompleted
@property (retain, nonatomic) HMFTimer *cloudDataSyncInProgressTimer; // ivar: _cloudDataSyncInProgressTimer
@property (nonatomic, getter=isCloudDataSyncPeerAvailable) BOOL cloudDataSyncPeerAvailable; // ivar: _cloudDataSyncPeerAvailable
@property (retain, nonatomic) NSDate *dataSyncTimerStartTimestamp; // ivar: _dataSyncTimerStartTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL decryptionFailed; // ivar: _decryptionFailed
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (nonatomic) BOOL iCloudAccountActive; // ivar: _iCloudAccountActive
@property (retain, nonatomic) NSObject<OS_dispatch_source> *iCloudSwitchPopupTimer; // ivar: _iCloudSwitchPopupTimer
@property (nonatomic) BOOL iCloudSwitchRequiredPopShown; // ivar: _iCloudSwitchRequiredPopShown
@property (nonatomic) BOOL iCloudSwitchStateEnabled; // ivar: _iCloudSwitchStateEnabled
@property (nonatomic) BOOL keychainSyncEnabled; // ivar: _keychainSyncEnabled
@property (nonatomic, getter=isKeychainSyncPeerAvailable) BOOL keychainSyncPeerAvailable; // ivar: _keychainSyncPeerAvailable
@property (nonatomic) BOOL keychainSyncRequiredPopShown; // ivar: _keychainSyncRequiredPopShown
@property (nonatomic) BOOL localDataDecryptionFailed; // ivar: _localDataDecryptionFailed
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (nonatomic) BOOL networkConnectivityAvailable; // ivar: _networkConnectivityAvailable
@property (retain, nonatomic) NSObject<OS_dispatch_source> *popupTimer; // ivar: _popupTimer
@property (nonatomic) CGFloat remainingDataSyncPeriod; // ivar: _remainingDataSyncPeriod
@property (nonatomic) CGFloat remainingResetConfigDisplayPeriod; // ivar: _remainingResetConfigDisplayPeriod
@property (nonatomic) BOOL resetConfigDisplayTimeHasElapsed; // ivar: _resetConfigDisplayTimeHasElapsed
@property (retain, nonatomic) HMFTimer *resetConfigDisplayTimer; // ivar: _resetConfigDisplayTimer
@property (retain, nonatomic) NSDate *resetConfigDisplayTimerStartTimestamp; // ivar: _resetConfigDisplayTimerStartTimestamp
@property (nonatomic) BOOL serverTokenAvailable; // ivar: _serverTokenAvailable
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalHomes; // ivar: _totalHomes
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)isWhitelistedMessage:(id)arg0 ;
-(BOOL)_cloudSyncinProgressCheck:(id)arg0 supressPopup:(BOOL)arg1 sendCanceledError:(*BOOL)arg2 dataSyncState:(*NSUInteger)arg3 ;
-(BOOL)acceptMessage:(id)arg0 target:(id)arg1 errorReason:(*id)arg2 ;
-(BOOL)dataSyncInProgressWithState:(*NSUInteger)arg0 withMessage:(id)arg1 ;
-(BOOL)isLocalDataDecryptionFailed;
-(BOOL)isiCloudSwitchEnabled;
-(BOOL)shouldCloudSyncData;
-(id)initWithName:(id)arg0 homeManager:(id)arg1 messageDispatcher:(id)arg2 serverTokenAvailable:(BOOL)arg3 homeDataHasBeenDecrypted:(BOOL)arg4 homeManagerServerTokenAvailable:(BOOL)arg5 localDataDecryptionFailed:(BOOL)arg6 totalHomes:(NSInteger)arg7 currentAccount:(id)arg8 ;
-(void)_clearResetConfigDisplayTimer;
-(void)_handleAccountStatusChanged:(id)arg0 ;
-(void)_postNotificationForDataSyncInProgress:(BOOL)arg0 dataSyncState:(NSUInteger)arg1 forcePost:(BOOL)arg2 ;
-(void)_registerForMessages;
-(void)_resetCloudDataSyncTimer;
-(void)_stallCloudDataSyncTimer;
-(void)_stallResetConfigDisplayTimer;
-(void)_startCloudDataSyncTimer;
-(void)_startDataConfigResetTimers;
-(void)_startPopupTimer;
-(void)_startResetConfigDisplayTimer;
-(void)_stopCloudDataSyncTimer;
-(void)_stopDataConfigResetTimers;
-(void)_stopPopupTimer;
-(void)_stopResetConfigDisplayTimer;
-(void)_updateCloudDataSyncState:(BOOL)arg0 ;
-(void)_updateCurrentAccount:(id)arg0 ;
-(void)_updateKeychainSyncEnabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)handleKeychainSyncStateChangedNotification:(id)arg0 ;
-(void)kickResetConfigDisplayTimer;
-(void)resetConfiguration;
-(void)startDataConfigResetTimers;
-(void)timerDidFire:(id)arg0 ;
-(void)updateCloudDataSyncState:(BOOL)arg0 ;
-(void)updateCurrentAccount:(id)arg0 ;
-(void)updateLocalDataDecryptionFailed:(BOOL)arg0 ;
-(void)updateNetworkConnectivity:(BOOL)arg0 ;
-(void)updateServerTokenAvailable:(BOOL)arg0 ;
-(void)updateTotalHomes:(NSInteger)arg0 ;
-(void)updateWithoutDataSynCheckServerTokenAvailable:(BOOL)arg0 ;
-(void)updateiCloudSwitchState:(BOOL)arg0 ;


@end


#endif