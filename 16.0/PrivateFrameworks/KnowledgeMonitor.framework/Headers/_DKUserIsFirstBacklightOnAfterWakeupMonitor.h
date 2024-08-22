// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKUSERISFIRSTBACKLIGHTONAFTERWAKEUPMONITOR_H
#define _DKUSERISFIRSTBACKLIGHTONAFTERWAKEUPMONITOR_H

@class DKMonitor, _DKEvent, NSString, NSDate;
@protocol _DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor;


#import "_DKPeriod.h"

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor>

 {
    _DKPeriod *eligibleForNotification;
    int displayStatusNotifyToken;
    int internalSettingChangedNotificationToken;
    BOOL _enabled;
}


@property (nonatomic) BOOL FirstWakeUINotificationEnabled; // ivar: _FirstWakeUINotificationEnabled
@property (nonatomic) BOOL SoftwareUpdateUINotificationEnabled; // ivar: _SoftwareUpdateUINotificationEnabled
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalHandler;
@property (copy, nonatomic) id *instantHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;
@property (copy, nonatomic) id *shutdownHandler;
@property (readonly) Class superclass;


+(id)eventStream;
+(id)fetchMostRecentPastEventForStream:(id)arg0 ;
+(id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+(id)prettyPrintDateAsLocalTime:(id)arg0 ;
-(BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
-(BOOL)eligibleForFirstWakeUINotification;
-(BOOL)isFirstBacklightOn;
-(BOOL)isInternalBuild;
-(BOOL)isUINotificationEnabledForKey:(id)arg0 ;
-(id)convertUTCToLocalTimeString:(id)arg0 ;
-(id)firstWakeupEventWithValue:(BOOL)arg0 ;
-(id)getNextSWUpdatePrediction;
-(void)deactivate;
-(void)dealloc;
-(void)handleBacklightTurnedOffEvent;
-(void)handleBacklightTurnedOnEvent;
-(void)handleScreenUnlockEvent;
-(void)receiveNotificationEvent:(id)arg0 ;
-(void)recordFirstWakeup:(id)arg0 ;
-(void)registerHandleBacklightEvents;
-(void)setInternalSettingsChangedNotficationHandler;
-(void)setUINotificationEligibility;
-(void)setupNotificationEligiblityPeriod;
-(void)showFirstWakeupUINotification;
-(void)showSoftwareUpdateUINotification;
-(void)showUINotification:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unregisterHandleBacklightEvents;


@end


#endif