// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIAPPINSTALLCELL_H
#define PSUIAPPINSTALLCELL_H

@class PSTableCell, NSLayoutConstraint, NSMutableArray, UIImageView, SKUIItemOfferButton, UILabel, UIView;



@interface PSUIAppInstallCell : PSTableCell

@property (retain, nonatomic) NSLayoutConstraint *availableConstraint; // ivar: _availableConstraint
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) SKUIItemOfferButton *installButton; // ivar: _installButton
@property (retain, nonatomic) NSLayoutConstraint *installButtonHeightConstraint; // ivar: _installButtonHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *installButtonWidthConstraint; // ivar: _installButtonWidthConstraint
@property (nonatomic) int installState; // ivar: _installState
@property (retain, nonatomic) NSLayoutConstraint *installedConstraint; // ivar: _installedConstraint
@property (retain, nonatomic) UILabel *installedLabel; // ivar: _installedLabel
@property (retain, nonatomic) UIView *labelContainerView; // ivar: _labelContainerView
@property (retain, nonatomic) NSLayoutConstraint *labelPaddingBottom; // ivar: _labelPaddingBottom
@property (retain, nonatomic) NSLayoutConstraint *labelPaddingTop; // ivar: _labelPaddingTop
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *publisherLabel; // ivar: _publisherLabel


+(id)specifierForAppWithDescription:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateCellWithInstallState;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif