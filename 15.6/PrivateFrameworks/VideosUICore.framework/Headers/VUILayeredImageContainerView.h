// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILAYEREDIMAGECONTAINERVIEW_H
#define VUILAYEREDIMAGECONTAINERVIEW_H

@class UIStackedImageContainerView, NSString, _UIStackedImageContainerLayer, UIImage, UIView;
@protocol VUIAuxiliaryViewSelecting;


#import "VUILayeredImageProxy.h"

@interface VUILayeredImageContainerView : UIStackedImageContainerView <VUIAuxiliaryViewSelecting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fixedFrameOverlayView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIStackedImageContainerLayer *layeredImageContainerLayer;
@property (nonatomic, getter=isLayeredImageLoaded) BOOL layeredImageLoaded; // ivar: _layeredImageLoaded
@property (retain, nonatomic) VUILayeredImageProxy *layeredImageProxy; // ivar: _layeredImageProxy
@property (retain, nonatomic) UIImage *loadedImage; // ivar: _loadedImage
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayeredImageProxy:(id)arg0 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_loadLayeredImage;
-(void)setPressed:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 focusAnimationCoordinator:(id)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif