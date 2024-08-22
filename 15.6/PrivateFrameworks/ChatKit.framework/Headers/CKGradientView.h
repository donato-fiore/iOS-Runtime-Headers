// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKGRADIENTVIEW_H
#define CKGRADIENTVIEW_H

@class UIView, NSArray, UIImage, UIView<CKGradientReferenceView>, CATransformLayer;
@protocol CKLayerDelegate;


#import "CKBaseLayer.h"

@interface CKGradientView : UIView <CKLayerDelegate>



@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, nonatomic) UIImage *gradient;
@property (nonatomic) CGRect gradientFrame; // ivar: _gradientFrame
@property (retain, nonatomic) CKBaseLayer *gradientLayer; // ivar: _gradientLayer
@property (retain, nonatomic) UIImage *maskImage; // ivar: _maskImage
@property (weak, nonatomic) UIView<CKGradientReferenceView> *referenceView; // ivar: _referenceView
@property (retain, nonatomic) CATransformLayer *trackingLayer; // ivar: _trackingLayer


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)ckLayerDidBecomeVisible:(BOOL)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateAnimation;
-(void)updateGradientImage;


@end


#endif