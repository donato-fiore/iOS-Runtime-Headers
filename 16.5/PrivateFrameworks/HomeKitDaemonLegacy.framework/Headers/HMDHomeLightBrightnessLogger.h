// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMELIGHTBRIGHTNESSLOGGER_H
#define HMDHOMELIGHTBRIGHTNESSLOGGER_H

@class HMFObject, BMStoreConfig, NSDictionary, NSString, NSSet, NSNotificationCenter, NSMapTable, BMStreamDatastorePruner, BMSource, BMStoreStream;
@protocol HMFLogging, HMDDevicePreferenceDataSource, HMMLogEventObserver, HMDLogEventDailyTaskRunner, HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDLogEventDailyScheduler.h"
#import "HMDHome.h"

@interface HMDHomeLightBrightnessLogger : HMFObject <HMFLogging, HMDDevicePreferenceDataSource, HMMLogEventObserver, HMDLogEventDailyTaskRunner>



@property (readonly) BMStoreConfig *biomeStoreConfig; // ivar: _biomeStoreConfig
@property (readonly, nonatomic) NSDictionary *characteristicTypesToCollectForHMServiceType; // ivar: _characteristicTypesToCollectForHMServiceType
@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident; // ivar: _currentDevicePrimaryResident
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger eventOrder; // ivar: _eventOrder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hmServiceTypesToCollect; // ivar: _hmServiceTypesToCollect
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) BOOL isBiomeDonationEnabled; // ivar: _isBiomeDonationEnabled
@property (readonly) BOOL isCoreAnalyticsSubmissionEnabled; // ivar: _isCoreAnalyticsSubmissionEnabled
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSMapTable *notificationEnabledCharacteristicsByAccessory; // ivar: _notificationEnabledCharacteristicsByAccessory
@property (readonly) BMStreamDatastorePruner *pruner; // ivar: _pruner
@property (readonly) BMSource *source; // ivar: _source
@property (readonly) BMStoreStream *stream; // ivar: _stream
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)handleDifferentType:(id)arg0 ;
+(id)logCategory;
-(id)brightnessSensorsValue;
-(id)findCharacteristicsToRegisterForNotificationsFromHAPAccessory:(id)arg0 ;
-(id)generateTimeStampUpToMinute;
-(id)generateTimeStampUpToSecond;
-(id)getApproximateCurrentLocationRange;
-(id)initWithHome:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithHome:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 workQueue:(id)arg3 shouldDonateToBiome:(BOOL)arg4 shouldSubmitToCoreAnalytics:(BOOL)arg5 ;
-(void)configureLogger;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)handleAccessoryAdded:(id)arg0 ;
-(void)handleAccessoryRemovedNotification:(id)arg0 ;
-(void)handleCharacteristicWriteLogEvent:(id)arg0 ;
-(void)handleCharacteristicsValueUpdated:(id)arg0 ;
-(void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)processCharacteristicsAndSubmitCoreAnalyticsEvents:(id)arg0 subscriptionEventType:(NSUInteger)arg1 triggerSource:(id)arg2 bundleId:(id)arg3 userUUID:(id)arg4 ;
-(void)runDailyTask;
-(void)submitCoreAnalyticsEventForBrightness:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 eventOrder:(NSInteger)arg4 homePresence:(BOOL)arg5 luxLevel:(id)arg6 triggerSource:(id)arg7 bundleId:(id)arg8 userUUID:(id)arg9 ;
-(void)submitCoreAnalyticsEventForDoors:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 triggerSource:(id)arg5 bundleId:(id)arg6 userUUID:(id)arg7 ;
-(void)submitCoreAnalyticsEventForGarageDoorOpener:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 triggerSource:(id)arg5 bundleId:(id)arg6 userUUID:(id)arg7 ;
-(void)submitCoreAnalyticsEventForHumiditySensorCharacteristicValue:(id)arg0 accessoryUUIDString:(id)arg1 serviceUUIDString:(id)arg2 characteristicUUIDString:(id)arg3 homeUUID:(id)arg4 homePresence:(BOOL)arg5 subscriptionEventTypeString:(id)arg6 triggerSource:(id)arg7 bundleId:(id)arg8 userUUID:(id)arg9 ;
-(void)submitCoreAnalyticsEventForLocks:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 triggerSource:(id)arg5 bundleId:(id)arg6 userUUID:(id)arg7 ;
-(void)submitCoreAnalyticsEventForMotionSensor:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 triggerSource:(id)arg5 bundleId:(id)arg6 userUUID:(id)arg7 ;
-(void)submitCoreAnalyticsEventForTemperatureSensorCharacteristicValue:(id)arg0 accessoryUUIDString:(id)arg1 serviceUUIDString:(id)arg2 characteristicUUIDString:(id)arg3 homeUUID:(id)arg4 homePresence:(BOOL)arg5 subscriptionEventTypeString:(id)arg6 triggerSource:(id)arg7 bundleId:(id)arg8 userUUID:(id)arg9 ;
-(void)submitCoreAnalyticsEventForThermostatCharacteristicValue:(id)arg0 accessoryUUIDString:(id)arg1 serviceUUIDString:(id)arg2 characteristicUUIDString:(id)arg3 homeUUID:(id)arg4 homePresence:(BOOL)arg5 subscriptionEventTypeString:(id)arg6 triggerSource:(id)arg7 bundleId:(id)arg8 userUUID:(id)arg9 ;


@end


#endif