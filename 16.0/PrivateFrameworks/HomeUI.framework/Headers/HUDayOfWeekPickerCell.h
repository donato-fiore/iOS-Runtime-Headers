// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDAYOFWEEKPICKERCELL_H
#define HUDAYOFWEEKPICKERCELL_H

@class UITableViewCell, UIStackView, NSArray, NSString, HFItem, NSSet;
@protocol HUCellProtocol, HUDayOfWeekPickerCellDelegate, HUResizableCellDelegate;



@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol>



@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUDayOfWeekPickerCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) NSSet *selectedRecurrences; // ivar: _selectedRecurrences
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)_toggleWeekdayButton:(id)arg0 ;
-(void)_updateSelectedDays;
-(void)tintColorDidChange;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif