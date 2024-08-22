// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUINLINEDATEPICKERCELL_H
#define HUINLINEDATEPICKERCELL_H

@class UITableViewCell, NSArray, UIDatePicker, NSString, NSDateComponents;
@protocol HUDisableableCellProtocol, HUInlineDatePickerCellDelegate;



@interface HUInlineDatePickerCell : UITableViewCell <HUDisableableCellProtocol>



@property (retain, nonatomic) NSArray *allConstraints; // ivar: _allConstraints
@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUInlineDatePickerCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideTitleLabel; // ivar: _hideTitleLabel
@property (nonatomic) CGFloat leftMargin; // ivar: _leftMargin
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDateComponents *timeComponents;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_valueChanged:(id)arg0 ;
-(void)updateConstraints;


@end


#endif