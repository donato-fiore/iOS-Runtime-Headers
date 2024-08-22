// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUICONSWITCHCELL_H
#define HUICONSWITCHCELL_H

@class UISwitch;
@protocol HUIconSwitchCellDelegate;


#import "HUTitleDescriptionCell.h"

@interface HUIconSwitchCell : HUTitleDescriptionCell

@property (weak, nonatomic) NSObject<HUIconSwitchCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isOn) BOOL on;
@property (retain, nonatomic) UISwitch *switchView; // ivar: _switchView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_toggleOn:(id)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif