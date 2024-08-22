// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKPCPUCOUNTERALLOCATOR_H
#define DTKPCPUCOUNTERALLOCATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "DTKPCPUCounterAllocatorRecord.h"
#import "DTKPCPU.h"

@interface DTKPCPUCounterAllocator : NSObject {
    *kpep_config _kpepConfig;
    NSMutableArray *_eventRecords;
    NSUInteger _fixedCounterCount;
    NSUInteger _configurableCounterCount;
    NSUInteger _eventsUniqueIds;
}


@property (readonly, retain, nonatomic) DTKPCPUCounterAllocatorRecord *allocatedPMIRecord; // ivar: _pmiEvent
@property (readonly, retain, nonatomic) DTKPCPU *cpu; // ivar: _cpu
@property (readonly, nonatomic) unsigned int kpcClasses;
@property (readonly, nonatomic) NSUInteger pmcEventCount;
@property (readonly, nonatomic) BOOL pmiEnabled;
@property (readonly, nonatomic) NSUInteger pmiThreshold; // ivar: _pmiThreshold


-(BOOL)_eventExists:(id)arg0 eventOut:(*id)arg1 ;
-(BOOL)_matchesPMIEvent:(id)arg0 ;
-(NSUInteger)_counterIndexForEvent:(id)arg0 absolute:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)_hardwareEventCount;
-(NSUInteger)recordConfigWordsIntoBuffer:(*NSUInteger)arg0 ;
-(id)_counterNameForEvent:(id)arg0 error:(*id)arg1 ;
-(id)initWithCPU:(id)arg0 error:(*id)arg1 ;
-(int)_setErrorFromKpepError:(int)arg0 eventName:(id)arg1 error:(*id)arg2 ;
-(int)addPMCEventName:(id)arg0 error:(*id)arg1 ;
-(int)configureHardwareCounters:(*id)arg0 ;
-(int)configureHardwarePMIPeriods:(*id)arg0 ;
-(int)configurePMIActionID:(unsigned int)arg0 error:(*id)arg1 ;
-(int)forceCounters:(*id)arg0 ;
-(int)setPMIEventName:(id)arg0 pmiThreshold:(NSUInteger)arg1 error:(*id)arg2 ;
-(int)startHardwareCounters:(*id)arg0 ;
-(int)stopHardwareCounters:(*id)arg0 ;
-(int)unforceCounters:(*id)arg0 ;
-(unsigned int)_getCurrentClasses:(*id)arg0 ;
-(void)_enumerateAllocatedPMCsWithIndex:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAllocatedPMCs:(id)arg0 ;


@end


#endif