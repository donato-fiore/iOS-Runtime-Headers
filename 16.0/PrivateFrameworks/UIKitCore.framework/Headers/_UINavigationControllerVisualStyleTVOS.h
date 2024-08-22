// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONCONTROLLERVISUALSTYLETVOS_H
#define _UINAVIGATIONCONTROLLERVISUALSTYLETVOS_H

@class UINavigationControllerVisualStyle;


#import "_UINavigationCrossfadeAnimator.h"

@interface _UINavigationControllerVisualStyleTVOS : UINavigationControllerVisualStyle {
    _UINavigationCrossfadeAnimator *_transitionController;
}




-(BOOL)isUsingParallaxTransition;
-(id)initWithNavigationController:(id)arg0 ;
-(id)transitionController;


@end


#endif