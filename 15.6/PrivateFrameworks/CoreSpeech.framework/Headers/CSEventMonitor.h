// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSEVENTMONITOR_H
#define CSEVENTMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}




-(NSUInteger)type;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObservers:(id)arg0 ;
-(void)enumerateObserversInQueue:(id)arg0 ;
-(void)notifyObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif