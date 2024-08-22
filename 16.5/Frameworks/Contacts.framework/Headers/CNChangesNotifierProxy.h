// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGESNOTIFIERPROXY_H
#define CNCHANGESNOTIFIERPROXY_H

@class NSMapTable, NSMutableDictionary, NSCountedSet, CNCoalescingTimer, NSString;
@protocol CNChangeNotificationReceiver, CNSchedulerProvider, CNContactsLoggerProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver>

 {
    NSMapTable *_removalBlocks;
    NSMapTable *_notifyingBlocks;
    id<CNSchedulerProvider> *_schedulerProvider;
    id<CNContactsLoggerProvider> *_loggerProvider;
    NSMutableDictionary *_notificationForwardingMapping;
    NSCountedSet *_supressedNotificationNames;
    NSMutableDictionary *_notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> *_notifierQueue;
    CNCoalescingTimer *_coalescingTimer;
    NSString *_coalescingNotificationName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat externalNotificationCoalescingDelay; // ivar: _externalNotificationCoalescingDelay
@property (nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; // ivar: forwardsSelfGeneratedDistributedSaveNotifications
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)receiveExternalNotificationName:(id)arg0 ;
-(void)receiveNotificationName:(id)arg0 fromSender:(id)arg1 saveIdentifier:(id)arg2 userInfo:(id)arg3 isFromExternalProcess:(BOOL)arg4 ;
-(void)waitForCurrentTasksToFinish;


@end


#endif