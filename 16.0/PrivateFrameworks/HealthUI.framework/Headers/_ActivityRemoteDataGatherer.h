// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ACTIVITYREMOTEDATAGATHERER_H
#define _ACTIVITYREMOTEDATAGATHERER_H

@class NSString, NSArray, NSDateInterval;
@protocol HKActivitySummaryDataProviderObserver;

#import <Foundation/Foundation.h>

#import "HKActivitySummaryDataProvider.h"

@interface _ActivityRemoteDataGatherer : NSObject <HKActivitySummaryDataProviderObserver>



@property (retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryProvider; // ivar: _activitySummaryProvider
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *monthActivitySummaries; // ivar: _monthActivitySummaries
@property (retain, nonatomic) NSDateInterval *monthDateInterval; // ivar: _monthDateInterval
@property (retain, nonatomic) NSArray *sixMonthActivitySummaries; // ivar: _sixMonthActivitySummaries
@property (retain, nonatomic) NSDateInterval *sixMonthDateInterval; // ivar: _sixMonthDateInterval
@property (readonly) Class superclass;


-(id)_chartDataSourceQueryDataFromSummaries:(id)arg0 ;
-(id)_dateRangeFromInterval:(id)arg0 ;
-(id)initWithActivitySummaryDataProvider:(id)arg0 monthDateInterval:(id)arg1 sixMonthDateInterval:(id)arg2 completion:(id)arg3 ;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg0 ;
-(void)dealloc;
-(void)gatherData;


@end


#endif