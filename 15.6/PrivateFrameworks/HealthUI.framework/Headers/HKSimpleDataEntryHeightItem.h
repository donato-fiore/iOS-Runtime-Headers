// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIMPLEDATAENTRYHEIGHTITEM_H
#define HKSIMPLEDATAENTRYHEIGHTITEM_H

@class NSString, UIPickerView, NSNumber;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;


#import "HKSimpleDataEntryItem.h"
#import "HKSimpleDataEntryPlainTextCell.h"

@interface HKSimpleDataEntryHeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>

 {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    UIPickerView *_picker;
    BOOL _usesImperialUnits;
    NSNumber *_defaultValue;
    NSNumber *_centimeterValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_defaultCentimeterValue;
-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_formattedValueForDisplay;
-(id)cell;
-(id)formattedKeyAndValue;
-(id)initWithTitle:(id)arg0 registrantModelKey:(id)arg1 heightInCm:(id)arg2 defaultHeightInCm:(id)arg3 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_setHeightValueForPicker:(id)arg0 selectedRow:(NSInteger)arg1 ;
-(void)_setTextForInputTextField:(id)arg0 ;
-(void)_setupPlaceholder;
-(void)_updateLocaleDependentValues;
-(void)_valueDidChange;
-(void)beginEditing;
-(void)doneButtonTapped:(id)arg0 ;
-(void)localeDidChange:(id)arg0 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)updateCellDisplay;


@end


#endif