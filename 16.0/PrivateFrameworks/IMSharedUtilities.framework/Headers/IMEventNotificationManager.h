// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEVENTNOTIFICATIONMANAGER_H
#define IMEVENTNOTIFICATIONMANAGER_H

@class NSString, NSMutableArray;
@protocol IMEventNotificationQueueDelegate;

#import <Foundation/Foundation.h>

#import "IMEventListenerList.h"
#import "IMAutomaticEventNotificationQueue.h"

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate>



@property (readonly, getter=isBusy) BOOL busy;
@property NSInteger busyCount; // ivar: _busyCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IMEventListenerList *eventListeners; // ivar: _eventListeners
@property CGFloat eventTimeout; // ivar: _eventTimeout
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IMAutomaticEventNotificationQueue *notificationQueue; // ivar: _notificationQueue
@property (readonly, nonatomic) NSMutableArray *registeredNotificationQueues; // ivar: _registeredNotificationQueues
@property (readonly) Class superclass;


-(id)createEventListenerForNotificationName:(id)arg0 object:(id)arg1 ;
-(id)init;
-(void)appendNotificationForEventHandler:(id)arg0 eventNotificationBlock:(id)arg1 ;
-(void)appendNotificationForEventHandler:(id)arg0 sender:(id)arg1 eventNotificationBlock:(id)arg2 ;
-(void)cancelAllEventNotifications;
-(void)cancelEventNotificationsForEventHandler:(id)arg0 ;
-(void)dealloc;
-(void)eventListenerDidFinish:(id)arg0 ;
-(void)eventNotificationQueue:(id)arg0 didChangeBusyState:(BOOL)arg1 ;
-(void)pauseEventNotifications:(BOOL)arg0 ;
-(void)pushNotificationForEventHandler:(id)arg0 eventNotificationBlock:(id)arg1 ;
-(void)pushNotificationForEventHandler:(id)arg0 sender:(id)arg1 eventNotificationBlock:(id)arg2 ;
-(void)registerEventListener:(id)arg0 ;
-(void)registerNotificationQueue:(id)arg0 ;


@end


#endif