// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYSERIESSAMPLEBUILDER_H
#define HKQUANTITYSERIESSAMPLEBUILDER_H

@class NSDate, NSError, NSUUID, NSString;
@protocol _HKXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKQuantityType.h"
#import "HKDevice.h"
#import "HKCodableQuantitySeries.h"
#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKQuantitySeriesSampleBuilder : NSObject <_HKXPCExportable>

 {
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    HKDevice *_device;
    NSInteger _batchSize;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_fatalError;
    NSInteger _state;
    HKCodableQuantitySeries *_quantitySeries;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_insertQuantityCompletion; // ivar: _unitTest_insertQuantityCompletion
@property (readonly, nonatomic) NSInteger unitTest_state;


+(id)_clientErrorForFinishedSeries;
+(id)_exceptionForPreviouslyDiscardedBuilder;
+(id)serverInterface;
-(BOOL)_changeStateForDiscardWithError:(*id)arg0 ;
-(BOOL)_changeStateForFinishWithError:(*id)arg0 ;
-(BOOL)_changeStateForInsertWithError:(*id)arg0 ;
-(BOOL)_insertQuantity:(id)arg0 dateInterval:(id)arg1 error:(*id)arg2 ;
-(BOOL)_validateDateInterval:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateQuantity:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertQuantity:(id)arg0 date:(id)arg1 error:(*id)arg2 ;
-(BOOL)insertQuantity:(id)arg0 dateInterval:(id)arg1 error:(*id)arg2 ;
-(id)_queue_clientErrorForFatalError;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 quantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3 ;
-(id)remoteInterface;
-(void)_changeStateForFatalError:(id)arg0 ;
-(void)_discardWithCompletion:(id)arg0 ;
-(void)_finishSeriesWithMetadata:(id)arg0 endDate:(id)arg1 completion:(id)arg2 ;
-(void)_taskServer_discardWithCompletion:(id)arg0 ;
-(void)_taskServer_finishSeriesWithMetadata:(id)arg0 endDate:(id)arg1 finalSeries:(id)arg2 completion:(id)arg3 ;
-(void)_taskServer_insertQuantitySeries:(id)arg0 completion:(id)arg1 ;
-(void)connectionInvalidated;
-(void)discard;
-(void)finishSeriesWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)finishSeriesWithMetadata:(id)arg0 endDate:(id)arg1 completion:(id)arg2 ;
-(void)unitTest_discardWithCompletion:(id)arg0 ;
-(void)unitTest_setBatchSize:(NSInteger)arg0 ;


@end


#endif