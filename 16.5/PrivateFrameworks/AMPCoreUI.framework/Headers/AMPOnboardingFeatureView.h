// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMPONBOARDINGFEATUREVIEW_H
#define AMPONBOARDINGFEATUREVIEW_H

@class UIView, UILabel, UIImageView;



@interface AMPOnboardingFeatureView : UIView

@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFeature:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif