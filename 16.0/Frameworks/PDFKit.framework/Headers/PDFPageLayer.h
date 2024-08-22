// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPAGELAYER_H
#define PDFPAGELAYER_H

@class CALayer, NSString;
@protocol PDFPageLayerInterface;


#import "PDFPageLayerPrivate.h"

@interface PDFPageLayer : CALayer <PDFPageLayerInterface>

 {
    PDFPageLayerPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasTileWithFrameInLayer:(struct CGRect )arg0 ;
-(BOOL)_isTile:(id)arg0 occludedByTiles:(id)arg1 ;
-(BOOL)enablesTileUpdates;
-(BOOL)isVisible;
-(NSInteger)displayBox;
-(NSUInteger)visibilityDelegateIndex;
-(id)_pageLayerEffects;
-(id)_subtractRectB:(struct CGRect )arg0 fromRectA:(struct CGRect )arg1 ;
-(id)geometryInterface;
-(id)initWithPage:(id)arg0 geometryInterface:(id)arg1 andRenderingProperties:(id)arg2 ;
-(id)page;
-(id)pageLayerEffectForID:(id)arg0 ;
-(id)renderingProperties;
-(struct CGAffineTransform )layerEffectTransform;
-(struct CGRect )_layerTileToRootViewBounds:(id)arg0 ;
-(struct CGRect )_pageLayerVisibleRect;
-(void)_forceTileUpdate;
-(void)_hideTileLayer:(BOOL)arg0 ;
-(void)_pageChangedPageRef:(id)arg0 ;
-(void)_pageDidRotate:(id)arg0 ;
-(void)_printRectsArray:(id)arg0 ;
-(void)_releasePageLayerEffects;
-(void)_releaseTiles;
-(void)_renderingPropertyUpdate:(id)arg0 ;
-(void)_setEnablePageShadows:(BOOL)arg0 ;
-(void)_tileUpdateComplete;
-(void)_updateLayerEffect:(id)arg0 withPageTransform:(struct CGAffineTransform )arg1 ;
-(void)_updateTiles;
-(void)addPageLayerEffect:(id)arg0 ;
-(void)applyTileLayoutScale:(CGFloat)arg0 ;
-(void)clearTiles;
-(void)dealloc;
-(void)forceTileUpdate;
-(void)layoutSublayers;
-(void)removePageLayerEffectForID:(id)arg0 ;
-(void)restoreOriginalTileLayout;
-(void)saveOriginalTileLayout;
-(void)scalePageLayerEffects:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEnableTileUpdates:(BOOL)arg0 ;
-(void)setNeedsTilesUpdate;
-(void)setVisibilityDelegateIndex:(NSUInteger)arg0 ;
-(void)tileDrawingComplete:(id)arg0 ;
-(void)updatePageLayerEffectForID:(id)arg0 ;
-(void)updatePageLayerEffects;
-(void)willEndStartLiveResize;
-(void)willStartLiveResize;


@end


#endif