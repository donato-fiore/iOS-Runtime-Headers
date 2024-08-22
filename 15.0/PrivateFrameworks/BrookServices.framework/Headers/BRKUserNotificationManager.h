// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKUSERNOTIFICATIONMANAGER_H
#define BRKUSERNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter, NSMutableDictionary, NSString;
@protocol UNUserNotificationCenterDelegatePrivate;

#import <Foundation/Foundation.h>


@interface BRKUserNotificationManager : NSObject <UNUserNotificationCenterDelegatePrivate>

 {
    UNUserNotificationCenter *_notificationCenter;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_categories;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)categoryForIdentifier:(id)arg0 ;
-(id)init;
-(id)postNotification:(id)arg0 destinations:(NSUInteger)arg1 ;
// -(id)postNotification:(id)arg0 trigger:(id)arg1 responseHandler:(id)arg2 destinations:(unk)arg3  ;
-(void)_deliveredNotificationIdentifiersWithCategoryIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_pendingNotificationIdentifiersWithCategoryIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)addCategories:(id)arg0 ;
-(void)debugPendingNotificationRequests;
-(void)handleNotificationResponse:(id)arg0 ;
-(void)hasPendingLocationNotification:(id)arg0 ;
-(void)isNotificationPendingOrDeliveredWithCategoryIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllDeliveredNotifications;
-(void)removeAllPendingNotifications;
-(void)removeNotification:(id)arg0 ;
-(void)removeNotificationsWithCategoryIdentifier:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif