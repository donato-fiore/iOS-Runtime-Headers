// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIAUDIOGRAMRESULTDATECELL_H
#define AIAUDIOGRAMRESULTDATECELL_H

@class UITableViewCell, NSLayoutConstraint, NSDate, UIDatePicker, NSArray, UIStackView, UILabel;
@protocol AIAudiogramResultDateCellDelegate;



@interface AIAudiogramResultDateCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *collapsedConstraint; // ivar: _collapsedConstraint
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (weak, nonatomic) NSObject<AIAudiogramResultDateCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *expandedConstraints; // ivar: _expandedConstraints
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


+(id)reuseIdentifier;
-(NSUInteger)accessibilityTraits;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_datePickerValueChanged:(id)arg0 ;
-(void)configureLayout;
-(void)showActive:(BOOL)arg0 ;


@end


#endif