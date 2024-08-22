// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPDAYSUMMARYQUERY_H
#define HKSLEEPDAYSUMMARYQUERY_H

@class NSMutableArray, NSCalendar, NSString;
@protocol HKSleepDaySummaryQueryClientInterface;


#import "HKQuery.h"
#import "HKSleepDaySummaryCacheSettings.h"

@interface HKSleepDaySummaryQuery : HKQuery <HKSleepDaySummaryQueryClientInterface>

 {
    id *_resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
}


@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (copy, nonatomic) HKSleepDaySummaryCacheSettings *cacheSettings; // ivar: _cacheSettings
@property (copy, nonatomic) NSCalendar *calendarOverrides; // ivar: _calendarOverrides
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger limit; // ivar: _limit
@property (readonly, nonatomic) ? morningIndexRange; // ivar: _morningIndexRange
@property (readonly, nonatomic) BOOL onlySleepAnalysis;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) BOOL requireSleepAnalysis;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL surfaceSleepStages;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithMorningIndexRange:(struct ? )arg0 ascending:(BOOL)arg1 limit:(NSInteger)arg2 options:(NSUInteger)arg3 resultsHandler:(id)arg4 ;
-(void)client_deliverDaySummaries:(id)arg0 clearPending:(BOOL)arg1 isFinalBatch:(BOOL)arg2 queryUUID:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif