// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBRENDERTRAITS_H
#define UIKBRENDERTRAITS_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIKBGradient.h"
#import "UIKBTextStyle.h"
#import "UIKBRenderGeometry.h"
#import "UIKBRenderTraits.h"

@interface UIKBRenderTraits : NSObject <NSCopying>

 {
    BOOL _honorControlOpacity;
}


@property (retain, nonatomic) UIKBGradient *backgroundGradient; // ivar: _backgroundGradient
@property (nonatomic) NSInteger blendForm; // ivar: _blendForm
@property (nonatomic) BOOL blurBlending; // ivar: _blurBlending
@property (nonatomic) BOOL controlOpacities; // ivar: _controlOpacities
@property (retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle; // ivar: _fallbackSymbolStyle
@property (nonatomic) CGFloat floatingContentViewCornerRadius; // ivar: _floatingContentViewCornerRadius
@property (nonatomic) CGSize floatingContentViewFocusedIncreaseSize; // ivar: _floatingContentViewFocusedIncreaseSize
@property (nonatomic) CGFloat floatingContentViewShadowOpacity; // ivar: _floatingContentViewShadowOpacity
@property (nonatomic) CGFloat floatingContentViewShadowRadius; // ivar: _floatingContentViewShadowRadius
@property (nonatomic) CGFloat floatingContentViewShadowVerticalOffset; // ivar: _floatingContentViewShadowVerticalOffset
@property (readonly, nonatomic) NSArray *foregroundRenderEffects; // ivar: _foregroundRenderEffects
@property (retain, nonatomic) UIKBRenderGeometry *geometry; // ivar: _geometry
@property (retain, nonatomic) NSString *hashString; // ivar: _hashString
@property (retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits; // ivar: _highlightedVariantTraits
@property (retain, nonatomic) UIKBGradient *layeredBackgroundGradient; // ivar: _layeredBackgroundGradient
@property (retain, nonatomic) UIKBGradient *layeredForegroundGradient; // ivar: _layeredForegroundGradient
@property (readonly, nonatomic) NSArray *renderEffects; // ivar: _renderEffects
@property (retain, nonatomic) NSArray *renderFlags; // ivar: _renderFlags
@property (nonatomic) NSInteger renderFlagsForAboveEffects; // ivar: _renderFlagsForAboveEffects
@property (nonatomic) BOOL renderSecondarySymbolsSeparately; // ivar: _renderSecondarySymbolsSeparately
@property (retain, nonatomic) NSArray *secondarySymbolStyles; // ivar: _secondarySymbolStyles
@property (retain, nonatomic) UIKBTextStyle *symbolStyle; // ivar: _symbolStyle
@property (nonatomic) BOOL usesDarkAppearance; // ivar: _usesDarkAppearance
@property (retain, nonatomic) NSArray *variantGeometries; // ivar: _variantGeometries
@property (retain, nonatomic) UIKBRenderTraits *variantTraits; // ivar: _variantTraits


+(id)emptyTraits;
+(id)traitsWithGeometry:(id)arg0 ;
+(id)traitsWithSymbolStyle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)addForegroundRenderEffect:(id)arg0 ;
-(void)addRenderEffect:(id)arg0 ;
-(void)modifyForMasking;
-(void)overlayWithTraits:(id)arg0 ;
-(void)removeAllRenderEffects;


@end


#endif