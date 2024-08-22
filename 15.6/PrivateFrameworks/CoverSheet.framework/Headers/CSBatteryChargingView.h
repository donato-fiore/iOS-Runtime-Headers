// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBATTERYCHARGINGVIEW_H
#define CSBATTERYCHARGINGVIEW_H

@class _UILegibilitySettings;


#import "CSCoverSheetViewBase.h"

@interface CSBatteryChargingView : CSCoverSheetViewBase

@property (nonatomic) CGFloat alignmentPercent; // ivar: _alignmentPercent
@property (readonly, nonatomic) NSInteger batteryCount;
@property (nonatomic) BOOL batteryVisible;
@property (readonly, nonatomic) CGFloat desiredVisibilityDuration;
@property (readonly, nonatomic) CGFloat horizontalGapBetweenBatteryAndPercentLabel;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings


+(id)batteryChargingRingViewWithConfiguration:(id)arg0 ;
+(id)batteryChargingViewWithDoubleBattery;
+(id)batteryChargingViewWithSingleBattery;
+(id)horizontalBatteryChargingViewForBatterySize:(struct CGSize )arg0 includeBoltImage:(BOOL)arg1 ;
+(id)maskImageNameForChargingBattery;
+(id)maskImageNameForExternalChargingBattery;
+(id)maskImageNameForInternalChargingBattery;
-(CGFloat)_batteryOriginYForBatteryHeight:(CGFloat)arg0 ;
-(id)_chargePercentFont;
-(id)_updateChargeString:(id)arg0 oldLabel:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setPrimaryBatteryText:(id)arg0 forBattery:(id)arg1 ;
-(void)setSecondaryBatteryText:(id)arg0 forBattery:(id)arg1 ;


@end


#endif