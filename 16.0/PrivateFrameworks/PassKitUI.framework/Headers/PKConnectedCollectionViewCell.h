// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONNECTEDCOLLECTIONVIEWCELL_H
#define PKCONNECTEDCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UIColor, UIFont, NSAttributedString;


#import "PKTitleDetailValueTextView.h"
#import "PKConnectedCircleView.h"
#import "PKGradientVerticalConnector.h"

@interface PKConnectedCollectionViewCell : UICollectionViewListCell {
    PKTitleDetailValueTextView *_textView;
    PKConnectedCircleView *_circleView;
    UIColor *_backgroundColor;
}


@property (retain, nonatomic) UIFont *amountFont; // ivar: _amountFont
@property (copy, nonatomic) NSAttributedString *amountText; // ivar: _amountText
@property (retain, nonatomic) UIColor *amountTextColor; // ivar: _amountTextColor
@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector; // ivar: _bottomConnector
@property (nonatomic) BOOL centerPrimaryText; // ivar: _centerPrimaryText
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (copy, nonatomic) NSAttributedString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (copy, nonatomic) NSAttributedString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (nonatomic) BOOL showChevron; // ivar: _showChevron
@property (nonatomic) NSUInteger targetType; // ivar: _targetType
@property (copy, nonatomic) NSAttributedString *tertiaryText; // ivar: _tertiaryText
@property (retain, nonatomic) UIColor *tertiaryTextColor; // ivar: _tertiaryTextColor
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector; // ivar: _topConnector


+(CGFloat)textInsetWithOuterRadius:(CGFloat)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif