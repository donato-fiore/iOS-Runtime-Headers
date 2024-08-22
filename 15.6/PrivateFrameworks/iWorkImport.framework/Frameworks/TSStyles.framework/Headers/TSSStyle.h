// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSSTYLE_H
#define TSSSTYLE_H

@class TSPObject, NSString, TSURetainedPointerSet, NSSet;
@protocol NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSMutablePropertySource, TSSStyleClient, TSKModel, TSKTransformableObject;


#import "TSSPropertyMap.h"
#import "TSSStyle.h"
#import "TSSPropertySet.h"
#import "TSSStylesheet.h"

@interface TSSStyle : TSPObject <NSCopying, TSSPropertyValueValidator, TSSStyleObject, TSSMutablePropertySource, TSSStyleClient, TSKModel, TSKTransformableObject>

 {
    TSSPropertyMap *mOverridePropertyMap;
    NSString *mName;
    NSString *mStyleIdentifier;
    BOOL mIsVariation;
    BOOL mWasUnarchivedAsOrphanVariation;
}


@property (readonly, nonatomic) TSSStyle *baseStyleForVariation;
@property (readonly, nonatomic) TSURetainedPointerSet *children;
@property (readonly, nonatomic) NSString *contentTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSURetainedPointerSet *descendants;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSSStyle *firstIdentifiedAncestor;
@property (readonly, nonatomic) TSSStyle *firstNamedAncestor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIdentified;
@property (readonly, nonatomic) BOOL isNamed;
@property (readonly, nonatomic) BOOL isVariation;
@property (readonly, nonatomic) NSUInteger minimumReadVersion;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) TSSPropertySet *overriddenProperties;
@property (readonly, nonatomic) NSUInteger overrideCount;
@property (readonly, nonatomic) TSSPropertyMap *overridePropertyMap;
@property (readonly, nonatomic) BOOL overridesAnyProperty;
@property (readonly, nonatomic) TSSStyle *parent; // ivar: mParent
@property (readonly, nonatomic) TSSPropertyMap *propertyMap;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly, nonatomic) TSSStyle *rootAncestor;
@property (readonly, nonatomic) TSSStyle *rootIdentifiedAncestor;
@property (readonly, nonatomic) NSString *styleIdentifier;
@property (weak, nonatomic) TSSStylesheet *stylesheet; // ivar: mStylesheet
@property (readonly) Class superclass;


+(BOOL)needsObjectUUID;
+(BOOL)shouldWarnWithPersistingWithoutStylesheet;
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
-(BOOL)allowsImplicitComponentOwnership;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)definesProperty:(int)arg0 ;
-(BOOL)hasEqualPropertyValues:(id)arg0 ;
-(BOOL)hasEqualValues:(id)arg0 forProperties:(id)arg1 ;
-(BOOL)hasEqualValuesToPropertyMap:(id)arg0 forProperties:(id)arg1 ;
-(BOOL)isAncestorOf:(id)arg0 ;
-(BOOL)isChildOf:(id)arg0 ;
-(BOOL)isDescendentOf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStyle:(id)arg0 ignoreObjectContext:(BOOL)arg1 ;
-(BOOL)isEqualToStyle:(id)arg0 ignoreObjectContext:(BOOL)arg1 ignoreObjectUUID:(BOOL)arg2 ;
-(BOOL)isEqualToStyle:(id)arg0 ignoreObjectUUID:(BOOL)arg1 ;
-(BOOL)isParentOf:(id)arg0 ;
-(BOOL)isRelatedTo:(id)arg0 ;
-(BOOL)overridePropertyMapIsEqualTo:(id)arg0 ;
-(BOOL)overridesProperty:(int)arg0 ;
-(BOOL)p_hasEqualValuesTo:(id)arg0 forProperty:(int)arg1 ;
-(BOOL)transformsFontSizes;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(CGFloat)overrideCGFloatValueForProperty:(int)arg0 ;
-(CGFloat)overrideDoubleValueForProperty:(int)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(float)overrideFloatValueForProperty:(int)arg0 ;
-(id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg0 ;
-(id)archivableRepresentationOfChangeSet:(id)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)boxedOverrideValueForProperty:(int)arg0 ;
-(id)boxedValueForProperty:(int)arg0 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)componentRootObject;
-(id)copyFlattenedWithContext:(id)arg0 ;
-(id)copyPropertyMap;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 includeParentProperties:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 context:(id)arg1 ;
-(id)fullPropertyMap;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)newOverridePropertyMapWithPropertyMap:(id)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)overridePropertyMapWithPropertyMap:(id)arg0 overridePropertyMap:(id)arg1 collapseSourceOverrides:(BOOL)arg2 ;
-(id)overrideValueForProperty:(int)arg0 ;
-(id)propertyMapIgnoringStyle:(id)arg0 ;
-(id)propertyMapThatNeedsToBeTransformedWithTransformedObjects:(id)arg0 ;
-(id)valueForProperty:(int)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(int)overrideIntValueForProperty:(int)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)mapNonDefaultPropertyOverridesForParentStyle:(id)arg0 propertyMap:(id)arg1 ;
-(void)removeAllValues;
-(void)removeValueForProperty:(int)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setBoxedObject:(id)arg0 forProperty:(int)arg1 ;
-(void)setBoxedValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setCGFloatValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setDoubleValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg0 forProperty:(int)arg1 ;
-(void)setIntValue:(int)arg0 forProperty:(int)arg1 ;
-(void)setObject:(id)arg0 forProperty:(int)arg1 ;
-(void)setObjectUUID:(id)arg0 ;
-(void)setValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setValuesForProperties:(id)arg0 ;


@end


#endif