// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTUSERNOTIFICATIONCENTER_H
#define MTUSERNOTIFICATIONCENTER_H

@class NSString, NSDictionary;
@protocol MTNotificationCenter;

#import <Foundation/Foundation.h>

#import "MTUserNotificationActionDispatcher.h"

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>



@property (retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *notificationCenters; // ivar: _notificationCenters
@property (readonly) Class superclass;


+(id)_allIdentifiersForAlarm:(id)arg0 ;
+(id)_allIdentifiersForAlarm:(id)arg0 includeMainIdentifier:(BOOL)arg1 ;
+(id)_allIdentifiersForAlarm:(id)arg0 includeMainIdentifier:(BOOL)arg1 includeSnooze:(BOOL)arg2 ;
+(id)_durationComponentsFormatter;
+(id)_goToBedIdentifier:(id)arg0 ;
+(id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg0 ;
+(id)_snoozeCountdownIdentifier:(id)arg0 ;
+(id)_timeFormatter;
+(id)_wakeUpAlarmStringForAlarm:(id)arg0 ;
+(id)categoryForScheduledAlarm:(id)arg0 ;
+(id)categoryForScheduledTimer:(id)arg0 ;
+(id)contentForScheduledAlarm:(id)arg0 ;
+(id)contentForScheduledTimer:(id)arg0 ;
+(id)launchURLForScheme:(id)arg0 ;
+(id)notificationPrefixes;
+(id)requestIdentifierForScheduledAlarm:(id)arg0 ;
+(id)userInfoForAlarm:(id)arg0 ;
+(id)userInfoForTimer:(id)arg0 ;
+(void)_setGoToBedTitleAndBody:(id)arg0 forGoToBedNotification:(id)arg1 ;
+(void)_setSnoozeCountdownTitleAndBody:(id)arg0 forSnoozeCountdownNotification:(id)arg1 ;
+(void)_setSpecificContent:(id)arg0 forGoToBedNotification:(id)arg1 ;
+(void)_setSpecificContent:(id)arg0 forNormalScheduledAlarm:(id)arg1 ;
+(void)_setSpecificContent:(id)arg0 forScheduledAlarm:(id)arg1 ;
+(void)_setSpecificContent:(id)arg0 forSnoozeCountdownNotification:(id)arg1 ;
-(id)_notificationCenterForScheduledAlarm:(id)arg0 ;
-(id)_notificationCenterForScheduledTimer;
-(id)alarmCategories;
-(id)bedtimeCategories;
-(id)init;
-(id)notificationCategories;
-(id)timerCategories;
-(void)dismissNotificationsForAlarm:(id)arg0 ;
-(void)dismissNotificationsForAlarm:(id)arg0 dismissAction:(NSUInteger)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg0 includeMainIdentifier:(BOOL)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg0 includeMainIdentifier:(BOOL)arg1 includeSnooze:(BOOL)arg2 ;
-(void)dismissNotificationsForAlarm:(id)arg0 includeSnooze:(BOOL)arg1 ;
-(void)dismissNotificationsForTimer:(id)arg0 ;
-(void)dismissNotificationsWithIdentifiers:(id)arg0 ;
-(void)dismissRelatedNotificationsForScheduledAlarm:(id)arg0 ;
-(void)interruptAudioAndLockDeviceWithCompletionBlock:(id)arg0 ;
-(void)postBedtimeNotificationForAlarm:(id)arg0 date:(id)arg1 ;
-(void)postNotificationForScheduledAlarm:(id)arg0 completionBlock:(id)arg1 ;
-(void)postNotificationForScheduledAlarm:(id)arg0 content:(id)arg1 completionBlock:(id)arg2 ;
-(void)postNotificationForScheduledTimer:(id)arg0 completionBlock:(id)arg1 ;
-(void)registerActionHandler:(id)arg0 ;
-(void)removeAllDeliveredNotifications;
-(void)setupNotificationCenter;
-(void)tearDownNotificationsForEventIdentifiers:(id)arg0 ;


@end


#endif