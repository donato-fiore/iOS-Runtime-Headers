// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCREATIVECAMERABUTTON_H
#define CAMCREATIVECAMERABUTTON_H

@class UIButton, UIImageView;



@interface CAMCreativeCameraButton : UIButton

@property (retain, nonatomic) UIImageView *_circleBackgroundView; // ivar: __circleBackgroundView
@property (readonly, nonatomic, getter=_isOverContent) BOOL _overContent; // ivar: __overContent
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets
@property (nonatomic, setter=useCompactLayout:) BOOL useCompactLayout; // ivar: _useCompactLayout


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initForOverContent;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMCreativeCameraButtonInitializationWithStyle:(NSInteger)arg0 overContent:(BOOL)arg1 ;
-(void)_updateImages;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)useCompactLayout:(BOOL)arg0 ;


@end


#endif