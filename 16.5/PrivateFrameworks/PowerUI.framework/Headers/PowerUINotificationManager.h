// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUINOTIFICATIONMANAGER_H
#define POWERUINOTIFICATIONMANAGER_H

@class NSString, NSUserDefaults, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PowerUINotificationManager : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL immediateCharge; // ivar: _immediateCharge
@property (retain, nonatomic) NSString *lastScheduledFullChargeNotificationID; // ivar: _lastScheduledFullChargeNotificationID
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter; // ivar: _unCenter


+(id)fullChargeDeadlineStringFromDate:(id)arg0 ;
+(id)obcEngagedContentWithDeadline:(id)arg0 toppingOff:(BOOL)arg1 ;
+(id)obcEngagedRequestWithDeadline:(id)arg0 isToppingOff:(BOOL)arg1 ;
+(id)pausedNotificationContentFromDate:(id)arg0 bundle:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)internalCECNotificationsDisabled;
-(id)contentForInternalDurationPredictionWithDuration:(CGFloat)arg0 withConfidence:(CGFloat)arg1 ;
-(id)currentOBCEngagedNotification;
-(id)getDeliveredNotifications;
-(id)init;
-(id)postCECEngagedNotificationWithDate:(id)arg0 ;
-(id)postCECFirstTimeNotification;
-(id)postInternalCECNotificationWithID:(id)arg0 chargingStatus:(BOOL)arg1 information:(id)arg2 shouldReplace:(BOOL)arg3 ;
-(id)postInternalChargingIntelligenceNotificationWithChargingStatus:(BOOL)arg0 information:(id)arg1 url:(id)arg2 validUntil:(id)arg3 ;
-(id)postNotificationWithRequest:(id)arg0 ;
-(id)postOBCEngagedNotificationWithDate:(id)arg0 ;
-(id)postOBCEngagedTopOffNotificationWithDate:(id)arg0 ;
-(void)cancelNotificationRequestWithIdentifier:(id)arg0 ;
-(void)postInternalCECNotificationForChargingDates:(id)arg0 ;
-(void)postInternalChargeDurationNotificationWithDuration:(CGFloat)arg0 withConfidence:(CGFloat)arg1 ;
-(void)removeAllNotifications;
-(void)removeCECNotifications;
-(void)removeCECPausedNotification;
-(void)resetAll;
-(void)updateOBCEngagedNotificationWithDate:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif