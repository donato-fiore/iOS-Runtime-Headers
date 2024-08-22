// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIHEALTHSETTINGSHEIGHTPICKERCONTROLLER_H
#define FIUIHEALTHSETTINGSHEIGHTPICKERCONTROLLER_H

@class NSLengthFormatter;


#import "FIUIHealthSettingsPickerController.h"

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {
    NSLengthFormatter *_heightFormatter;
}


@property (copy, nonatomic) id *heightUpdateHandler; // ivar: _heightUpdateHandler


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_pickerDisplayStringForHeightForRow:(NSInteger)arg0 forComponent:(NSInteger)arg1 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_heightPickerUpdated;
-(void)forceUpdate;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setHeightQuantity:(id)arg0 ;


@end


#endif