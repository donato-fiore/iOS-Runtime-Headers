// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSLEEPTRENDCONTEXT_H
#define _HKSLEEPTRENDCONTEXT_H

@protocol HKOverlaySleepRoomContextChangeDelegate;


#import "HKOverlayRoomTrendContext.h"
#import "HKDisplayType.h"

@interface _HKSleepTrendContext : HKOverlayRoomTrendContext

@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate; // ivar: _contextChangeDelegate


-(BOOL)unselectedContextShouldUseContextBaseType;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)initWithBaseDisplayType:(id)arg0 trendModel:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 overlayMode:(NSInteger)arg4 contextChangeDelegate:(id)arg5 ;
-(void)overlayStateWillChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;


@end


#endif