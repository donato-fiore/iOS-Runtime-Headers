// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFILMSTRIPDATASOURCE_H
#define PUFILMSTRIPDATASOURCE_H

@class NSMutableDictionary, NSMapTable, AVAsset, NSArray;


#import "PUTilingDataSource.h"

@interface PUFilmstripDataSource : PUTilingDataSource {
    NSMutableDictionary *_assetByIndexPath;
    NSMapTable *_indexPathByAsset;
}


@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (copy, nonatomic) NSArray *indicatorInfos; // ivar: _indicatorInfos
@property (readonly, nonatomic) NSInteger numberOfIndexes; // ivar: _numberOfIndexes


-(CGFloat)_normalizedTimeForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)indexPathForAsset:(id)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 numberOfIndexes:(NSInteger)arg1 indicatorInfos:(id)arg2 ;


@end


#endif