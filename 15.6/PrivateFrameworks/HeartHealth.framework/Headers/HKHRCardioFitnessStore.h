// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHRCARDIOFITNESSSTORE_H
#define HKHRCARDIOFITNESSSTORE_H

@class HKTaskServerProxyProvider, NSString, HKHealthStore;
@protocol HKHRCardioFitnessStoreInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKHRCardioFitnessStore : NSObject <HKHRCardioFitnessStoreInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)saveCardioFitnessEventWithValue:(id)arg0 threshold:(id)arg1 dateInterval:(id)arg2 completion:(id)arg3 ;
-(void)saveCardioFitnessEventWithValue:(id)arg0 threshold:(id)arg1 dateInterval:(id)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;


@end


#endif