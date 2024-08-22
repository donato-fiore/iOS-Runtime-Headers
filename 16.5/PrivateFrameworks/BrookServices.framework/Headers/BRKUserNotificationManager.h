// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRKUSERNOTIFICATIONMANAGER_H
#define BRKUSERNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter, NSMutableDictionary, NSXPCListener, NSXPCConnection, NSXPCListenerEndpoint;
@protocol BRKApplicationInterface;

#import <Foundation/Foundation.h>


@interface BRKUserNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_categories;
    NSXPCListener *_listener;
    id<BRKApplicationInterface> *_applicationObject;
}


@property (weak, nonatomic) NSXPCConnection *applicationConnection; // ivar: _applicationConnection
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint


+(id)sharedInstance;
-(id)categoryForIdentifier:(id)arg0 ;
-(id)getListenerEndpoint;
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
-(void)promptNotificationAuthorizationRequest:(id)arg0 ;
-(void)removeAllDeliveredNotifications;
-(void)removeAllPendingNotifications;
-(void)removeNotification:(id)arg0 ;
-(void)removeNotificationsWithCategoryIdentifier:(id)arg0 ;


@end


#endif