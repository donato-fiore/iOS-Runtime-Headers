// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTSERIESSTYLE_H
#define TSCHCHARTSERIESSTYLE_H



#import "TSCHBaseStyle.h"

@interface TSCHChartSeriesStyle : TSCHBaseStyle



+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)bootstrappedSeriesStyleWithContext:(id)arg0 seriesIndex:(NSUInteger)arg1 presetIndex:(NSUInteger)arg2 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)getURLForImage:(id)arg0 ;
+(id)identifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)imageFillProperties;
+(id)presetStyleDescriptorForOrdinal:(NSUInteger)arg0 ;
+(id)properties;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(int)muxDefaultPropertyForSpecificProperty:(int)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)handlePreUFFUpgradesForOverridePropertyMapWithUnarchiver:(id)arg0 ;
-(void)loadFromPreUFFArchiveWithUnarchiver:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_upgrade3DChartProperties:(id)arg0 ;
-(void)p_upgrade3DFillSubclassTSDFill:(id)arg0 ;
-(void)p_upgradeBubbleChartProperties:(id)arg0 ;
-(void)p_upgradeMixedChartProperties:(id)arg0 ;
-(void)p_upgradeRadarChartProperties:(id)arg0 ;
-(void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg0 ;
-(void)p_upgradeSeparateVisibilityProperties:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif