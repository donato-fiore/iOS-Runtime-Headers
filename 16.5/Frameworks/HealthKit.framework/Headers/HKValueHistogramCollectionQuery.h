// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKVALUEHISTOGRAMCOLLECTIONQUERY_H
#define HKVALUEHISTOGRAMCOLLECTIONQUERY_H

@class NSDate, NSString, NSDateComponents, NSArray;
@protocol HKValueHistogramCollectionQueryClientInterface;


#import "HKQuery.h"
#import "HKQuantityType.h"

@interface HKValueHistogramCollectionQuery : HKQuery <HKValueHistogramCollectionQueryClientInterface>



@property (readonly, copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (readonly, copy, nonatomic) NSArray *quantityRanges; // ivar: _quantityRanges
@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithQuantityType:(id)arg0 quantitySamplePredicate:(id)arg1 anchorDate:(id)arg2 intervalComponents:(id)arg3 quantityRanges:(id)arg4 resultsHandler:(id)arg5 ;
-(void)client_deliverValueHistogramCollection:(id)arg0 forQuery:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif