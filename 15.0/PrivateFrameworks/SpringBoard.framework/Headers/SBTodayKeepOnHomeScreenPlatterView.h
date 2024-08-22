// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTODAYKEEPONHOMESCREENPLATTERVIEW_H
#define SBTODAYKEEPONHOMESCREENPLATTERVIEW_H

@class UIView, MTMaterialView, UILabel, UISwitch;



@interface SBTodayKeepOnHomeScreenPlatterView : UIView

@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (retain, nonatomic) UISwitch *pinnedSwitch; // ivar: _pinnedSwitch
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)traitCollection;
-(void)_pinnedSwitchValueChanged:(id)arg0 ;


@end


#endif