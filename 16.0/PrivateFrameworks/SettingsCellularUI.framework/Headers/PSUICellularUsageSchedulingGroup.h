// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARUSAGESCHEDULINGGROUP_H
#define PSUICELLULARUSAGESCHEDULINGGROUP_H

@class NSString, PSListController;
@protocol PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate;

#import <Foundation/Foundation.h>

#import "PSUIAppDataUsageSpecifierFactory.h"
#import "CTUIListWithHeaderLoadingGroup.h"

@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate>



@property (retain, nonatomic) PSUIAppDataUsageSpecifierFactory *appDataUsageSpecifierFactory; // ivar: _appDataUsageSpecifierFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup; // ivar: _loadingGroup
@property BOOL refreshInProgress; // ivar: _refreshInProgress
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifierTitle:(id)arg1 ;
-(id)specifiers;
-(void)calculateUsage;
-(void)didFailToSetPolicyForSpecifier:(id)arg0 ;
-(void)didResetStatistics;
-(void)prefetchPoliciesFor:(id)arg0 ;
-(void)selectedBillingPeriodChanged:(NSUInteger)arg0 ;
-(void)setGroupSpecifierTitle:(id)arg0 ;
-(void)sortGroup;


@end


#endif