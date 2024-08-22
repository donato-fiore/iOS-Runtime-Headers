// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACTIVITYSUMMARYQUERY_H
#define HKACTIVITYSUMMARYQUERY_H

@class NSMutableArray, NSString;
@protocol HKActivitySummaryQueryClientInterface;


#import "HKQuery.h"

@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface>

 {
    BOOL _initialHandlerCalled;
    id *_completionHandler;
    NSMutableArray *_pendingActivitySummaries;
}


@property (readonly, copy, nonatomic) id *completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) BOOL orderByDateAscending; // ivar: _orderByDateAscending
@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties; // ivar: _shouldIncludeActivitySummaryPrivateProperties
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics; // ivar: _shouldIncludeActivitySummaryStatistics
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithPredicate:(id)arg0 resultsHandler:(id)arg1 ;
-(void)client_deliverActivitySummaries:(id)arg0 isFinalBatch:(BOOL)arg1 clearPendingBatches:(BOOL)arg2 queryUUID:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;
-(void)setShouldIncludePrivateActivitySummaryProperties:(BOOL)arg0 ;


@end


#endif