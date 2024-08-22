// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDACTIVITYQUERYTESTCONTROLLER_H
#define WDACTIVITYQUERYTESTCONTROLLER_H

@class NSString, HKActivitySummaryDataProvider;
@protocol HKActivitySummaryDataProviderObserver;

#import <Foundation/Foundation.h>

#import "WDProfile.h"

@interface WDActivityQueryTestController : NSObject <HKActivitySummaryDataProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) HKActivitySummaryDataProvider *provider; // ivar: _provider
@property (readonly) Class superclass;


-(id)_buildActivitySummaryFromDate:(id)arg0 calendar:(id)arg1 moveQuantity:(id)arg2 exerciseQuantity:(id)arg3 standQuantity:(id)arg4 ;
-(id)_dateDaysAgo:(id)arg0 ;
-(id)_quantityValue:(id)arg0 title:(id)arg1 ;
-(id)_stringForDate:(id)arg0 ;
-(id)_stringForDateComponents:(id)arg0 ;
-(id)_summariesFromStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 moveData:(id)arg3 exerciseData:(id)arg4 standData:(id)arg5 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_hourlyActivityDataForStartDate:(id)arg0 endDate:(id)arg1 healthStore:(id)arg2 calendar:(id)arg3 handler:(id)arg4 ;
-(void)_logActivitySummary:(id)arg0 calendar:(id)arg1 ;
-(void)_logDataFromAllTimeScopes;
-(void)_logDataFromTimeScope:(NSInteger)arg0 title:(id)arg1 ;
-(void)_logTrialQuery;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg0 ;
-(void)runTest;


@end


#endif