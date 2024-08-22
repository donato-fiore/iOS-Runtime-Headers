// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMAFIBBURDENVIEWCONTROLLER_H
#define HKOVERLAYROOMAFIBBURDENVIEWCONTROLLER_H

@class HKAnalyticsEventSubmissionManager, NSCalendar, NSString, NSNumber;
@protocol HKCurrentValueViewDataSourceDelegate, HKAddDataViewControllerProvider, OS_dispatch_queue, HKSleepDataSourceProvider;


#import "HKOverlayRoomViewController.h"
#import "HKInteractiveChartDisplayType.h"
#import "HKInteractiveChartDataFormatter.h"

@interface HKOverlayRoomAFibBurdenViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate>



@property (readonly, nonatomic) NSObject<HKAddDataViewControllerProvider> *addDataViewControllerProvider; // ivar: _addDataViewControllerProvider
@property (readonly, nonatomic) HKInteractiveChartDisplayType *afibBurdenDisplayType; // ivar: _afibBurdenDisplayType
@property (readonly, nonatomic) HKAnalyticsEventSubmissionManager *analyticsEventSubmissionManager; // ivar: _analyticsEventSubmissionManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsSubmissionQueue; // ivar: _analyticsSubmissionQueue
@property (readonly, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay
@property (readonly, nonatomic) NSNumber *preferredOverlayIndex; // ivar: _preferredOverlayIndex
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter; // ivar: _sleepChartFormatter
@property (readonly, nonatomic) NSObject<HKSleepDataSourceProvider> *sleepDataSourceProvider; // ivar: _sleepDataSourceProvider
@property (readonly) Class superclass;


-(BOOL)supportsShowAllFilters;
-(id)_aFibBurdenSeriesForTimeScope:(NSInteger)arg0 displayType:(id)arg1 mode:(NSInteger)arg2 applicationItems:(id)arg3 ;
-(id)_contextItemOrder;
-(id)_displayTypeForOverlayContextItem:(NSUInteger)arg0 ;
-(id)_generateAFibBurdenDisplayTypeWithApplicationItems:(id)arg0 mode:(NSInteger)arg1 ;
-(id)_generateOverlayContextsWithPrimaryDisplayType:(id)arg0 sleepDataSourceProvider:(id)arg1 sleepChartFormatter:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 ;
-(id)_infographicViewControllerForDisplayType:(id)arg0 secondaryDisplayType:(id)arg1 addDataViewControllerProvider:(id)arg2 healthStore:(id)arg3 ;
-(id)_lifeFactorViewControllerForKey:(id)arg0 logButtonAction:(id)arg1 ;
-(id)_overlayContextForOverlayContextItem:(NSUInteger)arg0 sleepDataSourceProvider:(id)arg1 sleepChartFormatter:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 ;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 sleepDataSourceProvider:(id)arg3 sleepChartFormatter:(id)arg4 preferredOverlay:(NSInteger)arg5 addDataViewControllerProvider:(id)arg6 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 containerIndex:(NSInteger)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)showAllFiltersButtonTitle;
-(id)stringForValueRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(void)contextView:(id)arg0 didTapOnInfoButtonAtIndex:(NSInteger)arg1 ;
-(void)didChangeFromContextItem:(id)arg0 toContextItem:(id)arg1 ;
-(void)processSelectedRangeData:(id)arg0 displayType:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif