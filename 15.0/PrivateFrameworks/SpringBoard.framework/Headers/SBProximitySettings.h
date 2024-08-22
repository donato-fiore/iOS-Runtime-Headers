// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPROXIMITYSETTINGS_H
#define SBPROXIMITYSETTINGS_H



#import "SBUISettings.h"

@interface SBProximitySettings : SBUISettings

@property (nonatomic) CGFloat initialBacklightDebounceDuration; // ivar: _initialBacklightDebounceDuration
@property (nonatomic) CGFloat subsequentBacklightDebounceDuration; // ivar: _subsequentBacklightDebounceDuration


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif