// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LANOTIFICATION_H
#define LANOTIFICATION_H

@class NSXPCConnection, NSString;
@protocol LANotificationObserverXPC, LANotificationXPC, LANotificationObserver;

#import <Foundation/Foundation.h>

#import "LANotificationProxy.h"

@interface LANotification : NSObject <LANotificationObserverXPC>

 {
    NSXPCConnection *_connection;
    id<LANotificationXPC> *_notification;
    BOOL _appMustBeActive;
    BOOL _waitingForActivation;
}


@property (nonatomic) BOOL appMustBeActive;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<LANotificationXPC> *notification;
@property (nonatomic) BOOL notifyOnResume; // ivar: _notifyOnResume
@property (weak, nonatomic) NSObject<LANotificationObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject *oldValue; // ivar: _oldValue
@property (readonly, nonatomic) LANotificationProxy *proxy; // ivar: _proxy
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject *value; // ivar: _value


+(BOOL)isAppActive;
+(void)postNotificationWithNewValue:(id)arg0 oldValue:(id)arg1 ;
-(id)_notificationNameWhenAppIsActive:(BOOL)arg0 ;
-(id)darwinNotificationForValue:(id)arg0 ;
-(id)initWithObserver:(id)arg0 ;
-(void)_appActivityChanged:(id)arg0 ;
-(void)_checkWaiting;
-(void)_notifyObserverWithAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_observeAppActivity:(BOOL)arg0 ;
-(void)dealloc;
-(void)newValue:(id)arg0 oldValue:(id)arg1 completionHandler:(id)arg2 ;
-(void)postNewValue:(id)arg0 oldValue:(id)arg1 ;
-(void)resume;
-(void)suspend;


@end


#endif