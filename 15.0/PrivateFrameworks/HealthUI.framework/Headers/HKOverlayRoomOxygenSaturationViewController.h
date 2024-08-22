// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYROOMOXYGENSATURATIONVIEWCONTROLLER_H
#define HKOVERLAYROOMOXYGENSATURATIONVIEWCONTROLLER_H

@class NSNumber, NSMutableArray, UITapGestureRecognizer;


#import "HKOverlayRoomViewController.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomOxygenSaturationViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
    HKChartSummaryTrendModel *_trendModel;
}


@property (retain, nonatomic) NSMutableArray *contextDelegates; // ivar: _contextDelegates
@property (retain, nonatomic) UITapGestureRecognizer *overrideOnboardingRecognizer; // ivar: _overrideOnboardingRecognizer
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay


-(id)_buildAverageDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 ;
-(id)_buildGranularAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_configureContextSectionsForFullMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)_configureContextSectionsForSingleOverlayMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)_createOverrideOnboardingGestureRecognizer;
-(id)_makeAverageContextForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 contextDelegate:(*id)arg3 ;
-(id)_makeLatestContextForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)_makePressureOverlayContextForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 context:(NSUInteger)arg3 contextDelegate:(*id)arg4 ;
-(id)_makeRangeContextForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)_makeSleepContextForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)contextSectionsForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 preferredOverlay:(NSInteger)arg3 trendModel:(id)arg4 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(void)_installOverrideOnboardingGestureRecognizer;
-(void)_overrideOnboardingAction:(id)arg0 ;
-(void)_uninstallOverrideOnboardingGestureRecognizer;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif