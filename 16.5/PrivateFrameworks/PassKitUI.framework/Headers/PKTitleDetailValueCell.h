// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTITLEDETAILVALUECELL_H
#define PKTITLEDETAILVALUECELL_H

@class UICollectionViewListCell, UIImageView, UIColor, UIFont, UIImage, NSString;


#import "PKTitleDetailValueTextView.h"

@interface PKTitleDetailValueCell : UICollectionViewListCell {
    PKTitleDetailValueTextView *_textView;
    UIImageView *_checkmarkView;
    UIColor *_backgroundColor;
    UIFont *_defaultTitleFont;
    UIFont *_defaultDetailFont;
    UIFont *_defaultValueFont;
    UIColor *_defaultDetailColor;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (retain, nonatomic) UIColor *detailColor; // ivar: _detailColor
@property (retain, nonatomic) UIFont *detailFont; // ivar: _detailFont
@property (retain, nonatomic) UIImage *detailIcon; // ivar: _detailIcon
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) CGFloat horizontalMargin; // ivar: _horizontalMargin
@property (nonatomic) CGFloat labelPadding; // ivar: _labelPadding
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *valueColor; // ivar: _valueColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (copy, nonatomic) NSString *valueText; // ivar: _valueText
@property (nonatomic) CGFloat verticalMargin; // ivar: _verticalMargin


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)_resetValues;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif