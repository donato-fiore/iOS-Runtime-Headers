// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT23CONVERSATIONDETAILSVIEW_H
#define _TTC15CONVERSATIONKIT23CONVERSATIONDETAILSVIEW_H

@class UIView, UILabel, UIStackView;



@interface _TtC15ConversationKit23ConversationDetailsView : UIView {
    ? recipe;
    ? $__lazy_storage_$_conversationDetailsVStack;
    ? $__lazy_storage_$_conversationSubtitleHStack;
    ? leadingAccessoryView;
    ? $__lazy_storage_$_conversationTitleLabel;
    ? $__lazy_storage_$_conversationSubtitleLabel;
    ? $__lazy_storage_$_chevronLabel;
    ? conversationSubtitleBadge;
    ? presentationStyle;
}


@property (nonatomic, retain) UILabel *chevronLabel;
@property (nonatomic, retain) UIStackView *conversationDetailsVStack;
@property (nonatomic, retain) UILabel *conversationSubtitleLabel;
@property (nonatomic, retain) UILabel *conversationTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif