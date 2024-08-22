// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMEDICALIDEDITORWEIGHTCELL_H
#define HKMEDICALIDEDITORWEIGHTCELL_H

@class UIPickerView, NSString, NSNumber;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "HKMedicalIDEditorCell.h"

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    UIPickerView *_picker;
    NSInteger _localWeightUnit;
    NSInteger _numberOfRowsForPicker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *kilogramValue; // ivar: _kilogramValue
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)formattedValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_commonInit;
-(void)_hidePicker;
-(void)_localeDidChange:(id)arg0 ;
-(void)_showPicker;
-(void)beginEditing;
-(void)commitEditing;
-(void)dealloc;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif