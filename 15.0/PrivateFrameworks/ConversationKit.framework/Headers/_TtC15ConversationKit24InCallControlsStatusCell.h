// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT24INCALLCONTROLSSTATUSCELL_H
#define _TTC15CONVERSATIONKIT24INCALLCONTROLSSTATUSCELL_H

@class UICollectionViewListCell, UILabel;


#import "_TtC15ConversationKit19InCallControlButton.h"

@interface _TtC15ConversationKit24InCallControlsStatusCell : UICollectionViewListCell {
    ? viewModel;
    ? $__lazy_storage_$_iconImageView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_conversationStatusHStack;
    ? $__lazy_storage_$_conversationStatusDetailsVStack;
}


@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *actionButton; // ivar: actionButton
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif