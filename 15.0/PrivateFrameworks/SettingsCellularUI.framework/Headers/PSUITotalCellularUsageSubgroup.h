// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUITOTALCELLULARUSAGESUBGROUP_H
#define PSUITOTALCELLULARUSAGESUBGROUP_H

@class PSDataUsageStatisticsCache, PSSpecifier;
@protocol PSBillingPeriodSource;

#import <Foundation/Foundation.h>


@interface PSUITotalCellularUsageSubgroup : NSObject

@property (weak, nonatomic) NSObject<PSBillingPeriodSource> *billingPeriodSource; // ivar: _billingPeriodSource
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // ivar: _statisticsCache
@property (retain, nonatomic) PSSpecifier *totalRoamingUsageSpecifier; // ivar: _totalRoamingUsageSpecifier
@property (retain, nonatomic) PSSpecifier *totalUsageSpecifier; // ivar: _totalUsageSpecifier


-(id)initWithStatisticsCache:(id)arg0 andBillingPeriodSource:(id)arg1 ;
-(id)specifiers;
-(id)totalBytesUsed;
-(id)totalDataUsageForSpecifier:(id)arg0 ;
-(id)totalRoamingBytesUsed;
-(id)totalRoamingDataUsageForSpecifier:(id)arg0 ;


@end


#endif