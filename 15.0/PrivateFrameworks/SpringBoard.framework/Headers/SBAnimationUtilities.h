// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBANIMATIONUTILITIES_H
#define SBANIMATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface SBAnimationUtilities : NSObject



+(CGFloat)adjustedRotationAnimationDurationForDuration:(CGFloat)arg0 fromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 ;
+(id)animationSettingsForRotationFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;


@end


#endif