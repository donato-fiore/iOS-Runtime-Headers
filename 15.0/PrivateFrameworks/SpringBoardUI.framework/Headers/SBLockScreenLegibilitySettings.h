// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENLEGIBILITYSETTINGS_H
#define SBLOCKSCREENLEGIBILITYSETTINGS_H

@class UILegibilitySettings, UIColor;



@interface SBLockScreenLegibilitySettings : UILegibilitySettings

@property (retain, nonatomic) UIColor *backgroundColorHint; // ivar: _backgroundColorHint
@property (nonatomic) BOOL vibrancyDisabled; // ivar: _vibrancyDisabled


+(id)defaultSettings;


@end


#endif