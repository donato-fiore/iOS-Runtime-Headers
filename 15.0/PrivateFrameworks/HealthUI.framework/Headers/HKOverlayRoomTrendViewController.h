// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYROOMTRENDVIEWCONTROLLER_H
#define HKOVERLAYROOMTRENDVIEWCONTROLLER_H

@class NSDictionary;


#import "HKOverlayRoomViewController.h"
#import "HKDisplayType.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomTrendViewController : HKOverlayRoomViewController

@property (retain, nonatomic) HKDisplayType *baseChartDisplayType; // ivar: _baseChartDisplayType
@property (readonly, nonatomic) NSInteger overrideFirstWeekday; // ivar: _overrideFirstWeekday
@property (readonly, nonatomic) NSInteger startingTimeScope; // ivar: _startingTimeScope
@property (retain, nonatomic) NSDictionary *timeScopeRanges; // ivar: _timeScopeRanges
@property (retain, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel
@property (retain, nonatomic) HKOverlayRoomViewController *wrappedOverlayViewController; // ivar: _wrappedOverlayViewController


-(BOOL)supportsShowAllFilters;
-(id)_primaryContextForApplicationItems:(id)arg0 overlayChartController:(id)arg1 ;
-(id)_primarySectionForApplicationItems:(id)arg0 overlayChartController:(id)arg1 ;
-(id)contextSectionsForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithBaseChartDisplayType:(id)arg0 trendModel:(id)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 timeScopeRanges:(id)arg4 initialTimeScope:(NSInteger)arg5 wrappedOverlay:(id)arg6 overrideFirstWeekday:(NSInteger)arg7 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;


@end


#endif