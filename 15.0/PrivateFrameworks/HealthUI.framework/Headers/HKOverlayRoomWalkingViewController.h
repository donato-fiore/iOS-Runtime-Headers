// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYROOMWALKINGVIEWCONTROLLER_H
#define HKOVERLAYROOMWALKINGVIEWCONTROLLER_H

@class NSNumber, NSString, NSMutableArray;


#import "HKOverlayRoomViewController.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
    NSString *_quantityTypeIdentifier;
    NSMutableArray *_contextDelegates;
    NSInteger _preferredOverlay;
    HKChartSummaryTrendModel *_trendModel;
}




-(id)_buildAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_buildGranularAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_buildWalkingAverageDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 ;
-(id)contextSectionsForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 identifier:(id)arg3 preferredOverlay:(NSInteger)arg4 trendModel:(id)arg5 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)showAllFiltersButtonTitle;
-(void)viewDidLoad;


@end


#endif