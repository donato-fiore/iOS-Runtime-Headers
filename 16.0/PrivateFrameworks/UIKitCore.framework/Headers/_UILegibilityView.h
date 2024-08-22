// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UILEGIBILITYVIEW_H
#define _UILEGIBILITYVIEW_H



#import "UIView.h"
#import "UIImage.h"
#import "UIImageView.h"
#import "_UILegibilitySettings.h"

@interface _UILegibilityView : UIView

@property (nonatomic) BOOL hidesImage; // ivar: _hidesImage
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) _UILegibilitySettings *settings; // ivar: _settings
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (retain, nonatomic) UIImageView *shadowImageView; // ivar: _shadowImageView
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly, nonatomic) NSInteger style;
@property (readonly, nonatomic) BOOL usesColorFilters;


-(BOOL)usesSecondaryColor;
-(id)drawingColor;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 image:(id)arg2 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 image:(id)arg2 shadowImage:(id)arg3 options:(NSInteger)arg4 ;
-(id)initWithStyle:(NSInteger)arg0 image:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 image:(id)arg1 shadowImage:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFilters;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateForChangedSettings:(id)arg0 ;
-(void)updateImage;


@end


#endif