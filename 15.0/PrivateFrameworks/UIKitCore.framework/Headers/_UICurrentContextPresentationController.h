// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICURRENTCONTEXTPRESENTATIONCONTROLLER_H
#define _UICURRENTCONTEXTPRESENTATIONCONTROLLER_H



#import "UIPresentationController.h"

@interface _UICurrentContextPresentationController : UIPresentationController



-(BOOL)_mayChildGrabPresentedViewControllerView;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(NSInteger)presentationStyle;
-(id)_firstCurrentContextChildInWindow;
-(struct ? )__sizeClassPair;
-(struct CGRect )_frameOfPresentedViewControllerViewInSuperview;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)transitionDidFinish:(BOOL)arg0 ;


@end


#endif