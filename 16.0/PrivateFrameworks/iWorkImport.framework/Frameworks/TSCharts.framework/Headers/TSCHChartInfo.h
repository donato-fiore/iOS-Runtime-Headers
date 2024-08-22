// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTINFO_H
#define TSCHCHARTINFO_H

@class TSDInfoGeometry, NSMutableArray, NSMutableDictionary, NSArray, NSString, TSKDocumentRoot, TSSStylesheet, NSNumber, TSPLazyReference, TSKCustomFormatList;
@protocol TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHParagraphStyleOwner, TSDMixing, NSCopying, TSKTransformableObject;

#import <Foundation/Foundation.h>

#import "TSCHChartStyleState.h"
#import "TSCHChartType.h"
#import "TSCHChartDrawableInfo.h"
#import "TSCHChartStylePreset.h"
#import "TSCHLegendModel.h"
#import "TSCHLegendNonStyle.h"
#import "TSCHLegendStyle.h"
#import "TSCHChartMediator.h"
#import "TSCHChartModel.h"
#import "TSCHChartNonStyle.h"
#import "TSCHChartLayoutCache.h"
#import "TSCHChartStyle.h"
#import "TSCHReferenceLineStyle.h"

@interface TSCHChartInfo : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHParagraphStyleOwner, TSDMixing, NSCopying, TSKTransformableObject>

 {
    TSDInfoGeometry *_geometry;
    NSMutableArray *_valueAxisStyles;
    NSMutableArray *_categoryAxisStyles;
    NSMutableArray *_valueAxisNonStyles;
    NSMutableArray *_categoryAxisNonStyles;
    NSMutableArray *_themeSeriesStyles;
    NSMutableArray *_privateSeriesStyles;
    NSMutableArray *_seriesNonStyles;
    NSMutableDictionary *_refLineStylesMap;
    NSMutableDictionary *_refLineNonStylesMap;
    NSMutableArray *_paragraphStyles;
}


@property (nonatomic) BOOL appearancePreservedForPreset; // ivar: _appearancePreservedForPreset
@property (readonly, nonatomic) NSArray *categoryAxisNonStyles;
@property (readonly, nonatomic) NSArray *categoryAxisStyles;
@property (readonly, copy, nonatomic) TSCHChartStyleState *chartStyleState;
@property (retain, nonatomic) TSCHChartType *chartType; // ivar: _chartType
@property (readonly, nonatomic) BOOL containsCalloutLines;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) ? defaultLayoutSettings;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayMessageOnRepCreation; // ivar: _displayMessageOnRepCreation
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) TSSStylesheet *documentStylesheet;
@property (weak, nonatomic) TSCHChartDrawableInfo *drawableInfo; // ivar: _drawableInfo
@property (readonly, nonatomic) NSArray *fillsForSeriesAndTheme;
@property (readonly, nonatomic) TSCHChartStylePreset *firstPresetFromTheme;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) int gridDirection;
@property (readonly, nonatomic) BOOL hasRoundedCorners;
@property (readonly, nonatomic) BOOL hasSetDefaultLayoutSettings;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *horizontalMax; // ivar: _horizontalMax
@property (retain, nonatomic) NSNumber *horizontalMin; // ivar: _horizontalMin
@property (copy, nonatomic) NSString *horizontalPrefix; // ivar: _horizontalPrefix
@property (copy, nonatomic) NSString *horizontalSuffix; // ivar: _horizontalSuffix
@property (nonatomic) BOOL horizontalUseSeparator; // ivar: _horizontalUseSeparator
@property (nonatomic) CGFloat informationalMessageDuration; // ivar: _informationalMessageDuration
@property (copy, nonatomic) NSString *informationalMessageString; // ivar: _informationalMessageString
@property (nonatomic) CGRect innerChartFrame; // ivar: _innerChartFrame
@property (nonatomic) BOOL isOlderThanSage; // ivar: _isOlderThanSage
@property (readonly, nonatomic) BOOL isPhantom;
@property (readonly, nonatomic) BOOL isSingleCircleSpecialCase;
@property (copy, nonatomic) NSString *lastAppliedFillSetLookupString; // ivar: _lastAppliedFillSetLookupString
@property (nonatomic) NSUInteger lastSeriesIndex; // ivar: _lastSeriesIndex
@property (retain, nonatomic) TSPLazyReference *lazyPreset; // ivar: _lazyPreset
@property (retain, nonatomic) TSCHLegendModel *legend; // ivar: _legend
@property (retain, nonatomic) TSCHLegendNonStyle *legendNonStyle; // ivar: _legendNonStyle
@property (retain, nonatomic) TSCHLegendStyle *legendStyle; // ivar: _legendStyle
@property (readonly, nonatomic) float maximumExplosion;
@property (retain, nonatomic) TSCHChartMediator *mediator; // ivar: _mediator
@property (readonly, nonatomic) CGSize minimumChartBodySize;
@property (retain, nonatomic) TSCHChartModel *model; // ivar: _model
@property (readonly, nonatomic) NSUInteger multiDataSetIndex;
@property (nonatomic) BOOL needsCalcEngineDependentImport; // ivar: _needsCalcEngineDependentImport
@property (nonatomic) BOOL needsCalcEngineDependentUpgrade; // ivar: _needsCalcEngineDependentUpgrade
@property (copy, nonatomic) TSDInfoGeometry *nonInfoGeometry; // ivar: _nonInfoGeometry
@property (readonly, nonatomic) TSCHChartNonStyle *nonStyle;
@property (retain, nonatomic) TSCHChartNonStyle *nonStyle; // ivar: _nonStyle
@property (readonly, nonatomic) NSUInteger numberOfThemeSeriesStyles;
@property (retain, nonatomic) TSPLazyReference *ownedPreset; // ivar: _ownedPreset
@property (readonly, nonatomic) NSArray *paragraphStyles;
@property (retain, nonatomic) TSKCustomFormatList *pasteboardCustomFormatList; // ivar: _pasteboardCustomFormatList
@property (readonly, nonatomic) TSCHChartStylePreset *preset;
@property (readonly, nonatomic) TSCHChartStylePreset *presetFromThemeIfNecessary;
@property (nonatomic) CGPoint previewOrigin; // ivar: _previewOrigin
@property (readonly, nonatomic) NSArray *privateSeriesStyles;
@property (readonly, nonatomic) TSCHChartLayoutCache *sceneAreaLayoutItemCache;
@property (readonly, nonatomic) NSArray *seriesNonStyles;
@property (readonly, nonatomic) TSCHChartStyle *style;
@property (retain, nonatomic) TSCHChartStyle *style; // ivar: _style
@property (retain, nonatomic) NSMutableDictionary *styleViewProxyMap; // ivar: _styleViewProxyMap
@property (retain, nonatomic) NSArray *styleViewProxyParagraphStyleArray; // ivar: _styleViewProxyParagraphStyleArray
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAndHasRoundedCorners;
@property (readonly, nonatomic) BOOL supportsRoundedCorners;
@property (retain, nonatomic) TSCHReferenceLineStyle *themePresetRefLineStyle; // ivar: _themePresetRefLineStyle
@property (readonly, nonatomic) NSArray *themeSeriesStyles;
@property (readonly, nonatomic) NSArray *valueAxisNonStyles;
@property (readonly, nonatomic) NSArray *valueAxisStyles;
@property (retain, nonatomic) NSNumber *valueMax; // ivar: _valueMax
@property (retain, nonatomic) NSNumber *valueMin; // ivar: _valueMin
@property (copy, nonatomic) NSString *valuePrefix; // ivar: _valuePrefix
@property (copy, nonatomic) NSString *valueSuffix; // ivar: _valueSuffix
@property (nonatomic) BOOL valueUseSeparator; // ivar: _valueUseSeparator
@property (readonly, nonatomic) BOOL wantsDeferredUpgradeOrImport;


+(BOOL)updateInitialLabelExplosionIfNeededForChartType:(id)arg0 seriesNonStyles:(*id)arg1 stylePreset:(id)arg2 rowCount:(NSUInteger)arg3 columnCount:(NSUInteger)arg4 ;
+(CGFloat)beginValueForStackedBarSeries:(id)arg0 groupIndex:(NSUInteger)arg1 unitSpaceIntercept:(CGFloat)arg2 relativelyPositive:(BOOL)arg3 valueAxis:(id)arg4 ;
+(Class)classForAxisStyle;
+(Class)classForChartStyle;
+(Class)classForLegendStyle;
+(Class)classForSeriesStyle;
+(id)categoryAxisStyleIdentifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)chartStyleIdentifierForRoleIndex:(NSUInteger)arg0 ;
+(id)genericParagraphStyleIndexProperties;
+(id)genericParagraphStyleIndexPropertiesInUse;
+(id)legendStyleIdentifierForRoleIndex:(NSUInteger)arg0 ;
+(id)p_currentThreadSceneAreaLayoutCache;
+(id)p_stylesheetFromOrderedArrayOfSources:(id)arg0 ;
+(id)paragraphStyleIdentifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)paragraphStyleIndexProperties;
+(id)paragraphStyleIndexPropertiesInUse;
+(id)paragraphStylePropertiesChartsUse;
+(id)propertiesThatInvalidateModel;
+(id)referenceLineStyleIdentifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg0 conversionBlock:(id)arg1 ;
+(id)seriesStyleIdentifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)specificNumberFormatTypeProperties;
+(id)specificPropertiesThatCanContainCustomDateFormats;
+(id)specificPropertiesThatCanContainCustomFormats;
+(id)specificPropertiesThatCanContainCustomNumberFormats;
+(id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1 forStyleOwner:(id)arg2 ;
+(id)valueAxisStyleIdentifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(int)adjustNumberFormatType:(int)arg0 forChartModel:(id)arg1 gridValueType:(int)arg2 hasCustomFormat:(BOOL)arg3 ;
+(struct CGSize )minimumChartBodySizeForTransformingGeometryForChart:(id)arg0 ;
+(void)setCurrentThreadSceneAreaLayoutCache:(id)arg0 ;
-(BOOL)appearancePreservedForCurrentPreset;
-(BOOL)gridEqualToDefaultGrid;
-(BOOL)hasFloatValueForProperty:(int)arg0 value:(*float)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg0 value:(*int)arg1 ;
-(BOOL)hasObjectValueForProperty:(int)arg0 value:(*id)arg1 ;
-(BOOL)hasTwoYValueAxes;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(BOOL)isSingleCircleSpecialCaseOutSeries:(*id)arg0 ;
-(BOOL)p_containsCalloutLinesWithModelSync:(BOOL)arg0 ;
-(BOOL)p_refLineNonStyleMapIsValid;
-(BOOL)p_supportsRoundedCornersWithModelSync:(BOOL)arg0 ;
-(BOOL)referenceLineStyleIsPrivate:(id)arg0 ;
-(BOOL)seriesStyleIsPrivate:(id)arg0 ;
-(BOOL)shouldOwnPreset:(id)arg0 ;
-(CGFloat)p_dataSetNameAccomodationWithOptionalLayout:(id)arg0 ;
-(CGFloat)p_titleAccommodationWithLegendSize:(struct CGSize )arg0 optionalLayout:(id)arg1 ;
-(CGFloat)sageDepthFactorForExport;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)addParagraphStyle:(id)arg0 ;
-(NSUInteger)categoryAxisStyleCount;
-(NSUInteger)defaultDataColumnCountForChartType:(id)arg0 forDocumentLocale:(id)arg1 ;
-(NSUInteger)defaultDataRowCountForChartType:(id)arg0 forDocumentLocale:(id)arg1 ;
-(NSUInteger)indexOfParagraphStyleAddingIfNecessary:(id)arg0 ;
-(NSUInteger)nonStyleIndexForStyleOwnerRef:(id)arg0 ;
-(NSUInteger)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
-(NSUInteger)p_refLineIndexWithUUID:(id)arg0 nonStyleItems:(id)arg1 ;
-(NSUInteger)valueAxisStyleCount;
-(float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1 ;
-(float)maximumExplosionOfAllSeriesExcept:(id)arg0 ;
-(float)minFrameDimensionForRadius:(float)arg0 withMaxExplosion:(float)arg1 ;
-(float)radiusForFrame:(struct CGRect )arg0 withMaxExplosion:(float)arg1 ;
-(id)allCustomFormatKeys;
-(id)allStyleOwners;
-(id)allStylesAndNonStylesThatCanHaveCustomNumberFormats;
-(id)applyStyleSwapTuple:(id)arg0 ;
-(id)applyStyleSwapTuples:(id)arg0 ;
-(id)categoryAxisNonstyleAtIndex:(NSUInteger)arg0 ;
-(id)categoryAxisStyleAtIndex:(NSUInteger)arg0 ;
-(id)chartInfo;
-(id)childInfos;
-(id)clamped3DRotationPropertyObject;
-(id)commandToApplyFillSet:(id)arg0 ;
-(id)context;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 context:(id)arg1 ;
-(id)create3DSceneWithLayoutSettings:(struct ? *)arg0 styleProvidingSource:(id)arg1 ;
-(id)defaultProperties;
-(id)fontNameForInspectors;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg0 ;
-(id)getSeriesNonstyleForSeriesIndex:(NSUInteger)arg0 ;
-(id)getSeriesStyleForSeriesIndex:(NSUInteger)arg0 ;
-(id)infoGeometryForDesiredCircumscribingGeometry:(id)arg0 ;
-(id)infoGeometryForDesiredCircumscribingGeometry:(id)arg0 omitLabelPlacement:(BOOL)arg1 ;
-(id)infoGeometryForDesiredPureLayoutGeometry:(id)arg0 ;
-(id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg0 ;
-(id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint )arg0 ;
-(id)initForPresetImportWithChartType:(id)arg0 ;
-(id)initWithChartType:(id)arg0 legendShowing:(id)arg1 chartBodyFrame:(id)arg2 chartAreaFrame:(id)arg3 circumscribingFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12 refLineNonStylesMap:(id)arg13 refLineStylesMap:(id)arg14 forDocumentLocale:(id)arg15 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)modelForDataSetIndex:(NSUInteger)arg0 ;
-(id)newChartStylePresetByExampleWithPresetIndex:(NSUInteger)arg0 withSeriesCount:(NSUInteger)arg1 forTheme:(id)arg2 ;
-(id)newChartStylePresetByExampleWithPresetIndex:(NSUInteger)arg0 withSeriesCount:(NSUInteger)arg1 forTheme:(id)arg2 designMode:(BOOL)arg3 ;
-(id)nonStyleForAxis:(id)arg0 ;
-(id)objectValueForProperty:(int)arg0 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg0 ;
-(id)p_copyNonStyleArray:(id)arg0 inContext:(id)arg1 ;
-(id)p_copyStyleAndNonStyleArray:(id)arg0 withZone:(struct _NSZone *)arg1 context:(id)arg2 ;
-(id)p_copyStyleAndNonStyleMap:(id)arg0 withZone:(struct _NSZone *)arg1 context:(id)arg2 ;
-(id)p_copyStyleArray:(id)arg0 inContext:(id)arg1 withMapper:(id)arg2 ;
-(id)p_genericToDefaultPropertyMap;
-(id)p_getLocalizableDefaultDataDictionaryForChartType:(id)arg0 forDocumentLocale:(id)arg1 ;
-(id)p_infoGeometryForGeometry:(id)arg0 isCircumscribing:(BOOL)arg1 omitLabelPlacement:(BOOL)arg2 ;
-(id)p_init;
-(id)p_presetByAdoptingStylesheet:(id)arg0 forPreset:(id)arg1 withMapper:(id)arg2 paragraphStyles:(id)arg3 ;
-(id)p_swapTuplesForApplyingPreset:(id)arg0 preservingAppearance:(BOOL)arg1 ;
-(id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg0 ;
-(id)p_swapTuplesForMutations:(id)arg0 ;
-(id)p_uuidForRefLineOnAxis:(id)arg0 havingNonStyle:(id)arg1 ;
-(id)paragraphStyleAtIndex:(NSUInteger)arg0 ;
-(id)paragraphStyleForSelectionPath:(id)arg0 ;
-(id)referenceLineNonStyleForAxisID:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)referenceLineNonStyleForAxisID:(id)arg0 uuid:(id)arg1 outIndex:(*NSUInteger)arg2 ;
-(id)referenceLineNonStyleItemsForAxisID:(id)arg0 ;
-(id)referenceLineStyleForAxisID:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)referenceLineStyleForAxisID:(id)arg0 atIndex:(NSUInteger)arg1 privateStyleOnly:(BOOL)arg2 ;
-(id)scaleAllStrokesInStyle:(id)arg0 byRatio:(CGFloat)arg1 ;
-(id)seriesNonStyleForSeries:(id)arg0 ;
-(id)seriesNonstyleForSeriesIndex:(NSUInteger)arg0 ;
-(id)seriesStyleForSeries:(id)arg0 ;
-(id)seriesStyleForSeriesIndex:(NSUInteger)arg0 ;
-(id)stringForSelectionPath:(id)arg0 ;
-(id)styleForAxis:(id)arg0 ;
-(id)styleOwnerForPath:(id)arg0 ;
-(id)styleOwnerForRef:(id)arg0 ;
-(id)styleOwnerForSelectionPath:(id)arg0 ;
-(id)styleOwnerFromSwapType:(int)arg0 andIndex:(NSUInteger)arg1 ;
-(id)styleOwnerPathForRef:(id)arg0 ;
-(id)styleOwnerPathForSemanticTag:(id)arg0 ;
-(id)styleOwnerPathForStyleOwner:(id)arg0 ;
-(id)styleOwnerRefForSemanticTag:(id)arg0 ;
-(id)styleOwnerRefForStyleOwner:(id)arg0 ;
-(id)styleOwnerRefForStyleOwnerPath:(id)arg0 ;
-(id)styleSwapCommandToApplyFillSetSeriesPropertyMaps:(id)arg0 ;
-(id)swapTuplesForApplyingPreset:(id)arg0 withBehavior:(NSUInteger)arg1 ;
-(id)swapTuplesForMutations:(id)arg0 forImport:(BOOL)arg1 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1 ;
-(id)themeChartPresetForUUID:(id)arg0 ;
-(id)themeChartPresets;
-(id)tuplesToApplyState:(id)arg0 ;
-(id)valueAxisNonstyleAtIndex:(NSUInteger)arg0 ;
-(id)valueAxisStyleAtIndex:(NSUInteger)arg0 ;
-(id)valueForProperty:(int)arg0 ;
-(id)viewOverrideMapForStyleOwner:(id)arg0 ;
-(int)defaultPropertyForGeneric:(int)arg0 ;
-(int)intValueForProperty:(int)arg0 defaultValue:(int)arg1 ;
-(int)paragraphStylePropertyForSelectionPath:(id)arg0 ;
-(int)specificPropertyForGeneric:(int)arg0 ;
-(int)stringPropertyForSelectionPath:(id)arg0 ;
-(struct CGRect )calculateDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg0 ;
-(struct CGRect )chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg0 isSpiceDoc:(BOOL)arg1 ;
-(struct CGRect )resizedLegendFrame:(struct CGRect )arg0 oldChartSize:(struct CGSize )arg1 newChartSize:(struct CGSize )arg2 ;
-(unsigned int)elementKind;
-(void)addReferenceLineForAxisID:(id)arg0 nonStyle:(id)arg1 style:(id)arg2 uuid:(id)arg3 ;
-(void)addViewStyleProxyForMutationTuples:(id)arg0 layouts:(id)arg1 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)applyChartStyleState:(id)arg0 ;
-(void)chartDidInvalidateWithProperties:(id)arg0 ;
-(void)chartMoveToPosition:(struct CGPoint )arg0 size:(struct CGSize )arg1 ;
-(void)chartTypeDidChangeWithDetails:(id)arg0 ;
-(void)clearViewStyleProxyForLayouts:(id)arg0 ;
-(void)debugLayoutCache;
-(void)debugVerifyPreset;
-(void)deleteReferenceLineForAxisID:(id)arg0 uuid:(id)arg1 ;
-(void)hideAllTitles;
-(void)loadFromPreUFFArchive:(*void)arg0 unarchiver:(id)arg1 persistentChartInfo:(id)arg2 ;
-(void)loadFromUnityArchive:(*void)arg0 unarchiver:(id)arg1 persistentChartInfo:(id)arg2 ;
-(void)modelDidInvalidateWithDetails:(id)arg0 ;
-(void)p_applySeriesTuplesWithThemeSeriesStyles:(id)arg0 privateSeriesStyles:(id)arg1 propertyDictionary:(id)arg2 ;
-(void)p_designUpdateCategoryMajorGridlineStrokeWithCategoryAxisStyles:(id)arg0 valueAxisStyles:(id)arg1 ;
-(void)p_designUpdateRadarPresetWithPresetIndex:(NSUInteger)arg0 seriesStyle:(id)arg1 ;
-(void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg0 ;
-(void)p_invalidateCachesInLayouts:(id)arg0 ;
-(void)p_saveToUnityArchive:(*void)arg0 persistentChartInfo:(id)arg1 archiver:(id)arg2 ;
-(void)p_upgradeLineChartsFor10;
-(void)performDeferredUpgradeAndImportOperations;
-(void)preserveAppearanceForCurrentPresetAdoptingStylesheet:(BOOL)arg0 ;
-(void)reassignPasteboardCustomFormatKeys;
-(void)saveToUnityArchive:(*void)arg0 persistentChartInfo:(id)arg1 archiver:(id)arg2 ;
-(void)setCategoryAxisNonstyle:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setChartNonstyle:(id)arg0 ;
-(void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg0 ;
-(void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg0 ;
-(void)setReferenceLineNonStyleItem:(id)arg0 forAxisID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setReferenceLineStyle:(id)arg0 forAxisID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setSeriesNonstyle:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setValueAxisNonstyle:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setViewStyleProxyParagraphStyleArray:(id)arg0 layouts:(id)arg1 ;
-(void)updateAfterPaste;
-(void)updateTitlesForExportingModel:(id)arg0 ;
-(void)upgradeAxisLabelFormatWithValuePrefix:(id)arg0 valueSuffix:(id)arg1 valueUseSeparator:(BOOL)arg2 horizontalPrefix:(id)arg3 horizontalSuffix:(id)arg4 horizontalUseSeparator:(BOOL)arg5 ;
-(void)upgradeChartRoundedCornerRadiusWithValue:(CGFloat)arg0 ;
-(void)upgradeWithHorizontalMin:(id)arg0 horizontalMax:(id)arg1 valueMin:(id)arg2 valueMax:(id)arg3 ;
-(void)willModify;


@end


#endif