// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSIMPLEDATAENTRYWEIGHTITEM_H
#define HKSIMPLEDATAENTRYWEIGHTITEM_H

@class NSString, UIPickerView, NSNumber;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;


#import "HKSimpleDataEntryItem.h"
#import "HKSimpleDataEntryPlainTextCell.h"

@interface HKSimpleDataEntryWeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>

 {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    UIPickerView *_picker;
    NSInteger _localWeightUnit;
    NSInteger _numberOfRowsForPicker;
    NSNumber *_defaultValue;
    NSNumber *_kilogramValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_defaultKilogramValue;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_formattedValueForDisplay;
-(id)cell;
-(id)formattedKeyAndValue;
-(id)initWithTitle:(id)arg0 registrantModelKey:(id)arg1 weightInKg:(id)arg2 defaultWeightInKg:(id)arg3 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_setTextForInputTextField:(id)arg0 ;
-(void)_setWeightValueForSelectedRow:(NSInteger)arg0 ;
-(void)_setupPlaceholder;
-(void)_updateLocaleDependentValues;
-(void)_valueDidChange;
-(void)beginEditing;
-(void)localeDidChange:(id)arg0 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)updateCellDisplay;


@end


#endif