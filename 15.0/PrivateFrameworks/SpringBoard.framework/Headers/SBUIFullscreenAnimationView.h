// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIFULLSCREENANIMATIONVIEW_H
#define SBUIFULLSCREENANIMATIONVIEW_H

@class UIView;
@protocol SBUIFullscreenAnimationViewDelegate;



@interface SBUIFullscreenAnimationView : UIView

@property (readonly, nonatomic) BOOL animating; // ivar: _animating
@property (weak, nonatomic) NSObject<SBUIFullscreenAnimationViewDelegate> *delegate; // ivar: _delegate


-(void)_animationBegan;
-(void)_animationEnded;
-(void)_notifyDelegateAnimationBeganWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(void)_notifyDelegateThatAnimationIsDone;
-(void)beginTransition;
-(void)endTransition;
-(void)setFromView:(id)arg0 ;
-(void)setToView:(id)arg0 ;


@end


#endif