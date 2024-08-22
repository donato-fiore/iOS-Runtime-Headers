// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIAPPDATAUSAGESPECIFIERFACTORY_H
#define PSUIAPPDATAUSAGESPECIFIERFACTORY_H

@class PSBillingPeriodSelectorSpecifier, NSArray, NSString, PSListController, PSCellularManagementCache, PSDataUsageStatisticsCache;
@protocol Loggable, PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate;

#import <Foundation/Foundation.h>

#import "PSUICallTimeGroup.h"
#import "PSUICarrierSpaceManager.h"
#import "PSUIResetStatisticsGroup.h"
#import "PSUICellularUsageContentSpecifiers.h"
#import "PSUITotalCellularUsageSubgroup.h"

@interface PSUIAppDataUsageSpecifierFactory : NSObject <Loggable>



@property (weak, nonatomic) NSObject<PSBillingPeriodSelectorSpecifierDelegate> *billingCycleDelegate; // ivar: _billingCycleDelegate
@property (retain, nonatomic) PSBillingPeriodSelectorSpecifier *billingPeriodSelectorSpecifier; // ivar: _billingPeriodSelectorSpecifier
@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) PSUICallTimeGroup *callTimeGroup; // ivar: _callTimeGroup
@property (retain, nonatomic) PSUICarrierSpaceManager *carrierSpaceManager; // ivar: _carrierSpaceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *groupSpecifierTitle; // ivar: _groupSpecifierTitle
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) PSCellularManagementCache *managementCache; // ivar: _managementCache
@property (weak, nonatomic) NSObject<PSAppCellularUsageSpecifierDelegate> *policySpecifierDelegate; // ivar: _policySpecifierDelegate
@property (weak, nonatomic) NSObject<PSUIResetStatisticsGroupDelegate> *resetStatisticsDelegate; // ivar: _resetStatisticsDelegate
@property (retain, nonatomic) PSUIResetStatisticsGroup *resetStatisticsGroup; // ivar: _resetStatisticsGroup
@property (retain) PSUICellularUsageContentSpecifiers *savedContentSpecifiers; // ivar: _savedContentSpecifiers
@property (retain) NSArray *savedHeaderSpecifiers; // ivar: _savedHeaderSpecifiers
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // ivar: _statisticsCache
@property (readonly) Class superclass;
@property (retain, nonatomic) PSUITotalCellularUsageSubgroup *totalUsageSubgroup; // ivar: _totalUsageSubgroup


-(id)contentSpecifiers;
-(id)getLogger;
-(id)headerSpecifiers;
-(id)initWithGroupSpecifierTitle:(id)arg0 hostController:(id)arg1 managementCache:(id)arg2 statisticsCache:(id)arg3 carrierSpaceManager:(id)arg4 billingCycleDelegate:(id)arg5 policySpecifierDelegate:(id)arg6 resetStatisticsDelegate:(id)arg7 ;
-(void)addAppUsageSpecifiersToContentSpecifiers:(id)arg0 ;
-(void)addLeadingSpecifiersToContentSpecifiers:(id)arg0 ;
-(void)addTrailingSpecifiersToContentSpecifiers:(id)arg0 ;
-(void)refreshOrderingOfContentSpecifiers;


@end


#endif