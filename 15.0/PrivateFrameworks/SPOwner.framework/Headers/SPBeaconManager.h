// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPBEACONMANAGER_H
#define SPBEACONMANAGER_H

@class NSString, FMXPCTimer, NSDictionary, NSData, NSDate, NSUUID, FMXPCServiceDescription, FMXPCSession;
@protocol SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate, OS_dispatch_source, SPBeaconManagerXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPBLEStateMonitor.h"
#import "SPMonitorsWrapper.h"

@interface SPBeaconManager : NSObject <SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate>



@property (nonatomic) BOOL alreadyPoisonedLocalBeacon; // ivar: _alreadyPoisonedLocalBeacon
@property (nonatomic) BOOL beaconFromNVRAM; // ivar: _beaconFromNVRAM
@property (copy, nonatomic) id *beaconingKeyChangedBlockWithCompletion; // ivar: _beaconingKeyChangedBlockWithCompletion
@property (retain, nonatomic) SPBLEStateMonitor *bleMonitor; // ivar: _bleMonitor
@property (nonatomic) NSInteger cachedLocalBeaconManagerState; // ivar: _cachedLocalBeaconManagerState
@property (nonatomic) BOOL currentBeaconingState; // ivar: _currentBeaconingState
@property (nonatomic) unsigned char currentStatus; // ivar: _currentStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceBeaconingOff; // ivar: _forceBeaconingOff
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialStateChangeSent; // ivar: _initialStateChangeSent
@property (retain, nonatomic) SPMonitorsWrapper *monitorWrapper; // ivar: _monitorWrapper
@property (copy, nonatomic) id *nearbyTokensChangedBlockWithCompletion; // ivar: _nearbyTokensChangedBlockWithCompletion
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicActionDispatchTimer; // ivar: _periodicActionDispatchTimer
@property (retain, nonatomic) FMXPCTimer *periodicActionXpcTimer; // ivar: _periodicActionXpcTimer
@property (retain, nonatomic) NSObject<SPBeaconManagerXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSDictionary *selfBeaconingConfigurations; // ivar: _selfBeaconingConfigurations
@property (copy, nonatomic) NSData *selfBeaconingDerivedSharedSecretKey; // ivar: _selfBeaconingDerivedSharedSecretKey
@property (nonatomic) NSUInteger selfBeaconingIndex; // ivar: _selfBeaconingIndex
@property (copy, nonatomic) NSDate *selfBeaconingPairDate; // ivar: _selfBeaconingPairDate
@property (copy, nonatomic) NSData *selfBeaconingPublicKey; // ivar: _selfBeaconingPublicKey
@property (copy, nonatomic) NSUUID *selfBeaconingUUID; // ivar: _selfBeaconingUUID
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (copy, nonatomic) id *stateChangedBlockWithCompletion; // ivar: _stateChangedBlockWithCompletion
@property (copy, nonatomic) id *statusChangedBlockWithCompletion; // ivar: _statusChangedBlockWithCompletion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SPBeaconManagerXPCProtocol> *userAgentProxy; // ivar: _userAgentProxy


+(id)scheduleDateInterval:(id)arg0 ;
+(void)afterFirstUnlock:(id)arg0 ;
-(BOOL)isBeaconing;
-(NSUInteger)bucketWithBaseTime:(id)arg0 date:(id)arg1 ;
-(id)dateIntervalForIndex:(NSUInteger)arg0 baseDate:(id)arg1 ;
-(id)generateOfflineAdvertisingKeysForReason:(NSInteger)arg0 now:(id)arg1 ;
-(id)init;
-(id)rawNVRAMData;
-(id)remoteInterface;
-(void)_invalidate;
-(void)allBeaconingKeysForUUID:(id)arg0 dateInterval:(id)arg1 forceGenerate:(BOOL)arg2 completion:(id)arg3 ;
-(void)allBeaconsOfType:(id)arg0 completion:(id)arg1 ;
-(void)allBeaconsOfTypes:(id)arg0 completion:(id)arg1 ;
-(void)allBeaconsWithCompletion:(id)arg0 ;
-(void)allDuriansWithCompletion:(id)arg0 ;
-(void)beaconForUUID:(id)arg0 completion:(id)arg1 ;
-(void)beaconingKeysForUUID:(id)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;
-(void)beaconingStateChanged:(NSInteger)arg0 ;
-(void)beaconingStateChangedNotification:(id)arg0 ;
-(void)beaconsChanged:(id)arg0 ;
-(void)bleMonitor:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)checkInPeriodicActionXpcTimer;
-(void)connectedToBeacon:(id)arg0 withIndex:(NSUInteger)arg1 ;
-(void)connectedToBeacon:(id)arg0 withIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)connectionTokensForBeaconUUID:(id)arg0 completion:(id)arg1 ;
-(void)connectionTokensForBeaconUUID:(id)arg0 criteria:(id)arg1 completion:(id)arg2 ;
-(void)connectionTokensForBeaconUUID:(id)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;
-(void)createKeyReconcilerWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchFirmwareVersionForBeacon:(id)arg0 completion:(id)arg1 ;
-(void)fetchKeyMapFileDescriptorForBeacon:(id)arg0 completion:(id)arg1 ;
-(void)fetchUserStatsForBeacon:(id)arg0 completion:(id)arg1 ;
-(void)generateBeaconingKeysOfType:(NSInteger)arg0 now:(id)arg1 withCompletion:(id)arg2 ;
-(void)invalidate;
-(void)isLPEMModeSupported:(id)arg0 ;
-(void)localActivationLockInfoChanged;
-(void)notificationBeaconForSubscriptionId:(id)arg0 completion:(id)arg1 ;
-(void)notifyBeaconingKeysChangedBlockWithCompletion:(id)arg0 ;
-(void)notifyNearbyTokensChangedBlockWithCompletion:(id)arg0 ;
-(void)notifyStateChange:(BOOL)arg0 ;
-(void)notifyStatusChange:(unsigned char)arg0 ;
-(void)periodicActionWithCompletion:(id)arg0 ;
-(void)postedLocalNotifyWhenFoundNotificationForUUID:(id)arg0 completion:(id)arg1 ;
-(void)refreshBeaconingState;
-(void)repairDataStore:(id)arg0 ;
-(void)roleCategoriesWithCompletion:(id)arg0 ;
-(void)setAlignmentUncertainty:(CGFloat)arg0 atIndex:(NSUInteger)arg1 date:(id)arg2 forBeacon:(id)arg3 completion:(id)arg4 ;
-(void)setCurrentWildKeyIndex:(NSInteger)arg0 forBeacon:(id)arg1 completion:(id)arg2 ;
-(void)setKeyRollInterval:(NSUInteger)arg0 forBeacon:(id)arg1 completion:(id)arg2 ;
-(void)setRole:(NSInteger)arg0 forBeacon:(id)arg1 completion:(id)arg2 ;
-(void)setSuppressLPEMBeaconing:(BOOL)arg0 completion:(id)arg1 ;
-(void)setUserHasAcknowledgedFindMy:(BOOL)arg0 completion:(id)arg1 ;
-(void)setWildKeyBase:(NSUInteger)arg0 interval:(NSUInteger)arg1 fallback:(NSUInteger)arg2 forBeacon:(id)arg3 completion:(id)arg4 ;
-(void)start;
-(void)stateDidChange:(BOOL)arg0 powerState:(NSUInteger)arg1 ;
-(void)timerFired;
-(void)unacceptedBeaconsWithCompletion:(id)arg0 ;
-(void)updateBeacon:(id)arg0 updates:(id)arg1 completion:(id)arg2 ;
-(void)updateObfuscatedIdentifierWithCompletion:(id)arg0 ;
-(void)updateStateFromNVRAM;
-(void)userHasAcknowledgeFindMyWithCompletion:(id)arg0 ;


@end


#endif