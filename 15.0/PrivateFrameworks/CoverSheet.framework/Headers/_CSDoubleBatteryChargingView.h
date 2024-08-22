// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CSDOUBLEBATTERYCHARGINGVIEW_H
#define _CSDOUBLEBATTERYCHARGINGVIEW_H

@class UIView, _UIBackdropView, SBUILegibilityLabel, UIImageView;


#import "CSBatteryChargingView.h"
#import "CSBatteryFillView.h"

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    CSBatteryFillView *_internalBatteryFillView;
    CSBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}




-(BOOL)batteryVisible;
-(CGFloat)_batteryTopPadding;
-(CGFloat)_chargingBoltTopOffset;
-(CGFloat)_deviceChargeBaselineOffset;
-(CGFloat)_deviceNameBaselineOffset;
-(CGFloat)_spaceBetweenBatteryImages;
-(CGFloat)desiredVisibilityDuration;
-(NSInteger)batteryCount;
-(id)_chargePercentFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setBatteryVisible:(BOOL)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)setPrimaryBatteryText:(id)arg0 forBattery:(id)arg1 ;
-(void)setSecondaryBatteryText:(id)arg0 forBattery:(id)arg1 ;


@end


#endif