// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKNOTABLEUSERDATACARDCELL_H
#define DKNOTABLEUSERDATACARDCELL_H

@class UIView, UIStackView, UILabel;



@interface DKNotableUserDataCardCell : UIView

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) UIStackView *labelContainer; // ivar: _labelContainer
@property (retain, nonatomic) UILabel *stateLabel; // ivar: _stateLabel
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(NSInteger)_stateStackViewAxis;
-(id)_bodyFont;
-(id)_stateFont;
-(id)_titleFont;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 accessoryView:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif