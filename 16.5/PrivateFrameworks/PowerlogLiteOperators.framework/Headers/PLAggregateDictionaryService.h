// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAGGREGATEDICTIONARYSERVICE_H
#define PLAGGREGATEDICTIONARYSERVICE_H

@class PLService, PLCFNotificationOperatorComposition, NSNumber, PLMonotonicTimer, NSMutableDictionary, PLXPCResponderOperatorComposition, NSMutableArray, NSString;



@interface PLAggregateDictionaryService : PLService {
    CGFloat remainderUnpluggedEnergy;
    CGFloat remainderUnpluggedTime;
}


@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrForceListener; // ivar: _aggregateMetrics1hrForceListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrListener; // ivar: _aggregateMetrics1hrListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsForceListener; // ivar: _aggregateMetrics24hrsForceListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsListener; // ivar: _aggregateMetrics24hrsListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsForceListener; // ivar: _aggregateMetricsForceListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsListener; // ivar: _aggregateMetricsListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayForceListener; // ivar: _aggregateMetricsTodayForceListener
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayListener; // ivar: _aggregateMetricsTodayListener
@property (retain) PLCFNotificationOperatorComposition *blmAggregateCFNotification; // ivar: _blmAggregateCFNotification
@property (retain) NSNumber *currentMachWakeTime; // ivar: _currentMachWakeTime
@property (retain) PLMonotonicTimer *dailyTaskTimer; // ivar: _dailyTaskTimer
@property BOOL firstScreenOnAfterWake; // ivar: _firstScreenOnAfterWake
@property AggState last_state; // ivar: _last_state
@property (retain) NSMutableDictionary *localCache; // ivar: _localCache
@property (retain) PLXPCResponderOperatorComposition *metricSummarizationStateResponder; // ivar: _metricSummarizationStateResponder
@property (retain) NSMutableArray *registeredNotifications; // ivar: _registeredNotifications
@property (retain) NSMutableDictionary *validReasonsDictionary; // ivar: _validReasonsDictionary
@property (retain) NSString *wakeReasonString; // ivar: _wakeReasonString
@property (retain) NSString *wakeReasons; // ivar: _wakeReasons


+(BOOL)metrickitClientsAvailable;
+(id)defaults;
+(id)entryEventNoneDefinitionSessionsFile;
+(id)entryEventNoneDefinitions;
+(void)load;
-(NSUInteger)abstimeToNanosec:(NSUInteger)arg0 ;
-(NSUInteger)bucketWakeTime:(NSUInteger)arg0 ;
-(id)init;
-(void)addToDurationScalarKey:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)createMetricsFile:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initValidReasonsDictionary;
-(void)logAggregateUIKitActivityKey:(id)arg0 withInfo:(id)arg1 AggDKey:(id)arg2 ;
-(void)logAggregateUIKitKeyboardActivityKey:(id)arg0 withInfo:(id)arg1 AggDKey:(id)arg2 ;
-(void)logDuration:(CGFloat)arg0 asDistribution:(id)arg1 ;
-(void)logEventNoneSessionsFile;
-(void)registerForApplicationNotifications;
-(void)registerForAssertionNotifications;
-(void)registerForAudioNotifications;
-(void)registerForBacklightLatencyNotifications;
-(void)registerForBatteryNotifications;
-(void)registerForBluetoothNotifications;
-(void)registerForCalendarNotifications;
-(void)registerForCameraNotifications;
-(void)registerForLocationNotifications;
-(void)registerForMailNotifications;
-(void)registerForSCDynamicStoreNotifications;
-(void)registerForSafariNotifications;
-(void)registerForSpringboardNotifications;
-(void)registerForUIKitNotifications;
-(void)registerForVideoNotifications;
-(void)setupMetricsAggregation;
-(void)setupMetricsListeners;
-(void)updateAggregateStateWithEntry:(id)arg0 ;


@end


#endif