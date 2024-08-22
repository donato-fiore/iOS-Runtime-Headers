// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI26CHARTOVERLAYVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI26CHARTOVERLAYVIEWCONTROLLER_H

@class HKOverlayRoomViewController;



@interface _TtC15HealthRecordsUI26ChartOverlayViewController : HKOverlayRoomViewController {
    ? chartDefining;
    ? chartType;
    ? displayTypes;
    ? chartabilityResult;
}




-(BOOL)supportsShowAllFilters;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;


@end


#endif