// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNOTIFICATIONCENTEREVENTLISTENER_H
#define IMNOTIFICATIONCENTEREVENTLISTENER_H

@class NSString;


#import "IMEventListener.h"

@interface IMNotificationCenterEventListener : IMEventListener

@property (readonly) BOOL isRegisteredForNotification;
@property (readonly, copy) NSString *notificationName; // ivar: _notificationName
@property (readonly, weak) id *notificationObject; // ivar: _notificationObject
@property (readonly, nonatomic) NSString *registeredNotificationName; // ivar: _registeredNotificationName


+(id)eventListenerForNotificationName:(id)arg0 ;
+(id)eventListenerForNotificationName:(id)arg0 object:(id)arg1 ;
-(BOOL)isListening;
-(void)_notification:(id)arg0 ;
-(void)dealloc;
-(void)registerForNotificationName:(id)arg0 ;
-(void)registerForNotificationName:(id)arg0 object:(id)arg1 ;
-(void)willReset;
-(void)willStartListening;
-(void)willStopListening;


@end


#endif