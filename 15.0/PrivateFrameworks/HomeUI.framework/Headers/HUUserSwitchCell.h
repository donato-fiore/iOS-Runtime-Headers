// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUUSERSWITCHCELL_H
#define HUUSERSWITCHCELL_H

@class UIActivityIndicatorView, NSString, UISwitch;
@protocol HUDisableableCellProtocol, HUUserSwitchCellDelegate;


#import "HUAvatarTableViewCell.h"

@interface HUUserSwitchCell : HUAvatarTableViewCell <HUDisableableCellProtocol>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUUserSwitchCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (nonatomic, getter=isOn) BOOL on;
@property (readonly) Class superclass;
@property (retain, nonatomic) UISwitch *switchView; // ivar: _switchView


-(id)defaultContentConfiguration;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_toggleOn:(id)arg0 ;
-(void)_updateAppearanceForDisabled:(BOOL)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif