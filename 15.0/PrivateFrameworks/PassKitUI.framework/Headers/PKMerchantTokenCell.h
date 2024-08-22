// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTTOKENCELL_H
#define PKMERCHANTTOKENCELL_H

@class UITableViewCell, UIStackView, UILabel;


#import "PKMerchantTokenIconView.h"

@interface PKMerchantTokenCell : UITableViewCell {
    UIStackView *_stackView;
    PKMerchantTokenIconView *_iconView;
    UILabel *_nameLabel;
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
-(void)updateCellWithMerchantToken:(id)arg0 ;


@end


#endif