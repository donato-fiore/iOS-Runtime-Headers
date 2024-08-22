// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDTILINGLAYER_H
#define TSDTILINGLAYER_H

@class CALayer, NSMutableArray;
@protocol TSDTileGeometryProviding;



@interface TSDTilingLayer : CALayer {
    CGSize mTileSize;
    ? mFlags;
    CGRect mLastVisibleBounds;
    CGSize mLastBoundsSize;
    CALayer *mProviderContentLayer;
    NSMutableArray *mDirtyTiles;
    BOOL mHasEverHadTileLayout;
}


@property (nonatomic) BOOL drawsInBackground;
@property (nonatomic) BOOL enableContext; // ivar: _enableContext
@property (nonatomic) BOOL forceTiling;
@property (retain, nonatomic) NSObject<TSDTileGeometryProviding> *geometryProvider; // ivar: _geometryProvider
@property (nonatomic) int tilingMode; // ivar: mTilingMode


+(struct CGImage *)p_newCheckerboardImage;
+(struct CGImage *)p_newGeneratedCheckerboardImage;
+(struct CGSize )defaultTileSize;
-(BOOL)p_updateTileSizeWithLayerSize:(struct CGSize )arg0 ;
-(BOOL)tilingSafeHasContents;
-(NSUInteger)p_tilesHigh;
-(NSUInteger)p_tilesWide;
-(id)init;
-(id)p_nonTileAndContentLayers;
-(id)p_tileAndContentLayers;
-(id)p_tileLayers;
-(void)dealloc;
-(void)display;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)i_drawRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 inBackground:(BOOL)arg2 ;
-(void)i_drawTile:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)i_drawTileInBackground:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)i_setNeedsTileDisplayForTile:(id)arg0 ;
-(void)layoutSublayers;
-(void)p_updateTileIndexes:(id)arg0 visibleBounds:(struct CGRect )arg1 ;
-(void)setContents:(id)arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setNeedsDisplayForDirtyTiles:(id)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)setNeedsLayoutForTilingLayers;
-(void)setTileContents:(id)arg0 ;
-(void)tilingSafeSetSublayers:(id)arg0 ;


@end


#endif