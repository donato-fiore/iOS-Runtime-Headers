// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPINANNOTATIONVIEW_H
#define MKPINANNOTATIONVIEW_H

@class UIImageView, UIColor;
@protocol _MKPinAnnotationViewDelegate;


#import "MKAnnotationView.h"

@interface MKPinAnnotationView : MKAnnotationView {
    UIImageView *_shadowView;
    UIColor *_pinTintColor;
    int _state;
    BOOL _animatesDrop;
}


@property (weak, nonatomic, setter=_setDelegate:) NSObject<_MKPinAnnotationViewDelegate> *_delegate; // ivar: _delegate
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) NSUInteger pinColor;
@property (retain, nonatomic) UIColor *pinTintColor;


+(Class)_mapkitLeafClass;
+(Class)layerClass;
+(id)_bounceAnimation;
+(id)_dropBounceAnimation;
+(id)_imageCache;
+(id)_imageForLayer:(NSInteger)arg0 state:(NSInteger)arg1 mapType:(NSUInteger)arg2 traits:(id)arg3 ;
+(id)_imageForState:(NSInteger)arg0 mapType:(NSUInteger)arg1 pinColor:(id)arg2 traits:(id)arg3 ;
+(id)_pinsWithMapType:(NSUInteger)arg0 pinColor:(id)arg1 traits:(id)arg2 ;
+(id)_reuseIdentifier;
+(id)_shadowImage;
+(id)greenPinColor;
+(id)purplePinColor;
+(id)redPinColor;
+(struct CGPoint )_calloutOffset;
+(struct CGPoint )_leftCalloutOffset;
+(struct CGPoint )_perceivedAnchorPoint;
+(struct CGPoint )_rightCalloutOffset;
+(struct CGPoint )_shadowAnchorPoint;
+(struct CGRect )_pinFrameForPosition:(struct CGPoint )arg0 ;
+(struct CGSize )_perceivedSize;
-(BOOL)isHighlighted;
-(id)_bounceAnimation:(BOOL)arg0 withDelay:(CGFloat)arg1 addToLayer:(BOOL)arg2 ;
-(id)_floatingImage;
-(id)_highlightedImage;
-(id)_image;
-(id)_pinBounceImages;
-(id)_pinJumpImages;
-(id)_pins;
-(id)description;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(int)_state;
-(struct CGPoint )_draggingDropOffset;
-(struct CGRect )_significantBounds;
-(struct UIEdgeInsets )_defaultCollisionAlignmentRectInsets;
-(void)_cleanupAfterPinDropAnimation;
-(void)_didUpdatePosition;
-(void)_dropAfterDraggingAndRevertPosition:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_dropFromDistance:(CGFloat)arg0 maxDistance:(CGFloat)arg1 withDelay:(CGFloat)arg2 ;
-(void)_invalidateImage;
-(void)_liftDidEnd:(id)arg0 ;
-(void)_liftForDraggingAfterBounceAnimated:(BOOL)arg0 ;
-(void)_liftForDraggingAnimated:(BOOL)arg0 ;
-(void)_removeAllAnimations;
-(void)_setMapType:(NSUInteger)arg0 ;
-(void)_setRotationRadians:(CGFloat)arg0 withAnimation:(id)arg1 ;
-(void)_stopDrop;
-(void)_updateAnchorPosition:(struct CGPoint )arg0 alignToPixels:(BOOL)arg1 ;
-(void)_updateShadowLayer;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setDragState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif