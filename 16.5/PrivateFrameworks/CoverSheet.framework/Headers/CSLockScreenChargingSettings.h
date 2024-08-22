// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLOCKSCREENCHARGINGSETTINGS_H
#define CSLOCKSCREENCHARGINGSETTINGS_H

@class PTSettings;



@interface CSLockScreenChargingSettings : PTSettings

@property (nonatomic) CGFloat accessoryAnimationBlockingDurationAfterBootInSeconds; // ivar: _accessoryAnimationBlockingDurationAfterBootInSeconds
@property (nonatomic) CGFloat accessoryAnimationDelayInMilliseconds; // ivar: _accessoryAnimationDelayInMilliseconds
@property (nonatomic) CGFloat auxiliaryBoltHeight; // ivar: _auxiliaryBoltHeight
@property (nonatomic) CGFloat auxiliaryBoltMaskHeightDifference; // ivar: _auxiliaryBoltMaskHeightDifference
@property (nonatomic) CGFloat brightnessFloor; // ivar: _brightnessFloor
@property (nonatomic) CGFloat omniAccessoryAnimationDelayInMilliseconds; // ivar: _omniAccessoryAnimationDelayInMilliseconds
@property (nonatomic) BOOL shouldFakeA149Attach; // ivar: _shouldFakeA149Attach
@property (nonatomic) BOOL shouldShowMaskForAuxiliaryBattery; // ivar: _shouldShowMaskForAuxiliaryBattery
@property (nonatomic) BOOL shouldUseBrightnessFloor; // ivar: _shouldUseBrightnessFloor
@property (nonatomic) BOOL showWirelessAndAccessoryAnimations; // ivar: _showWirelessAndAccessoryAnimations
@property (nonatomic) BOOL useWhimsicalDesign; // ivar: _useWhimsicalDesign
@property (nonatomic) BOOL warnForIdleDim; // ivar: _warnForIdleDim
@property (nonatomic) NSInteger wiredChargingAnimationType; // ivar: _wiredChargingAnimationType
@property (nonatomic) NSInteger wirelessChargingAnimationType; // ivar: _wirelessChargingAnimationType
@property (nonatomic) CGFloat wirelessChargingDebounceDurationInSeconds; // ivar: _wirelessChargingDebounceDurationInSeconds
@property (nonatomic) CGFloat wirelessChargingFirmwareUpdateDebounceDurationInSeconds; // ivar: _wirelessChargingFirmwareUpdateDebounceDurationInSeconds


+(id)settingsControllerModule;
-(NSInteger)accessoryTypeForAnimationType:(NSInteger)arg0 ;
-(void)setDefaultValues;


@end


#endif