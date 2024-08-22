// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIMPLEDATAENTRYDATEITEM_H
#define HKSIMPLEDATAENTRYDATEITEM_H

@class NSString, NSDate, UIDatePicker, NSDateFormatter;


#import "HKSimpleDataEntryItem.h"
#import "HKSimpleDataEntryPlainTextCell.h"
#import "HKValueRange.h"

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSDate *_date;
    NSDate *_defaultDate;
    HKValueRange *_dateRange;
    UIDatePicker *_datePicker;
    NSDateFormatter *_exportFormatter;
}




+(id)_dateFormatter;
+(id)gregorianGMTCalendar;
-(id)cell;
-(id)formattedKeyAndValue;
-(id)initWithTitle:(id)arg0 registrantModelKey:(id)arg1 date:(id)arg2 defaultDate:(id)arg3 dateRange:(id)arg4 exportFormatter:(id)arg5 ;
-(void)_setTextForInputTextField:(id)arg0 ;
-(void)beginEditing;
-(void)datePickerValueChanged:(id)arg0 ;
-(void)localeDidChange:(id)arg0 ;
-(void)updateCellDisplay;


@end


#endif