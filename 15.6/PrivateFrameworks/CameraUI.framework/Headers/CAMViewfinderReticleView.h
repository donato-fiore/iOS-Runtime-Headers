// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIEWFINDERRETICLEVIEW_H
#define CAMVIEWFINDERRETICLEVIEW_H

@class UIView, UIImageView;



@interface CAMViewfinderReticleView : UIView

@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView; // ivar: __bottomLeftCornerView
@property (readonly, nonatomic) UIView *_bottomMaskingView; // ivar: __bottomMaskingView
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView; // ivar: __bottomRightCornerView
@property (readonly, nonatomic) UIImageView *_topLeftCornerView; // ivar: __topLeftCornerView
@property (readonly, nonatomic) UIView *_topMaskingView; // ivar: __topMaskingView
@property (readonly, nonatomic) UIImageView *_topRightCornerView; // ivar: __topRightCornerView
@property (readonly, nonatomic) UIImageView *_viewportBorderView; // ivar: __viewportBorderView
@property (nonatomic) BOOL cornersVisible; // ivar: _cornersVisible
@property (nonatomic) NSInteger material; // ivar: _material
@property (readonly, nonatomic) CGFloat viewportBottomInset; // ivar: _viewportBottomInset
@property (readonly, nonatomic) CGFloat viewportTopInset; // ivar: _viewportTopInset


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_newViewportCornerImage;
-(id)_newViewportTemplateImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateMaterialOpacityWithDuration:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif