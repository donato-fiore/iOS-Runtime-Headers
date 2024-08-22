// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIDATAUSAGECATEGORYSPECIFIER_H
#define PSUIDATAUSAGECATEGORYSPECIFIER_H

@class PSSpecifier, PSDataUsageStatisticsCache, NSArray;
@protocol PSBillingPeriodSource;



@interface PSUIDataUsageCategorySpecifier : PSSpecifier

@property (weak, nonatomic) NSObject<PSBillingPeriodSource> *billingPeriodSource; // ivar: _billingPeriodSource
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // ivar: _statisticsCache
@property (retain, nonatomic) NSArray *subcategorySpecifiers; // ivar: _subcategorySpecifiers
@property (nonatomic) NSUInteger type; // ivar: _type


-(NSUInteger)dataUsage;
-(id)dataUsageString;
-(id)getLogger;
-(id)initWithType:(NSUInteger)arg0 subSpecifiers:(id)arg1 ;


@end


#endif