// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRANKINGFEEDBACKHANDLER_H
#define SSRANKINGFEEDBACKHANDLER_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSObject<OS_dispatch_queue> *countQueue; // ivar: _countQueue
@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem; // ivar: _mapProtectionClassToBundleIdToItem
@property (retain) NSMutableArray *sectionCSItems; // ivar: _sectionCSItems


+(id)copyRenderEngagementCounts;
+(id)sharedInstance;
-(id)fetchResults;
-(id)getSyntheticTestRankingItem;
-(id)getSyntheticTestRankingItemsForStressTest;
-(id)init;
-(void)_indexItemWithIdentifier:(id)arg0 bundleID:(id)arg1 startDate:(id)arg2 pc:(id)arg3 ;
-(void)didEngageResultWithRankingItem:(id)arg0 startDate:(id)arg1 protectionClass:(id)arg2 ;
-(void)fetchBundleRenderAndEngagementInfo;
-(void)fetchBundleRenderAndEngagementInfo:(id)arg0 ;
-(void)resetResultWithRankingItems:(id)arg0 ;
-(void)resultsWithRankingItemsDidBecomeVisible:(id)arg0 date:(id)arg1 protectionClassMapping:(id)arg2 ;
-(void)stressTestCounts;
-(void)testCountsAfterCoupleYears;
-(void)testCountsAfterYear;
-(void)testCountsForRegularEngagement;
-(void)testCountsMovingCoupleOfYearsInPast;
-(void)testCountsMovingDaysInPast;
-(void)testCountsMovingYearInPast;
-(void)testCountsUptoHalfYear;
-(void)testCountsUptoMonth;
-(void)testCountsUptoOneDay;
-(void)testCountsUptoQuarter;
-(void)testCountsUptoWeek;
-(void)testCountsUptoYear;
-(void)testForDummyEntry;
-(void)testForDurationWithIntervals:(*int)arg0 maxIndex:(int)arg1 duration:(NSInteger)arg2 counts:(id)arg3 ;
-(void)writeRenderAndEngagementInfo;


@end


#endif