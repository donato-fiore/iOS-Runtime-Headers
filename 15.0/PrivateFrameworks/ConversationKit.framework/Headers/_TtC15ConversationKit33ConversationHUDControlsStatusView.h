// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT33CONVERSATIONHUDCONTROLSSTATUSVIEW_H
#define _TTC15CONVERSATIONKIT33CONVERSATIONHUDCONTROLSSTATUSVIEW_H

@class UIView, UIStackView, UILabel;



@interface _TtC15ConversationKit33ConversationHUDControlsStatusView : UIView {
    ? recipe;
    ? controlsManager;
    ? $__lazy_storage_$_conversationStatusHStack;
    ? $__lazy_storage_$_conversationDetailsVStack;
    ? $__lazy_storage_$_conversationSubtitleHStack;
    ? leadingAccessoryView;
    ? $__lazy_storage_$_conversationTitleLabel;
    ? $__lazy_storage_$_conversationSubtitleLabel;
}


@property (nonatomic, retain) UIStackView *conversationDetailsVStack;
@property (nonatomic, retain) UILabel *conversationSubtitleLabel;
@property (nonatomic, retain) UILabel *conversationTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif