// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFILMSTRIPTILINGLAYOUT_H
#define PUFILMSTRIPTILINGLAYOUT_H

@class NSCache;


#import "PUTilingLayout.h"
#import "PUFilmstripDataSource.h"

@interface PUFilmstripTilingLayout : PUTilingLayout {
    CGRect _contentBounds;
    NSInteger _numberOfItems;
    CGSize _itemSize;
    NSCache *_layoutInfoCache;
}


@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) PUFilmstripDataSource *dataSource;


-(id)_layoutInfoForIndicatorInfo:(id)arg0 withIndex:(NSInteger)arg1 ;
-(id)_layoutInfoForTileWithIndex:(NSInteger)arg0 kind:(id)arg1 ;
-(id)initWithContentSize:(struct CGSize )arg0 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)layoutInfosForTilesInRect:(struct CGRect )arg0 ;
-(id)preferredScrollInfo;
-(struct CGRect )contentBounds;
-(void)prepareLayout;


@end


#endif