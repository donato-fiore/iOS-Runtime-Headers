// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICFULLSCREENBLURPRESENTATIONCONTROLLER_H
#define SUICFULLSCREENBLURPRESENTATIONCONTROLLER_H

@class UIPresentationController, _UIBackdropView;



@interface SUICFullScreenBlurPresentationController : UIPresentationController {
    _UIBackdropView *_fullScreenBlurView;
}


@property (nonatomic) NSUInteger blurStyle;


-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 blurStyle:(NSUInteger)arg2 ;
-(void)_stageViewsForFadeIn;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif