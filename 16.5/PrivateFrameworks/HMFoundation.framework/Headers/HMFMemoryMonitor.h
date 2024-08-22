// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFMEMORYMONITOR_H
#define HMFMEMORYMONITOR_H

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "HMFObject.h"

@interface HMFMemoryMonitor : HMFObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property NSInteger lastProcessMemoryState; // ivar: _lastProcessMemoryState
@property (retain, nonatomic) NSDate *lastProcessMemoryStateUpdateTime; // ivar: _lastProcessMemoryStateUpdateTime
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource; // ivar: _memoryPressureSource
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (nonatomic) NSInteger systemMemoryState; // ivar: _systemMemoryState


+(id)memoryMonitor;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif