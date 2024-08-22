// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSAMPLEQUERY_H
#define HKSAMPLEQUERY_H

@class NSArray, NSMutableArray, NSString;
@protocol HKSampleQueryClientInterface;


#import "HKQuery.h"

@interface HKSampleQuery : HKQuery <HKSampleQueryClientInterface>

 {
    NSUInteger _limit;
    NSArray *_sortDescriptors;
    NSMutableArray *_samplesPendingDelivery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeAutomaticTimeZones; // ivar: _includeAutomaticTimeZones
@property (nonatomic) BOOL includeContributorInformation; // ivar: _includeContributorInformation
@property (readonly) NSUInteger limit;
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)_prepareSamplesForDelivery:(id)arg0 error:(*id)arg1 ;
-(id)initWithQueryDescriptors:(id)arg0 limit:(NSInteger)arg1 resultsHandler:(id)arg2 ;
-(id)initWithQueryDescriptors:(id)arg0 limit:(NSInteger)arg1 sortDescriptors:(id)arg2 resultsHandler:(id)arg3 ;
-(id)initWithSampleType:(id)arg0 predicate:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(void)client_deliverSamples:(id)arg0 clearPendingSamples:(BOOL)arg1 isFinalBatch:(BOOL)arg2 queryUUID:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif