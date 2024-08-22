// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUICONTENTMODULEDETAILPRESENTATIONCONTROLLER_H
#define CCUICONTENTMODULEDETAILPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIViewController, NSString;
@protocol UIGestureRecognizerDelegate;



@interface CCUIContentModuleDetailPresentationController : UIPresentationController <UIGestureRecognizerDelegate>

 {
    UIViewController *_anchoringViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(CGFloat)_preferredExpandedContentHeightForViewController:(id)arg0 ;
-(CGFloat)_preferredExpandedContentWidthForViewController:(id)arg0 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 anchoringViewController:(id)arg2 ;
-(void)_handleBackgroundTap:(id)arg0 ;
-(void)containerViewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif