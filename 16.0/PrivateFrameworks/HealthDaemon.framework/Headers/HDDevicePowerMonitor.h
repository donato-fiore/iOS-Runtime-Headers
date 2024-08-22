// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEVICEPOWERMONITOR_H
#define HDDEVICEPOWERMONITOR_H

@class HKObserverSet, CUPowerSourceMonitor;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDDevicePowerMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    CUPowerSourceMonitor *_monitor;
    BOOL _isCharging;
}


@property (readonly) BOOL primarySourceIsCharging;


-(id)init;
-(void)addDevicePowerObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeDevicePowerObserver:(id)arg0 ;


@end


#endif