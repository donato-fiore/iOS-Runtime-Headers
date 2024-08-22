// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTDRAWABLEINFO_H
#define TSCHCHARTDRAWABLEINFO_H

@class TSDDrawableInfo, TSPObject<TSCHMediatorProvider>, NSString, NSSet;
@protocol TSDReducibleImageContainer, TSKCustomFormatContainingInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient, TSDCompatibilityAwareMediaContainer;


#import "TSCHChunkManager.h"
#import "TSCHChartInfo.h"

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSDReducibleImageContainer, TSKCustomFormatContainingInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient, TSDCompatibilityAwareMediaContainer>

 {
    TSPObject<TSCHMediatorProvider> *_mediatorPersistentObject;
    TSCHChunkManager *_chunkManager;
}


@property (readonly, nonatomic) TSCHChartInfo *chart; // ivar: _chart
@property (readonly, nonatomic) TSCHChunkManager *chunkManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger multiDataSetIndex;
@property (readonly, nonatomic) NSUInteger numberOfMultiDataSets;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly) Class superclass;


+(BOOL)needsObjectUUID;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)aspectRatioLocked;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canSizeBeChangedIncrementally;
-(BOOL)hasBackgroundLayerForPieChart;
-(BOOL)hasReferenceLines;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(BOOL)isEquivalentForSerializationRoundTrip:(id)arg0 ;
-(BOOL)isSelectable;
-(BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(NSUInteger)arg0 ;
-(BOOL)requiresStagesBuildingInReverse;
-(BOOL)shouldAddMultiDataBuildWhenAddingToDocument;
-(BOOL)suppliesFinalTextures;
-(BOOL)supportsHyperlinks;
-(BOOL)supportsParentRotation;
-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mediaCompatibilityTypeForData:(id)arg0 associatedHint:(id)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 animationFilter:(id)arg1 ;
-(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
-(id)animationFilters;
-(id)applyStyleSwapTuple:(id)arg0 ;
-(id)applyStyleSwapTuples:(id)arg0 ;
-(id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(id)arg0 ;
-(id)childInfos;
-(id)copyWithContext:(id)arg0 ;
-(id)geometry;
-(id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg0 ;
-(id)initWithContext:(id)arg0 chart:(id)arg1 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 chartAreaFrame:(id)arg2 legendFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 chartAreaFrame:(id)arg2 stylePreset:(id)arg3 privateSeriesStyles:(id)arg4 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 chartBodyFrame:(id)arg2 stylePreset:(id)arg3 privateSeriesStyles:(id)arg4 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 circumscribingFrame:(id)arg2 stylePreset:(id)arg3 privateSeriesStyles:(id)arg4 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 legendShowing:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 legendShowing:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 chartNonStyle:(id)arg6 legendNonStyle:(id)arg7 valueAxisNonStyles:(id)arg8 categoryAxisNonStyles:(id)arg9 seriesNonStyles:(id)arg10 refLineNonStylesMap:(id)arg11 refLineStylesMap:(id)arg12 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(id)arg14 refLineStylesMap:(id)arg15 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 chartNonStyle:(id)arg6 legendNonStyle:(id)arg7 valueAxisNonStyles:(id)arg8 categoryAxisNonStyles:(id)arg9 seriesNonStyles:(id)arg10 refLineNonStylesMap:(id)arg11 refLineStylesMap:(id)arg12 ;
-(id)initWithContext:(id)arg0 chartType:(id)arg1 legendShowing:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 chartNonStyle:(id)arg6 legendNonStyle:(id)arg7 valueAxisNonStyles:(id)arg8 categoryAxisNonStyles:(id)arg9 seriesNonStyles:(id)arg10 refLineNonStylesMap:(id)arg11 refLineStylesMap:(id)arg12 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_copyFor3DAs2DWithContext:(id)arg0 chartFrame:(struct CGRect )arg1 legendFrame:(struct CGRect )arg2 ;
-(id)p_drawableGeometry;
-(id)styleOwnerFromSwapType:(int)arg0 andIndex:(NSUInteger)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(id)transformedGeometryWithTransform:(struct CGAffineTransform )arg0 inBounds:(struct CGRect )arg1 ;
-(id)typeName;
-(struct CGRect )visibleBoundsForPositioning;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(unsigned int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)finalizeDataOnDeepCopyBeforeSerializingForDragAndDrop;
-(void)hideAllTitles;
-(void)loadFromPreUFFArchiveWithUnarchiver:(id)arg0 ;
-(void)p_setDrawableGeometry:(id)arg0 clearObjectPlaceholderFlag:(BOOL)arg1 ;
-(void)reassignPasteboardCustomFormatKeys;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)setGeometry:(id)arg0 omitLegendResize:(BOOL)arg1 ;
-(void)setInsertionCenterPosition:(struct CGPoint )arg0 ;
-(void)setPersistentMediator:(id)arg0 ;
-(void)tsaMoveToPosition:(struct CGPoint )arg0 size:(struct CGSize )arg1 ;
-(void)upgradeFormatsForCustomFormatListU2_0;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willModify;


@end


#endif