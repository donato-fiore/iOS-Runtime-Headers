// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXBROWSERDATASOURCESELECTION_H
#define _PXBROWSERDATASOURCESELECTION_H

@class NSMutableArray, NSArray;
@protocol PXDisplayAssetDataSource;


#import "PXBrowserSelectionSnapshot.h"

@interface _PXBrowserDataSourceSelection : PXBrowserSelectionSnapshot {
    NSMutableArray *_assets;
}


@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSObject<PXDisplayAssetDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSArray *indexPaths; // ivar: _indexPaths


-(NSInteger)assetCount;
-(NSInteger)estimatedAssetCount;
-(NSInteger)estimatedModelObjectsCount;
-(NSInteger)indexOfAssetReference:(id)arg0 ;
-(NSInteger)mediaType;
-(id)assetReferenceAtIndex:(NSInteger)arg0 ;
-(id)displayAssetAtIndex:(NSInteger)arg0 ;
-(id)initWithIndexPaths:(id)arg0 dataSource:(id)arg1 ;
-(id)modelObjects;


@end


#endif