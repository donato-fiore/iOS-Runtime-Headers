// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSAGEDETAILSVIEWMODELCOORDINATOR_H
#define STUSAGEDETAILSVIEWMODELCOORDINATOR_H

@class NSString, NSArray, NSDate, NSFetchedResultsController, NSTimer, NSNumber;
@protocol NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator, STPersistenceControllerProtocol;

#import <Foundation/Foundation.h>

#import "STUsageDetailsViewModel.h"

@interface STUsageDetailsViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastUsageDataRefreshTime; // ivar: _lastUsageDataRefreshTime
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (retain, nonatomic) NSObject<STPersistenceControllerProtocol> *persistenceController; // ivar: _persistenceController
@property (getter=isRefreshing) BOOL refreshing; // ivar: _refreshing
@property (copy, nonatomic) NSString *selectedDeviceIdentifier; // ivar: _selectedDeviceIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSFetchedResultsController *usageBlocksFetchedResultsController; // ivar: _usageBlocksFetchedResultsController
@property (readonly) NSInteger usageContext; // ivar: _usageContext
@property (nonatomic) NSUInteger usageDataRefreshReferenceCount; // ivar: _usageDataRefreshReferenceCount
@property (retain, nonatomic) NSTimer *usageDataRefreshTimer; // ivar: _usageDataRefreshTimer
@property (copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID
@property (readonly, nonatomic) STUsageDetailsViewModel *viewModel; // ivar: _viewModel


+(id)defaultDeviceIdentifierForChild:(id)arg0 ;
+(id)defaultDeviceIdentifierForLocalUser;
+(id)defaultUsageReportTypeForChild:(id)arg0 ;
+(id)defaultUsageReportTypeForLocalUser;
+(void)setDefaultDeviceIdentifier:(id)arg0 childDSID:(id)arg1 ;
+(void)setDefaultDeviceIdentifierForLocalUser:(id)arg0 ;
+(void)setDefaultUsageReportType:(id)arg0 childDSID:(id)arg1 ;
+(void)setDefaultUsageReportTypeForLocalUser:(id)arg0 ;
-(id)_usageBlocksWithUser:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)_usageItemsWithUsageBlocks:(id)arg0 lastUpdatedDate:(*id)arg1 firstPickupByWeekdayByWeek:(id)arg2 referenceDate:(id)arg3 usageContext:(NSInteger)arg4 ;
-(id)initWithPersistenceController:(id)arg0 organizationIdentifier:(id)arg1 userDSID:(id)arg2 devices:(id)arg3 selectedDeviceIdentifier:(id)arg4 selectedUsageReportType:(id)arg5 usageContext:(NSInteger)arg6 ;
-(void)_loadAllHistoricalUsageWithUsageBlocks:(id)arg0 selectedItemDisplayName:(id)arg1 selectedDay:(NSUInteger)arg2 selectedWeek:(NSUInteger)arg3 hadUsageData:(BOOL)arg4 referenceDate:(id)arg5 completionHandler:(id)arg6 ;
-(void)_loadLastWeekUsageWithUsageBlocks:(id)arg0 selectedItemDisplayName:(id)arg1 referenceDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)_loadTodayUsageWithUsageBlocks:(id)arg0 selectedItemDisplayName:(id)arg1 referenceDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)_refreshUsageDataAndReschedule;
-(void)_refreshUsageDataWithCompletion:(id)arg0 ;
-(void)_updateWeekAndDayReportsWithUsageItems:(id)arg0 weekStartDate:(id)arg1 lastUpdatedDate:(id)arg2 referenceDate:(id)arg3 selectedItemDisplayName:(id)arg4 isSelectedWeek:(BOOL)arg5 selectedDay:(NSUInteger)arg6 weekUsageReports:(id)arg7 dayUsageReports:(id)arg8 dayUsageReportByWeekdays:(id)arg9 firstPickupByWeekdayByWeek:(id)arg10 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)dealloc;
-(void)loadViewModelWithCompletionHandler:(id)arg0 ;
-(void)refreshUsageData;
-(void)scheduleRefreshUsageData;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;


@end


#endif