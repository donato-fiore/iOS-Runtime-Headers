// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSYSTEMSLEEPMONITORPROVIDER_H
#define SWSYSTEMSLEEPMONITORPROVIDER_H

@class BSZeroingWeakReference, NSString;
@protocol SWSystemSleepMonitorProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SWSystemSleepMonitorProvider : NSObject <SWSystemSleepMonitorProviding>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_lock_queue;
    BSZeroingWeakReference *_lock_weakDelegateWrapper;
    unsigned int _lock_systemPowerConnection;
    *IONotificationPort _lock_systemPowerPort;
    unsigned int _lock_systemPowerNotifier;
    BOOL _lock_registered;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)allowPowerChange:(NSInteger)arg0 ;
-(void)cancelPowerChange:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)registerForSystemPowerOnQueue:(id)arg0 withDelegate:(id)arg1 ;


@end


#endif