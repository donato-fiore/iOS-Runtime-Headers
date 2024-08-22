// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSBOUNCESETTINGS_H
#define CSBOUNCESETTINGS_H

@class PTSettings;



@interface CSBounceSettings : PTSettings

@property CGFloat elasticity; // ivar: _elasticity
@property CGFloat friction; // ivar: _friction
@property CGFloat gravity; // ivar: _gravity
@property CGFloat maxVelocityAssistance; // ivar: _maxVelocityAssistance
@property CGFloat maxVelocityToAssist; // ivar: _maxVelocityToAssist
@property CGFloat minVelocityToAssist; // ivar: _minVelocityToAssist
@property CGFloat multiplier; // ivar: _multiplier
@property CGFloat resistance; // ivar: _resistance
@property CGFloat velocity; // ivar: _velocity


-(void)setDefaultValues;


@end


#endif