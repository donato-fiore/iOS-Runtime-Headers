// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CSSINGLEBATTERYCHARGINGVIEW_H
#define _CSSINGLEBATTERYCHARGINGVIEW_H

@class UIView, _UIBackdropView, SBUILegibilityLabel, NSArray, NSLayoutConstraint, UIImage, UIImageView;


#import "CSBatteryChargingView.h"
#import "CSBatteryFillView.h"

@interface _CSSingleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    CSBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
    UIImage *_boltImage;
    UIImageView *_boltImageView;
}


@property (nonatomic) CGSize batterySize; // ivar: _batterySize
@property (nonatomic) BOOL horizontalLayoutNeeded; // ivar: _horizontalLayoutNeeded
@property (nonatomic) BOOL includesBoltImage; // ivar: _includesBoltImage


-(BOOL)batteryVisible;
-(CGFloat)_batteryNoseOffset;
-(CGFloat)desiredVisibilityDuration;
-(NSInteger)batteryCount;
-(id)_chargePercentFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutBattery;
-(void)_layoutChargePercentLabel;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setBatteryVisible:(BOOL)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)setPrimaryBatteryText:(id)arg0 forBattery:(id)arg1 ;


@end


#endif