// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHHOMEPULLTOSEARCHSETTINGS_H
#define SBHHOMEPULLTOSEARCHSETTINGS_H

@class PTSettings;



@interface SBHHomePullToSearchSettings : PTSettings

@property (nonatomic) CGFloat fluidBehaviorDampingRatio; // ivar: _fluidBehaviorDampingRatio
@property (nonatomic) CGFloat fluidBehaviorResponse; // ivar: _fluidBehaviorResponse
@property (nonatomic) CGFloat libraryFluidBehaviorDampingRatio; // ivar: _libraryFluidBehaviorDampingRatio
@property (nonatomic) CGFloat libraryFluidBehaviorResponse; // ivar: _libraryFluidBehaviorResponse
@property (nonatomic) CGFloat pullGestureBeganFromTopLeeway; // ivar: _pullGestureBeganFromTopLeeway
@property (nonatomic) CGFloat pullTransitionActivationThreshold; // ivar: _pullTransitionActivationThreshold
@property (nonatomic) CGFloat pullTransitionDistance; // ivar: _pullTransitionDistance


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif