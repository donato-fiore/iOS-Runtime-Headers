// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPDISTRIBUTEDNOTIFICATIONCENTER_H
#define CPDISTRIBUTEDNOTIFICATIONCENTER_H

@class NSString, NSLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPDistributedNotificationCenter : NSObject {
    NSString *_centerName;
    NSLock *_lock;
    *__CFRunLoopSource _receiveNotificationSource;
    BOOL _isServer;
    *__CFDictionary _sendPorts;
    NSUInteger _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)_serverPortToNotificationCenterMapDispatchQueue;
+(id)centerForServerPort:(unsigned int)arg0 ;
+(id)centerNamed:(id)arg0 ;
+(struct __CFDictionary *)_serverPortToNotificationCenterMap;
+(void)setCenter:(id)arg0 forServerPort:(unsigned int)arg1 ;
-(BOOL)postNotificationName:(id)arg0 userInfo:(id)arg1 toBundleIdentifier:(id)arg2 ;
-(id)_initWithServerName:(id)arg0 ;
-(id)name;
-(void)_checkIn;
-(void)_checkOutAndRemoveSource;
-(void)_createReceiveSourceForRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)_notificationServerWasRestarted;
-(void)_receivedCheckIn:(unsigned int)arg0 auditToken:(struct ? *)arg1 ;
-(void)dealloc;
-(void)deliverNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)postNotificationName:(id)arg0 ;
-(void)postNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)runServer;
-(void)runServerOnCurrentThread;
-(void)startDeliveringNotificationsToMainThread;
-(void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)stopDeliveringNotifications;


@end


#endif