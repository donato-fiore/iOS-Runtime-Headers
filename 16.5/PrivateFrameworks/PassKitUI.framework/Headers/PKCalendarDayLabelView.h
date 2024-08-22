// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCALENDARDAYLABELVIEW_H
#define PKCALENDARDAYLABELVIEW_H

@class UIView, UILabel, UIColor;



@interface PKCalendarDayLabelView : UIView {
    UILabel *_dayLabel;
    UIView *_highlightView;
}


@property (retain, nonatomic) UIColor *disabledTextColor; // ivar: _disabledTextColor
@property (retain, nonatomic) UIColor *highlightBackgroundColor; // ivar: _highlightBackgroundColor
@property (nonatomic) CGFloat highlightPadding; // ivar: _highlightPadding
@property (retain, nonatomic) UIColor *highlightTextColor; // ivar: _highlightTextColor
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(CGFloat)totalSpacingBetweenTextAndLabel;
-(id)_dayLabelFont;
-(id)initWithDayString:(id)arg0 ;
-(struct CGRect )labelFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateTextColor;
-(void)layoutSubviews;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif