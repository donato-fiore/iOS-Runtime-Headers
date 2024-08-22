// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMEDIACONTROLSVIDEOPICKERHEADERVIEW_H
#define MRMEDIACONTROLSVIDEOPICKERHEADERVIEW_H

@class UIView, UIImageView, UILabel, MTVisualStylingProvider;



@interface MRMediaControlsVideoPickerHeaderView : UIView

@property (retain, nonatomic) UIImageView *airPlayIconImageView; // ivar: _airPlayIconImageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateStyle;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif