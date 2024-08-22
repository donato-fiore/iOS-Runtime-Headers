// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMEVENTNOTIFICATIONQUEUE_H
#define IMEVENTNOTIFICATIONQUEUE_H

@class IMDoubleLinkedList;
@protocol IMEventNotificationQueueDelegate;

#import <Foundation/Foundation.h>


@interface IMEventNotificationQueue : NSObject

@property (readonly, getter=isBusy) BOOL busy; // ivar: _busy
@property (readonly) NSInteger count;
@property (weak) NSObject<IMEventNotificationQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) IMDoubleLinkedList *eventNotificationList; // ivar: _eventNotificationList
@property (getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, getter=isScheduled) BOOL scheduled; // ivar: _scheduled


-(BOOL)containsNotificationTarget:(id)arg0 ;
-(id)init;
-(void)_didAddNotification:(id)arg0 ;
-(void)_didCancelNotifications;
-(void)_didChangeBusyState:(BOOL)arg0 ;
-(void)_didChangePausedState:(BOOL)arg0 ;
-(void)_didProcessQueue;
-(void)_dispatchProcessQueue;
-(void)_invokeEvent:(id)arg0 ;
-(void)_invokeNotifications;
-(void)_processQueue;
-(void)_scheduleIfNeeded:(BOOL)arg0 ;
-(void)_willProcessQueue;
-(void)appendEventNotification:(id)arg0 ;
-(void)appendEventTarget:(id)arg0 eventNotificationBlock:(id)arg1 ;
-(void)appendEventTarget:(id)arg0 sender:(id)arg1 eventNotificationBlock:(id)arg2 ;
-(void)cancelAllEventNotifications;
-(void)cancelEventNotificationsForNotificationTarget:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)pushEventNotification:(id)arg0 ;
-(void)pushEventTarget:(id)arg0 eventNotificationBlock:(id)arg1 ;
-(void)pushEventTarget:(id)arg0 sender:(id)arg1 eventNotificationBlock:(id)arg2 ;


@end


#endif