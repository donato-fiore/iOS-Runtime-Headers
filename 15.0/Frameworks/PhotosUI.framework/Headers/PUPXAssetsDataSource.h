// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXASSETSDATASOURCE_H
#define PUPXASSETSDATASOURCE_H

@class PXAssetsDataSource;


#import "PUAssetsDataSource.h"

@interface PUPXAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXAssetsDataSource *underlyingDataSource; // ivar: _underlyingDataSource


-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)convertIndexPath:(id)arg0 fromAssetsDataSource:(id)arg1 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)init;
-(id)initWithUnderlyingDataSource:(id)arg0 ;


@end


#endif