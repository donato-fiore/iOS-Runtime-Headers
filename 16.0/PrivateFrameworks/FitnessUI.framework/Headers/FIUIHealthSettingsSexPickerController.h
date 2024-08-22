// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIHEALTHSETTINGSSEXPICKERCONTROLLER_H
#define FIUIHEALTHSETTINGSSEXPICKERCONTROLLER_H



#import "FIUIHealthSettingsPickerController.h"

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController

@property (copy, nonatomic) id *sexUpdateHandler; // ivar: _sexUpdateHandler


-(NSInteger)_biologicalSexForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_updateWithBiologicalSex:(NSInteger)arg0 ;
-(void)forceUpdate;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setBiologicalSex:(NSInteger)arg0 ;


@end


#endif