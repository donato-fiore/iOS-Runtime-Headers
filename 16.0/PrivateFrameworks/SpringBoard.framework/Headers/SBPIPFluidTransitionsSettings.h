// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPFLUIDTRANSITIONSSETTINGS_H
#define SBPIPFLUIDTRANSITIONSSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBPIPFluidTransitionsSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *sourceClippingFluidBehavior; // ivar: _sourceClippingFluidBehavior
@property (retain, nonatomic) SBFFluidBehaviorSettings *targetClippingFluidBehavior; // ivar: _targetClippingFluidBehavior


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif