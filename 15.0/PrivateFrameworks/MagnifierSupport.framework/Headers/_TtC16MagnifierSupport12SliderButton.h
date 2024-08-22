// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16MAGNIFIERSUPPORT12SLIDERBUTTON_H
#define _TTC16MAGNIFIERSUPPORT12SLIDERBUTTON_H

@class UIView;
@protocol _UIClickPresentationInteractionDelegate;



@interface _TtC16MagnifierSupport12SliderButton : UIView <_UIClickPresentationInteractionDelegate>

 {
    ? isGlowing;
    ? glowSubscription;
    ? freezeFrameReviewSubscription;
    ? clickInteraction;
    ? config;
    ? delegate;
    ? $__lazy_storage_$_internalButton;
    ? $__lazy_storage_$_slider;
    ? isExpanded;
    ? control;
    ? isDimmed;
}




-(BOOL)clickPresentationInteractionShouldBegin:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg0 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clickPresentationInteractionEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)didTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;


@end


#endif