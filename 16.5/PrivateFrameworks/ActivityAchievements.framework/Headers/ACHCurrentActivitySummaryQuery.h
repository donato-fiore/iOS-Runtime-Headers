// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHCURRENTACTIVITYSUMMARYQUERY_H
#define ACHCURRENTACTIVITYSUMMARYQUERY_H

@class HKQuery, NSDictionary, NSString;
@protocol ACHCurrentActivitySummaryClientInterface;



@interface ACHCurrentActivitySummaryQuery : HKQuery <ACHCurrentActivitySummaryClientInterface>



@property (retain, nonatomic) NSDictionary *collectionIntervals; // ivar: _collectionIntervals
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)client_deliverTodaySummary:(id)arg0 changedTodayFields:(NSUInteger)arg1 yesterdaySummary:(id)arg2 changedYesterdayFields:(NSUInteger)arg3 queryUUID:(id)arg4 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif