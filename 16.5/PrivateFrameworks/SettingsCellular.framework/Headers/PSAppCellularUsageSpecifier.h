// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSAPPCELLULARUSAGESPECIFIER_H
#define PSAPPCELLULARUSAGESPECIFIER_H

@class PSSpecifier, NSString;
@protocol PSSpecifierDataUsageReporter, PSBillingPeriodSource, PSAppCellularUsageSpecifierDelegate;


#import "PSDataUsageStatisticsCache.h"

@interface PSAppCellularUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>



@property (weak, nonatomic) NSObject<PSBillingPeriodSource> *billingPeriodSource; // ivar: _billingPeriodSource
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (weak, nonatomic) NSObject<PSAppCellularUsageSpecifierDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldShowUsage; // ivar: _shouldShowUsage
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // ivar: _statisticsCache


+(id)_specifierWithCellTitle:(id)arg0 bundleID:(id)arg1 shouldShowUsage:(BOOL)arg2 icon:(id)arg3 statisticsCache:(id)arg4 ;
+(id)appSpecifierWithBundleID:(id)arg0 statisticsCache:(id)arg1 ;
+(id)systemPolicySpecifierForAppName:(id)arg0 bundleID:(id)arg1 icon:(id)arg2 ;
+(id)systemPolicySpecifierForAppName:(id)arg0 bundleID:(id)arg1 icon:(id)arg2 enabled:(BOOL)arg3 ;
+(id)watchOnlyAppSpecifierWithBundleID:(id)arg0 statisticsCache:(id)arg1 ;
+(void)setIconForSpecifier:(id)arg0 bundleID:(id)arg1 ;
-(BOOL)isRestricted;
-(NSUInteger)dataUsage;
-(id)cellularUsagePolicy;
-(id)dataUsageString;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif