// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
+(id)sharedInstance;
-(id)currentOBCEngagedNotification;
-(id)getDeliveredNotifications;
-(id)init;
-(id)postNotificationWithRequest:(id)arg0 ;
-(id)postOBCEngagedNotificationWithDate:(id)arg0 ;
-(id)postOBCEngagedTopOffNotificationWithDate:(id)arg0 ;
-(void)removeAllNotifications;
-(void)resetAll;
-(void)updateOBCEngagedNotificationWithDate:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif