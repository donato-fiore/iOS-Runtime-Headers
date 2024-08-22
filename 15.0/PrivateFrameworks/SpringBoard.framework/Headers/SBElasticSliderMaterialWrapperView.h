// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBELASTICSLIDERMATERIALWRAPPERVIEW_H
#define SBELASTICSLIDERMATERIALWRAPPERVIEW_H

@class UIView, MTMaterialShadowView, CCUIContinuousSliderView<SBElasticGlyphView>;



@interface SBElasticSliderMaterialWrapperView : UIView {
    UIView *_sliderWrapperView;
}


@property (readonly, nonatomic) MTMaterialShadowView *baseMaterialView; // ivar: _baseMaterialView
@property (readonly, nonatomic) UIView *maskView; // ivar: _maskView
@property (nonatomic) NSInteger shadowMode; // ivar: _shadowMode
@property (readonly, nonatomic) CCUIContinuousSliderView<SBElasticGlyphView> *sliderView; // ivar: _sliderView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSliderView:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateShadowMode;
-(void)layoutSubviews;


@end


#endif