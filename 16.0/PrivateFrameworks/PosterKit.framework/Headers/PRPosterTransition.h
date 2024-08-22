// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERTRANSITION_H
#define PRPOSTERTRANSITION_H

@class NSArray, BSAnimationSettings, FBSSceneSettingsDiff;

#import <Foundation/Foundation.h>


@interface PRPosterTransition : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (nonatomic) BOOL contentSignificantlyChanged; // ivar: _contentSignificantlyChanged
@property (nonatomic) FBSSceneSettingsDiff *settingsDiff; // ivar: _settingsDiff
@property (nonatomic) NSUInteger significantEvent; // ivar: _significantEvent


-(BOOL)fromWakeTimer;


@end


#endif