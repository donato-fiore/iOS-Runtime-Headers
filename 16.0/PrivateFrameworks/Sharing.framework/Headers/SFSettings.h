// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSETTINGS_H
#define SFSETTINGS_H

@class PTSettings;


#import "SFMagicHeadSettings.h"

@interface SFSettings : PTSettings

@property (retain, nonatomic) SFMagicHeadSettings *magicHeadSettings; // ivar: _magicHeadSettings


+(id)settingsControllerModule;


@end


#endif