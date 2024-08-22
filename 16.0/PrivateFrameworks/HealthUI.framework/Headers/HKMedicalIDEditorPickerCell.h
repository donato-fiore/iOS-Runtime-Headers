// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEDITORPICKERCELL_H
#define HKMEDICALIDEDITORPICKERCELL_H

@class UIPickerView, NSString, NSArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "HKMedicalIDEditorCell.h"

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    UIPickerView *_picker;
}


@property (nonatomic) NSInteger chosenValueIndex; // ivar: _chosenValueIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *possibleValues; // ivar: _possibleValues
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)formattedValue;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_hidePicker;
-(void)_showPicker;
-(void)beginEditing;
-(void)commitEditing;
-(void)dealloc;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif