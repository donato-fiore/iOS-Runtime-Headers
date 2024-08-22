// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOVERLAYROOMBLOODGLUCOSEVIEWCONTROLLER_H
#define HKOVERLAYROOMBLOODGLUCOSEVIEWCONTROLLER_H

@class NSNumber, NSMutableArray, NSString;
@protocol HKOverlayRoomTrendModelProviding;


#import "HKOverlayRoomViewController.h"
#import "HKChartSummaryTrendModel.h"
#import "HKChartCache.h"

@interface HKOverlayRoomBloodGlucoseViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding>

 {
    NSNumber *_preferredOverlayIndex;
    HKChartSummaryTrendModel *_trendModel;
}


@property (retain, nonatomic) NSMutableArray *contextDelegates; // ivar: _contextDelegates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKChartCache *percentInRangeChartCache; // ivar: _percentInRangeChartCache
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay
@property (readonly) Class superclass;


+(id)_buildPercentInRangeChartCacheWithApplicationItems:(id)arg0 ;
-(BOOL)_isEnhancedChartingEnabledWithHealthStore:(id)arg0 ;
-(NSInteger)_initialPillForPreference:(NSInteger)arg0 ;
-(id)_buildBloodGlucoseAverageDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 ;
-(id)_buildEuglycemicRangeStringWithApplicationItems:(id)arg0 ;
-(id)_buildGranularAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_buildPercentInRangeDisplayTypeWithApplicationItems:(id)arg0 classification:(NSInteger)arg1 ;
-(id)_buildPercentInRangeOverlayContextSectionWithApplicationItems:(id)arg0 overlayChartController:(id)arg1 ;
-(id)_buildPercentInRangeStackedBarSeriesForClassification:(NSInteger)arg0 ;
-(id)chartOverlayVersion;
-(id)contextSectionsForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)getChartSummaryTrendModelToModify;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 preferredOverlay:(NSInteger)arg3 trendModel:(id)arg4 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;


@end


#endif