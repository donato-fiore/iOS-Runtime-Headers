// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCORRELATIONQUERY_H
#define HKCORRELATIONQUERY_H

@class NSMutableArray, NSString, NSDictionary;
@protocol HKCorrelationQueryClientInterface;


#import "HKQuery.h"
#import "HKCorrelationType.h"

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClientInterface>

 {
    NSMutableArray *_correlationsPendingDelivery;
}


@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) HKCorrelationType *correlationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *filterDictionary; // ivar: _filterDictionary
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *samplePredicates; // ivar: _samplePredicates
@property (readonly) Class superclass;


+(BOOL)shouldApplyAdditionalPredicateForObjectType:(id)arg0 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithType:(id)arg0 predicate:(id)arg1 samplePredicates:(id)arg2 completion:(id)arg3 ;
-(void)client_deliverCorrelations:(id)arg0 clearPendingSamples:(BOOL)arg1 isFinalBatch:(BOOL)arg2 queryUUID:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif