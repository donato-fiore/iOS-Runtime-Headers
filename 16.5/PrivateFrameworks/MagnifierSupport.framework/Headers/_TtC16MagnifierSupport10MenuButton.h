// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT10MENUBUTTON_H
#define _TTC16MAGNIFIERSUPPORT10MENUBUTTON_H

@class UIControl;



@interface _TtC16MagnifierSupport10MenuButton : UIControl {
    ? $__lazy_storage_$_label;
    ? freezeFrameReviewSubscription;
    ? menuButtonSubscription;
    ? clickInteraction;
    ? config;
    ? $__lazy_storage_$_internalButton;
    ? delegate;
    ? isExpanded;
    ? control;
    ? isDimmed;
    ? isGlowing;
    ? cameraMenu;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;


@end


#endif