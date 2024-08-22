// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPUSERNOTIFICATIONCENTER_H
#define HDSPUSERNOTIFICATIONCENTER_H

@class NSString, UNUserNotificationCenter;
@protocol HDSPSleepNotificationPublisher, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPUserNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


+(id)_generateUniqueIdentifierForNotificationIdentifierPrefix:(id)arg0 eventDate:(id)arg1 ;
+(id)_stringForEventDate:(id)arg0 ;
-(id)_bedtimeReminderContent;
-(id)_chargingReminderBodyForAlarmEnabled:(BOOL)arg0 sleepTrackingEnabled:(BOOL)arg1 ;
-(id)_chargingReminderContentWithUserInfo:(id)arg0 ;
-(id)_contentByAddingCommonUserInfoTo:(id)arg0 ;
-(id)_localizedBedtimeOrWindDownReminderBodyWithKey:(id)arg0 embeddingTimeForEvent:(id)arg1 ;
-(id)_notificationContentForEventIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(id)_notificationIdentifierPrefixForEventIdentifier:(id)arg0 ;
-(id)_notificationRequestForEvent:(id)arg0 userInfo:(id)arg1 ;
-(id)_notificationRequestIdentifierForEvent:(id)arg0 ;
-(id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)arg0 sleepModeOn:(BOOL)arg1 ;
-(id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)arg0 sleepModeOn:(BOOL)arg1 ;
-(id)_wakeDetectionContentWithUserInfo:(id)arg0 ;
-(id)_wakeUpResultsContentWithUserInfo:(id)arg0 ;
-(id)_windDownReminderBodyContent;
-(id)_windDownReminderContent;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 notificationCenter:(id)arg1 ;
-(void)_publishNotificationRequest:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)publishNotificationForEvent:(id)arg0 userInfo:(id)arg1 ;
-(void)tearDownNotificationForEventIdentifier:(id)arg0 ;
-(void)tearDownNotifications;


@end


#endif