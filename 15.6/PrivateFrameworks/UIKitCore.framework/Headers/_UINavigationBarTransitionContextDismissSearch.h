// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARTRANSITIONCONTEXTDISMISSSEARCH_H
#define _UINAVIGATIONBARTRANSITIONCONTEXTDISMISSSEARCH_H

@class UINavigationBarTransitionContext;


#import "UISearchBar.h"

@interface _UINavigationBarTransitionContextDismissSearch : UINavigationBarTransitionContext {
    UISearchBar *_transitioningSearchBar;
}




-(BOOL)_shouldCrossfadeDismissal;
-(int)transition;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;


@end


#endif