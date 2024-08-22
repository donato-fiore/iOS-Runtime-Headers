// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRMEDIACONTROLSVIDEOPICKERFOOTERVIEW_H
#define MRMEDIACONTROLSVIDEOPICKERFOOTERVIEW_H

@class MPButton, UILabel, MTVisualStylingProvider;



@interface MRMediaControlsVideoPickerFooterView : MPButton

@property (retain, nonatomic) UILabel *customTitleLabel; // ivar: _customTitleLabel
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleLabelText;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateStyle;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif