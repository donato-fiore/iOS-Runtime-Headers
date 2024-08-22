// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSNOTIFICATIONMANAGER_H
#define BCSNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter, NSMutableSet, NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate>

 {
    UNUserNotificationCenter *_qrCodeUserNotificationCenter;
    UNUserNotificationCenter *_nfcUserNotificationCenter;
    NSMutableSet *_notifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)_notificationWithIdentifier:(id)arg0 ;
-(id)_userNotificationCenterForCodeType:(NSInteger)arg0 ;
-(id)init;
-(void)_addRequestForNotification:(id)arg0 codeType:(NSInteger)arg1 ;
-(void)_configureUserNotificationCenter;
-(void)didReceiveNotificationResponse:(id)arg0 ;
-(void)invalidate;
-(void)scheduleNotification:(id)arg0 codeType:(NSInteger)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)withdrawNotificationsWithProcessID:(int)arg0 codeType:(NSInteger)arg1 ;


@end


#endif