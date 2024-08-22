// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETRESERVOIRSAMPLINGLOG_H
#define PETRESERVOIRSAMPLINGLOG_H

@protocol PETReservoirSamplingLogStore;

#import <Foundation/Foundation.h>


@interface PETReservoirSamplingLog : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSObject<PETReservoirSamplingLogStore> *_store;
    unsigned int _limit;
    ? _rng;
}




-(BOOL)_lock;
-(BOOL)_readHeader;
-(id)init;
-(id)initInMemoryWithLimit:(NSUInteger)arg0 ;
-(id)initWithPath:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)initWithStore:(id)arg0 limit:(NSUInteger)arg1 ;
-(void)_clearLocked;
-(void)_enumerateItemsWithBlockLocked:(id)arg0 ;
-(void)_gc;
-(void)_unlock;
-(void)clear;
-(void)dealloc;
-(void)enumerateAndClearItemsWithBlock:(id)arg0 ;
-(void)enumerateItemsWithBlock:(id)arg0 ;
-(void)log:(id)arg0 ;
-(void)unlock;


@end


#endif