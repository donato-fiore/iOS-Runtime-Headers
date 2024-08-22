// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBANIMATIONUTILITIES_H
#define SBANIMATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface SBAnimationUtilities : NSObject



+(CGFloat)adjustedRotationAnimationDurationForDuration:(CGFloat)arg0 fromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 ;
+(id)animationSettingsForRotationFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
+(id)animationSettingsForRotationFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 withContext:(id)arg2 ;


@end


#endif