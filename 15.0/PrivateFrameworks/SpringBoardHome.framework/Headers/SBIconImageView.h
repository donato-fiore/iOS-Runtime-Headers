// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONIMAGEVIEW_H
#define SBICONIMAGEVIEW_H

@class UIView, CAFilter, NSString, UIImage;
@protocol SBIconObserver, SBIconProgressViewDelegate, SBHIconImageCacheObserver, SBReusableView, SBCrossfadingIconImageSource, BSDescriptionProviding;


#import "SBIconProgressView.h"
#import "SBIcon.h"
#import "SBHIconImageCache.h"
#import "SBIconView.h"

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBHIconImageCacheObserver, SBReusableView, SBCrossfadingIconImageSource, BSDescriptionProviding>

 {
    CAFilter *_multiplyFilter;
    SBIconProgressView *_progressView;
    SBIconImageInfo _iconImageInfo;
    BOOL _hasSetIconImageInfo;
}


@property (nonatomic) CGFloat brightness; // ivar: _brightness
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImage *displayedImage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *icon; // ivar: _icon
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (nonatomic) SBIconImageInfo iconImageInfo;
@property (weak, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (nonatomic, getter=isJittering) BOOL jittering; // ivar: _jittering
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (nonatomic) CGFloat overlayAlpha; // ivar: _overlayAlpha
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL showsSquareCorners; // ivar: _showsSquareCorners
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect visibleBounds;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)hasOpaqueImage;
-(id)_generateSquareContentsImage;
-(id)contentsImage;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snapshot;
-(id)sourceView;
-(id)squareContentsImage;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_clearProgressView;
-(void)_updateOverlayAlpha;
-(void)_updateProgressMask;
-(void)clearCachedImages;
-(void)clearIconImageInfo;
-(void)dealloc;
-(void)didEndAsynchronousImageLoadForIcon:(id)arg0 ;
-(void)iconImageCache:(id)arg0 didUpdateImageForIcon:(id)arg1 ;
-(void)iconImageDidUpdate:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)progressViewCanBeRemoved:(id)arg0 ;
-(void)setProgressAlpha:(CGFloat)arg0 ;
-(void)setProgressState:(NSInteger)arg0 paused:(BOOL)arg1 percent:(CGFloat)arg2 animated:(BOOL)arg3 ;
-(void)updateImageAnimated:(BOOL)arg0 ;
-(void)willBeginAsynchronousImageLoadForIcon:(id)arg0 ;


@end


#endif