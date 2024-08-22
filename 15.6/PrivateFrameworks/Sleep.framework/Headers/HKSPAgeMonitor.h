// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPAGEMONITOR_H
#define HKSPAGEMONITOR_H

@class NSNumber, HKHealthStore;

#import <Foundation/Foundation.h>

#import "HKSPObserverSet.h"

@interface HKSPAgeMonitor : NSObject

@property (readonly, nonatomic) NSNumber *age; // ivar: _age
@property (nonatomic) int characteristicUpdateToken; // ivar: _characteristicUpdateToken
@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) BOOL needUpdate; // ivar: _needUpdate
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers


-(id)init;
// -(id)initWithCurrentDateProvider:(id)arg0 healthStore:(unk)arg1  ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)checkForAgeChange;
-(void)dealloc;
-(void)registerForNotifications;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterForNotifications;


@end


#endif