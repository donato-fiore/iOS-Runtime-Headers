// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WDDATEBASEDADDDATAMANUALENTRYITEM_H
#define _WDDATEBASEDADDDATAMANUALENTRYITEM_H

@class UIDatePicker, NSDate, NSDateFormatter;


#import "WDAddDataManualEntryItem.h"
#import "WDManualDataEntryTableViewCell.h"

@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem {
    UIDatePicker *_datePicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
    BOOL _highlightWhenEditing;
}


@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (nonatomic) NSInteger datePickerMode; // ivar: _datePickerMode


-(id)generateValue;
-(id)initWithMaximumDate:(id)arg0 highlightWhenEditing:(BOOL)arg1 ;
-(id)tableViewCells;
-(void)_datePickerDidChange:(id)arg0 ;
-(void)_generateValue:(id)arg0 ;
-(void)_saveDisambiguatedDate:(id)arg0 ;
-(void)beginEditing;
-(void)setTitle:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif