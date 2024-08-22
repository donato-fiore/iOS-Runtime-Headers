// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFMEMORYMONITOR_H
#define CARPFMEMORYMONITOR_H

@protocol OS_dispatch_queue, OS_dispatch_source;


#import "CARPFObject.h"
#import "CARPFUnfairLock.h"

@interface CARPFMemoryMonitor : CARPFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) CARPFUnfairLock *lock; // ivar: _lock
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