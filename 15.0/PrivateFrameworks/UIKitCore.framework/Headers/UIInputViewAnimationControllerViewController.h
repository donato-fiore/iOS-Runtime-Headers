// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWANIMATIONCONTROLLERVIEWCONTROLLER_H
#define UIINPUTVIEWANIMATIONCONTROLLERVIEWCONTROLLER_H

@class NSString;
@protocol UIInputViewAnimationController, UIViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning_Keyboard;

#import <Foundation/Foundation.h>

#import "UIInputViewSetPlacement.h"

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController>

 {
    id<UIViewControllerContextTransitioning> *_context;
    id<UIViewControllerAnimatedTransitioning_Keyboard> *_animator;
    UIInputViewSetPlacement *_endPlacement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)controllerWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)prepareAnimationWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)performAnimationWithHost:(id)arg0 context:(id)arg1 ;


@end


#endif