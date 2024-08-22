// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGEINAPPPURCHASETABLECELL_H
#define SKUIPRODUCTPAGEINAPPPURCHASETABLECELL_H

@class UILabel, NSString;


#import "SKUITableViewCell.h"
#import "SKUIColorScheme.h"

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *indexString;
@property (copy, nonatomic) NSString *priceString;
@property (copy, nonatomic) NSString *productName;


-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif