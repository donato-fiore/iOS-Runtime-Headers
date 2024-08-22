// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFACCOUNTMANAGERPLATTERWITHDECLINEBUTTONCELL_H
#define SFACCOUNTMANAGERPLATTERWITHDECLINEBUTTONCELL_H

@class UITableViewCell, UIImageView, UILabel, UIStackView, UIButton, NSLayoutConstraint;
@protocol SFAccountManagerPlatterWithDeclineButtonCellDelegate;



@interface SFAccountManagerPlatterWithDeclineButtonCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_labelStackView;
    UIButton *_declineButton;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
}


@property (weak, nonatomic) NSObject<SFAccountManagerPlatterWithDeclineButtonCellDelegate> *delegate; // ivar: _delegate


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_declineButtonPressed:(id)arg0 ;
-(void)setImageViewDiameter:(NSUInteger)arg0 ;
-(void)setTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;


@end


#endif