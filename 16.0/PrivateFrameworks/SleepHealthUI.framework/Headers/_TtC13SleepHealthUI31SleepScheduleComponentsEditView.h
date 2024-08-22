// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SLEEPHEALTHUI31SLEEPSCHEDULECOMPONENTSEDITVIEW_H
#define _TTC13SLEEPHEALTHUI31SLEEPSCHEDULECOMPONENTSEDITVIEW_H

@class UIView;



@interface _TtC13SleepHealthUI31SleepScheduleComponentsEditView : UIView {
    ? model;
    ? componentsHeader;
    ? clock;
    ? timeInBed;
    ? clockCaption;
    ? clockWidthConstraint;
    ? captionTopConstraint;
    ? $__lazy_storage_$_formatter;
}




-(id)accessibilityClock;
-(id)accessibilityClockCaption;
-(id)accessibilityComponentsHeader;
-(id)accessibilityTimeInBedLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clockDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif