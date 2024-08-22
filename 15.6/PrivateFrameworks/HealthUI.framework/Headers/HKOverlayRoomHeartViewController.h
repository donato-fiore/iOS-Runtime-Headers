// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOVERLAYROOMHEARTVIEWCONTROLLER_H
#define HKOVERLAYROOMHEARTVIEWCONTROLLER_H

@class NSNumber, NSString;
@protocol HKOverlayRoomTrendModelProviding;


#import "HKOverlayRoomViewController.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding>

 {
    NSNumber *_preferredOverlayIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


-(NSInteger)_initialPillForPreference:(NSInteger)arg0 ;
-(id)contextSectionsForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)getChartSummaryTrendModelToModify;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 preferredOverlay:(NSInteger)arg3 trendModel:(id)arg4 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif