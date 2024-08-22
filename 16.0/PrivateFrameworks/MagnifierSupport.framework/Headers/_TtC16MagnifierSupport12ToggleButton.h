// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT12TOGGLEBUTTON_H
#define _TTC16MAGNIFIERSUPPORT12TOGGLEBUTTON_H

@class UIControl;



@interface _TtC16MagnifierSupport12ToggleButton : UIControl {
    ? isOn;
    ? isGlowing;
    ? $__lazy_storage_$_label;
    ? peopleDetectionGlowSubscription;
    ? doorDetectionGlowSubscription;
    ? detectionModeGlowSubscription;
    ? imageCaptionGlowSubscription;
    ? focusLockGlowSubscription;
    ? freezeFrameReviewSubscription;
    ? clickInteraction;
    ? config;
    ? $__lazy_storage_$_internalButton;
    ? delegate;
    ? isExpanded;
    ? control;
    ? isDimmed;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTap:(id)arg0 ;
-(void)labelTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;


@end


#endif