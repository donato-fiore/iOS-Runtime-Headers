// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNOISECONTROLLER_H
#define HUNOISECONTROLLER_H

@class AXDispatchTimer, NSMutableArray, HKDataCollector, ADAMAudioDataReceiver, HKHealthStore, HKCategorySample, NSDate, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HUNoiseController : NSObject {
    int _measurementSuspensionNotifyToken;
}


@property (retain, nonatomic) AXDispatchTimer *adamSuspendedTimer; // ivar: _adamSuspendedTimer
@property (retain, nonatomic) NSMutableArray *attenuationBuffer; // ivar: _attenuationBuffer
@property (retain, nonatomic) HKDataCollector *attenuationDataCollector; // ivar: _attenuationDataCollector
@property (nonatomic) float attenuationLevel; // ivar: _attenuationLevel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // ivar: _dataQueue
@property (retain, nonatomic) ADAMAudioDataReceiver *edDataReceiver; // ivar: _edDataReceiver
@property (retain, nonatomic) AXDispatchTimer *edDummyDataTimer; // ivar: _edDummyDataTimer
@property (nonatomic) float fastLeq; // ivar: _fastLeq
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSMutableArray *leqBuffer; // ivar: _leqBuffer
@property (retain, nonatomic) NSMutableArray *leqBuffer80Threshold; // ivar: _leqBuffer80Threshold
@property (retain, nonatomic) NSMutableArray *leqBuffer85Threshold; // ivar: _leqBuffer85Threshold
@property (retain, nonatomic) NSMutableArray *leqBuffer90Threshold; // ivar: _leqBuffer90Threshold
@property (nonatomic, getter=isMeasurementEnabled) BOOL measurementEnabled; // ivar: _measurementEnabled
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (retain, nonatomic) HKCategorySample *notificationSample; // ivar: _notificationSample
@property (nonatomic, getter=isNotified) BOOL notified; // ivar: _notified
@property (nonatomic, getter=isNotified80) BOOL notified80; // ivar: _notified80
@property (nonatomic, getter=isNotified85) BOOL notified85; // ivar: _notified85
@property (nonatomic, getter=isNotified90) BOOL notified90; // ivar: _notified90
@property (nonatomic) float sampleDuration; // ivar: _sampleDuration
@property (nonatomic) float slowLeq; // ivar: _slowLeq
@property (nonatomic) NSUInteger thresholdLevel; // ivar: _thresholdLevel
@property (retain, nonatomic) NSDate *timeNotified; // ivar: _timeNotified
@property (retain, nonatomic) NSDate *timeNotified80; // ivar: _timeNotified80
@property (retain, nonatomic) NSDate *timeNotified85; // ivar: _timeNotified85
@property (retain, nonatomic) NSDate *timeNotified90; // ivar: _timeNotified90
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


+(BOOL)deviceSupportsEnvironmentalDosimetry;
+(id)sharedController;
-(BOOL)isWearingAirpods;
-(NSUInteger)alertTypeFromLevel:(float)arg0 ;
-(float)calculateLeqForBuffer:(id)arg0 ;
-(id)init;
-(id)measurementConfigurationWithDuration:(unsigned int)arg0 period:(unsigned int)arg1 config:(NSUInteger)arg2 ;
-(id)registerForEnvironmentalDosimetryUpdates:(id)arg0 ;
-(void)_clearCachedValues;
-(void)_logNoiseEnabledStateToPowerlog:(BOOL)arg0 ;
-(void)_sendUpdateMessageForCurrentValues;
-(void)applyAnalyticsNotificationLogicForSPL:(float)arg0 withDuration:(float)arg1 ;
-(void)applyNotificationLogicForSPL:(float)arg0 withDuration:(float)arg1 ;
-(void)checkToResetAnalyticsNotificationsForSPL:(float)arg0 withDuration:(float)arg1 andBuffer:(id)arg2 forTime:(float)arg3 andThreshold:(NSInteger)arg4 ;
-(void)checkToResetNotificationsForSPL:(float)arg0 withDuration:(float)arg1 andBuffer:(id)arg2 forTime:(float)arg3 ;
-(void)checkToSurfaceAnalyticsNotificationForSPL:(float)arg0 withDuration:(float)arg1 andBuffer:(id)arg2 forTime:(float)arg3 andThreshold:(NSInteger)arg4 ;
-(void)checkToSurfaceNotificationForSPL:(float)arg0 withDuration:(float)arg1 andBuffer:(id)arg2 forTime:(float)arg3 ;
-(void)dealloc;
-(void)lowPowerModeChanged:(id)arg0 ;
-(void)maintainCircularBuffer:(id)arg0 forTime:(float)arg1 ;
-(void)processMeasurement:(id)arg0 withMetadata:(id)arg1 ;
-(void)readEnvironmentalDosimetryLevels;
-(void)restartADAMTimer;
-(void)showNotificationForAlertType:(NSUInteger)arg0 ;
-(void)stopReceivingAudioDosageSamples;
-(void)subscribeToSharedNotifications;
-(void)writeAttentuationSampleToHealth;
-(void)writeNotificationSampleToHKWithSPL:(float)arg0 startDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif