// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPHOENIXEVENTMONITOR_H
#define AXPHOENIXEVENTMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXPhoenixEventMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


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