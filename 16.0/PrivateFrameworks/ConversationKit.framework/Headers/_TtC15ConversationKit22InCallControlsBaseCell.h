// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT22INCALLCONTROLSBASECELL_H
#define _TTC15CONVERSATIONKIT22INCALLCONTROLSBASECELL_H

@class UICollectionViewListCell, UILabel;


#import "_TtC15ConversationKit19InCallControlButton.h"

@interface _TtC15ConversationKit22InCallControlsBaseCell : UICollectionViewListCell {
    ? isAccessiblityConstraintsEnabled;
    ? nameLabelFirstBaselineLayoutConstraint;
    ? nameLabelLastBaselineLayoutConstraint;
    ? isEnabled;
    ? delegate;
}


@property (nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *button; // ivar: button
@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapButton:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif