// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPIMAGEVIEW_H
#define LPIMAGEVIEW_H

@class UIImageView, UIView;


#import "LPComponentView.h"
#import "LPImage.h"
#import "LPImagePresentationProperties.h"
#import "LPImageViewStyle.h"

@interface LPImageView : LPComponentView {
    LPImage *_image;
    LPImage *_filteredImage;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    NSInteger _currentScalingMode;
    NSInteger _platterReason;
    UIImageView *_imageView;
    UIView *_overlayView;
    UIView *_backgroundView;
}




-(BOOL)shouldApplyBackground;
-(NSInteger)_filter;
-(NSInteger)scalingModeForSize:(struct CGSize )arg0 ;
-(id)_createImageViewWithImage:(id)arg0 ;
-(id)_createOverlayViewWithOpacity:(CGFloat)arg0 ;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 image:(id)arg1 properties:(id)arg2 style:(id)arg3 ;
-(struct CGSize )imageSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setImageViewScalingMode:(NSInteger)arg0 ;
-(void)_updateScalingMode;
-(void)ensureImageView;
-(void)installDarkeningViewIfNeeded;
-(void)layoutComponentView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorder;
-(void)updateCornerRadius;
-(void)updateShadowPath;


@end


#endif