// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMXPCNOTIFICATIONS_H
#define RMXPCNOTIFICATIONS_H

@class NSString, NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RMXPCNotifications : NSObject

@property (readonly, copy, nonatomic) NSString *eventDictKeyName; // ivar: _eventDictKeyName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue; // ivar: _modificationQueue
@property (retain, nonatomic) NSMutableDictionary *notificationObservers; // ivar: _notificationObservers
@property (retain, nonatomic) NSMutableSet *pendingNotifications; // ivar: _pendingNotifications
@property (copy, nonatomic) NSSet *registeredNotifications; // ivar: _registeredNotifications
@property (readonly, copy, nonatomic) NSString *streamName; // ivar: _streamName


+(id)darwinNotifier;
+(id)distributedNotifier;
+(void)_setupEventStreamHandler:(id)arg0 ;
+(void)_setupNotifier:(id)arg0 notifications:(id)arg1 ;
+(void)registerForDarwinNotifications:(id)arg0 ;
+(void)registerForDistributedNotifications:(id)arg0 ;
-(BOOL)hasObserverForNotification:(id)arg0 ;
-(id)initWithStreamName:(id)arg0 eventDictKeyName:(id)arg1 ;
-(void)_addXPCEventForNotification:(id)arg0 ;
-(void)_didReceiveNotification:(id)arg0 ;
-(void)_removeXPCEventForNotification:(id)arg0 ;
-(void)_waitForQueue:(id)arg0 ;
-(void)addObserverForNotification:(id)arg0 observer:(id)arg1 ;
-(void)removeObserverForNotification:(id)arg0 ;


@end


#endif