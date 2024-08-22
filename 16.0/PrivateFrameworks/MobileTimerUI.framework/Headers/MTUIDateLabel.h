// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUIDATELABEL_H
#define MTUIDATELABEL_H

@class UIView, NSTimeZone, NSDate, UILabel, NSString, UIFont, UIColor;



@interface MTUIDateLabel : UIView {
    NSTimeZone *_timeZone;
}


@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (copy, nonatomic) NSString *dateLabelText; // ivar: _dateLabelText
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) UIFont *timeDesignatorFont; // ivar: _timeDesignatorFont
@property (retain, nonatomic) NSTimeZone *timeZone;


-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif