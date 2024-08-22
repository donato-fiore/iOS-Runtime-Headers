// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMRESPIRATORYRATEVIEWCONTROLLER_H
#define HKOVERLAYROOMRESPIRATORYRATEVIEWCONTROLLER_H

@class NSNumber, NSMutableArray, NSString;
@protocol HKOverlayRoomTrendModelProviding;


#import "HKOverlayRoomViewController.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomRespiratoryRateViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding>

 {
    NSNumber *_preferredOverlayIndex;
}


@property (retain, nonatomic) NSMutableArray *contextDelegates; // ivar: _contextDelegates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay
@property (readonly) Class superclass;
@property (retain, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


-(NSInteger)_initialPillForPreference:(NSInteger)arg0 ;
-(id)_buildGranularAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_buildRespiratoryRateAverageDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 ;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)getChartSummaryTrendModelToModify;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 preferredOverlay:(NSInteger)arg3 trendModel:(id)arg4 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 containerIndex:(NSInteger)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;


@end


#endif