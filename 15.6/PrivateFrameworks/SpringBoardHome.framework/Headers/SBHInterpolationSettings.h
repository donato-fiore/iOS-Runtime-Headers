// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHINTERPOLATIONSETTINGS_H
#define SBHINTERPOLATIONSETTINGS_H

@class PTSettings;



@interface SBHInterpolationSettings : PTSettings

@property (nonatomic) CGFloat lowerBoundFactor; // ivar: _lowerBoundFactor
@property (nonatomic) CGFloat upperBoundFactor; // ivar: _upperBoundFactor


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif