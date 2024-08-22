// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDTILINGLAYOUT_H
#define PXMEMORIESFEEDTILINGLAYOUT_H

@protocol PXMemoriesFeedTilingLayoutDelegate;


#import "PXTilingLayout.h"
#import "PXCollectionTileLayoutTemplate.h"
#import "PXMemoriesFeedDataSource.h"
#import "PXSectionedLayoutSnapshot.h"
#import "PXIndexPathSet.h"
#import "PXMemoriesSpec.h"

@interface PXMemoriesFeedTilingLayout : PXTilingLayout {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) PXCollectionTileLayoutTemplate *_tileLayoutTemplate; // ivar: __tileLayoutTemplate
@property (readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
@property (weak, nonatomic) NSObject<PXMemoriesFeedTilingLayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) PXSimpleIndexPath highlightedMemoryIndexPath; // ivar: _highlightedMemoryIndexPath
@property (readonly, nonatomic) PXSectionedLayoutSnapshot *layoutSnapshot; // ivar: _layoutSnapshot
@property (retain, nonatomic) PXIndexPathSet *selectedMemoryIndexPaths; // ivar: _selectedMemoryIndexPaths
@property (retain, nonatomic) PXMemoriesSpec *spec; // ivar: _spec


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(NSInteger)_itemKindForTileKind:(NSInteger)arg0 ;
-(NSInteger)dataSourceIdentifierForTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(NSInteger)tileKindForTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(NSUInteger)_zPositionForTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)_titleFontNameForMemoryAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier )arg0 boundingSize:(struct CGSize )arg1 ;
-(id)indexPathsForMemoriesInRect:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithSpec:(id)arg0 layoutSnapshot:(id)arg1 ;
-(struct CGRect )_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath )arg0 forAspectRatio:(CGFloat)arg1 ;
-(struct CGRect )contentBounds;
-(struct PXSimpleIndexPath )indexPathForMemoryAtPoint:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )indexPathForTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(struct PXTileIdentifier )tileIdentifierAtIndexPath:(struct PXSimpleIndexPath )arg0 withTileKind:(NSInteger)arg1 ;
-(void)_addTileWithKind:(NSInteger)arg0 entryIndex:(NSUInteger)arg1 memoryIndex:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)_enumerateTilesInLayoutItem:(id)arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)_invalidateSelectionTilesWithTag:(id)arg0 ;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif