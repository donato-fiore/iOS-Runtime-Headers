// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUALARMTABLEVIEWCELL_H
#define HUALARMTABLEVIEWCELL_H

@class UITableViewCell, MTAlarm, NSDate, NSCalendar, UISwitch, UIStackView, UILabel;
@protocol HUAlarmTableViewCellDelegate;



@interface HUAlarmTableViewCell : UITableViewCell

@property (retain, nonatomic) MTAlarm *alarm; // ivar: _alarm
@property (retain, nonatomic) NSDate *baseDate; // ivar: _baseDate
@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (weak, nonatomic) NSObject<HUAlarmTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UISwitch *enabledSwitch; // ivar: _enabledSwitch
@property (retain, nonatomic) UIStackView *labelsStackView; // ivar: _labelsStackView
@property (retain, nonatomic) UILabel *nameAndDescriptionLabel; // ivar: _nameAndDescriptionLabel
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel


+(id)timeFormatter;
-(id)init;
-(id)initWithMobileTimerObject:(id)arg0 manager:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_alarmActiveChanged:(id)arg0 ;
-(void)_createSubviews;
-(void)_setupConstraints;
-(void)layoutSubviews;
-(void)refreshUI:(id)arg0 accessoryName:(id)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif