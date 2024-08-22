// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERCALENDARMONTHHEADERVIEW_H
#define PKPAYLATERCALENDARMONTHHEADERVIEW_H

@class UIView, PKPayLaterInstallmentsMonth, UILabel;



@interface PKPayLaterCalendarMonthHeaderView : UIView {
    PKPayLaterInstallmentsMonth *_installmentsMonth;
    UILabel *_totalDueLabel;
    UILabel *_totalDueAmountLabel;
    UILabel *_totalPaidLabel;
    UILabel *_totalPaidAmountLabel;
}




-(CGFloat)_layoutLabelsSideBySide:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(CGFloat)_layoutLabelsStacked:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(id)initWithInstallmentsMonth:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif