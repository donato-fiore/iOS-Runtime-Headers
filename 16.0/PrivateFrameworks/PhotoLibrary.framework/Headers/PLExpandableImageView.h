// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLEXPANDABLEIMAGEVIEW_H
#define PLEXPANDABLEIMAGEVIEW_H

@class NSString, PLManagedAsset;


#import "PLExpandableView.h"
#import "PLImageView.h"
#import "PLVideoView.h"

@interface PLExpandableImageView : PLExpandableView {
    PLImageView *_imageView;
    int _imageID;
    CGSize _originalSize;
    CGFloat _originalWidth;
    CGFloat _originalAngle;
    CGPoint _anchorPoint;
    CGFloat _imageRotationAngle;
    CGFloat _pinchWidth;
    CGFloat _pinchAngle;
    CGFloat _pinchScale;
    CGRect _initialExpandingFrame;
    CGRect _originalBounds;
    float _currentAngle;
    CGSize _centerOffset;
    ? _exImageFlags;
}


@property (nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property (readonly, nonatomic) CGSize imageSize;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) PLManagedAsset *photo; // ivar: _photo
@property (readonly, nonatomic) BOOL showsPlaceholder;
@property (retain, nonatomic) PLVideoView *videoView;


+(CGFloat)imageBorderWidth;
-(BOOL)isBeingManipulated;
-(BOOL)isShadowEnabled;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)imageRotationAngle;
-(CGFloat)transitionProgress;
-(float)_borderAlphaForExpansionFraction:(float)arg0 ;
-(float)_currentScale;
-(float)_expandedScale;
-(float)_expansionFraction;
-(float)completeTrackingPinch:(id)arg0 toState:(int)arg1 duration:(CGFloat)arg2 ;
-(float)continueTrackingPinch:(id)arg0 ;
-(id)_contentView;
-(id)image;
-(id)imageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 frameStyle:(int)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 frameStyle:(int)arg1 withBorder:(BOOL)arg2 ;
-(struct CGRect )_snappedExpandedFrame;
-(struct CGRect )frameOfImage;
-(struct CGSize )_newSizeFromSize:(struct CGSize )arg0 ;
-(void)_bounceBack:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)_bounceToPlace:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)_setOriginalSize:(struct CGSize )arg0 ;
-(void)_updateBorderAndAccessoriesAlpha;
-(void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint )arg0 rightPoint:(struct CGPoint )arg1 ;
-(void)beginTrackingPinch:(id)arg0 ;
-(void)dealloc;
-(void)finishTransition;
-(void)layoutSubviews;
-(void)renderSnapshotInContext:(struct CGContext *)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setFullSizeImageJPEGData:(id)arg0 size:(struct CGSize )arg1 orientation:(NSInteger)arg2 ;
-(void)setImage:(id)arg0 ;
-(void)setImage:(id)arg0 isFullscreen:(BOOL)arg1 ;
-(void)setShadowEnabled:(BOOL)arg0 ;
-(void)setSize:(struct CGSize )arg0 angle:(float)arg1 ;
-(void)setTextBadgeString:(id)arg0 ;
-(void)setTransformAndCenterForFrame:(struct CGRect )arg0 ;
-(void)setTransitionProgress:(CGFloat)arg0 ;
-(void)stateDidChangeFrom:(int)arg0 ;


@end


#endif