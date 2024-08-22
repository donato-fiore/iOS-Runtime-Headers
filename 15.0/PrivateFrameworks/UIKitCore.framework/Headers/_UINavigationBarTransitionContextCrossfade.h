// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARTRANSITIONCONTEXTCROSSFADE_H
#define _UINAVIGATIONBARTRANSITIONCONTEXTCROSSFADE_H

@class UINavigationBarTransitionContext;


#import "UIView.h"

@interface _UINavigationBarTransitionContextCrossfade : UINavigationBarTransitionContext {
    UIView *_fromCanvasView;
    UIView *_toCanvasView;
}




-(BOOL)shouldPerformTwoPartCrossfadeTransition;
-(CGFloat)contentViewMaxY;
-(int)transition;
-(void)_animateCanvasViews;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg0 invalidLayout:(id)arg1 ;
-(void)_prepareCanvasViews;
-(void)_prepareContentView;
-(void)_prepareLargeTitleView;
-(void)_prepareSearchBar;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;


@end


#endif