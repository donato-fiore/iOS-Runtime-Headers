// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WDTWOPARTDATETIMEMANUALENTRYITEM_H
#define _WDTWOPARTDATETIMEMANUALENTRYITEM_H

@class UIDatePicker, NSDateFormatter, NSDate;


#import "WDAddDataManualEntryItem.h"
#import "WDManualDataEntryTableViewCell.h"

@interface _WDTwoPartDateTimeManualEntryItem : WDAddDataManualEntryItem {
    UIDatePicker *_datePicker;
    UIDatePicker *_timePicker;
    WDManualDataEntryTableViewCell *_dateTableViewCell;
    WDManualDataEntryTableViewCell *_timeTableViewCell;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
}




-(id)generateValue;
-(id)initWithMaximumDate:(id)arg0 ;
-(id)tableViewCells;
-(void)_datePickerDidChange:(id)arg0 ;
-(void)_generateValue:(id)arg0 ;
-(void)_saveDisambiguatedDate:(id)arg0 ;
-(void)_setupTableViewCells;
-(void)_timePickerDidChange:(id)arg0 ;
-(void)_updateCellLabels;
-(void)beginEditing;
-(void)setValue:(id)arg0 ;


@end


#endif