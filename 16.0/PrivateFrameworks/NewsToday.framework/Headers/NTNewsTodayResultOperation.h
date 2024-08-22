// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTNEWSTODAYRESULTOPERATION_H
#define NTNEWSTODAYRESULTOPERATION_H

@class NSDate, NSDictionary, NTPBTodayResultOperationFetchInfo, NTPBTodayConfig;


#import "NTTodayResultOperation.h"
#import "NTCatchUpOperationForYouFetchInfo.h"
#import "NTTodayResults.h"

@interface NTNewsTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NSDate *filterDate; // ivar: _filterDate
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // ivar: _forYouFetchInfo
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID; // ivar: _resultAssetHandlesByAssetID
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo; // ivar: _resultFetchInfo
@property (nonatomic) CGFloat resultHeadlineScaleFactor; // ivar: _resultHeadlineScaleFactor
@property (copy, nonatomic) NTTodayResults *resultTodayResults; // ivar: _resultTodayResults
@property (copy, nonatomic) NTPBTodayConfig *todayConfig; // ivar: _todayConfig


+(void)initialize;
-(BOOL)validateOperation;
-(id)_firstRefreshDateDefaultsKey;
-(id)_sectionCTRsWithTodayConfig:(id)arg0 personalizationTreatment:(id)arg1 aggregateStore:(id)arg2 ;
-(id)init;
-(void)_assembleQueueDescriptorsWithConfig:(id)arg0 allowOnlyWatchEligibleSections:(BOOL)arg1 respectsWidgetVisibleSectionsLimit:(BOOL)arg2 personalizationTreatment:(id)arg3 aggregateStore:(id)arg4 appConfiguration:(id)arg5 todayData:(id)arg6 completion:(id)arg7 ;
-(void)_fetchTodayResultsWithFetchHelper:(id)arg0 aggregator:(id)arg1 budgetInfo:(id)arg2 appConfiguration:(id)arg3 feedPersonalizer:(id)arg4 todayData:(id)arg5 completion:(id)arg6 ;
-(void)_finalizeTodayResultsWithSectionDescriptors:(id)arg0 catchUpOperationResultsBySectionDescriptor:(id)arg1 slotAllocationByDynamicSlotItemID:(id)arg2 appConfiguration:(id)arg3 feedPersonalizer:(id)arg4 todayData:(id)arg5 completion:(id)arg6 ;
-(void)_registerForYouFetchWithForYouFetchInfo:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif