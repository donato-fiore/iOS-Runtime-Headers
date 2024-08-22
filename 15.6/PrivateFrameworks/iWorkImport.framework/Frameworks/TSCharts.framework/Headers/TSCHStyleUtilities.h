// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSTYLEUTILITIES_H
#define TSCHSTYLEUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSCHStyleUtilities : NSObject



+(BOOL)allSeriesInList:(id)arg0 haveExplosionValue:(CGFloat)arg1 ;
+(BOOL)groupedShadowsForChartModel:(id)arg0 ;
+(BOOL)hasNoFill:(id)arg0 ;
+(BOOL)hasShadow:(id)arg0 ;
+(BOOL)isNullFill:(id)arg0 ;
+(BOOL)labelExplosionIsCenteredInWedgeWithInnerRadius:(CGFloat)arg0 labelExplosion:(CGFloat)arg1 ;
+(BOOL)p_hasShadow:(id)arg0 ;
+(BOOL)shouldAnchorLabelsForSeries:(id)arg0 innerRadius:(CGFloat)arg1 calloutLineType:(NSInteger)arg2 defaultLabelExplosion:(CGFloat)arg3 ;
+(BOOL)upgradeShadowProperties:(id)arg0 inMap:(id)arg1 ;
+(BOOL)upgradedShadowPropertyFromShadow:(id)arg0 outUpgraded:(*id)arg1 ;
+(BOOL)useOutsideParagraphStyleIndexForSeries:(id)arg0 chartType:(id)arg1 layout:(id)arg2 ;
+(CGFloat)bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(CGFloat)arg0 chartModel:(id)arg1 bodySize:(struct CGSize )arg2 ;
+(CGFloat)p_bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(CGFloat)arg0 chartRadius:(CGFloat)arg1 ;
+(CGFloat)p_pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(CGFloat)arg0 chartRadius:(CGFloat)arg1 ;
+(CGFloat)pieFamilyLabelExplosionMaximumPercentage;
+(CGFloat)pieFamilyLabelExplosionMinimumPercentage;
+(CGFloat)pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(CGFloat)arg0 chartModel:(id)arg1 bodySize:(struct CGSize )arg2 ;
+(NSUInteger)segmentIndexForLineEnd:(id)arg0 ;
+(float)centeredDonutLabelExplosionPercentageWithInnerRadius:(CGFloat)arg0 ;
+(float)defaultCalloutLineThickness;
+(float)defaultDonutLabelExplosionPercentage;
+(float)defaultInnerRadiusPercentage;
+(float)defaultInnerRadiusPercentageForIconRendering;
+(float)defaultPieLabelExplosionPercentage;
+(float)pre2_4DefaultPieLabelExplosionPercentageForCalloutLineCalculation;
+(id)availableStrokes;
+(id)chartsNullShadowToDefaultDisabledShadow:(id)arg0 ;
+(id)defaultShadow;
+(id)fillForSeries:(id)arg0 chartType:(id)arg1 ;
+(id)fullyPopulatedStyleFromStyle:(id)arg0 context:(id)arg1 ;
+(id)fullyPopulatedStylesFromArray:(id)arg0 context:(id)arg1 styleClass:(Class)arg2 ;
+(id)lineEndForSegmentIndex:(NSInteger)arg0 ;
+(id)nullFill;
+(id)nullShadow;
+(id)p_referenceColorForObject:(id)arg0 ;
+(id)shadowToChartsNullShadow:(id)arg0 ;
+(id)stylesheetOfStyles:(id)arg0 nilAllowed:(BOOL)arg1 ;
+(id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1 forStyleOwner:(id)arg2 ;
+(id)trendlineColorFromCGColor:(struct CGColor *)arg0 ;
+(id)tupleToUpdate2_3ExplosionFromValue:(id)arg0 chartInfo:(id)arg1 forStyleOwner:(id)arg2 ;
+(id)uiStringForLabelFormatType:(int)arg0 ;
+(id)uiStringForLabelFormatType:(int)arg0 useShortString:(BOOL)arg1 ;
+(id)upgradedShadowPropertyForParagraphStyle:(id)arg0 ;
+(struct CGSize )bodySizeWithMinimumWedgeExplosionWithChartModel:(id)arg0 bodySize:(struct CGSize )arg1 ;
+(void)breakUpFontName:(id)arg0 isBold:(*BOOL)arg1 isItalic:(*BOOL)arg2 ;
+(void)convertToSimpleTSDFillsInProperties:(id)arg0 inMap:(id)arg1 context:(id)arg2 ;
+(void)p_adjustTrendlineSaturation:(*CGFloat)arg0 brightness:(*CGFloat)arg1 ;
+(void)updateParagraphStylePropertyMapsForMutationLookup:(id)arg0 mutationDictionary:(id)arg1 styleOwner:(id)arg2 indexProperty:(int)arg3 paragraphStyleProperty:(int)arg4 value:(id)arg5 ;
+(void)updateStyleState:(id)arg0 forMutationsPerStyleOwner:(id)arg1 ;
+(void)updateStyleState:(id)arg0 forPropertyMutationTuples:(id)arg1 ;
+(void)upgradeAlignmentInParagraphStyles:(id)arg0 willModifyBlock:(id)arg1 ;


@end


#endif