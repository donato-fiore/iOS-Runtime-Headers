// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBAPPICONFORCETOUCHDEFAULTS_H
#define SBAPPICONFORCETOUCHDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBAppIconForceTouchDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float animationDurationMultiplier;
@property (nonatomic) BOOL enableUIPreviewInteractionAnimations;
@property (nonatomic) float quickActionAnimationDuration;


-(void)_bindAndRegisterDefaults;


@end


#endif