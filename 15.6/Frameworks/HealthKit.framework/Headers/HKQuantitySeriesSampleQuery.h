// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYSERIESSAMPLEQUERY_H
#define HKQUANTITYSERIESSAMPLEQUERY_H

@class NSMutableDictionary, NSData, NSDate, NSString, NSDictionary;
@protocol HKQuantitySeriesSampleQueryClientInterface;


#import "HKQuery.h"
#import "HKQuantitySample.h"

@interface HKQuantitySeriesSampleQuery : HKQuery <HKQuantitySeriesSampleQueryClientInterface>

 {
    id *_seriesHandler;
    HKQuantitySample *_sample;
    NSInteger _anchor;
    CGFloat _startTime;
    id *_quantityHandler;
    id *_quantityBatchHandler;
    NSMutableDictionary *_receivedSamplesByUUID;
    BOOL _hasMaximumReceivedStartTime;
    CGFloat _maximumReceivedStartTime;
    NSData *_latestReceivedUUIDData;
    NSDate *_latestSampleStartDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeSample; // ivar: _includeSample
@property (nonatomic) BOOL orderByQuantitySampleStartDate; // ivar: _orderByQuantitySampleStartDate
@property (readonly, nonatomic) id *quantityHandlerWithSample;
@property (readonly, nonatomic) id *quantityHandlerWithoutSample;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *unitTest_cachedQuantitySamplesByUUID;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(id)_quantitySampleForEnumerationResult:(id)arg0 UUID:(id)arg1 ;
-(id)initWithQuantityType:(id)arg0 predicate:(id)arg1 quantityBatchHandler:(id)arg2 ;
-(id)initWithQuantityType:(id)arg0 predicate:(id)arg1 quantityHandler:(id)arg2 ;
-(id)initWithSample:(id)arg0 quantityHandler:(id)arg1 ;
-(void)client_deliverEnumerationResults:(id)arg0 isFinal:(BOOL)arg1 query:(id)arg2 ;
-(void)client_deliverQuantitySeries:(id)arg0 seriesAnchor:(NSInteger)arg1 isFinal:(BOOL)arg2 query:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif