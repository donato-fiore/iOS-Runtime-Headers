// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT23PARTICIPANTMONOGRAMVIEW_H
#define _TTC15CONVERSATIONKIT23PARTICIPANTMONOGRAMVIEW_H

@class UIView, UIButton;


#import "_TtC15ConversationKit33ParticipantViewLabelContainerView.h"

@interface _TtC15ConversationKit23ParticipantMonogramView : UIView {
    ? colorStyle;
    ? contactView;
    ? glowClippingView;
    ? glowView;
    ? audioVisualizationView;
    ? isInRoster;
    ? customCornerRadius;
    ? delegate;
    ? participantMonogramViewLayout;
}


@property (nonatomic, retain) UIButton *ringButton; // ivar: ringButton
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *subtitleLabelContainer; // ivar: subtitleLabelContainer
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *titleLabelContainer; // ivar: titleLabelContainer


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapRingButton;
-(void)layoutSubviews;


@end


#endif