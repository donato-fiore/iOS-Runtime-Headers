// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKIMAGEVIEW_H
#define TLKIMAGEVIEW_H

@class UIImageView, UIView, UIFont;
@protocol TLKImageViewDelegate;


#import "TLKView.h"
#import "TLKImage.h"
#import "TLKProminenceView.h"

@interface TLKImageView : TLKView

@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL alwaysShowPlaceholderView; // ivar: _alwaysShowPlaceholderView
@property (weak, nonatomic) NSObject<TLKImageViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableCornerRounding; // ivar: _disableCornerRounding
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) TLKImage *lastTlkImage; // ivar: _lastTlkImage
@property (retain, nonatomic) TLKProminenceView *placeholderView; // ivar: _placeholderView
@property (nonatomic) NSUInteger prominence; // ivar: _prominence
@property (retain, nonatomic) UIView *shadowContainer; // ivar: _shadowContainer
@property (retain, nonatomic) UIFont *symbolFont; // ivar: _symbolFont
@property (nonatomic) NSInteger symbolScale; // ivar: _symbolScale
@property (nonatomic) NSInteger symbolWeight; // ivar: _symbolWeight
@property (retain, nonatomic) TLKImage *tlkImage; // ivar: _tlkImage
@property (nonatomic) BOOL useButtonColoring; // ivar: _useButtonColoring


+(BOOL)checkTransparencyForImageAtCorners:(struct CGImage *)arg0 shouldCropToCircle:(BOOL)arg1 ;
+(BOOL)hasTransparencyAtPoint:(struct CGPoint )arg0 forCGImage:(struct CGImage *)arg1 ;
+(BOOL)imageIsProbablyOpaque:(id)arg0 tlkImage:(id)arg1 ;
+(NSUInteger)defaultCornerMask;
+(struct CGSize )roundedSizeForSize:(struct CGSize )arg0 ;
-(id)init;
-(struct CGRect )aspectRatioPreservedFrameForSize:(struct CGSize )arg0 ;
-(struct CGSize )constrainedSizeForImageSize:(struct CGSize )arg0 fittingSize:(struct CGSize )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)applyCornerRoundingStyle:(NSUInteger)arg0 toView:(id)arg1 ;
-(void)didMoveToWindow;
-(void)invalidateIntrinsicContentSizeIfNecessary;
-(void)layoutSubviews;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateShadow;
-(void)updateSizeAndLayout;
-(void)updateSymbolConfiguration;
-(void)updateWithUIImage:(id)arg0 animate:(BOOL)arg1 ;


@end


#endif