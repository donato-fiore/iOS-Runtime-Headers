// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKDEVICELOCKMONITOR_H
#define STKDEVICELOCKMONITOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface STKDeviceLockMonitor : NSObject {
    os_unfair_lock_s _observersLock;
    NSHashTable *_observersList;
    os_unfair_lock_s _stateLock;
    BOOL _deviceLocked;
    int _notify_token;
}


@property (nonatomic) BOOL isDeviceLocked; // ivar: _isDeviceLocked


+(id)sharedInstance;
-(id)init;
-(void)_updateDeviceLockState;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif