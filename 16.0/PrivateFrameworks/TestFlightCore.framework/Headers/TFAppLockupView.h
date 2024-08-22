// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFAPPLOCKUPVIEW_H
#define TFAPPLOCKUPVIEW_H

@class UIView, NSString, UIImageView, UILabel;
@protocol TFImageAssigning;


#import "TFAppLockupViewSpecification.h"

@interface TFAppLockupView : UIView <TFImageAssigning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize displayedIconSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UILabel *primarySubtitleLabel; // ivar: _primarySubtitleLabel
@property (readonly, nonatomic) UILabel *secondarySubtitleLabel; // ivar: _secondarySubtitleLabel
@property (retain, nonatomic) TFAppLockupViewSpecification *specification; // ivar: _specification
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutLabelsInLayoutBounds:(struct CGRect )arg0 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg0 ;
-(void)_styleSubviews;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif