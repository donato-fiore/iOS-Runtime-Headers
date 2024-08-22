// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIAUDIOGRAMRESULTTIMECELL_H
#define AIAUDIOGRAMRESULTTIMECELL_H

@class UITableViewCell, NSDate, UIStackView, UIDatePicker, UILabel;
@protocol AIAudiogramResultTimeCellDelegate;



@interface AIAudiogramResultTimeCell : UITableViewCell

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (weak, nonatomic) NSObject<AIAudiogramResultTimeCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) UIDatePicker *timePicker; // ivar: _timePicker
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(NSUInteger)accessibilityTraits;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_datePickerValueChanged:(id)arg0 ;
-(void)configureLayout;


@end


#endif