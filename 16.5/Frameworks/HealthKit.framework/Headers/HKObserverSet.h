// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOBSERVERSET_H
#define HKOBSERVERSET_H

@class NSString, NSMapTable, NSArray;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKObserverSet : NSObject {
    NSString *_name;
    NSObject<OS_os_log> *_category;
    os_unfair_lock_s _lock;
    NSMapTable *_queuesByObserver;
    NSObject<OS_dispatch_queue> *_defaultObserverQueue;
}


@property (readonly, copy) NSArray *allObservers;
@property (readonly) NSUInteger count;


-(id)initWithName:(id)arg0 loggingCategory:(id)arg1 ;
-(void)notifyObserver:(id)arg0 handler:(id)arg1 ;
-(void)notifyObservers:(id)arg0 ;
-(void)notifyObserversInGroup:(id)arg0 handler:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 runIfFirstObserver:(id)arg2 ;
-(void)unregisterAllObservers;
-(void)unregisterObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 runIfLastObserver:(id)arg1 ;


@end


#endif