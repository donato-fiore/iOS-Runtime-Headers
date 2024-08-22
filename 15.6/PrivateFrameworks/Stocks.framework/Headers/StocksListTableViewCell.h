// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOCKSLISTTABLEVIEWCELL_H
#define STOCKSLISTTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIImageView, UIView;


#import "StocksListBoxView.h"
#import "Stock.h"

@interface StocksListTableViewCell : UITableViewCell {
    UILabel *_symbolLabel;
    UILabel *_priceLabel;
    UILabel *_boxLabel;
    StocksListBoxView *_boxView;
    UIImageView *_changeSignView;
    UIView *_rowSeparatorView;
}


@property (nonatomic) NSInteger rowDataType; // ivar: _rowDataType
@property (nonatomic) BOOL shouldStackView; // ivar: _shouldStackView
@property (retain, nonatomic) Stock *stock; // ivar: _stock


+(CGFloat)cellHeightForStackStatus:(BOOL)arg0 ;
-(id)changeSignNegative:(BOOL)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )changeButtonRect;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBoxContentsAlpha:(CGFloat)arg0 includeChangeSign:(BOOL)arg1 ;
-(void)setBoxValueFromRowDataType;
-(void)setShowsRowSeparator:(BOOL)arg0 ;
-(void)updateValues;


@end


#endif