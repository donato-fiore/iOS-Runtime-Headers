// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKPTRIGGER_H
#define DTKPTRIGGER_H

@protocol DTKPTriggerCounterAllocatorProvider, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "DTKPCPUCounterAllocator.h"

@interface DTKPTrigger : NSObject

@property (nonatomic) unsigned int actionID; // ivar: _actionID
@property (nonatomic) BOOL collectKernelStacks; // ivar: _collectKernelStacks
@property (nonatomic) BOOL collectUserStacks; // ivar: _collectUserStacks
@property (readonly, retain, nonatomic) DTKPCPUCounterAllocator *counterAllocator;
@property (readonly, nonatomic) NSObject<DTKPTriggerCounterAllocatorProvider> *counterAllocatorProvider; // ivar: _counterAllocatorProvider
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // ivar: _lock
@property (readonly, nonatomic) NSUInteger pmcEventCount;
@property (readonly, retain, nonatomic) DTKPCPUCounterAllocator *queryCounterAllocator;
@property (readonly, nonatomic) BOOL requestsPMCSampling; // ivar: _requestsPMCSampling
@property (nonatomic) unsigned int samplers; // ivar: _samplers
@property (nonatomic) int targetPid; // ivar: _targetPid
@property (readonly, nonatomic) unsigned int triggerID; // ivar: _triggerID
@property (readonly) NSUInteger triggerKind;
@property (readonly) char * triggerKindRepr;


+(int)reinitializeKperf:(*id)arg0 ;
-(id)init;
-(id)initWithCounterAllocatorProvider:(id)arg0 ;
-(int)_setFilterByPid:(int)arg0 forAction:(unsigned int)arg1 ;
-(int)addPMCEventNamed:(id)arg0 error:(*id)arg1 ;
-(int)start:(*id)arg0 ;
-(int)stop:(*id)arg0 ;
-(unsigned int)_actionAlloc;
-(void)_actionDealloc:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif