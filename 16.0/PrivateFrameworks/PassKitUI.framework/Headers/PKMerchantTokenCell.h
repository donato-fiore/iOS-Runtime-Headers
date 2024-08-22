// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMERCHANTTOKENCELL_H
#define PKMERCHANTTOKENCELL_H

@class UICollectionViewListCell, UIStackView, UILabel;


#import "PKMerchantTokenIconView.h"

@interface PKMerchantTokenCell : UICollectionViewListCell {
    UIStackView *_stackView;
    PKMerchantTokenIconView *_iconView;
    UILabel *_nameLabel;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpConstraints;
-(void)_setUpIconView;
-(void)_setUpIconViewConstraints;
-(void)_setUpNameLabel;
-(void)_setUpSelf;
-(void)_setUpSeparatorConstraints;
-(void)_setUpStackView;
-(void)_setUpStackViewConstraints;
-(void)_setUpViews;
-(void)updateCellWithMerchantToken:(id)arg0 showMerchantIcon:(BOOL)arg1 ;


@end


#endif