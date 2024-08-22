// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARTRANSITIONCONTEXTPUSH_H
#define _UINAVIGATIONBARTRANSITIONCONTEXTPUSH_H

@class UINavigationBarTransitionContext;



@interface _UINavigationBarTransitionContextPush : UINavigationBarTransitionContext {
    CGRect _endingNewTitleViewFrame;
    CGRect _endingNewBackButtonFrame;
    CGRect _endingBackIndicatorViewFrame;
    CGSize _titleTransitionDistance;
}




-(id)viewUsingEaseOutCurve;
-(int)transition;
-(void)_animateBackgroundView;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_animateScaleTransition;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg0 invalidLayout:(id)arg1 ;
-(void)_prepareBackgroundView;
-(void)_prepareContentView;
-(void)_prepareLargeTitleView;
-(void)_prepareScaleTransition;
-(void)_prepareSearchBar;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;


@end


#endif