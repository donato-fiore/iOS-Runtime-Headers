// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONZOOMSETTINGS_H
#define SBHICONZOOMSETTINGS_H



#import "SBHIconAnimationSettings.h"

@interface SBHIconZoomSettings : SBHIconAnimationSettings

@property (nonatomic) BOOL labelAlphaWithZoom; // ivar: _labelAlphaWithZoom


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif