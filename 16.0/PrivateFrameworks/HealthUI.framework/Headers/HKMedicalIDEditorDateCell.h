// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEDITORDATECELL_H
#define HKMEDICALIDEDITORDATECELL_H

@class UIDatePicker, NSDate;


#import "HKMedicalIDEditorCell.h"

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {
    UIDatePicker *_picker;
}


@property (retain, nonatomic) NSDate *dateValue; // ivar: _dateValue


-(id)formattedValue;
-(void)_configureDatePicker;
-(void)_dateChanged:(id)arg0 ;
-(void)_hideDatePicker;
-(void)_showDatePicker;
-(void)beginEditing;
-(void)commitEditing;


@end


#endif