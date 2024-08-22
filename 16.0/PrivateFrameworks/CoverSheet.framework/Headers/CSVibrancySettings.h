// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVIBRANCYSETTINGS_H
#define CSVIBRANCYSETTINGS_H

@class PTSettings;



@interface CSVibrancySettings : PTSettings

@property (nonatomic) BOOL boostEnabled; // ivar: _boostEnabled
@property (nonatomic) CGFloat minimumLuminanceDifference; // ivar: _minimumLuminanceDifference
@property (nonatomic) CGFloat naturalEffectTypeStrength; // ivar: _naturalEffectTypeStrength


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif