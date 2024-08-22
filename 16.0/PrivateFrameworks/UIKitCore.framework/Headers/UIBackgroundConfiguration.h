// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIBACKGROUNDCONFIGURATION_H
#define UIBACKGROUNDCONFIGURATION_H

@class NSString;
@protocol _UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIColor.h"
#import "UIVisualEffect.h"
#import "UIImage.h"

@interface UIBackgroundConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding>

 {
    ? _configurationFlags;
    UIView *_customView;
    NSUInteger _edgesAddingLayoutMarginsToBackgroundInsets;
    UIColor *_backgroundColor;
    id *_backgroundColorTransformer;
    UIVisualEffect *_visualEffect;
    UIImage *_image;
    NSInteger _imageContentMode;
    UIColor *_strokeColor;
    id *_strokeColorTransformer;
    CGFloat _strokeWidth;
    CGFloat _strokeOutset;
    NSInteger _defaultStyle;
    NSInteger _backgroundColorTransformerIdentifier;
    NSInteger _strokeColorTransformerIdentifier;
    NSDirectionalEdgeInsets _backgroundInsets;
}


@property (nonatomic, setter=__setMaskedCorners:) NSUInteger __maskedCorners; // ivar: _maskedCorners
@property (nonatomic, setter=_setCornerRadius:) CGFloat _cornerRadius; // ivar: _cornerRadius
@property (nonatomic, setter=_setMaskedCorners:) NSUInteger _maskedCorners;
@property (nonatomic, setter=_setShadowType:) NSInteger _shadowType; // ivar: _shadowType
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id *backgroundColorTransformer;
@property (nonatomic) NSDirectionalEdgeInsets backgroundInsets;
@property (nonatomic) CGFloat cornerRadius;
@property (retain, nonatomic) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgesAddingLayoutMarginsToBackgroundInsets;
@property (readonly, nonatomic, getter=_hasBackgroundColor) BOOL hasBackgroundColor;
@property (readonly, nonatomic, getter=_hasBackgroundFill) BOOL hasBackgroundFill;
@property (readonly, nonatomic, getter=_hasStroke) BOOL hasStroke;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) NSInteger imageContentMode;
@property (readonly, nonatomic) BOOL isTintBackgroundColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) id *strokeColorTransformer;
@property (nonatomic, getter=_strokeLocation, setter=_setStrokeLocation:) NSInteger strokeLocation; // ivar: _strokeLocation
@property (nonatomic) CGFloat strokeOutset;
@property (nonatomic) CGFloat strokeWidth;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIVisualEffect *visualEffect;


+(BOOL)supportsSecureCoding;
+(id)_listInsetGroupedCellConfiguration;
+(id)_listInsetGroupedHeaderFooterConfiguration;
+(id)clearConfiguration;
+(id)listAccompaniedSidebarCellConfiguration;
+(id)listGroupedCellConfiguration;
+(id)listGroupedHeaderFooterConfiguration;
+(id)listPlainCellConfiguration;
+(id)listPlainHeaderFooterConfiguration;
+(id)listSidebarCellConfiguration;
+(id)listSidebarHeaderConfiguration;
-(BOOL)_backgroundFillIsEqual:(id)arg0 withTintColor:(id)arg1 ;
-(BOOL)_isEqualToInternalConfigurationQuick:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_updatedConfigurationForState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedBackgroundColorForTintColor:(id)arg0 ;
-(id)resolvedStrokeColorForTintColor:(id)arg0 ;
-(id)updatedConfigurationForState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif