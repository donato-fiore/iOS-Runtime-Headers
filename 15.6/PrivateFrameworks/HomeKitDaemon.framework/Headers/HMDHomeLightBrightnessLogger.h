// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMELIGHTBRIGHTNESSLOGGER_H
#define HMDHOMELIGHTBRIGHTNESSLOGGER_H

@class HMFObject, NSString, NSArray, NSNotificationCenter, NSMapTable, BMStreamDatastorePruner, BMSource, BMStoreStream;
@protocol HMFLogging, HMDDevicePreferenceDataSource, HMMLogEventObserver, HMDLogEventDailyProvider, HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDHomeLightBrightnessLogger : HMFObject <HMFLogging, HMDDevicePreferenceDataSource, HMMLogEventObserver, HMDLogEventDailyProvider>



@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident; // ivar: _currentDevicePrimaryResident
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger eventOrder; // ivar: _eventOrder
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
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
-(id)generateTimeStampUpToMinute;
-(id)generateTimeStampUpToSecond;
-(id)initWithHome:(id)arg0 logEventSubmitter:(id)arg1 workQueue:(id)arg2 ;
-(void)configureLogger;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)handleAccessoryAdded:(id)arg0 ;
-(void)handleAccessoryRemovedNotification:(id)arg0 ;
-(void)handleCharacteristicWriteLogEvent:(id)arg0 ;
-(void)handleCharacteristicsValueUpdated:(id)arg0 ;
-(void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)processCharacteristicsAndSubmitCoreAnalyticsEvents:(id)arg0 withLogMessage:(id)arg1 ;
-(void)readFromBiomeDatabase;
-(void)submitCoreAnalyticsEventForBrightness:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 eventOrder:(NSInteger)arg4 homePresence:(BOOL)arg5 luxLevel:(id)arg6 ;
-(void)submitCoreAnalyticsEventForDoors:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 ;
-(void)submitCoreAnalyticsEventForGarageDoorOpener:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 ;
-(void)submitCoreAnalyticsEventForLocks:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 ;
-(void)submitCoreAnalyticsEventForMotionSensor:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 homeUUID:(id)arg3 homePresence:(BOOL)arg4 ;


@end


#endif