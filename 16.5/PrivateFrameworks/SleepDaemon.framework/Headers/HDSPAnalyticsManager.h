// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPANALYTICSMANAGER_H
#define HDSPANALYTICSMANAGER_H

@class HKSPAnalyticsManager, NSString;
@protocol HDSPEnvironmentAware, HDSPTimeChangeObserver, HDSPActivityScheduler;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPAnalyticsManager : NSObject <HDSPEnvironmentAware, HDSPTimeChangeObserver>



@property (readonly, nonatomic) os_unfair_lock_s analyticsLock; // ivar: _analyticsLock
@property (readonly, nonatomic) HKSPAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (readonly, nonatomic) NSObject<HDSPActivityScheduler> *dataCollectionScheduler; // ivar: _dataCollectionScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDataCollectionInProgress; // ivar: _isDataCollectionInProgress
@property (readonly) Class superclass;


+(id)dailyCollectionActivity;
+(id)dailyCollectionCriteria;
-(BOOL)isDataCollectionEnabled;
-(id)_makeReportQueryWithMorningIndexRange:(struct ? )arg0 resultsHandler:(id)arg1 ;
-(id)currentDate;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 analyticsManager:(id)arg1 dataCollectionScheduler:(id)arg2 ;
-(struct ? )_queryMorningIndexRangeForDate:(id)arg0 ;
-(void)_lock_executeQuery:(id)arg0 ;
-(void)_processQueryResultsWithSummaries:(id)arg0 queryRange:(struct ? )arg1 error:(id)arg2 ;
-(void)_pruneExpiredWindDownActionDataBeforeQueryRange:(struct ? )arg0 ;
-(void)_submitAnalyticsReportsUsingBuilder:(id)arg0 ;
-(void)_unit_testing_pruneExpiredWindDownActionData;
-(void)_withLock:(id)arg0 ;
-(void)cancelDailyCollectionActivity;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)scheduleDailyCollectionActivity;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)updateScheduledActivity;


@end


#endif