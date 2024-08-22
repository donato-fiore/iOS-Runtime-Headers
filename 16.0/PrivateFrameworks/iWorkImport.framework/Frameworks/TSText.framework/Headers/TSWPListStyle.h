// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLISTSTYLE_H
#define TSWPLISTSTYLE_H

@class TSSStyle, NSString;
@protocol TSSPreset;


#import "TSWPListStyle.h"

@interface TSWPListStyle : TSSStyle <TSSPreset>



@property (weak, nonatomic) TSWPListStyle *baseStyleForTopicNumbersOverride; // ivar: _baseStyleForTopicNumbersOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;


+(BOOL)defaultTieredNumber;
+(BOOL)deprecated_isDefaultMissingBulletImage:(id)arg0 ;
+(NSUInteger)defaultLabelNumberType;
+(NSUInteger)effectiveTypeForLevel:(NSUInteger)arg0 forPropertyMapping:(id)arg1 ;
+(NSUInteger)firstLabelTypeForPropertyMapping:(id)arg0 ;
+(NSUInteger)labelTypeForLevel:(NSUInteger)arg0 forPropertyMapping:(id)arg1 ;
+(NSUInteger)pLabelTypeForLevel:(NSUInteger)arg0 forPropertyMapping:(id)arg1 includeDegenerateLevels:(BOOL)arg2 ;
+(id)additionalBulletStrings;
+(id)defaultArrayForProperty:(int)arg0 ;
+(id)defaultLabelGeometries;
+(id)defaultLabelImages;
+(id)defaultLabelIndents;
+(id)defaultLabelNumberTypes;
+(id)defaultLabelString;
+(id)defaultLabelStrings;
+(id)defaultLabelTieredNumbers;
+(id)defaultLabelTypes;
+(id)defaultPropertyMap;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 type:(NSUInteger)arg1 ;
+(id)defaultTextIndents;
+(id)extendedListNumberingTypesInStylesheet:(id)arg0 ;
+(id)harvardStyleWithContext:(id)arg0 ;
+(id)languageSpecificStylesForLanguages:(id)arg0 theme:(id)arg1 stylesheet:(id)arg2 ;
+(id)listStyleWithNumberType:(NSUInteger)arg0 inStyleSheet:(id)arg1 withNumberedPresetStyle:(id)arg2 ;
+(id)listStyleWithTextBullet:(id)arg0 inStyleSheet:(id)arg1 withTextBulletPresetStyle:(id)arg2 ;
+(id)nameForLanguageSpecificListStyle:(NSUInteger)arg0 withLocal:(id)arg1 ;
+(id)numberedListStyleForPresets:(id)arg0 ;
+(id)pDefaultLabelValuesForLabelTypeProperty:(int)arg0 context:(id)arg1 ;
+(id)pLabelTypeArrayForType:(NSUInteger)arg0 ;
+(id)p_arrayValuedProperties;
+(id)presetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)propertyMapForListNumberType:(NSUInteger)arg0 ;
+(id)propertyMapForListTextBullet:(id)arg0 ;
+(id)stickyOverrideProperties;
+(id)textBulletListStyleForPresets:(id)arg0 ;
+(id)textInspectorBulletStrings;
+(void)pGetDefaultTextIndentFloats:(float)arg0 ;
-(BOOL)wantsCustomResolveLogicForProperty:(int)arg0 forStyles:(id)arg1 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)doubleValueForProperty:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)labelIndentForLevel:(NSUInteger)arg0 ;
-(CGFloat)textIndentForLevel:(NSUInteger)arg0 fontSize:(CGFloat)arg1 ;
-(NSUInteger)effectiveTypeForLevel:(NSUInteger)arg0 ;
-(NSUInteger)firstLabelType;
-(NSUInteger)labelTypeForLevel:(NSUInteger)arg0 ;
-(float)floatValueForProperty:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg0 ;
-(id)baseStyleForTopicNumbers;
-(id)boxedObjectForProperty:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)numberTypeName;
-(id)objectForProperty:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(id)overridePropertyMapWithValue:(id)arg0 forProperty:(int)arg1 atParagraphLevels:(id)arg2 withContext:(id)arg3 ;
-(id)pOverrideArrayWithValue:(id)arg0 forProperty:(int)arg1 atParagraphLevels:(id)arg2 withContext:(id)arg3 ;
-(id)p_characterFillByResolvingWithParagraphStyle:(id)arg0 ;
-(id)parentStyleForFixingOrphanVariation;
-(id)resolvedValueForProperty:(int)arg0 inStyles:(id)arg1 ;
-(int)intValueForProperty:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setLocalizedArray:(id)arg0 forProperty:(int)arg1 ;


@end


#endif