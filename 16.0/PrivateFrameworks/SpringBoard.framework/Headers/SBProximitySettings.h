// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPROXIMITYSETTINGS_H
#define SBPROXIMITYSETTINGS_H



#import "SBUISettings.h"

@interface SBProximitySettings : SBUISettings

@property (nonatomic) BOOL allowTouchesInJindoWhenObjectInProximity; // ivar: _allowTouchesInJindoWhenObjectInProximity
@property (nonatomic) BOOL colorScreenEdgeWhenObjectInProximity; // ivar: _colorScreenEdgeWhenObjectInProximity
@property (nonatomic) CGFloat initialBacklightDebounceDuration; // ivar: _initialBacklightDebounceDuration
@property (nonatomic) CGFloat nonTelephonyTouchAllowanceGracePeriodDuration; // ivar: _nonTelephonyTouchAllowanceGracePeriodDuration
@property (nonatomic) CGFloat subsequentBacklightDebounceDuration; // ivar: _subsequentBacklightDebounceDuration


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif