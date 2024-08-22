// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSDATETIMEPICKERCELL_H
#define PSDATETIMEPICKERCELL_H

@class UIDatePicker, UILabel;


#import "PSTableCell.h"

@interface PSDateTimePickerCell : PSTableCell {
    UIDatePicker *_datePicker;
    UILabel *_titleLabel;
}




+(CGFloat)preferredHeight;
-(id)datePicker;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(void)setTitle:(id)arg0 ;
-(void)timeZoneChanged:(id)arg0 ;


@end


#endif