// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCALENDARICONVIEW_H
#define PKCALENDARICONVIEW_H

@class UIView, UILabel;



@interface PKCalendarIconView : UIView {
    UILabel *_monthLabel;
    UILabel *_dayLabel;
}




-(id)initWithDate:(id)arg0 isDisabled:(BOOL)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif