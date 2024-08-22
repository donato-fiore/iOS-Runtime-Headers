// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOVERLAYROOMCARDIOFITNESSVIEWCONTROLLER_H
#define HKOVERLAYROOMCARDIOFITNESSVIEWCONTROLLER_H

@class NSMutableArray, NSString, HKCardioFitnessLevelData;
@protocol _HKCardioFitnessClassificationContextDelegate, HKCurrentValueViewDataSourceDelegate, HKOverlayRoomTrendModelProviding, HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate;


#import "HKOverlayRoomViewController.h"
#import "HKOverlayContextLocation.h"
#import "HKDisplayType.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomCardioFitnessViewController : HKOverlayRoomViewController <_HKCardioFitnessClassificationContextDelegate, HKCurrentValueViewDataSourceDelegate, HKOverlayRoomTrendModelProviding>



@property (readonly, weak, nonatomic) NSObject<HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (retain, nonatomic) NSMutableArray *contextDelegates; // ivar: _contextDelegates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKCardioFitnessLevelData *initialCardioFitnessLevelData; // ivar: _initialCardioFitnessLevelData
@property (nonatomic) NSUInteger interactiveChartOptions; // ivar: _interactiveChartOptions
@property (retain, nonatomic) HKOverlayContextLocation *preferredContextLocation; // ivar: _preferredContextLocation
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay
@property (retain, nonatomic) HKDisplayType *representativeDisplayType; // ivar: _representativeDisplayType
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


-(BOOL)infographicSupportedForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(NSInteger)_cardioFitnessLevelForPreferredOverlay:(NSInteger)arg0 ;
-(NSInteger)_preferredOverlayForCardioFitnessLevel:(NSInteger)arg0 ;
-(id)_buildCardioFitnessLevelDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 cardioFitnessLevel:(NSInteger)arg3 ;
-(id)_buildTrendContextFromApplicationItems:(id)arg0 overlayChartController:(id)arg1 overlayMode:(NSInteger)arg2 ;
-(id)_configureContextSectionsForFullMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 trendModel:(id)arg3 ;
-(id)_configureContextSectionsForSingleOverlayMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 trendModel:(id)arg3 ;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)getChartSummaryTrendModelToModify;
-(id)infographicViewControllerForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 preferredOverlay:(NSInteger)arg3 analyticsDelegate:(id)arg4 interactiveChartOptions:(NSUInteger)arg5 trendModel:(id)arg6 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 containerIndex:(NSInteger)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)showAllFiltersButtonTitle;
-(id)stringForValueRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(void)contextDidUpdate:(id)arg0 withCardioFitnessLevelData:(id)arg1 ;
-(void)didChangeFromContextItem:(id)arg0 toContextItem:(id)arg1 ;


@end


#endif