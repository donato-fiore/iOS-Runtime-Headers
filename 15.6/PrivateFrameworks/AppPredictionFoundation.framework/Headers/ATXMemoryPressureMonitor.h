// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMEMORYPRESSUREMONITOR_H
#define ATXMEMORYPRESSUREMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATXMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    NSHashTable *_observers;
}




+(id)sharedInstance;
-(id)init;
-(void)_notifyObserversOfMemoryPressure;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif