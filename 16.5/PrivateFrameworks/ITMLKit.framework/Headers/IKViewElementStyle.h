// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKVIEWELEMENTSTYLE_H
#define IKVIEWELEMENTSTYLE_H

@class NSString, UIColor, NSURL, NSNumber, NSArray, NSMutableDictionary, NSShadow;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKFourTuple.h"
#import "IKCSSRule.h"
#import "IKColor.h"

@interface IKViewElementStyle : NSObject <NSCopying>

 {
    BOOL _filterBlockedStyles;
    NSString *_classDescriptorString;
}


@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSString *badgeTreatment;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) UIEdgeInsets borderMargins;
@property (readonly, nonatomic) IKFourTuple *borderRadius;
@property (readonly, nonatomic) UIEdgeInsets borderWidths;
@property (readonly, nonatomic) NSString *cardType;
@property (readonly, nonatomic) NSString *classDescriptorString;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSInteger columnCount;
@property (readonly, nonatomic) NSString *columnItemType;
@property (readonly, nonatomic) NSString *columnType;
@property (readonly, copy, nonatomic) IKCSSRule *cssRule; // ivar: _cssRule
@property (readonly, nonatomic) NSString *dividerType;
@property (readonly, nonatomic) NSUInteger elementAlignment;
@property (readonly, nonatomic) UIEdgeInsets elementMargin;
@property (readonly, nonatomic) UIEdgeInsets elementPadding;
@property (readonly, nonatomic) NSUInteger elementPosition;
@property (readonly, nonatomic) NSInteger fillImage;
@property (readonly, nonatomic) CGFloat fontSize;
@property (readonly, nonatomic) NSString *fontWeight;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) IKColor *ikBackgroundColor;
@property (readonly, nonatomic) IKColor *ikBorderColor;
@property (readonly, nonatomic) IKColor *ikColor;
@property (readonly, nonatomic) IKColor *ikHighlightColor;
@property (readonly, nonatomic) IKColor *imageMaskColor;
@property (readonly, nonatomic) IKColor *imagePlaceholderBackgroundColor;
@property (readonly, nonatomic) NSURL *imagePlaceholderURL;
@property (readonly, nonatomic) NSUInteger imagePosition;
@property (readonly, nonatomic) NSString *imageTreatment;
@property (readonly, nonatomic) NSString *itemHeight;
@property (readonly, nonatomic) NSString *itemWidth;
@property (readonly, nonatomic) NSString *labelsState;
@property (readonly, nonatomic) NSNumber *letterSpacing;
@property (readonly, nonatomic) NSNumber *lineHeight;
@property (readonly, nonatomic) NSString *lockupType;
@property (readonly, nonatomic) NSString *maxHeight;
@property (readonly, nonatomic) NSInteger maxTextLines;
@property (readonly, nonatomic) NSString *maxWidth;
@property (retain, nonatomic) NSArray *mediaQueryList; // ivar: _mediaQueryList
@property (readonly, nonatomic) NSUInteger ordinalMaxLength;
@property (retain, nonatomic) NSMutableDictionary *overridingValuesByStyle; // ivar: _overridingValuesByStyle
@property (readonly, nonatomic) NSInteger reflectImage;
@property (readonly, nonatomic) NSString *rowHeight;
@property (retain, nonatomic) NSMutableDictionary *styleDict; // ivar: _styleDict
@property (readonly, nonatomic) NSUInteger textAlignment;
@property (readonly, nonatomic) NSString *textScale;
@property (readonly, nonatomic) NSShadow *textShadow;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) CGAffineTransform transform;
@property (readonly, nonatomic) NSString *transition;
@property (readonly, nonatomic) NSNumber *transitionInterval;
@property (readonly, nonatomic) NSString *visibility;


+(BOOL)isHiddenStyleRegistered;
+(NSUInteger)alignmentFromString:(id)arg0 ;
+(NSUInteger)imageTreatmentFromString:(id)arg0 ;
+(NSUInteger)positionFromString:(id)arg0 ;
+(NSUInteger)transitionFromString:(id)arg0 ;
+(id)elementStyleWithParentStyle:(id)arg0 elementStyle:(id)arg1 elementStyleOverrides:(id)arg2 ;
+(id)elementStyleWithSelector:(id)arg0 aggregatingStyles:(id)arg1 ;
+(id)elementStyleWithSelector:(id)arg0 cssRule:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
+(id)elementStyleWithSelector:(id)arg0 inlineStyleString:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
+(id)elementStyleWithSelector:(id)arg0 inlineStyleString:(id)arg1 filterBlockedStyles:(BOOL)arg2 inlineStyleRangeCorrect:(BOOL)arg3 ;
+(id)normalizeClassSelectorString:(id)arg0 ;
+(id)propertiesForStyleName:(id)arg0 ;
+(id)registeredAliases;
+(id)registeredStyles;
+(void)addBlockedStyle:(id)arg0 ;
+(void)clearBlockedStyles;
+(void)initialize;
+(void)registerEdgeInsetStyle:(id)arg0 aliasName:(id)arg1 withPositionStyleNames:(id)arg2 inherited:(BOOL)arg3 ;
+(void)registerHiddenStyle:(id)arg0 ;
+(void)registerStyle:(id)arg0 aliasName:(id)arg1 withType:(NSUInteger)arg2 inherited:(BOOL)arg3 ;
+(void)registerStyle:(id)arg0 withType:(NSUInteger)arg1 inherited:(BOOL)arg2 ;
+(void)unregisterStyles;
-(BOOL)requiresDynamicEvaluation;
-(NSUInteger)edgeFlagForStyle:(id)arg0 ;
-(NSUInteger)typeForStyle:(id)arg0 ;
-(id)_declarationForStyleName:(id)arg0 expectedClass:(Class)arg1 ;
-(id)_gradientFromString:(id)arg0 ;
-(id)_newColorFromString:(id)arg0 ;
-(id)_styleNameForAlias:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cssValueForStyle:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCSSRule:(id)arg0 filterBlockedStyles:(BOOL)arg1 selStr:(id)arg2 ;
-(id)initWithClassSelector:(id)arg0 ;
-(id)initWithStyle:(id)arg0 classSelector:(id)arg1 ;
-(id)prototype;
-(id)valueForStyle:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForStyleName:(id)arg0 ;
-(void)_addDeclaration:(id)arg0 ;
-(void)_addElementStyle:(id)arg0 ;
-(void)_addParentStyle:(id)arg0 ;


@end


#endif