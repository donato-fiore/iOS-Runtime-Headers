// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKMONTHTITLEVIEW_H
#define _HKMONTHTITLEVIEW_H

@class UIView, UILabel;
@protocol HKCalendarMonthTitleFormatting;



@interface _HKMonthTitleView : UIView <HKCalendarMonthTitleFormatting>

 {
    UIView *_dividerLine;
}


@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (nonatomic) CGFloat dividerOriginX; // ivar: _dividerOriginX
@property (nonatomic) CGFloat dividerWidth; // ivar: _dividerWidth
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UILabel *monthTitle; // ivar: _monthTitle
@property (nonatomic) CGFloat topPadding; // ivar: _topPadding


-(id)_monthStringFromDate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFont;
-(void)layoutSubviews;
-(void)setDate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif