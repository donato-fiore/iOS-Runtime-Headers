// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSDATAUSAGESPECIFIER_H
#define PSDATAUSAGESPECIFIER_H

@class PSSpecifier, NSString;
@protocol PSSpecifierDataUsageReporter, PSBillingPeriodSource;


#import "PSDataUsageStatisticsCache.h"

@interface PSDataUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>



@property (weak, nonatomic) NSObject<PSBillingPeriodSource> *billingPeriodSource; // ivar: _billingPeriodSource
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // ivar: _statisticsCache
@property (nonatomic) NSUInteger type; // ivar: _type


-(NSUInteger)dataUsage;
-(id)dataUsageString;
-(id)initWithType:(NSUInteger)arg0 bundleID:(id)arg1 statisticsCache:(id)arg2 ;


@end


#endif