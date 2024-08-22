// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHUDSETTINGS_H
#define SBHUDSETTINGS_H

@class PTSettings;



@interface SBHUDSettings : PTSettings

@property (nonatomic) float defaultHUDPresentationAnimationDuration; // ivar: _defaultHUDPresentationAnimationDuration


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif