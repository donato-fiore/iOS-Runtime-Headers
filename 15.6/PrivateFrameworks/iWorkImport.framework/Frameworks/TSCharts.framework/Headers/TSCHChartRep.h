// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTREP_H
#define TSCHCHARTREP_H

@class TSWPTextHostRep, NSString, CALayer, TSCHLegendMoveKnob, NSIndexSet, NSArray, NSMutableArray, TSCHSearchSelection;
@protocol TSCHSupportsRendering, CALayerDelegate;


#import "TSCHSelectionPath.h"
#import "TSCHChartDrawableInfo.h"
#import "TSCHChartLayout.h"
#import "TSCHChartDrawableLayout.h"
#import "TSCHLegendRenderer.h"

@interface TSCHChartRep : TSWPTextHostRep <TSCHSupportsRendering, CALayerDelegate>



@property (readonly, nonatomic) TSCHSelectionPath *activeTextEditingPath; // ivar: _activeTextEditingPath
@property (readonly, nonatomic) NSString *animationFilter;
@property (nonatomic) BOOL buildingChunks; // ivar: _buildingChunks
@property (nonatomic) BOOL buildingFinalBackground; // ivar: _buildingFinalBackground
@property (nonatomic) BOOL buildingFinalElements; // ivar: _buildingFinalElements
@property (readonly, nonatomic) NSUInteger chartDeliveryStyle;
@property (readonly, nonatomic) TSCHChartDrawableInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartLayout *chartLayout;
@property (readonly, nonatomic) BOOL chartRepGoingAway; // ivar: _chartRepGoingAway
@property (nonatomic) int chunkPhase; // ivar: _chunkPhase
@property (readonly, nonatomic) CGFloat contentsScale;
@property (nonatomic) NSInteger currentChunk; // ivar: _currentChunk
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CALayer *downloadIndicatorLayer; // ivar: _downloadIndicatorLayer
@property (readonly, nonatomic) TSCHChartDrawableLayout *drawableLayout;
@property (readonly, nonatomic) BOOL drawingSearchReference; // ivar: _drawingSearchReference
@property (retain, nonatomic) TSCHLegendMoveKnob *dynamicLegendKnob; // ivar: _dynamicLegendKnob
@property (nonatomic) BOOL editorIsEditingInfo; // ivar: _editorIsEditingInfo
@property (readonly, nonatomic) BOOL forceRenderBlankBackground;
@property (nonatomic) BOOL forceSeparateLegendLayer; // ivar: _forceSeparateLegendLayer
@property (readonly, nonatomic) BOOL frameInUnscaledCanvasNeedsPaddingForShadows;
@property (readonly, nonatomic) CGRect geometryFrame;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inDynamicStandinLayoutOperation; // ivar: _inDynamicStandinLayoutOperation
@property (nonatomic) NSUInteger inDynamicStandinOperation; // ivar: _inDynamicStandinOperation
@property (nonatomic) BOOL inZoom; // ivar: _inZoom
@property (readonly, nonatomic) BOOL is2DRepFor3DChartRep; // ivar: _is2DRepFor3DChartRep
@property (readonly, nonatomic) BOOL isCorrectRepClassForInfo;
@property (nonatomic) BOOL isKPFExportForMultiData; // ivar: _isKPFExportForMultiData
@property (nonatomic, readonly) NSInteger knobsDisplayMode;
@property (nonatomic) CGPoint lastSubselectionLayerRelativeReferencePosition; // ivar: _lastSubselectionLayerRelativeReferencePosition
@property (readonly, nonatomic) TSCHLegendRenderer *legendRenderer;
@property (readonly, nonatomic) CGRect outerShadowFrame;
@property (readonly, nonatomic) BOOL renderElements;
@property (readonly, nonatomic) BOOL renderElementsShadowOnly;
@property (readonly, nonatomic) BOOL renderElementsWithoutShadows;
@property (readonly, nonatomic) BOOL renderGrid;
@property (readonly, nonatomic) BOOL renderLabels;
@property (nonatomic) int renderPassChunkPhase; // ivar: _renderPassChunkPhase
@property (readonly, nonatomic) NSIndexSet *renderSeriesIndexSet;
@property (retain, nonatomic) NSArray *renderers; // ivar: _renderers
@property (retain, nonatomic) NSMutableArray *renderersWaitingForDownload; // ivar: _renderersWaitingForDownload
@property (readonly, nonatomic) TSCHSearchSelection *selection; // ivar: _selection
@property (readonly) Class superclass;
@property (nonatomic) int textureByGlyphStyle; // ivar: _textureByGlyphStyle
@property (nonatomic) NSUInteger textureDeliveryStyle; // ivar: _textureDeliveryStyle
@property (nonatomic) NSUInteger textureStage; // ivar: _textureStage
@property (readonly, nonatomic) CGFloat viewScale;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(BOOL)buildShouldUseRenderer:(id)arg0 ;
-(BOOL)canDrawInParallel;
-(BOOL)isDrawingIntoPDF;
-(BOOL)messageIsVisible;
-(BOOL)p_chartShouldDisplayMessage;
-(BOOL)p_hasBackgroundFill;
-(BOOL)p_hasBackgroundLayerForPieChart;
-(BOOL)p_legendHitByLayoutPoint:(struct CGPoint )arg0 ;
-(BOOL)planeIsVisible:(int)arg0 ;
-(BOOL)renderReferenceLines;
-(BOOL)renderTrendLinesForSeriesIndex:(NSUInteger)arg0 ;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)shadowsEnabled;
-(BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
-(BOOL)shouldUseRenderer:(id)arg0 ;
-(CGFloat)captionBottomDistanceToRect:(struct CGRect )arg0 ;
-(id)dataForUpdateUploadIndicator;
-(id)geometry;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 is2DRepFor3DChartRep:(BOOL)arg2 ;
-(id)p_textImageForPath:(struct CGPath *)arg0 renderer:(id)arg1 selection:(id)arg2 shouldPulsate:(BOOL)arg3 ;
-(id)p_textureForDescription:(id)arg0 ;
-(id)referenceLineLabelsSearchSelectionsToRender;
-(id)referenceLinesToRender;
-(id)renderGroupIndexSetForSeriesIndex:(NSUInteger)arg0 ;
-(id)renderGroupIndexSetForSeriesIndex:(NSUInteger)arg0 finalElements:(BOOL)arg1 ;
-(id)renderGroupIndexSetForSeriesIndex:(NSUInteger)arg0 finalElements:(BOOL)arg1 currentChunk:(NSInteger)arg2 ;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg0 ;
-(id)renderSeriesIndexSetForFinalElements:(BOOL)arg0 currentChunk:(NSInteger)arg1 ;
-(id)textureForDescription:(id)arg0 ;
-(int)p_backgroundLikePlaneStateForEffectiveStage:(NSInteger)arg0 ;
-(int)planeState:(int)arg0 finalElements:(BOOL)arg1 ;
-(int)planeState:(int)arg0 finalElements:(BOOL)arg1 chunkStage:(NSInteger)arg2 ;
-(struct CGPoint )scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
-(struct CGRect )convertUnscaledToBoundsRect:(struct CGRect )arg0 ;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )targetRectForEditMenu;
-(void)clearRenderers;
-(void)dealloc;
-(void)didEndZooming;
-(void)dismissMessageOverlayNowWithAnimation:(BOOL)arg0 ;
-(void)displayMessage:(id)arg0 zPosition:(CGFloat)arg1 style:(int)arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)editor:(id)arg0 isDeselectingInfos:(id)arg1 ;
-(void)editor:(id)arg0 isSelectingInfos:(id)arg1 ;
-(void)p_addChildTexturesToTextureSet:(id)arg0 forDescription:(id)arg1 stage:(NSInteger)arg2 finalTexture:(BOOL)arg3 ;
-(void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg0 ;
-(void)p_deleteMessageView;
-(void)p_forceDismissTransientMessage;
-(void)p_invalidateMessageOverlay;
-(void)p_listenForDataChangesIfAppropriateForFill:(id)arg0 forProperty:(int)arg1 ;
-(void)p_messageAnimationDidStop:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)p_positionMessageView;
-(void)p_removeOrShowAndPositionMessageOverlay;
-(void)p_topBarsShowedUp:(id)arg0 ;
-(void)renderChunkInBounds:(struct CGRect )arg0 textureSet:(id)arg1 description:(id)arg2 ;
-(void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)updateFromLayout;
-(void)updateMessageOverlayNow;


@end


#endif