// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTITLEDETAILVALUETEXTVIEW_H
#define PKTITLEDETAILVALUETEXTVIEW_H

@class UIView, UIFont, NSAttributedString, UIColor, UIImage;


#import "PKIconTextLabel.h"

@interface PKTitleDetailValueTextView : UIView {
    PKIconTextLabel *_primaryLabel;
    PKIconTextLabel *_secondaryLabel;
    PKIconTextLabel *_tertiaryLabel;
    PKIconTextLabel *_amountLabel;
    UIView *_accessoryView;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (retain, nonatomic) UIFont *amountFont; // ivar: _amountFont
@property (copy, nonatomic) NSAttributedString *amountText; // ivar: _amountText
@property (retain, nonatomic) UIColor *amountTextColor; // ivar: _amountTextColor
@property (nonatomic) BOOL centerPrimaryText; // ivar: _centerPrimaryText
@property (nonatomic) CGFloat labelPadding; // ivar: _labelPadding
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (retain, nonatomic) UIImage *primaryIcon; // ivar: _primaryIcon
@property (copy, nonatomic) NSAttributedString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (retain, nonatomic) UIImage *secondaryIcon; // ivar: _secondaryIcon
@property (copy, nonatomic) NSAttributedString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (retain, nonatomic) UIFont *tertiaryFont; // ivar: _tertiaryFont
@property (retain, nonatomic) UIImage *tertiaryIcon; // ivar: _tertiaryIcon
@property (copy, nonatomic) NSAttributedString *tertiaryText; // ivar: _tertiaryText
@property (retain, nonatomic) UIColor *tertiaryTextColor; // ivar: _tertiaryTextColor


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)_useDefaultFont;
-(void)layoutSubviews;


@end


#endif