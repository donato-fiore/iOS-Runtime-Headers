// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMERCHANTTOKENDETAILHEADERCELL_H
#define PKMERCHANTTOKENDETAILHEADERCELL_H

@class UITableViewCell, UIStackView, UILabel;


#import "PKMerchantTokenIconView.h"

@interface PKMerchantTokenDetailHeaderCell : UITableViewCell {
    UIStackView *_stackView;
    PKMerchantTokenIconView *_iconView;
    UILabel *_nameLabel;
    UILabel *_secondaryLabel;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpIconView;
-(void)_setUpIconViewConstraints;
-(void)_setUpNameLabel;
-(void)_setUpSelf;
-(void)_setUpStackView;
-(void)_setUpStackViewConstraints;
-(void)_setUpViews;
-(void)hideMerchantIcon;
-(void)updateCellWithMerchantToken:(id)arg0 ;


@end


#endif