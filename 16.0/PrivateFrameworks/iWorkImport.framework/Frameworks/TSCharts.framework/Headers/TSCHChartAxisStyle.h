// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTAXISSTYLE_H
#define TSCHCHARTAXISSTYLE_H



#import "TSCHBaseStyle.h"

@interface TSCHChartAxisStyle : TSCHBaseStyle



+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)identifierForCategoryStyleWithRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)identifierForValueStyleWithRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)imageFillProperties;
+(id)presetStyleDescriptorForCategoryStyleOrdinal:(NSUInteger)arg0 ;
+(id)presetStyleDescriptorForValueStyleOrdinal:(NSUInteger)arg0 ;
+(id)properties;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(int)muxDefaultPropertyForSpecificProperty:(int)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)loadFromPreUFFArchiveWithUnarchiver:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_upgrade3DChartPropertiesFrom2DProperties:(id)arg0 ;
-(void)p_upgradeRadarChartAxisProperties:(id)arg0 ;
-(void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif