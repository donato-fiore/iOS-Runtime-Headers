// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDADDDATAMANUALENTRYSPINNER_H
#define WDADDDATAMANUALENTRYSPINNER_H

@class UIPickerView, NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, WDAddDataManualEntrySpinnerDataSource;


#import "WDAddDataManualEntryItem.h"
#import "WDManualDataEntryTableViewCell.h"

@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    UIPickerView *_pickerView;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSInteger _selectedPickerViewIndex;
}


@property (nonatomic) NSInteger _wd_deliveryReason;
@property (weak, nonatomic) NSObject<WDAddDataManualEntrySpinnerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)generateValue;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(id)tableViewCells;
-(void)_updateTableViewCellValue;
-(void)beginEditing;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setTitle:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif