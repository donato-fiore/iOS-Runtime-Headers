// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLAGGREGATEUSAGESERVICE_H
#define PLAGGREGATEUSAGESERVICE_H

@class PLService, PLEntryNotificationOperatorComposition;


#import "PLIntervalData.h"

@interface PLAggregateUsageService : PLService

@property (retain) PLEntryNotificationOperatorComposition *audioEntryNotification; // ivar: _audioEntryNotification
@property (retain) PLEntryNotificationOperatorComposition *batteryExternalConnectedEntryNotification; // ivar: _batteryExternalConnectedEntryNotification
@property (retain) PLEntryNotificationOperatorComposition *batteryIsChargingEntryNotification; // ivar: _batteryIsChargingEntryNotification
@property (retain) PLEntryNotificationOperatorComposition *chargingEntryNotification; // ivar: _chargingEntryNotification
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification; // ivar: _displayOffNotification
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification; // ivar: _displayOnNotification
@property (retain) PLIntervalData *intervalData; // ivar: _intervalData
@property (retain) PLEntryNotificationOperatorComposition *lockStateEntryNotification; // ivar: _lockStateEntryNotification
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification; // ivar: _sleepEntryNotification
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification; // ivar: _wakeEntryNotification


+(id)defaults;
+(void)load;
-(id)init;
-(int)numIntervalsToFill;
-(void)handleAudioStateChange:(id)arg0 ;
-(void)handleChargingChange:(id)arg0 ;
-(void)handleConnectedChange:(id)arg0 ;
-(void)handleExternalConnectedChange:(id)arg0 ;
-(void)handleLargeTimeGap;
-(void)handleLockStateChange:(id)arg0 ;
-(void)handleScreenStateChange:(id)arg0 withState:(BOOL)arg1 ;
-(void)handleWakeStateChange:(id)arg0 withState:(BOOL)arg1 ;
-(void)initOperatorDependancies;
-(void)initializeMetrics;
-(void)instantiateMetrics;
-(void)registerForEntryNotifications;
-(void)scheduleSubmissionAfter:(NSUInteger)arg0 ;
-(void)submitMetricsToAggd;
-(void)testService;
-(void)updateSampledMetrics;


@end


#endif