// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMAFIBBURDENSLEEPCONTEXT_H
#define HKOVERLAYROOMAFIBBURDENSLEEPCONTEXT_H



#import "HKOverlayRoomStackedContext.h"

@interface HKOverlayRoomAFibBurdenSleepContext : HKOverlayRoomStackedContext



-(id)_generateNamedDataSourceWithSleepDataSourceProvider:(id)arg0 templateDisplayType:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 ;
-(id)_generateSleepSeriesWithTemplateDisplayType:(id)arg0 applicationItems:(id)arg1 ;
-(id)_generateStackedDisplayTypeWithApplicationItems:(id)arg0 templateDisplayType:(id)arg1 overlayChartController:(id)arg2 sleepDataSourceProvider:(id)arg3 sleepChartFormatter:(id)arg4 ;
-(id)initWithApplicationItems:(id)arg0 overlayChartController:(id)arg1 sleepDataSourceProvider:(id)arg2 sleepChartFormatter:(id)arg3 primaryDisplayType:(id)arg4 currentCalendarOverride:(id)arg5 ;


@end


#endif