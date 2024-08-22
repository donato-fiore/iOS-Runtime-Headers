// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXENGINEDRIVENASSETSTILINGLAYOUT_H
#define PXENGINEDRIVENASSETSTILINGLAYOUT_H

@protocol PXEngineDrivenAssetsTilingLayoutDelegate;


#import "PXAssetsTilingLayout.h"
#import "PXLayoutSnapshot.h"

@interface PXEngineDrivenAssetsTilingLayout : PXAssetsTilingLayout {
    ? _needsUpdateFlags;
    ? _delegateFlags;
}


@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (weak, nonatomic) NSObject<PXEngineDrivenAssetsTilingLayoutDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PXLayoutSnapshot *layoutSnapshot; // ivar: _layoutSnapshot


-(BOOL)_needsUpdate;
-(BOOL)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 layoutGeometryKind:(NSUInteger)arg2 indexPath:(struct PXSimpleIndexPath )arg3 ;
-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(CGFloat)_aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(CGFloat)_zPositionForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)dataSource;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithLayoutEngineSnapshot:(id)arg0 ;
-(struct CGRect )_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 forAspectRatio:(CGFloat)arg1 ;
-(struct CGRect )contentBounds;
-(struct CGSize )playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 contentTileSize:(struct CGSize )arg1 ;
-(void)_commonInit;
-(void)_updateIfNeeded;
-(void)adjustGeometry:(struct PXTileGeometry *)arg0 forAdditionalTileWithKind:(NSUInteger)arg1 indexPath:(struct PXSimpleIndexPath )arg2 ;
-(void)adjustGeometry:(struct PXTileGeometry *)arg0 forContentTileWithIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif