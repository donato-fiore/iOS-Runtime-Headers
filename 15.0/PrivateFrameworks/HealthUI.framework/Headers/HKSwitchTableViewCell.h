// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSWITCHTABLEVIEWCELL_H
#define HKSWITCHTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UISwitch, NSString;
@protocol HKSwitchTableViewCellDelegate;



@interface HKSwitchTableViewCell : UITableViewCell {
    UILabel *_countLabel;
    UISwitch *_switch;
}


@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL centersIcon; // ivar: _centersIcon
@property (weak, nonatomic) NSObject<HKSwitchTableViewCellDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) CGSize iconSize;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) BOOL shouldHideSwitch; // ivar: _shouldHideSwitch


+(id)reuseIdentifier;
-(id)_displayLabelFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contextSizeCategoryChanged;
-(void)_setupUI;
-(void)_updateFont;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCountText:(id)arg0 ;
-(void)setIconImage:(id)arg0 ;
-(void)switchValueChanged:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif