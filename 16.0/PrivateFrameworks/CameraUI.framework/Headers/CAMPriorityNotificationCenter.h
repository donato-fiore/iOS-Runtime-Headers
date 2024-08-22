// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPRIORITYNOTIFICATIONCENTER_H
#define CAMPRIORITYNOTIFICATIONCENTER_H

@class NSNotificationCenter, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMPriorityNotificationCenter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // ivar: __mutexQueue
@property (readonly, retain, nonatomic) NSNotificationCenter *_notificationCenter; // ivar: __notificationCenter
@property (readonly, retain, nonatomic) NSMutableDictionary *_observersByNameHighPriority; // ivar: __observersByNameHighPriority
@property (readonly, retain, nonatomic) NSMutableDictionary *_observersByNameNormalPriority; // ivar: __observersByNameNormalPriority


+(id)defaultCenter;
-(id)_allSubscriptions;
-(id)_entriesByName:(id)arg0 forPriority:(NSUInteger)arg1 creatingEmptyIfNeeded:(BOOL)arg2 ;
-(id)_observersForPriority:(NSUInteger)arg0 ;
-(id)init;
-(void)_mutexQueue_addObserver:(id)arg0 priority:(NSUInteger)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)_mutexQueue_removeObserver:(id)arg0 ;
-(void)_notificationReceiver:(id)arg0 ;
-(void)_postNotification:(id)arg0 forEntries:(id)arg1 ;
-(void)_removeObserver:(id)arg0 fromObserversByName:(id)arg1 ;
-(void)addObserver:(id)arg0 priority:(NSUInteger)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif