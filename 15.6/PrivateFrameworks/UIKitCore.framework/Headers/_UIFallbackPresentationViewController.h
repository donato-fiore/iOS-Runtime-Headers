// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFALLBACKPRESENTATIONVIEWCONTROLLER_H
#define _UIFALLBACKPRESENTATIONVIEWCONTROLLER_H



#import "UIApplicationRotationFollowingController.h"
#import "_UIFallbackPresentationWindow.h"
#import "UIWindow.h"

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController {
    _UIFallbackPresentationWindow *_presentationWindow;
}


@property (nonatomic) BOOL hasDismissCompletionHandler; // ivar: _hasDismissCompletionHandler
@property (nonatomic) BOOL hasPreservedKeyboardInputViews; // ivar: _hasPreservedKeyboardInputViews
@property (copy, nonatomic) id *presentationPreparationBlock; // ivar: _presentationPreparationBlock
@property (retain, nonatomic) UIWindow *rotationDecider; // ivar: _rotationDecider


-(BOOL)_canShowWhileLocked;
-(void)_dismissViewControllerWithTransition:(int)arg0 from:(id)arg1 completion:(id)arg2 ;
-(void)_preparePresentationControllerForPresenting:(id)arg0 ;
-(void)_presentViewController:(id)arg0 sendingView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_preserveInputViewsAnimated:(BOOL)arg0 ;
-(void)_restoreInputViewsAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif