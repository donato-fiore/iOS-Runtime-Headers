// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSPRESENTATIONCONTROLLER_H
#define MEDIACONTROLSPRESENTATIONCONTROLLER_H

@class UIPreviewPresentationController, NSString, MTMaterialView, UIView;
@protocol UIGestureRecognizerDelegate;



@interface MediaControlsPresentationController : UIPreviewPresentationController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (weak, nonatomic) UIView *presentingView; // ivar: _presentingView
@property (nonatomic) CGPoint sourcePoint; // ivar: _sourcePoint
@property (readonly) Class superclass;


+(id)_backgroundEffectForTraitCollection:(id)arg0 interactive:(BOOL)arg1 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_dismissTap:(id)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif