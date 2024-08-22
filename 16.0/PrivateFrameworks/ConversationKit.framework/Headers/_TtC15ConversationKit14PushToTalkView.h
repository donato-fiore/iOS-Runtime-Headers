// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT14PUSHTOTALKVIEW_H
#define _TTC15CONVERSATIONKIT14PUSHTOTALKVIEW_H

@class UIView;



@interface _TtC15ConversationKit14PushToTalkView : UIView {
    ? conversationControlsManager;
    ? leaveButton;
    ? talkButton;
    ? pttSessionDetailsView;
    ? $__lazy_storage_$_leaveLabelButtonView;
    ? $__lazy_storage_$_talkLabelButtonView;
    ? leftMarginLayoutGuide;
    ? rightMarginLayoutGuide;
    ? centerContentLayoutGuide;
    ? cancellables;
    ? alwaysOnDisplayDimmingView;
    ? topDetailContainerMarginConstant;
    ? bottomButtonContainerMarginConstant;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)openPTTApp:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif