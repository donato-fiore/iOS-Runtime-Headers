// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICELLULARUSAGESCHEDULINGGROUP_H
#define PSUICELLULARUSAGESCHEDULINGGROUP_H

@class PSListController;
@protocol PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate;

#import <Foundation/Foundation.h>

#import "PSUICellularUsageLayoutGroup.h"
#import "CTUIListWithHeaderLoadingGroup.h"

@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate>



@property (retain, nonatomic) PSUICellularUsageLayoutGroup *dataUsageSyncGroup; // ivar: _dataUsageSyncGroup
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup; // ivar: _loadingGroup


-(id)initWithListController:(id)arg0 groupSpecifierTitle:(id)arg1 ;
-(id)specifiers;
-(void)calculateUsage;
-(void)didFailToSetPolicy:(id)arg0 forSpecifier:(id)arg1 ;
-(void)didResetStatistics;
-(void)prefetchResourcesFor:(id)arg0 ;
-(void)presentAlert:(id)arg0 ;
-(void)selectedBillingPeriodChanged:(NSUInteger)arg0 ;
-(void)setGroupSpecifierTitle:(id)arg0 ;
-(void)sortGroup;


@end


#endif