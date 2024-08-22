// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKUSERNOTIFICATIONSREMOTENOTIFICATIONSERVICECONNECTION_H
#define PKUSERNOTIFICATIONSREMOTENOTIFICATIONSERVICECONNECTION_H

@class NSString, NSXPCConnection, NSMutableSet;
@protocol PKUserNotificationServerRemoteNotificationXPCClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // ivar: _callOutQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableSet *registries; // ivar: _registries
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)allowsRemoteNotifications;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)_invalidate;
-(void)_queue_remoteUserNotificationPayloadReceived:(id)arg0 completionHandler:(id)arg1 ;
-(void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)arg0 ;
-(void)didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)registerPushRegistry:(id)arg0 completionHandler:(id)arg1 ;
-(void)remoteUserNotificationPayloadReceived:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterPushRegistry:(id)arg0 ;


@end


#endif