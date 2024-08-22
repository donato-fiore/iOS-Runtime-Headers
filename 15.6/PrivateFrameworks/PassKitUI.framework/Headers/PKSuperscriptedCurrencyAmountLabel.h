// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUPERSCRIPTEDCURRENCYAMOUNTLABEL_H
#define PKSUPERSCRIPTEDCURRENCYAMOUNTLABEL_H

@class UIView, NSDecimalNumber, NSString, UILabel, UIColor, UIFont;



@interface PKSuperscriptedCurrencyAmountLabel : UIView

@property (retain, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat labelScaleFactor; // ivar: _labelScaleFactor
@property (nonatomic) CGSize lastLayedOutBoundsSize; // ivar: _lastLayedOutBoundsSize
@property (retain, nonatomic) UIColor *negativeValueTextColor; // ivar: _negativeValueTextColor
@property (retain, nonatomic) UIColor *positiveValueTextColor; // ivar: _positiveValueTextColor
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (nonatomic) BOOL showsNegativeValueDesignation; // ivar: _showsNegativeValueDesignation
@property (nonatomic) BOOL showsPositiveValueDesignation; // ivar: _showsPositiveValueDesignation
@property (retain, nonatomic) UIFont *superscriptFont; // ivar: _superscriptFont


-(id)_attributedString;
-(id)initWithPrimaryFont:(id)arg0 superscriptFont:(id)arg1 positiveValueTextColor:(id)arg2 negativeValueTextColor:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addSuperscriptToAttributedString:(id)arg0 formattedCurrencyAmount:(id)arg1 currencyAmountWithoutSymbols:(id)arg2 ;
-(void)_addSuperscriptToAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)_updateLabel;
-(void)layoutSubviews;


@end


#endif