// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONCONTROLLERVISUALSTYLEIOS_H
#define _UINAVIGATIONCONTROLLERVISUALSTYLEIOS_H

@class UINavigationControllerVisualStyle;


#import "_UINavigationParallaxTransition.h"
#import "_UINavigationInteractiveTransition.h"

@interface _UINavigationControllerVisualStyleIOS : UINavigationControllerVisualStyle {
    _UINavigationParallaxTransition *_transitionController;
    _UINavigationInteractiveTransition *_interactionController;
}




-(BOOL)isUsingParallaxTransition;
-(id)initWithNavigationController:(id)arg0 ;
-(id)interactionController;
-(id)transitionController;
-(void)layoutContainerViewSemanticContentAttributeChanged:(id)arg0 ;
-(void)updateTransitionControllerWithOperation:(NSInteger)arg0 ;


@end


#endif