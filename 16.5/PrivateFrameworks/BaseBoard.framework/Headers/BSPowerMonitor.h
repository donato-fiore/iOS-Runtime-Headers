// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSPOWERMONITOR_H
#define BSPOWERMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSZeroingWeakReference.h"

@interface BSPowerMonitor : NSObject {
    *IONotificationPort _notificationPort;
    unsigned int _notifier;
    BSZeroingWeakReference *_weakSelfWrapper;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _observersLock;
    NSHashTable *_lock_observers;
    unsigned int _rootDomainConnect;
}




+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif