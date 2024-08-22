// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERICONTEXTCELL_H
#define PKPAYLATERICONTEXTCELL_H

@class UIFont, NSString, UIColor;


#import "PKPayLaterIconCell.h"
#import "PKTitleDetailValueTextView.h"

@interface PKPayLaterIconTextCell : PKPayLaterIconCell {
    PKTitleDetailValueTextView *_view;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (retain, nonatomic) UIFont *amountFont; // ivar: _amountFont
@property (copy, nonatomic) NSString *amountText; // ivar: _amountText
@property (retain, nonatomic) UIColor *amountTextColor; // ivar: _amountTextColor
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (retain, nonatomic) UIFont *tertiaryFont; // ivar: _tertiaryFont
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText
@property (retain, nonatomic) UIColor *tertiaryTextColor; // ivar: _tertiaryTextColor


-(void)_createViewIfNecessary;
-(void)prepareForReuse;


@end


#endif