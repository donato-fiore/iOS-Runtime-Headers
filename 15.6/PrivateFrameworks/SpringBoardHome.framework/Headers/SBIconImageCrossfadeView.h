// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONIMAGECROSSFADEVIEW_H
#define SBICONIMAGECROSSFADEVIEW_H

@class SBFTouchPassThroughView, UIView;
@protocol SBCrossfadingIconImageSource;



@interface SBIconImageCrossfadeView : SBFTouchPassThroughView {
    CGFloat _containerScaleX;
    CGFloat _containerScaleY;
}


@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIView *crossfadeContainerView; // ivar: _crossfadeContainerView
@property (nonatomic) NSUInteger crossfadeStyle; // ivar: _crossfadeStyle
@property (readonly, nonatomic) UIView *crossfadeView; // ivar: _crossfadeView
@property (readonly, nonatomic) NSObject<SBCrossfadingIconImageSource> *iconImageSource; // ivar: _iconImageSource
@property (readonly, nonatomic) UIView *iconImageView; // ivar: _iconImageView
@property (nonatomic) BOOL masksCorners; // ivar: _masksCorners
@property (readonly, nonatomic) CGFloat morphFraction; // ivar: _morphFraction
@property (nonatomic) BOOL performsTrueCrossfade; // ivar: _performsTrueCrossfade
@property (nonatomic) CGPoint stretchAnchorPoint; // ivar: _stretchAnchorPoint


-(id)initWithSource:(id)arg0 crossfadeView:(id)arg1 ;
-(void)_applyCornerRadius:(CGFloat)arg0 ;
-(void)_applyCrossfadeScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;
-(void)_setCornerRadiusEnabled:(BOOL)arg0 ;
-(void)_updateCornerMask;
-(void)cleanup;
-(void)layoutSubviews;
-(void)prepareGeometry;
-(void)setAppSnapshotCornerRadius:(CGFloat)arg0 ;
-(void)setCrossfadeFraction:(CGFloat)arg0 ;
-(void)setSourceFadeFraction:(CGFloat)arg0 ;


@end


#endif