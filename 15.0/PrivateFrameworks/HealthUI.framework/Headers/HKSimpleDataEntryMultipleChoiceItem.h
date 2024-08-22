// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSIMPLEDATAENTRYMULTIPLECHOICEITEM_H
#define HKSIMPLEDATAENTRYMULTIPLECHOICEITEM_H

@class NSString, NSNumber, NSArray, UIPickerView;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;


#import "HKSimpleDataEntryItem.h"
#import "HKSimpleDataEntryPlainTextCell.h"

@interface HKSimpleDataEntryMultipleChoiceItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>

 {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSNumber *_chosenIndex;
    NSArray *_choiceDisplayValues;
    NSArray *_choices;
    UIPickerView *_picker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)cell;
-(id)formattedKeyAndValue;
-(id)initWithTitle:(id)arg0 registrantModelKey:(id)arg1 choices:(id)arg2 choiceDisplayNames:(id)arg3 defaultChoice:(id)arg4 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_setTextForInputTextField:(id)arg0 ;
-(void)_setupPlaceholder;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)updateCellDisplay;


@end


#endif