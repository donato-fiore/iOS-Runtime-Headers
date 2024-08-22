// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEDITORHEIGHTCELL_H
#define HKMEDICALIDEDITORHEIGHTCELL_H

@class UIPickerView, NSNumber, NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "HKMedicalIDEditorCell.h"

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    UIPickerView *_picker;
    BOOL _usesImperialUnits;
}


@property (retain, nonatomic) NSNumber *centimeterValue; // ivar: _centimeterValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
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