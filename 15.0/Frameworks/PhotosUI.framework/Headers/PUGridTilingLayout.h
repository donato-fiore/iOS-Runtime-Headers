// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUGRIDTILINGLAYOUT_H
#define PUGRIDTILINGLAYOUT_H



#import "PUSectionedTilingLayout.h"

@interface PUGridTilingLayout : PUSectionedTilingLayout {
    NSInteger _numberOfColumns;
}


@property (nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize


-(NSInteger)_numberOfColumns;
-(id)init;
-(id)layoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)preferredScrollInfo;
-(struct CGRect )_frameForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )estimatedSectionSize;
-(struct CGSize )sizeForSection:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(void)addLayoutInfosForTilesInRect:(struct CGRect )arg0 section:(NSInteger)arg1 toSet:(id)arg2 ;
-(void)prepareLayout;
-(void)setVisibleRect:(struct CGRect )arg0 ;


@end


#endif