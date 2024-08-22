// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWINDOWROTATIONANIMATIONCONTROLLER_H
#define _UIWINDOWROTATIONANIMATIONCONTROLLER_H

@class UIWindowAnimationController;



@interface _UIWindowRotationAnimationController : UIWindowAnimationController

@property (copy, nonatomic) id *animations; // ivar: _animations
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL skipCallbacks; // ivar: _skipCallbacks
@property (nonatomic) BOOL updateStatusBarIfNecessary; // ivar: _updateStatusBarIfNecessary


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)dealloc;


@end


#endif