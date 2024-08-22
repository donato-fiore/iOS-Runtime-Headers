// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYGRIDLAYOUTGENERATOR_H
#define PXCURATEDLIBRARYGRIDLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"

@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator {
    CGSize _itemSize;
    CGFloat _interItemSpacing;
    UIEdgeInsets _insets;
    BOOL _isPrepared;
    *_PXLayoutGeometry _geometries;
    NSUInteger _geometriesCount;
    CGSize _actualSize;
    CGFloat _lastFullRowBottomEdge;
    _PXCornerSpriteIndexes _cornerSpriteIndexes;
}


@property (readonly, nonatomic) CGFloat lastFullRowBottomEdge;


-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(struct _NSRange )geometriesRangeCoveringRect:(struct CGRect )arg0 ;
-(struct _PXCornerSpriteIndexes )cornerSpriteIndexes;
-(void)_prepareGeometriesBufferForCount:(NSUInteger)arg0 ;
-(void)_prepareIfNeeded;
-(void)dealloc;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif