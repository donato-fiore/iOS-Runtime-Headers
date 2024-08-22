// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSPRINGBOARDAGENT_H
#define PLSPRINGBOARDAGENT_H

@class PLAgent, PLMonotonicTimer, PLXPCListenerOperatorComposition, PLTimer, PLEntryNotificationOperatorComposition, NSDate, PLEntry, PLNSNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSDictionary;



@interface PLSpringBoardAgent : PLAgent

@property BOOL autoLockIsNil; // ivar: _autoLockIsNil
@property (retain) PLMonotonicTimer *autolockEnergyPeriodicTimer; // ivar: _autolockEnergyPeriodicTimer
@property (readonly) PLXPCListenerOperatorComposition *bulletinBoardNotificationPublishEvent; // ivar: _bulletinBoardNotificationPublishEvent
@property (retain) PLTimer *dailyWallpaperPoll; // ivar: _dailyWallpaperPoll
@property (retain) PLEntryNotificationOperatorComposition *deviceChargingStateNotification; // ivar: _deviceChargingStateNotification
@property BOOL deviceIsCharging; // ivar: _deviceIsCharging
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification; // ivar: _displayOffNotification
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification; // ivar: _displayOnNotification
@property (retain) NSDate *lastEligibleAutolockEnergyComputationDate; // ivar: _lastEligibleAutolockEnergyComputationDate
@property (retain, nonatomic) PLEntry *lastReceivedPushEntry; // ivar: _lastReceivedPushEntry
@property (retain) PLEntry *lastSBEntry; // ivar: _lastSBEntry
@property (readonly) PLNSNotificationOperatorComposition *notificationSBAutoLockTimerFiredNotification; // ivar: _notificationSBAutoLockTimerFiredNotification
@property (readonly) PLCFNotificationOperatorComposition *notificationSBBlankTrackingChanged; // ivar: _notificationSBBlankTrackingChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationSBLockTrackingChanged; // ivar: _notificationSBLockTrackingChanged
@property (readonly) PLNSNotificationOperatorComposition *notificationSBScreenTimeTrackingChanged; // ivar: _notificationSBScreenTimeTrackingChanged
@property (readonly) PLNSNotificationOperatorComposition *notificationSBWallpaperTrackingChanged; // ivar: _notificationSBWallpaperTrackingChanged
@property (retain) PLEntryNotificationOperatorComposition *receivedPushNotification; // ivar: _receivedPushNotification
@property (retain) NSDictionary *screenNumberToName; // ivar: _screenNumberToName
@property (readonly) PLXPCListenerOperatorComposition *userNotificationRequestEvent; // ivar: _userNotificationRequestEvent
@property (readonly) PLXPCListenerOperatorComposition *userNotificationTriggerEvent; // ivar: _userNotificationTriggerEvent


+(id)defaults;
+(id)entryAggregateDefinitionBulletins;
+(id)entryAggregateDefinitionNotifications;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionBlank;
+(id)entryEventForwardDefinitionLock;
+(id)entryEventForwardDefinitionScreen;
+(id)entryEventForwardDefinitionWallpaper;
+(id)entryEventForwardDefinitions;
+(id)entryEventPointAutoLock;
+(id)entryEventPointBulletins;
+(id)entryEventPointDefinitions;
+(id)entryEventPointLocalRemoteNotifications;
+(void)load;
-(CGFloat)currentMediaTime;
-(id)addCountsAndDurationsFor:(id)arg0 toEntry:(id)arg1 ;
-(id)fetchSBWallpaperForType:(int)arg0 ;
-(id)init;
-(id)screenLock:(id)arg0 ;
-(void)addAccountingEvent:(id)arg0 ;
-(void)closeLastOpenEventsWithStopDate:(id)arg0 ;
-(void)computeAutolockEnergyWithNow:(id)arg0 ;
-(void)dealloc;
-(void)handleChargingStateChange:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logBulletin:(id)arg0 ;
-(void)logMailNotification:(id)arg0 ;
-(void)logNotification:(id)arg0 ;
-(void)setUpScreenNumberDictionary;
-(void)settingsChangedNotification:(id)arg0 ;
-(void)startAutolockEnergyPeriodicTimer;
-(void)stopAutolockEnergyPeriodicTimer;


@end


#endif