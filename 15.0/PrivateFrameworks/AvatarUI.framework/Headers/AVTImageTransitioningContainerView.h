// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTIMAGETRANSITIONINGCONTAINERVIEW_H
#define AVTIMAGETRANSITIONINGCONTAINERVIEW_H

@class UIView, UIImage;


#import "AVTUIAnimatingImageView.h"

@interface AVTImageTransitioningContainerView : UIView

@property (nonatomic) CGSize aspectRatio; // ivar: _aspectRatio
@property (readonly, nonatomic) UIView *borderMaskView; // ivar: _borderMaskView
@property (readonly, nonatomic) AVTUIAnimatingImageView *imageViewsContainer; // ivar: _imageViewsContainer
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (retain, nonatomic) UIView *liveView; // ivar: _liveView
@property (retain, nonatomic) UIImage *staticImage; // ivar: _staticImage
@property (readonly, nonatomic) UIView *staticView;


+(struct CGRect )borderMaskRectForContentRect:(struct CGRect )arg0 ;
+(struct CGRect )imageViewRectForContentRect:(struct CGRect )arg0 liveViewRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
+(struct CGRect )liveViewRectForContentRect:(struct CGRect )arg0 aspectRatio:(struct CGSize )arg1 layoutMode:(NSInteger)arg2 scale:(CGFloat)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 layoutMode:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionLiveViewToFront;
-(void)transitionStaticViewToFront;


@end


#endif