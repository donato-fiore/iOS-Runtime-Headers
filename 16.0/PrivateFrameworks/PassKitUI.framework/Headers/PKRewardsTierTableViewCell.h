// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSTIERTABLEVIEWCELL_H
#define PKREWARDSTIERTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIButton, NSString, UIImageView;
@protocol PKRewardsTierTableViewCellDelegate;



@interface PKRewardsTierTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_linkButton;
    BOOL _isTemplateLayout;
}


@property (weak, nonatomic) NSObject<PKRewardsTierTableViewCellDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *link; // ivar: _link
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) UIImageView *tierIcon; // ivar: _tierIcon
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif