// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMNOTESAPPEARANCESETTINGS_H
#define SBSYSTEMNOTESAPPEARANCESETTINGS_H

@class PTSettings;



@interface SBSystemNotesAppearanceSettings : PTSettings

@property (nonatomic) CGFloat platterTintAlpha; // ivar: _platterTintAlpha
@property (nonatomic) CGFloat platterTintBlue; // ivar: _platterTintBlue
@property (nonatomic) CGFloat platterTintGreen; // ivar: _platterTintGreen
@property (nonatomic) CGFloat platterTintRed; // ivar: _platterTintRed


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif