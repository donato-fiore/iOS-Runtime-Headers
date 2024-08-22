// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXIMAGEVIEW_H
#define JFXIMAGEVIEW_H

@class UIView;


#import "JTImage.h"

@interface JFXImageView : UIView

@property (nonatomic) NSInteger currentImageViewType; // ivar: _currentImageViewType
@property (nonatomic) BOOL disableIOSurface; // ivar: _disableIOSurface
@property (nonatomic) BOOL disableMetalKit; // ivar: _disableMetalKit
@property (nonatomic) BOOL enableDebugDrawing; // ivar: _enableDebugDrawing
@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger imageViewType; // ivar: _imageViewType
@property (retain, nonatomic) JTImage *jtImage; // ivar: _jtImage
@property (nonatomic) BOOL preferIOSurfaceForYUV; // ivar: _preferIOSurfaceForYUV
@property (nonatomic) BOOL preferMetalKit; // ivar: _preferMetalKit


+(BOOL)normalizedQuadVertices:(struct ? *)arg0 viewSize:(struct CGSize )arg1 textureSize:(struct CGSize )arg2 contentMode:(NSInteger)arg3 ;
+(id)colorFromImageViewType:(NSInteger)arg0 ;
+(id)colorFromRenderingType:(NSInteger)arg0 ;
-(NSInteger)preferredImageViewTypeForImage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)stringFromImageViewType:(NSInteger)arg0 ;
-(void)JFXImageView_commonInit;
-(void)flipX;
-(void)reconfigureImageView;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)updateDebugDrawing;
-(void)updateImageViewImage;


@end


#endif