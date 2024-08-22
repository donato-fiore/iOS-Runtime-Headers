// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISWIPEANIMATIONFACTORY_H
#define _UISWIPEANIMATIONFACTORY_H


#import <Foundation/Foundation.h>


@interface _UISwipeAnimationFactory : NSObject



+(id)_animatorForDuration:(CGFloat)arg0 initialVelocity:(struct CGVector )arg1 shouldLayoutSubviews:(BOOL)arg2 ;
+(id)_animatorForStiffnessFactor:(CGFloat)arg0 initialVelocity:(struct CGVector )arg1 ;
+(id)animatorForCollapse;
+(id)animatorForCollapseWithAdditivelyAnimatedViews:(id)arg0 ;
+(id)animatorForGenericUpdates;
+(id)animatorForMoveWithOccurrence:(id)arg0 ;
+(id)animatorForScanlineCollapse;
+(id)animatorForTentativeWithOccurrence:(id)arg0 ;
+(id)animatorForTentativeWithOccurrence:(id)arg0 additivelyAnimatedViews:(id)arg1 ;


@end


#endif