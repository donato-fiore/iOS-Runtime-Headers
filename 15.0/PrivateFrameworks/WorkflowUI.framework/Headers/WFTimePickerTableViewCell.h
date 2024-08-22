// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTIMEPICKERTABLEVIEWCELL_H
#define WFTIMEPICKERTABLEVIEWCELL_H

@class UITableViewCell, UIDatePicker;



@interface WFTimePickerTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif