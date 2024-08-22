// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANACCOUNTNOTIFIER_H
#define ANACCOUNTNOTIFIER_H

@class NSXPCConnection, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, ANClientCallbackProtocol, ANAccountNotifierDelegate;

#import <Foundation/Foundation.h>


@interface ANAccountNotifier : NSObject <NSXPCListenerDelegate, ANClientCallbackProtocol>

 {
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_bulletinResponseListener;
    NSString *_callbackMachService;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANAccountNotifierDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_createDaemonConnection;
-(id)_daemonConnection;
-(id)init;
-(id)initWithCallbackMachService:(id)arg0 ;
-(void)_daemonConnectionWasInterrupted;
-(void)_daemonConnectionWasInvalidated;
-(void)_disconnectFromDaemon;
-(void)_startNotificationCallbackListenerWithMachServiceName:(id)arg0 ;
-(void)_stopNotificationCallbackListener;
-(void)addNotification:(id)arg0 ;
-(void)dealloc;
-(void)notificationWasActivated:(id)arg0 ;
-(void)notificationWasCleared:(id)arg0 ;
-(void)notificationWasDismissed:(id)arg0 ;
-(void)removeNotificationWithIdentifier:(id)arg0 ;
-(void)removeNotificationsWithEventIdentifier:(id)arg0 ;


@end


#endif