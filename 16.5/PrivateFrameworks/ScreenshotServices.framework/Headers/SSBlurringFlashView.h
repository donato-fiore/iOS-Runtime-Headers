// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSBLURRINGFLASHVIEW_H
#define SSBLURRINGFLASHVIEW_H

@class UIViewPropertyAnimator;


#import "SSFlashView.h"
#import "SSBlurView.h"
#import "_SSSFlashSuperColorView.h"

@interface SSBlurringFlashView : SSFlashView {
    id *_completionBlock;
    SSBlurView *_blurView;
    _SSSFlashSuperColorView *_superColorView;
    UIViewPropertyAnimator *_superColorViewOpacityAnimator;
    UIViewPropertyAnimator *_blurViewRadiusAnimator;
    BOOL _isCompletingFlashWithNewTimingParameters;
    BOOL _superColorViewBackgroundColorAnimatorCompleted;
    BOOL _blurViewRadiusAnimatorCompleted;
}




+(CGFloat)expectedAnimationDurationForStyle:(NSUInteger)arg0 ;
-(CGFloat)_cornerRadius;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_blurViewRadiusAnimatorCompleted;
-(void)_runCompletionBlockIfAppropriate;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_superColorViewBackgroundColorAnimatorCompleted;
-(void)flashWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif