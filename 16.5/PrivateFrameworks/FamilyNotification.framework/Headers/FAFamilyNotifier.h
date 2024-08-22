// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYNOTIFIER_H
#define FAFAMILYNOTIFIER_H

@class NSXPCConnection, NSLock, NSXPCListener, NSString;
@protocol FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate, FAFamilyNotificationDelegate;

#import <Foundation/Foundation.h>


@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate>

 {
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<FAFamilyNotificationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_pendingNotificationsForAllClients;
-(id)_pendingNotificationsWithClientIdentifier:(id)arg0 ;
-(id)agentConnection;
-(id)initWithIdentifier:(id)arg0 machServiceName:(id)arg1 ;
-(id)pendingNotifications;
-(void)_agentConnectionFailedToBootstrap;
-(void)_agentConnectionWasInterrupted;
-(void)_agentConnectionWasInvalidated;
-(void)deliverNotification:(id)arg0 ;
-(void)didActivateNotification:(id)arg0 ;
-(void)didClearNotification:(id)arg0 ;
-(void)didDismissNotification:(id)arg0 ;
-(void)removeAllNotifications;
-(void)removeNotificationWithIdentifier:(id)arg0 ;


@end


#endif