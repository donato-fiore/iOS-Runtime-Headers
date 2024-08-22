// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFUSERNOTIFICATIONCENTER_H
#define HFUSERNOTIFICATIONCENTER_H

@class NSString, NAFuture, NSHashTable, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate, HFUserNotificationPresentationHandling;

#import <Foundation/Foundation.h>


@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *notificationSettingsFuture; // ivar: _notificationSettingsFuture
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (weak, nonatomic) NSObject<HFUserNotificationPresentationHandling> *presentationHandler; // ivar: _presentationHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


+(id)sharedInstance;
-(id)init;
-(id)notificationSettings;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillEnterForeground;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 openSettingsForNotification:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif