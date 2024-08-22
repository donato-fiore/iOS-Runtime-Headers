// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKWHEELCHAIRUSECHARACTERISTICCACHE_H
#define _HKWHEELCHAIRUSECHARACTERISTICCACHE_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKWheelchairUseObject.h"

@interface _HKWheelchairUseCharacteristicCache : NSObject {
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
    NSInteger _state;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSObject<OS_dispatch_queue> *_queue;
    int _characteristicUpdateToken;
    NSInteger _queryRetries;
    os_unfair_lock_s _lock;
}




-(BOOL)_lock_isWheelchairUser;
-(BOOL)_lock_needsFetch;
-(BOOL)hasFetchedWheelchairUse;
-(BOOL)isWheelchairUser;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_alertObservers:(id)arg0 didUpdateToWheelchairUser:(BOOL)arg1 ;
-(void)_handleFetchError:(id)arg0 ;
-(void)_handleFetchSuccess:(id)arg0 ;
-(void)_lock_fetchWheelchairUse;
-(void)_lock_fetchWheelchairUseIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif