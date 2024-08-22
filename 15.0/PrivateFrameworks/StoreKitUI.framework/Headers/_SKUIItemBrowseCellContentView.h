// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SKUIITEMBROWSECELLCONTENTVIEW_H
#define _SKUIITEMBROWSECELLCONTENTVIEW_H

@class UIView, UILabel;


#import "SKUICellImageView.h"

@interface _SKUIItemBrowseCellContentView : UIView

@property (retain, nonatomic) UILabel *indexNumberLabel; // ivar: _indexNumberLabel
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) SKUICellImageView *userRatingImageView; // ivar: _userRatingImageView
@property (retain, nonatomic) UILabel *userRatingLabel; // ivar: _userRatingLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif