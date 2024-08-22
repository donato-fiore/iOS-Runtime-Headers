// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONANIMATIONSETTINGS_H
#define SBHICONANIMATIONSETTINGS_H

@class PTSettings, SBFAnimationSettings;



@interface SBHIconAnimationSettings : PTSettings

@property (retain, nonatomic) SBFAnimationSettings *centralAnimationSettings; // ivar: _centralAnimationSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif