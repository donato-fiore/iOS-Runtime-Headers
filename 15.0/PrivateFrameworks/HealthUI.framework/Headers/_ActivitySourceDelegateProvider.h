// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ACTIVITYSOURCEDELEGATEPROVIDER_H
#define _ACTIVITYSOURCEDELEGATEPROVIDER_H

@class ActivitySourceDelegate, NSString;
@protocol HKActivitySummaryDataProviderObserver, HKDateRangeDataUpdateDelegate;


#import "HKActivitySummaryDataProvider.h"

@interface _ActivitySourceDelegateProvider : ActivitySourceDelegate <HKActivitySummaryDataProviderObserver>



@property (readonly, nonatomic) HKActivitySummaryDataProvider *dataProvider; // ivar: _dataProvider
@property (weak, nonatomic) NSObject<HKDateRangeDataUpdateDelegate> *dateRangeDataUpdateDelegate; // ivar: _dateRangeDataUpdateDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activitySummariesForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithDataProvider:(id)arg0 activityValue:(NSInteger)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3 ;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg0 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif