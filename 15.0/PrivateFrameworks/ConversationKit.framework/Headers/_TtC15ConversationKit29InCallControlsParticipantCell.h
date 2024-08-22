// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT29INCALLCONTROLSPARTICIPANTCELL_H
#define _TTC15CONVERSATIONKIT29INCALLCONTROLSPARTICIPANTCELL_H

@class UICollectionViewListCell, UILabel;


#import "_TtC15ConversationKit19InCallControlButton.h"

@interface _TtC15ConversationKit29InCallControlsParticipantCell : UICollectionViewListCell {
    ? statusIcon;
    ? avatarView;
    ? viewModel;
    ? cameraSymbolImage;
    ? copresenceSymbolImage;
    ? linkSymbolImage;
    ? $__lazy_storage_$_lmiApproveButton;
    ? $__lazy_storage_$_lmiRejectButton;
    ? $__lazy_storage_$_kickMemberButton;
    ? $__lazy_storage_$_contentViews;
    ? callDelegate;
    ? delegate;
}


@property (nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *actionButton; // ivar: actionButton
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *kickMemberButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiApproveButton;
@property (nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiRejectButton;
@property (nonatomic, readonly) UILabel *nameLabel; // ivar: nameLabel
@property (nonatomic, readonly) UILabel *subtitleLabel; // ivar: subtitleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif