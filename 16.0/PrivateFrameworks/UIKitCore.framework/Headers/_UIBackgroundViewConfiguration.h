// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBACKGROUNDVIEWCONFIGURATION_H
#define _UIBACKGROUNDVIEWCONFIGURATION_H

@class NSString;
@protocol _UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIColor.h"
#import "UIVisualEffect.h"
#import "UIImage.h"

@interface _UIBackgroundViewConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding>

 {
    ? _configurationFlags;
    UIView *_customView;
    NSUInteger _edgesAddingLayoutMarginsToBackgroundInsets;
    NSInteger _backgroundColorMode;
    UIColor *_backgroundColor;
    UIVisualEffect *_visualEffect;
    NSInteger _strokeColorMode;
    UIColor *_strokeColor;
    CGFloat _strokeWidth;
    CGFloat _strokeOutset;
    NSInteger _defaultStyle;
    NSDirectionalEdgeInsets _backgroundInsets;
}


@property (nonatomic, setter=__setMaskedCorners:) NSUInteger __maskedCorners; // ivar: _maskedCorners
@property (nonatomic, setter=_setCornerRadius:) CGFloat _cornerRadius; // ivar: _cornerRadius
@property (nonatomic, setter=_setShadowType:) NSInteger _shadowType; // ivar: _shadowType
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) NSInteger backgroundColorMode;
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
@property (nonatomic) NSInteger strokeColorMode;
@property (nonatomic, getter=_strokeLocation, setter=_setStrokeLocation:) NSInteger strokeLocation; // ivar: _strokeLocation
@property (nonatomic) CGFloat strokeOutset;
@property (nonatomic) CGFloat strokeWidth;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIVisualEffect *visualEffect;


+(BOOL)supportsSecureCoding;
+(id)defaultGroupedListCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultGroupedListHeaderFooterConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultInsetGroupedListCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultInsetGroupedListHeaderFooterConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultOutlineCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultOutlineParentCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultPlainListCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultPlainListHeaderFooterConfigurationForState:(NSUInteger)arg0 ;
+(id)groupedListCellConfiguration;
+(id)groupedListHeaderFooterConfiguration;
+(id)insetGroupedListCellConfiguration;
+(id)insetGroupedListHeaderFooterConfiguration;
+(id)outlineCellConfiguration;
+(id)outlineRootParentCellConfiguration;
+(id)plainListCellConfiguration;
+(id)plainListHeaderFooterConfiguration;
-(BOOL)_backgroundFillIsEqual:(id)arg0 withTintColor:(id)arg1 ;
-(BOOL)_isEqualToInternalConfigurationQuick:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_updatedConfigurationForState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedBackgroundColorForTintColor:(id)arg0 ;
-(id)resolvedStrokeColorForTintColor:(id)arg0 ;
-(id)updatedConfigurationForState:(NSUInteger)arg0 ;
-(id)updatedConfigurationForState:(NSUInteger)arg0 traitCollection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif