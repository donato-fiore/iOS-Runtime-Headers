// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT42SYSTEMAPERTUREONGOINGTELEPHONYCONTROLSVIEW_H
#define _TTC15CONVERSATIONKIT42SYSTEMAPERTUREONGOINGTELEPHONYCONTROLSVIEW_H

@class UIView;



@interface _TtC15ConversationKit42SystemApertureOngoingTelephonyControlsView : UIView {
    ? avatarView;
    ? primaryLabel;
    ? secondaryLabel;
    ? durationController;
    ? changeRouteButton;
    ? hangUpButton;
    ? supportsAccessibilityTextSizes;
    ? controlsManager;
    ? context;
    ? contentAlpha;
    ? recipe;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;


@end


#endif