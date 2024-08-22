// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVMONOGRAMVIEW_H
#define _TVMONOGRAMVIEW_H

@class UIFloatingContentView, UIView, NSString, UIImage;
@protocol _UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting;


#import "TVMonogramViewConfiguration.h"
#import "TVImageProxy.h"
#import "_TVImageView.h"
#import "_TVMonogramDescription.h"

@interface _TVMonogramView : UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting>

 {
    UIView *_placeholderView;
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    BOOL _isSelected;
}


@property (readonly, nonatomic) TVMonogramViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFocusedStateEnabled) BOOL focusedStateEnabled; // ivar: _focusedStateEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) TVImageProxy *imageProxy; // ivar: _imageProxy
@property (retain, nonatomic) _TVImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) _TVMonogramDescription *monogramDescription; // ivar: _monogramDescription
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (copy, nonatomic) id *pressCompletionBlock; // ivar: _pressCompletionBlock
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unfocusedImageAlpha; // ivar: _unfocusedImageAlpha


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)_loadWithMonogramDescription:(id)arg0 imageProxy:(id)arg1 ;
-(void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg0 ;
-(void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect )arg0 ;
-(void)_updatePlaceholerView;
-(void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect )arg0 ;
-(void)floatingContentView:(id)arg0 didFinishTransitioningToState:(NSUInteger)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif