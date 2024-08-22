// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPHEALTHSTOREPROVIDER_H
#define HKSPHEALTHSTOREPROVIDER_H

@class HKHealthStore, HKSleepHealthStore;

#import <Foundation/Foundation.h>


@interface HKSPHealthStoreProvider : NSObject

@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKSleepHealthStore *sleepHealthStore; // ivar: _sleepHealthStore


+(id)_initializedLocalDeviceHealthStore;
-(id)initWithLocalDeviceHealthStore;
-(id)initWithSleepHealthStore:(id)arg0 healthStore:(id)arg1 ;


@end


#endif