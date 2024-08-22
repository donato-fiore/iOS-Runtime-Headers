// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIHEALTHSETTINGSDATEPICKER_H
#define FIUIHEALTHSETTINGSDATEPICKER_H

@class UIDatePicker;



@interface FIUIHealthSettingsDatePicker : UIDatePicker

@property (copy, nonatomic) id *dateUpdateHandler; // ivar: _dateUpdateHandler


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dateDidChange:(id)arg0 ;
-(void)forceUpdate;
-(void)layoutSubviews;


@end


#endif