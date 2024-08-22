// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETAGGREGATESTATESTORAGEINMEMORY_H
#define PETAGGREGATESTATESTORAGEINMEMORY_H

@class NSMutableData;


#import "PETAggregateStateStorage.h"

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData *_data;
    _opaque_pthread_mutex_t _lock;
}




-(BOOL)resetLocked;
-(id)init;
-(void)dealloc;
-(void)expand:(NSUInteger)arg0 andRunWithLock:(id)arg1 ;
-(void)reset;
-(void)saveCorruptState;


@end


#endif