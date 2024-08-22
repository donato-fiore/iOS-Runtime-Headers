// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT14SCRUBBERBUTTON_H
#define _TTC16MAGNIFIERSUPPORT14SCRUBBERBUTTON_H

@class UIView;



@interface _TtC16MagnifierSupport14ScrubberButton : UIView {
    ? config;
    ? delegate;
    ? $__lazy_storage_$_internalButton;
    ? $__lazy_storage_$_scrubber;
    ? control;
    ? isExpanded;
    ? isGlowing;
    ? isDimmed;
    ? glowSubscription;
    ? freezeFrameReviewSubscription;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;


@end


#endif