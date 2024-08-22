// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKEFFECTSELECTIONCOLLECTIONVIEWCELL_H
#define CKEFFECTSELECTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UILabel, CAShapeLayer, UIView, UIVisualEffectView, UIVibrancyEffect;



@interface CKEffectSelectionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) CAShapeLayer *selectionLayer; // ivar: _selectionLayer
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) UIVisualEffectView *titleContainerView; // ivar: _titleContainerView
@property (retain, nonatomic) UIVibrancyEffect *titleVibrancyEffect; // ivar: _titleVibrancyEffect


-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForEffectIsDark:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif