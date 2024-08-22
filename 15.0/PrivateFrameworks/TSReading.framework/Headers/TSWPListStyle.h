// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPLISTSTYLE_H
#define TSWPLISTSTYLE_H

@class NSString;
@protocol TSSPreset;


#import "TSSStyle.h"

@interface TSWPListStyle : TSSStyle <TSSPreset>



@property (readonly, nonatomic) NSString *presetKind;


+(BOOL)defaultTieredNumber;
+(BOOL)isDefaultMissingBulletImage:(id)arg0 ;
+(id)CJKListNameForNumberType:(int)arg0 ;
+(id)defaultLabelGeometries;
+(id)defaultLabelIndents;
+(id)defaultLabelString;
+(id)defaultMissingBulletImage;
+(id)defaultPropertyMap;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 type:(int)arg1 ;
+(id)defaultTextIndents;
+(id)harvardStyleWithContext:(id)arg0 ;
+(id)listStyleWithNumberType:(int)arg0 inStyleSheet:(id)arg1 withNumberedPresetStyle:(id)arg2 ;
+(id)numberedlistStyleForPresets:(id)arg0 ;
+(id)pDefaultLabelValuesForLabelTypeProperty:(int)arg0 ;
+(id)pLabelTypeArrayForType:(int)arg0 ;
+(id)presetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)propertyMapForListNumberType:(int)arg0 ;
+(id)stickyOverrideProperties;
+(int)defaultLabelNumberType;
+(int)effectiveTypeForLevel:(NSUInteger)arg0 forPropertyMapping:(id)arg1 ;
+(int)firstLabelTypeForPropertyMapping:(id)arg0 ;
+(int)labelTypeForLevel:(NSUInteger)arg0 forPropertyMapping:(id)arg1 ;
+(int)pLabelTypeForLevel:(NSUInteger)arg0 forPropertyMapping:(id)arg1 includeDegenerateLevels:(BOOL)arg2 ;
+(void)pGetDefaultTextIndentFloats:(CGFloat)arg0 ;
-(CGFloat)labelIndentForLevel:(NSUInteger)arg0 ;
-(CGFloat)textIndentForLevel:(NSUInteger)arg0 fontSize:(CGFloat)arg1 ;
-(id)baseStyleForTopicNumbers;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)overridePropertyMapWithValue:(id)arg0 forProperty:(int)arg1 atParagraphLevels:(id)arg2 withContext:(id)arg3 ;
-(id)pOverrideArrayWithValue:(id)arg0 forProperty:(int)arg1 atParagraphLevels:(id)arg2 withContext:(id)arg3 ;
-(int)effectiveTypeForLevel:(NSUInteger)arg0 ;
-(int)firstLabelType;
-(int)labelTypeForLevel:(NSUInteger)arg0 ;


@end


#endif