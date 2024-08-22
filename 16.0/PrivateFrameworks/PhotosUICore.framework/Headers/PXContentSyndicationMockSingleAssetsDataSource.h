// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONMOCKSINGLEASSETSDATASOURCE_H
#define PXCONTENTSYNDICATIONMOCKSINGLEASSETSDATASOURCE_H

@class PHFetchResult;


#import "PXContentSyndicationDataSource.h"

@interface PXContentSyndicationMockSingleAssetsDataSource : PXContentSyndicationDataSource {
    PHFetchResult *_fetchResult;
}




-(NSInteger)countForCollection:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionListForSection:(NSInteger)arg0 ;
-(id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)dataSourceUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;
-(id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)indexPathForCollection:(id)arg0 ;
-(id)initWithFetchResult:(id)arg0 ;
-(id)mostRecentlyAddedDate;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif