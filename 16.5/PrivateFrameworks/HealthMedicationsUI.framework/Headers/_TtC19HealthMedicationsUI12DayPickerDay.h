// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI12DAYPICKERDAY_H
#define _TTC19HEALTHMEDICATIONSUI12DAYPICKERDAY_H

@class UIControl;



@interface _TtC19HealthMedicationsUI12DayPickerDay : UIControl {
    ? day;
    ? formatter;
    ? background;
    ? dayLabel;
}


@property (nonatomic) BOOL selected;


-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif