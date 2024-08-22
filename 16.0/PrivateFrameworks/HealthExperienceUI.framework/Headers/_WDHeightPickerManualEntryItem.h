// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WDHEIGHTPICKERMANUALENTRYITEM_H
#define _WDHEIGHTPICKERMANUALENTRYITEM_H

@class UIPickerView, NSString;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;


#import "WDAddDataManualEntryItem.h"
#import "WDManualDataEntryTableViewCell.h"

@interface _WDHeightPickerManualEntryItem : WDAddDataManualEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>

 {
    UIPickerView *_heightPicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *feetUnitString; // ivar: _feetUnitString
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *inchUnitString; // ivar: _inchUnitString
@property (readonly) Class superclass;


-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_setupHeightPicker;
-(id)generateValue;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableViewCells;
-(void)_updateTableViewCell;
-(void)beginEditing;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setTitle:(id)arg0 ;


@end


#endif