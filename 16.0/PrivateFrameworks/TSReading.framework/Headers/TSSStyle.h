// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSSTYLE_H
#define TSSSTYLE_H

@class NSString, NSSet;
@protocol NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSThemeAsset, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject;


#import "TSPObject.h"
#import "TSSPropertyMap.h"
#import "TSSStyle.h"
#import "TSSStylesheet.h"

@interface TSSStyle : TSPObject <NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSThemeAsset, TSSPropertySource, TSSStyleClient, TSKModel, TSKTransformableObject>

 {
    TSSPropertyMap *mOverridePropertyMap;
    NSString *mName;
    NSString *mStyleIdentifier;
}


@property (readonly, nonatomic) TSSStyle *baseStyleForVariation;
@property (readonly, nonatomic) NSSet *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSSStyle *firstIdentifiedAncestor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIdentified;
@property (readonly, nonatomic) BOOL isNamed;
@property (readonly, nonatomic) BOOL isVariation; // ivar: mIsVariation
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) TSSPropertyMap *overridePropertyMap;
@property (readonly, nonatomic) TSSStyle *parent; // ivar: mParent
@property (readonly, nonatomic) TSSStyle *rootAncestor;
@property (readonly, nonatomic) TSSStyle *rootIdentifiedAncestor;
@property (readonly, nonatomic) NSString *styleIdentifier;
@property (readonly, nonatomic) TSSStylesheet *stylesheet; // ivar: mStylesheet
@property (readonly) Class superclass;


+(BOOL)validateDoubleValue:(*CGFloat)arg0 forProperty:(int)arg1 ;
+(BOOL)validateFloatValue:(*float)arg0 forProperty:(int)arg1 ;
+(BOOL)validateIntValue:(*int)arg0 forProperty:(int)arg1 ;
+(BOOL)validateIntValue:(*int)arg0 forProperty:(int)arg1 min:(int)arg2 max:(int)arg3 ;
+(BOOL)validateIntValueAsBool:(*int)arg0 forProperty:(int)arg1 ;
+(BOOL)validateObjectValue:(*id)arg0 withClass:(Class)arg1 forProperty:(int)arg2 ;
+(CGFloat)defaultDoubleValueForProperty:(int)arg0 ;
+(CGFloat)fontSizeForFontSize:(CGFloat)arg0 scalingFactor:(CGFloat)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)boxedDefaultValueForProperty:(int)arg0 ;
+(id)defaultPropertyMap;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)definesProperty:(int)arg0 ;
-(BOOL)hasEqualPropertyValues:(id)arg0 ;
-(BOOL)hasEqualValues:(id)arg0 forProperties:(id)arg1 ;
-(BOOL)hasEqualValuesToPropertyMap:(id)arg0 forProperties:(id)arg1 ;
-(BOOL)isAncestorOf:(id)arg0 ;
-(BOOL)isChildOf:(id)arg0 ;
-(BOOL)isDescendentOf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isParentOf:(id)arg0 ;
-(BOOL)isThemeEquivalent:(id)arg0 ;
-(BOOL)overridePropertyMapIsEqualTo:(id)arg0 ;
-(BOOL)overridesAnyProperty;
-(BOOL)overridesProperty:(int)arg0 ;
-(BOOL)p_hasEqualValuesTo:(id)arg0 forProperty:(int)arg1 ;
-(BOOL)transformsFontSizes;
-(BOOL)validateDoubleValue:(*CGFloat)arg0 forProperty:(int)arg1 ;
-(BOOL)validateFloatValue:(*float)arg0 forProperty:(int)arg1 ;
-(BOOL)validateIntValue:(*int)arg0 forProperty:(int)arg1 ;
-(BOOL)validateIntValue:(*int)arg0 forProperty:(int)arg1 min:(int)arg2 max:(int)arg3 ;
-(BOOL)validateIntValueAsBool:(*int)arg0 forProperty:(int)arg1 ;
-(BOOL)validateObjectValue:(*id)arg0 withClass:(Class)arg1 forProperty:(int)arg2 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(CGFloat)overrideCGFloatValueForProperty:(int)arg0 ;
-(CGFloat)overrideDoubleValueForProperty:(int)arg0 ;
-(NSUInteger)overrideCount;
-(SEL)mapThemeAssetSelector;
-(float)floatValueForProperty:(int)arg0 ;
-(float)overrideFloatValueForProperty:(int)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)boxedOverrideValueForProperty:(int)arg0 ;
-(id)boxedValueForProperty:(int)arg0 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)constrainShapeStyleForContext:(id)arg0 ;
-(id)copyFlattenedWithContext:(id)arg0 ;
-(id)copyPropertyMap;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 context:(id)arg1 ;
-(id)fullPropertyMap;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)newOverridePropertyMapWithPropertyMap:(id)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)overriddenProperties;
-(id)overridePropertyMapWithPropertyMap:(id)arg0 overridePropertyMap:(id)arg1 collapseSourceOverrides:(BOOL)arg2 ;
-(id)overrideValueForProperty:(int)arg0 ;
-(id)propertyMap;
-(id)propertyMapIgnoringStyle:(id)arg0 ;
-(id)referencedStyles;
-(id)valueForProperty:(int)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(int)overrideIntValueForProperty:(int)arg0 ;
-(void)constrainShadowForSwatchGeneration;
-(void)constrainStrokeForSwatchGeneration;
-(void)dealloc;
-(void)fadeReflectionForSwatchGeneration;
-(void)removeAllValues;
-(void)removeValueForProperty:(int)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)setBoxedValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setCGFloatValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setDoubleValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg0 forProperty:(int)arg1 ;
-(void)setIntValue:(int)arg0 forProperty:(int)arg1 ;
-(void)setValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setValuesForProperties:(id)arg0 ;


@end


#endif