// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCFACECONTAINERVIEW_H
#define NTKCFACECONTAINERVIEW_H

@class UIControl, UIView, CAShapeLayer;



@interface NTKCFaceContainerView : UIControl

@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *faceContainer; // ivar: _faceContainer
@property (nonatomic) CGSize faceSize; // ivar: _faceSize
@property (retain, nonatomic) UIView *faceView; // ivar: _faceView
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) CAShapeLayer *outline; // ivar: _outline
@property (nonatomic) NSInteger style; // ivar: _style


+(CGFloat)_insetPaddingForStyle:(NSInteger)arg0 ;
+(struct CGSize )faceSizeForSize:(struct CGSize )arg0 style:(NSInteger)arg1 ;
+(struct CGSize )sizeForFaceSize:(struct CGSize )arg0 style:(NSInteger)arg1 ;
-(id)initWithFaceSize:(struct CGSize )arg0 style:(NSInteger)arg1 ;
-(struct CGAffineTransform )_transformForFaceView;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateOutlineColor;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif