// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCDAYSUMMARYQUERY_H
#define HKMCDAYSUMMARYQUERY_H

@class HKQuery, NSMutableArray, NSString;
@protocol HKMCDaySummaryQueryClientInterface;



@interface HKMCDaySummaryQuery : HKQuery <HKMCDaySummaryQueryClientInterface>

 {
    id *_resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}


@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) ? dayIndexRange; // ivar: _dayIndexRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger limit; // ivar: _limit
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithDayIndexRange:(struct ? )arg0 ascending:(BOOL)arg1 limit:(NSInteger)arg2 resultsHandler:(id)arg3 ;
-(void)client_deliverDaySummaries:(id)arg0 clearPending:(BOOL)arg1 isFinalBatch:(BOOL)arg2 analysisAnchor:(id)arg3 queryUUID:(id)arg4 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif