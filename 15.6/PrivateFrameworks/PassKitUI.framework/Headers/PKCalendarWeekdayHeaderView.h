// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCALENDARWEEKDAYHEADERVIEW_H
#define PKCALENDARWEEKDAYHEADERVIEW_H

@class UIView, UILabel;



@interface PKCalendarWeekdayHeaderView : UIView {
    UILabel *_label;
}




-(id)initWithWeekdayString:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif