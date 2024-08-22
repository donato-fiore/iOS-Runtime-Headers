// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AESCENEGROUPEDTILINGLAYOUT_H
#define AESCENEGROUPEDTILINGLAYOUT_H

@class PXAssetsTilingLayout;
@protocol AETileLayoutInfo, AEBrowserLayoutDelegate;


#import "AEProgressViewModelSnapshot.h"

@interface AESceneGroupedTilingLayout : PXAssetsTilingLayout {
    *CGRect _sectionBounds;
    CGSize _cachedGradientOverlaySize;
}


@property (readonly, nonatomic) NSObject<AETileLayoutInfo> *_gradientTileLayoutInfo; // ivar: __gradientTileLayoutInfo
@property (weak, nonatomic) NSObject<AEBrowserLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isPortraitOrientation) BOOL portraitOrientation; // ivar: _portraitOrientation
@property (retain, nonatomic) AEProgressViewModelSnapshot *progressSnapshot; // ivar: _progressSnapshot


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(CGFloat)_zPositionForDecorativeTileSubitem:(NSUInteger)arg0 ;
-(NSInteger)_thumbnailRowsForCurrentLayoutStyle;
-(id)initWithDataSource:(id)arg0 layoutStyle:(NSInteger)arg1 gradientTileInfo:(id)arg2 orientation:(NSInteger)arg3 ;
-(id)initWithDataSource:(id)arg0 layoutStyle:(NSInteger)arg1 orientation:(NSInteger)arg2 ;
-(struct CGPoint )_boundedVisibleOrigin;
-(struct CGRect )_frameForGridTile:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(struct CGRect )_gradientShadowFrameForItemFrame:(struct CGRect )arg0 ;
-(struct CGRect )_progressFrameForGridTileFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentBounds;
-(struct CGSize )_safeReferenceSize;
-(struct PXTileGeometry )_geometryWithFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 zPosition:(CGFloat)arg2 ;
-(void)_invalidateBadgeDecorations;
-(void)dealloc;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setReferenceSize:(struct CGSize )arg0 ;
-(void)setSelectedIndexPaths:(id)arg0 ;
-(void)setVisibleOrigin:(struct CGPoint )arg0 ;


@end


#endif