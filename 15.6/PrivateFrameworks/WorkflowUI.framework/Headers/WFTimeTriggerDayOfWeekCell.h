// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTIMETRIGGERDAYOFWEEKCELL_H
#define WFTIMETRIGGERDAYOFWEEKCELL_H

@class UITableViewCell, NSArray, NSSet, UIStackView;
@protocol WFTimeTriggerDayOfWeekCellDelegate;



@interface WFTimeTriggerDayOfWeekCell : UITableViewCell

@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (weak, nonatomic) NSObject<WFTimeTriggerDayOfWeekCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSSet *selectedRecurrences; // ivar: _selectedRecurrences
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupConstraints;
-(void)tintColorDidChange;
-(void)toggleWeekdayButton:(id)arg0 ;
-(void)updateSelectedDays;


@end


#endif