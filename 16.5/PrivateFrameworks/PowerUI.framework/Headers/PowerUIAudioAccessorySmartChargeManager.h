// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIAUDIOACCESSORYSMARTCHARGEMANAGER_H
#define POWERUIAUDIOACCESSORYSMARTCHARGEMANAGER_H

@class NSMutableDictionary, NSNumber, NSString, NSMutableArray, NSLock, CBDiscovery, NSXPCListener, NSDistributedNotificationCenter;
@protocol NSXPCListenerDelegate, PowerUISmartChargeManagingAudioAccessoriesPrivate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingAudioAccessories, OS_os_log, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PowerUIBluetoothHandler.h"
#import "PowerUIMLAudioAccessoryModelPredictor.h"
#import "PowerUIWalletSignalMonitor.h"

@interface PowerUIAudioAccessorySmartChargeManager : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManagingAudioAccessoriesPrivate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingAudioAccessories>



@property (retain) NSMutableDictionary *acceptMessageFromLeftBudForDevice; // ivar: _acceptMessageFromLeftBudForDevice
@property (retain) NSMutableDictionary *acceptMessageFromRightBudForDevice; // ivar: _acceptMessageFromRightBudForDevice
@property (retain, nonatomic) NSObject<OS_os_log> *accessoryLog; // ivar: _accessoryLog
@property (retain) NSMutableDictionary *accessoryStates; // ivar: _accessoryStates
@property (retain) NSObject<OS_dispatch_semaphore> *btConnectionSemaphore; // ivar: _btConnectionSemaphore
@property (retain) PowerUIBluetoothHandler *btHandler; // ivar: _btHandler
@property (retain, nonatomic) NSNumber *budSideToRecord; // ivar: _budSideToRecord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *deviceArray; // ivar: _deviceArray
@property (retain, nonatomic) NSLock *deviceArrayLock; // ivar: _deviceArrayLock
@property (retain, nonatomic) CBDiscovery *discovery; // ivar: _discovery
@property (nonatomic) BOOL firstNotificationDisplayed; // ivar: _firstNotificationDisplayed
@property (retain, nonatomic) NSNumber *hardcodedTimeBetweenUpdates; // ivar: _hardcodedTimeBetweenUpdates
@property (retain, nonatomic) NSNumber *hardcodedTimeDelta; // ivar: _hardcodedTimeDelta
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *latestAnalyticsForDevice; // ivar: _latestAnalyticsForDevice
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) PowerUIMLAudioAccessoryModelPredictor *predictor; // ivar: _predictor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property *BTSessionImpl session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) PowerUIWalletSignalMonitor *walletMonitor; // ivar: _walletMonitor


+(id)readArrayForPreferenceKey:(id)arg0 ;
+(id)readNumberForPreferenceKeyPrefix:(id)arg0 andDevice:(id)arg1 ;
+(id)readStringForPreferenceKeyPrefix:(id)arg0 andDevice:(id)arg1 ;
+(void)bulkDeleteDefaultsEntries:(id)arg0 ;
+(void)setArray:(id)arg0 forPreferenceKey:(id)arg1 ;
+(void)setNumber:(id)arg0 forPreferenceKeyPrefix:(id)arg1 andDevice:(id)arg2 ;
+(void)setString:(id)arg0 forPreferenceKeyPrefix:(id)arg1 andDevice:(id)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)runUpdateForDevice:(struct BTDeviceImpl *)arg0 withHash:(id)arg1 ;
-(BOOL)runUpdateForDevice:(struct BTDeviceImpl *)arg0 withHash:(id)arg1 asInitialUpdate:(BOOL)arg2 ;
-(BOOL)setOBCState:(BOOL)arg0 forDevice:(id)arg1 ;
-(BOOL)setStateViaV2Protocol:(NSUInteger)arg0 forDevice:(struct BTDeviceImpl *)arg1 ;
-(NSUInteger)sendTimeDeltaInSeconds:(unsigned int)arg0 toAccessory:(struct BTDeviceImpl *)arg1 ;
-(id)defaultDateToDisableUntilGivenDate:(id)arg0 ;
-(id)firstUseNotificationRequestForDeviceType:(unsigned int)arg0 ;
-(id)getOBCDeadlineFromCBDevice:(id)arg0 ;
-(id)init;
-(id)nameForProductID:(unsigned int)arg0 ;
-(id)returnAccessoryStatusForDevice:(id)arg0 ;
-(id)stringFromState:(NSUInteger)arg0 ;
-(void)addTimeSeriesDataToStream:(struct timeSeriesData *)arg0 withSide:(unsigned char)arg1 withFirmwareVersion:(unsigned short)arg2 withStore:(id)arg3 withLog:(id)arg4 ;
-(void)attachToBluetoothSession;
-(void)clearLastActionForDevice:(id)arg0 ;
-(void)client:(id)arg0 connectAndDisableOBCforDevice:(id)arg1 withHandler:(id)arg2 ;
-(void)client:(id)arg0 setState:(NSUInteger)arg1 forDevice:(id)arg2 withHandler:(id)arg3 ;
-(void)client:(id)arg0 updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withHandler:(id)arg3 ;
-(void)currentLeewayWithHandler:(id)arg0 ;
-(void)deleteRecordsForDevices:(id)arg0 ;
-(void)engageUntil:(id)arg0 forDevice:(id)arg1 overrideAllSignals:(BOOL)arg2 withHandler:(id)arg3 ;
-(void)fakeConnectionForDevice:(id)arg0 ;
-(void)fullChargeDeadlineForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)getAvailableDevicesWithHandler:(id)arg0 ;
-(void)getStatusForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)lastActionForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)monitor:(id)arg0 maySuggestNewFullChargeDeadline:(id)arg1 ;
-(void)persistentlyHandleSeeingDevice:(id)arg0 ;
-(void)persistentlySetExpectedHash:(id)arg0 forDevice:(id)arg1 ;
-(void)persistentlySetLastSentDate:(id)arg0 forDevice:(id)arg1 ;
-(void)persistentlySetLastTimeseriesDate:(id)arg0 forDevice:(id)arg1 ;
-(void)persistentlySetLastUnderchargeRecordedForPrediction:(id)arg0 forDevice:(id)arg1 ;
-(void)persistentlySetStatusForDevice:(id)arg0 withCurrentState:(NSUInteger)arg1 withEnabled:(BOOL)arg2 withDisabledUntilDate:(id)arg3 withTemporarilyDisabled:(BOOL)arg4 ;
-(void)recordBudMetricsLocallyForDevice:(id)arg0 withTimeSpendAtLowerSoC:(unsigned short)arg1 timeSpentAtHigherSoC:(unsigned short)arg2 engagementEventsSinceLastReport:(unsigned char)arg3 underchargeEventsSinceLastReport:(unsigned char)arg4 chargingEventsSinceLastReport:(unsigned char)arg5 budSocAtLastEngagement:(unsigned char)arg6 successRatio:(unsigned short)arg7 ;
-(void)reportDailyMetrics;
-(void)reportSessionMetricsForSide:(unsigned char)arg0 withTimeSpendAtLowerSoC:(unsigned short)arg1 timeSpentAtHigherSoC:(unsigned short)arg2 engagementEventsSinceLastReport:(unsigned char)arg3 underchargeEventsSinceLastReport:(unsigned char)arg4 chargingEventsSinceLastReport:(unsigned char)arg5 budSocAtLastEngagement:(unsigned char)arg6 successRatio:(unsigned short)arg7 deviceType:(id)arg8 ;
-(void)setFakeConnectionStatusTo:(BOOL)arg0 ;
-(void)setTemporarilyDisabled:(BOOL)arg0 until:(id)arg1 forDevice:(id)arg2 ;
-(void)startMockingBluetoothForFakeDevice:(id)arg0 ;
-(void)stopMockingBluetooth;
-(void)timeSeriesForDevice:(id)arg0 ;
-(void)unfilteredDeadlineForDevice:(id)arg0 withHandler:(id)arg1 ;


@end


#endif