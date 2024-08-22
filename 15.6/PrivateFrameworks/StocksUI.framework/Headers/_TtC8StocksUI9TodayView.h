// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8STOCKSUI9TODAYVIEW_H
#define _TTC8STOCKSUI9TODAYVIEW_H

@class UIView, NSString;



@interface _TtC8StocksUI9TodayView : UIView {
    ? titleLabel;
    ? brandingLabel;
    ? isSelectable;
    ? isSelected;
    ? isHighlightable;
    ? isHighlighted;
    ? isEditing;
    ? labelAlphaValueWhenEditing;
    ? shouldChangeLabelAlphaWhenEditing;
}


@property (nonatomic, copy) NSString *accessibilityLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif