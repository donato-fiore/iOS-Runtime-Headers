// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONFADEANIMATOR_H
#define SBICONFADEANIMATOR_H

@class UIView;


#import "SBIconAnimator.h"

@interface SBIconFadeAnimator : SBIconAnimator {
    UIView *_crossfadeView;
    BOOL _addedToWindow;
}


@property (nonatomic) BOOL fadesReferenceView; // ivar: _fadesReferenceView


-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithAnimationContainer:(id)arg0 crossfadeView:(id)arg1 ;
-(void)_animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withSharedCompletion:(id)arg2 ;
-(void)_applyAlphaForFraction:(CGFloat)arg0 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;


@end


#endif