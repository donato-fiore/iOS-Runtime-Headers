// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIMAGEUIVIEW_H
#define PXIMAGEUIVIEW_H

@class UIView, NSMutableArray, NSArray, NSString, UIImage;
@protocol PXAdjustableContentsView;


#import "PXRoundedCornerOverlayView.h"
#import "PXFocusableUIImageView.h"
#import "PXImageViewSpec.h"

@interface PXImageUIView : UIView <PXAdjustableContentsView>

 {
    NSMutableArray *_overlayViews;
    UIView *_floatingOverlayView;
    UIEdgeInsets _floatingInsets;
    BOOL _hasParallax;
    NSUInteger _animationFlags;
    UIView *_snapshotView;
}


@property (retain, nonatomic, setter=_setCornerView:) PXRoundedCornerOverlayView *_cornerView; // ivar: __cornerView
@property (readonly, nonatomic) PXFocusableUIImageView *_imageView; // ivar: __imageView
@property (copy, nonatomic, setter=_setOverlaySpecs:) NSArray *_overlaySpecs; // ivar: __overlaySpecs
@property (nonatomic) BOOL allowsFocus;
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsFocusRing;
@property (nonatomic, getter=isFloatingRotationEnabled) BOOL floatingRotationEnabled; // ivar: _floatingRotationEnabled
@property (nonatomic) BOOL floatingViewEnabled; // ivar: _floatingViewEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PXImageViewSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_PXImageUIViewInitialization;
-(void)_updateCorners;
-(void)_updateFloatingOverlay;
-(void)_updateSubviewsOrdering;
-(void)setFloatingOverlay:(id)arg0 withInsets:(struct UIEdgeInsets )arg1 parallax:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif