// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIHEALTHSETTINGSWHEELCHAIRUSEPICKERCONTROLLER_H
#define FIUIHEALTHSETTINGSWHEELCHAIRUSEPICKERCONTROLLER_H



#import "FIUIHealthSettingsPickerController.h"

@interface FIUIHealthSettingsWheelchairUsePickerController : FIUIHealthSettingsPickerController

@property (copy, nonatomic) id *wheelchairUseUpdateHandler; // ivar: _wheelchairUseUpdateHandler


-(NSInteger)_wheelchairUseForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setWheelchairUse:(NSInteger)arg0 ;


@end


#endif