// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SLEEPHEALTHUI22SCHEDULEOCCURRENCEVIEW_H
#define _TTC13SLEEPHEALTHUI22SCHEDULEOCCURRENCEVIEW_H

@class UIView;



@interface _TtC13SleepHealthUI22ScheduleOccurrenceView : UIView {
    ? viewModel;
    ? headerLabel;
    ? bedtimeComponentView;
    ? wakeUpComponentView;
    ? horizontalPadding;
    ? currentLayoutConstraints;
    ? isUsingVerticalLayout;
}


@property (nonatomic) CGRect bounds;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif