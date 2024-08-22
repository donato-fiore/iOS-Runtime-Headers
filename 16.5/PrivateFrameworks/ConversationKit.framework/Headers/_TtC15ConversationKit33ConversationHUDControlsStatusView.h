// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT33CONVERSATIONHUDCONTROLSSTATUSVIEW_H
#define _TTC15CONVERSATIONKIT33CONVERSATIONHUDCONTROLSSTATUSVIEW_H

@class UIView;


#import "_TtC15ConversationKit23ConversationDetailsView.h"

@interface _TtC15ConversationKit33ConversationHUDControlsStatusView : UIView {
    ? recipe;
    ? controlsManager;
    ? context;
    ? menuHostViewController;
    ? presentationStyle;
    ? $__lazy_storage_$_conversationStatusHStack;
    ? $__lazy_storage_$_trailingActionsView;
    ? $__lazy_storage_$_conversationDetailsView;
    ? leadingAccessoryView;
}


@property (nonatomic, retain) _TtC15ConversationKit23ConversationDetailsView *conversationDetailsView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif