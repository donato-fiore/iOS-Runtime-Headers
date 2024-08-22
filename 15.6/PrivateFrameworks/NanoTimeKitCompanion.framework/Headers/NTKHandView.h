// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKHANDVIEW_H
#define NTKHANDVIEW_H

@class UIView, CALayer, UIImageView, UIColor, NSString, CLKDevice, UIImage;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKAnalogHandConfiguration.h"
#import "NTKColoringImageView.h"

@interface NTKHandView : UIView <CLKMonochromeComplicationView>

 {
    CALayer *_inlayLayer;
    UIImageView *_radialShadowImageView;
    UIImageView *_dropShadowImageView;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly) NTKAnalogHandConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) CGSize directionalShadowOffset; // ivar: _directionalShadowOffset
@property (retain, nonatomic) UIImage *dropShadowImage; // ivar: _dropShadowImage
@property (nonatomic) *CGPath dropShadowPath; // ivar: _dropShadowPath
@property (nonatomic) BOOL dropShadowsHidden; // ivar: _dropShadowsHidden
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (retain, nonatomic) UIColor *handDotColor; // ivar: _handDotColor
@property (readonly, nonatomic) UIView *handDotView; // ivar: _handDotView
@property (readonly, nonatomic) NTKColoringImageView *handImageView; // ivar: _handImageView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *inlayColor; // ivar: _inlayColor
@property (nonatomic) UIEdgeInsets inlayInsets; // ivar: _inlayInsets
@property (readonly, nonatomic) CALayer *inlayLayer;
@property (retain, nonatomic) UIImage *radialShadowImage; // ivar: _radialShadowImage
@property (nonatomic) *CGPath radialShadowPath; // ivar: _radialShadowPath
@property (nonatomic) BOOL radialShadowsHidden; // ivar: _radialShadowsHidden
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL shadowImageBehindHand; // ivar: _shadowImageBehindHand
@property (nonatomic) UIEdgeInsets shadowInsets; // ivar: _shadowInsets
@property (nonatomic) BOOL shadowsHidden; // ivar: _shadowsHidden
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *transitionContainerView; // ivar: _transitionContainerView
@property (nonatomic) CGFloat zRotation; // ivar: _zRotation


-(id)initWithConfiguration:(id)arg0 forDevice:(id)arg1 maskedShadow:(BOOL)arg2 ;
-(id)initWithImage:(id)arg0 forDevice:(id)arg1 ;
-(id)shadowView;
-(struct CGPoint )anchorPointFromConfiguration;
-(void)_adjustHandImageSubviewOrder;
-(void)_initWithImage:(id)arg0 forDevice:(id)arg1 ;
-(void)_layoutInlayLayer;
-(void)_updateShadows;
-(void)_updateTransform;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 ;
-(void)setNeedsLayout;
-(void)setupHandDotViewWithDiameter:(CGFloat)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif