// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOGINAPPCONTAINERVIEW_H
#define SBLOGINAPPCONTAINERVIEW_H

@class UIView, NSMutableSet, CSBatteryChargingView, SBLockScreenDeviceInformationTextView, _UILegibilitySettings;


#import "SBLoginAppContainerOverlayWrapperView.h"

@interface SBLoginAppContainerView : UIView {
    NSMutableSet *_contentHiddenRequesters;
}


@property (retain, nonatomic) CSBatteryChargingView *batteryChargingView; // ivar: _batteryChargingView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) SBLockScreenDeviceInformationTextView *deviceInformationTextView; // ivar: _deviceInformationTextView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIView *pluginView; // ivar: _pluginView
@property (retain, nonatomic) SBLoginAppContainerOverlayWrapperView *thermalWarningView; // ivar: _thermalWarningView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_showOrHidePluginViewAppropriately;
-(void)layoutSubviews;
-(void)setContentHidden:(BOOL)arg0 forRequester:(id)arg1 ;


@end


#endif