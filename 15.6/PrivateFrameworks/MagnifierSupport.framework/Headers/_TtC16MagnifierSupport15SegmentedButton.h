// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT15SEGMENTEDBUTTON_H
#define _TTC16MAGNIFIERSUPPORT15SEGMENTEDBUTTON_H

@class UIView;



@interface _TtC16MagnifierSupport15SegmentedButton : UIView {
    ? isGlowing;
    ? glowSubscription;
    ? clickInteraction;
    ? expandsWithClickInteractionOnly;
    ? config;
    ? delegate;
    ? $__lazy_storage_$_segmentedControl;
    ? $__lazy_storage_$_internalButton;
    ? isExpanded;
    ? control;
    ? isDimmed;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didSelectSegment:(id)arg0 ;
-(void)didTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;


@end


#endif