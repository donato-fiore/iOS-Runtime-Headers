// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFSIMPLEPAGELAYER_H
#define PDFSIMPLEPAGELAYER_H

@class CALayer, NSMutableDictionary, NSString;
@protocol CALayerDelegate, PDFPageLayerInterface, PDFPageLayerGeometryInterface;


#import "PDFPage.h"
#import "PDFRenderingProperties.h"

@interface PDFSimplePageLayer : CALayer <CALayerDelegate, PDFPageLayerInterface>

 {
    PDFPage *_page;
    NSObject<PDFPageLayerGeometryInterface> *_geometryInterface;
    PDFRenderingProperties *_renderingProperties;
    NSMutableDictionary *_pageLayerEffects;
    CALayer *_effectsLayer;
    NSUInteger _visibilityDelegateIndex;
    CGFloat _contentsScale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enablesTileUpdates;
-(BOOL)isVisible;
-(NSInteger)displayBox;
-(NSUInteger)visibilityDelegateIndex;
-(id)_pageLayerEffects;
-(id)geometryInterface;
-(id)initWithPage:(id)arg0 geometryInterface:(id)arg1 andRenderingProperties:(id)arg2 ;
-(id)page;
-(id)pageLayerEffectForID:(id)arg0 ;
-(id)renderingProperties;
-(struct CGAffineTransform )layerEffectTransform;
-(void)_pageChangedPageRef:(id)arg0 ;
-(void)_pageDidRotate:(id)arg0 ;
-(void)_updateGeometry;
-(void)_updateLayerEffect:(id)arg0 withPageTransform:(struct CGAffineTransform )arg1 ;
-(void)addPageLayerEffect:(id)arg0 ;
-(void)applyTileLayoutScale:(CGFloat)arg0 ;
-(void)clearTiles;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)forceTileUpdate;
-(void)removePageLayerEffectForID:(id)arg0 ;
-(void)restoreOriginalTileLayout;
-(void)saveOriginalTileLayout;
-(void)scalePageLayerEffects:(CGFloat)arg0 ;
-(void)setEnableTileUpdates:(BOOL)arg0 ;
-(void)setNeedsTilesUpdate;
-(void)setVisibilityDelegateIndex:(NSUInteger)arg0 ;
-(void)updatePageLayerEffectForID:(id)arg0 ;
-(void)updatePageLayerEffects;
-(void)willEndStartLiveResize;
-(void)willStartLiveResize;


@end


#endif