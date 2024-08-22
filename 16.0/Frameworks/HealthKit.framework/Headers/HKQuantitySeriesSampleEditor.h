// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUANTITYSERIESSAMPLEEDITOR_H
#define HKQUANTITYSERIESSAMPLEEDITOR_H

@class NSUUID, NSMutableSet, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"
#import "HKQuantitySample.h"

@interface HKQuantitySeriesSampleEditor : NSObject <_HKXPCExportable>

 {
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    os_unfair_lock_s _lock;
    NSInteger _state;
    NSMutableSet *_datesIntervalsToRemove;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HKQuantitySample *quantitySample; // ivar: _quantitySample
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger unitTest_state;


+(id)serverInterface;
// -(BOOL)_performWithError:(*id)arg0 stateValidator:(id)arg1 lockedBlock:(unk)arg2  ;
-(BOOL)removeQuantityForDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 quantitySample:(id)arg1 ;
-(id)remoteInterface;
-(void)commitWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)discard;


@end


#endif