// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOVERLAYROOMAFIBBURDENSLEEPCONTEXT_H
#define HKOVERLAYROOMAFIBBURDENSLEEPCONTEXT_H



#import "HKOverlayRoomStackedContext.h"

@interface HKOverlayRoomAFibBurdenSleepContext : HKOverlayRoomStackedContext



-(id)_generateNamedDataSourceWithTemplateDisplayType:(id)arg0 overlayChartController:(id)arg1 applicationItems:(id)arg2 ;
-(id)_generateSleepSeriesWithTemplateDisplayType:(id)arg0 applicationItems:(id)arg1 ;
-(id)_generateStackedDisplayTypeWithApplicationItems:(id)arg0 templateDisplayType:(id)arg1 overlayChartController:(id)arg2 sleepChartFormatter:(id)arg3 ;
-(id)initWithApplicationItems:(id)arg0 overlayChartController:(id)arg1 sleepChartFormatter:(id)arg2 primaryDisplayType:(id)arg3 currentCalendarOverride:(id)arg4 ;


@end


#endif