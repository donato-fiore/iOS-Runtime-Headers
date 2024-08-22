// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKQUANTITYDISTRIBUTIONQUERY_H
#define _HKQUANTITYDISTRIBUTIONQUERY_H

@class NSDate, NSString, NSDateComponents;
@protocol HKQuantityDistributionQueryClientInterface;


#import "HKQuery.h"
#import "HKQuantity.h"

@interface _HKQuantityDistributionQuery : HKQuery <HKQuantityDistributionQueryClientInterface>



@property (readonly, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSInteger contextStyle; // ivar: _contextStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKQuantity *histogramAnchor; // ivar: _histogramAnchor
@property (readonly, nonatomic) HKQuantity *histogramBucketSize; // ivar: _histogramBucketSize
@property (readonly, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 contextStyle:(NSInteger)arg3 predicate:(id)arg4 anchorDate:(id)arg5 intervalComponents:(id)arg6 histogramAnchor:(id)arg7 histogramBucketSize:(id)arg8 options:(NSUInteger)arg9 completionHandler:(id)arg10 ;
-(void)client_deliverDistributionCollection:(id)arg0 forQuery:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif