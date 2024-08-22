// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUICONPICKERCELL_H
#define HUICONPICKERCELL_H

@class UICollectionViewCell, HFImageIconDescriptor, UIColor;


#import "HUIconView.h"

@interface HUIconPickerCell : UICollectionViewCell

@property (retain, nonatomic) HFImageIconDescriptor *iconDescriptor;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIColor *selectedTintColor; // ivar: _selectedTintColor


-(id)_iconTintColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateIconDescriptor:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif