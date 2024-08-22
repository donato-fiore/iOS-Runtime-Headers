// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTOOLCONFIGURATION_H
#define PKTOOLCONFIGURATION_H

@class UIImage, UIColor, NSString, UIBezierPath, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKFloatRange.h"

@interface PKToolConfiguration : NSObject <NSCopying>

 {
    PKFloatRange *_cachedStrokeWeightRange;
}


@property (copy, nonatomic) UIImage *bandContourImage; // ivar: _bandContourImage
@property (copy, nonatomic) UIImage *bandMaskImage; // ivar: _bandMaskImage
@property (nonatomic) CGFloat bandVerticalOffset; // ivar: _bandVerticalOffset
@property (copy, nonatomic) UIImage *baseImage; // ivar: _baseImage
@property (readonly, nonatomic) UIColor *defaultColor; // ivar: _defaultColor
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSInteger inkVersion; // ivar: _inkVersion
@property (readonly, nonatomic) BOOL isEraserTool; // ivar: _isEraserTool
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) CGFloat maximumBandThickness; // ivar: _maximumBandThickness
@property (readonly, nonatomic) CGFloat minimumBandThickness; // ivar: _minimumBandThickness
@property (nonatomic) CGFloat opacityLabelVerticalOffset; // ivar: _opacityLabelVerticalOffset
@property (copy, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath
@property (readonly, nonatomic) UIBezierPath *shadowPathIncludingTip; // ivar: _shadowPathIncludingTip
@property (readonly, nonatomic) BOOL shouldShowOpacityInColorPicker;
@property (readonly, nonatomic) CGSize strokeWeightButtonSize;
@property (copy, nonatomic) NSDictionary *strokeWeightsToButtonImages; // ivar: _strokeWeightsToButtonImages
@property (readonly, nonatomic) BOOL supportsColor; // ivar: _supportsColor
@property (readonly, nonatomic) BOOL supportsOpacity; // ivar: _supportsOpacity
@property (readonly, nonatomic) BOOL supportsStrokeWeight;
@property (copy, nonatomic) UIImage *tipContourImage; // ivar: _tipContourImage
@property (readonly, nonatomic) UIImage *tipMaskImage; // ivar: _tipMaskImage
@property (copy, nonatomic) id *viewControllerProvider; // ivar: _viewControllerProvider
@property (readonly, nonatomic) UIColor *weightButtonTintColorOverride; // ivar: _weightButtonTintColorOverride


+(id)_configurationForFountainPen;
+(id)_configurationForMonoline;
+(id)_configurationForWatercolor;
+(id)_deepCopyStrokeWeightDictionary:(id)arg0 ;
+(id)defaultColorForInkingToolWithIdentifier:(id)arg0 ;
+(id)defaultConfigurationForToolWithIdentifier:(id)arg0 ;
+(id)defaultConfigurationForToolWithIdentifier:(id)arg0 inkVersion:(NSInteger)arg1 ;
+(id)p_bitmapEraserImageWithWeight:(CGFloat)arg0 imageSize:(struct CGSize )arg1 ;
+(id)p_objectEraserImageWithWeight:(CGFloat)arg0 imageSize:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)bandThicknessForStrokeWeight:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLocalizedName:(id)arg0 baseImage:(id)arg1 shadowPath:(id)arg2 ;
-(id)p_strokeWeightRange;
-(void)clearTipMaskImageAndShadowPathIncludingTip;


@end


#endif