// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONSETTINGS_H
#define SBHICONSETTINGS_H

@class PTSettings, SBFParallaxSettings;



@interface SBHIconSettings : PTSettings

@property (nonatomic) BOOL alwaysHitTestNearestIcon; // ivar: _alwaysHitTestNearestIcon
@property (retain, nonatomic) SBFParallaxSettings *badgeParallaxSettings; // ivar: _badgeParallaxSettings
@property (nonatomic) CGFloat iconHitboxPaddingX; // ivar: _iconHitboxPaddingX
@property (nonatomic) CGFloat iconHitboxPaddingY; // ivar: _iconHitboxPaddingY
@property (retain, nonatomic) SBFParallaxSettings *iconParallaxSettings; // ivar: _iconParallaxSettings
@property (nonatomic) BOOL suppressJitter; // ivar: _suppressJitter


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif