// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSBATTERYCHARGINGVIEW_H
#define CSBATTERYCHARGINGVIEW_H

@class CSProminentLayoutController, _UILegibilitySettings;


#import "CSCoverSheetViewBase.h"

@interface CSBatteryChargingView : CSCoverSheetViewBase {
    CSProminentLayoutController *_prominentLayoutController;
}


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
-(CGFloat)_batteryHeight;
-(id)_chargePercentFont;
-(id)_updateChargeString:(id)arg0 oldLabel:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_batteryCenter;
-(struct CGRect )_tightFrameForElement:(NSUInteger)arg0 ;
-(struct CGSize )_imageViewScalingCorrectedBatterySize:(struct CGSize )arg0 ;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setPrimaryBatteryText:(id)arg0 forBattery:(id)arg1 ;
-(void)setSecondaryBatteryText:(id)arg0 forBattery:(id)arg1 ;


@end


#endif