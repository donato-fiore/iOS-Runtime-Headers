// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERSETTINGS_H
#define PRPOSTERSETTINGS_H

@class PTSettings;



@interface PRPosterSettings : PTSettings

@property (nonatomic) CGFloat linearWakeDuration; // ivar: _linearWakeDuration
@property (nonatomic) CGFloat wakeDamping; // ivar: _wakeDamping
@property (nonatomic) CGFloat wakeDuration; // ivar: _wakeDuration
@property (nonatomic) CGFloat wakeMass; // ivar: _wakeMass
@property (nonatomic) CGFloat wakeStiffness; // ivar: _wakeStiffness


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif