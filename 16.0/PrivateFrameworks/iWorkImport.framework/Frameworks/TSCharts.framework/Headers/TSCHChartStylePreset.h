// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTSTYLEPRESET_H
#define TSCHCHARTSTYLEPRESET_H

@class TSPObject, NSArray, NSString, TSSStylesheet, NSUUID;
@protocol TSSCustomPresetMigration, TSCHParagraphStyleOwner, TSCHStyleSwapSupporting, TSSPreset, TSPCopying, TSKModel;


#import "TSCHChartStyle.h"
#import "TSCHChartStyleState.h"
#import "TSCHLegendStyle.h"
#import "TSCHReferenceLineStyle.h"

@interface TSCHChartStylePreset : TSPObject <TSSCustomPresetMigration, TSCHParagraphStyleOwner, TSCHStyleSwapSupporting, TSSPreset, TSPCopying, TSKModel>

 {
    BOOL _hasUpgradedFromFinalizeHandler;
}


@property (readonly, nonatomic) NSArray *allStyles;
@property (readonly, nonatomic) NSArray *categoryAxisStyles; // ivar: _categoryAxisStylesList
@property (readonly, nonatomic) TSCHChartStyle *chartStyle; // ivar: _chartStyle
@property (readonly, copy, nonatomic) TSCHChartStyleState *chartStyleState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSCHLegendStyle *legendStyle; // ivar: _legendStyle
@property (readonly, nonatomic) NSArray *paragraphStyles; // ivar: _paragraphStylesList
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) TSCHReferenceLineStyle *refLineStyle; // ivar: _refLineStyle
@property (readonly, nonatomic) NSArray *seriesStyles; // ivar: _seriesStylesList
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSArray *valueAxisStyles; // ivar: _valueAxisStylesList


+(BOOL)needsObjectUUID;
+(id)p_getDefaultErrorBarColor:(id)arg0 valueAxisStyles:(id)arg1 ;
+(id)p_getDefaultTrendLineShadowColor:(id)arg0 ;
+(id)p_getDefaultTrendLineStrokeColor:(id)arg0 ;
+(id)presetWithContext:(id)arg0 fromStyleState:(id)arg1 uuid:(id)arg2 ;
+(void)p_replaceProperty:(int)arg0 inStyle:(id)arg1 withObject:(id)arg2 ;
+(void)p_useProperty:(int)arg0 asProperty:(int)arg1 inStyle:(id)arg2 ;
+(void)upgradeCalloutLineStylesForSeriesPresets:(id)arg0 valueAxisPresets:(id)arg1 paragraphPresets:(id)arg2 ;
+(void)upgradeDonutStylesForSeriesPresets:(id)arg0 ;
+(void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg0 seriesStyles:(id)arg1 ;
+(void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg0 seriesStyles:(id)arg1 ;
+(void)upgradeShadowPropertyForParagraphStyles:(id)arg0 ;
+(void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg0 valueAxisPresets:(id)arg1 paragraphPresets:(id)arg2 ;
-(BOOL)isEquivalentToPreset:(id)arg0 outReasons:(*id)arg1 ;
-(id)applyStyleSwapTuple:(id)arg0 ;
-(id)buildAxisNonStyle;
-(id)buildChartNonStyle;
-(id)buildLegendNonStyle;
-(id)buildSeriesNonStyle;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 shallowCopyStyles:(BOOL)arg1 ;
-(id)initForCopyingWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 chartStyle:(id)arg1 legendStyle:(id)arg2 valueAxisStyles:(id)arg3 categoryAxisStyles:(id)arg4 seriesStyles:(id)arg5 paragraphStyles:(id)arg6 refLineStyle:(id)arg7 ;
-(id)initWithContext:(id)arg0 chartStyle:(id)arg1 legendStyle:(id)arg2 valueAxisStyles:(id)arg3 categoryAxisStyles:(id)arg4 seriesStyles:(id)arg5 paragraphStyles:(id)arg6 refLineStyle:(id)arg7 uuid:(id)arg8 ;
-(id)migratedPresetInTheme:(id)arg0 followReplacements:(BOOL)arg1 ;
-(id)paragraphStyleAtIndex:(NSUInteger)arg0 ;
-(id)presetByAdoptingStylesheet:(id)arg0 withMapper:(id)arg1 paragraphStyles:(id)arg2 ;
-(id)referencedStyles;
-(id)styleOwnerFromSwapType:(int)arg0 andIndex:(NSUInteger)arg1 ;
-(id)swatchImage;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)upgradePresetIfNecessaryFromFinalizeHandlerWithOptionalPreUFFVersion:(*NSUInteger)arg0 ;


@end


#endif