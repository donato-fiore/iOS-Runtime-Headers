// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMUTABLESWITCHERANIMATIONATTRIBUTES_H
#define SBMUTABLESWITCHERANIMATIONATTRIBUTES_H

@class SBFFluidBehaviorSettings;


#import "SBSwitcherAnimationAttributes.h"

@interface SBMutableSwitcherAnimationAttributes : SBSwitcherAnimationAttributes

@property (retain, nonatomic) SBFFluidBehaviorSettings *clippingSettings;
@property (nonatomic) NSInteger clippingUpdateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusSettings;
@property (nonatomic) NSInteger cornerRadiusUpdateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings;
@property (nonatomic) NSInteger layoutUpdateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *meshSettings;
@property (nonatomic) NSInteger meshUpdateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings;
@property (nonatomic) NSInteger opacityUpdateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *positionSettings;
@property (nonatomic) NSInteger positionUpdateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings;
@property (nonatomic) NSInteger scaleUpdateMode;
@property (nonatomic) NSInteger titleAndIconOpacityUpdateMode;
@property (nonatomic) NSInteger updateMode;




@end


#endif