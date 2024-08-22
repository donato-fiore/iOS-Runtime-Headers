// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI19YEARRANGEPICKERCELL_H
#define _TTC15HEALTHRECORDSUI19YEARRANGEPICKERCELL_H

@class UITableViewCell;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;



@interface _TtC15HealthRecordsUI19YearRangePickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource>

 {
    ? dataSource;
    ? pickerView;
}




-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif