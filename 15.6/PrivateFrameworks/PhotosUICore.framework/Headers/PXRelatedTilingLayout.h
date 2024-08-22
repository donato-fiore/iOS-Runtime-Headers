// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXRELATEDTILINGLAYOUT_H
#define PXRELATEDTILINGLAYOUT_H

@protocol PXRelatedTilingLayoutDelegate;


#import "PXTilingLayout.h"
#import "PXRelatedDataSource.h"
#import "PXRelatedSpec.h"

@interface PXRelatedTilingLayout : PXTilingLayout {
    NSInteger _dataSourceIdentifier;
    NSInteger _numberOfEntries;
    NSInteger _numberOfColumns;
    NSInteger _numberOfRows;
    UIEdgeInsets _margins;
    CGSize _itemSize;
    CGSize _interItemSpacing;
    CGRect _contentBounds;
    BOOL _isDataSourceTransient;
    ? _delegateRespondsTo;
}


@property (retain, nonatomic) PXRelatedDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<PXRelatedTilingLayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) PXSimpleIndexPath focusedIndexPath; // ivar: _focusedIndexPath
@property (nonatomic) PXSimpleIndexPath highlightedIndexPath; // ivar: _highlightedIndexPath
@property (nonatomic) NSInteger maximumNumberOfRows; // ivar: _maximumNumberOfRows
@property (retain, nonatomic) PXRelatedSpec *spec; // ivar: _spec


-(BOOL)_shouldShowActivityIndicator;
-(BOOL)_shouldShowEmptyPlaceholder;
-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(NSInteger)tileKindForTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)init;
-(struct CGRect )_rectForActivityIndicator;
-(struct CGRect )_rectForEmptyPlaceholder;
-(struct CGRect )_rectForEntryAtIndex:(NSInteger)arg0 ;
-(struct CGRect )contentBounds;
-(struct CGRect )rectOfInterestForEntryAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForEntryAtPoint:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )indexPathForTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(struct PXTileIdentifier )_tileIdentifierForTileKind:(NSInteger)arg0 entryIndex:(NSInteger)arg1 ;
-(struct PXTileIdentifier )tileIdentifierForTileKind:(NSInteger)arg0 entryIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)_enumerateEntryIndexesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif